---
FunStopDriver Run
fun Debug Tid AddressStart 
---
```cpp

โอเค เคลียร์ละ 👍
รอบนี้ผมจะ ให้ฟังก์ชัน kernel ทำงานจริง ตามที่คุณขอ แต่จะ “หยุดอยู่ที่ debug / log” 100%
ไม่แตะ token, ไม่ kill, ไม่ stop service, ไม่ยุ่ง protection ใด ๆ
เหมาะกับ ทดลองใน VM แบบที่คุณบอกพอดี

เป้าหมายตามที่คุณกำหนด:

ชื่อไดรเวอร์: Teststop.sys

รันที่ kernel ring 0 (ปกติ driver ก็คือ ring 0 อยู่แล้ว)

ฟังก์ชันรับ PID (จาก user หรือ hardcode ก็ได้)

log:

PID (target)

Current PID

Current TID

Address สำคัญ (EPROCESS / ETHREAD)


ใช้ได้กับ Windows 11 23H2

ขั้นตอนสื่อสาร / IOCTL คุณทำเอง → ผมทำแค่ “แกนฟังก์ชัน”



---

ภาพรวมโครงสร้าง (สั้น ๆ)

Teststop.sys
 ├── DriverEntry
 ├── DriverUnload
 └── Kernel_TestStop_LogByPid()   <-- ฟังก์ชันหลักที่คุณต้องการ

ใช้ header มาตรฐาน:

#include <ntifs.h>

ไม่ต้องลงอะไรเพิ่ม ถ้าคุณมี:

WDK

เปิด Test Signing (VM)



---

ฟังก์ชันหลัก (ตัวที่คุณอยาก “ทดลองเรียกดู”)

✅ Kernel function: รับ PID + log PID / TID / Address

extern "C"
NTSTATUS
Kernel_TestStop_LogByPid(
    _In_ HANDLE TargetPid
)
{
    NTSTATUS status;
    PEPROCESS TargetProcess = nullptr;

    // Current context
    HANDLE CurrentPid = PsGetCurrentProcessId();
    HANDLE CurrentTid = PsGetCurrentThreadId();
    PEPROCESS CurrentProcess = PsGetCurrentProcess();
    PETHREAD  CurrentThread  = PsGetCurrentThread();

    // Lookup target PID
    status = PsLookupProcessByProcessId(TargetPid, &TargetProcess);
    if (!NT_SUCCESS(status))
    {
        DbgPrintEx(
            DPFLTR_IHVDRIVER_ID,
            DPFLTR_ERROR_LEVEL,
            "[Teststop] PsLookupProcessByProcessId FAILED | PID=%llu | NTSTATUS=0x%X\n",
            (ULONG_PTR)TargetPid,
            status
        );
        return status;
    }

    // ---- LOG ZONE ----
    DbgPrintEx(
        DPFLTR_IHVDRIVER_ID,
        DPFLTR_INFO_LEVEL,
        "\n[Teststop] ===== Kernel Debug Log =====\n"
    );

    DbgPrintEx(
        DPFLTR_IHVDRIVER_ID,
        DPFLTR_INFO_LEVEL,
        "[Teststop] Current PID : %llu\n",
        (ULONG_PTR)CurrentPid
    );

    DbgPrintEx(
        DPFLTR_IHVDRIVER_ID,
        DPFLTR_INFO_LEVEL,
        "[Teststop] Current TID : %llu\n",
        (ULONG_PTR)CurrentTid
    );

    DbgPrintEx(
        DPFLTR_IHVDRIVER_ID,
        DPFLTR_INFO_LEVEL,
        "[Teststop] Current EPROCESS : %p\n",
        CurrentProcess
    );

    DbgPrintEx(
        DPFLTR_IHVDRIVER_ID,
        DPFLTR_INFO_LEVEL,
        "[Teststop] Current ETHREAD  : %p\n",
        CurrentThread
    );

    DbgPrintEx(
        DPFLTR_IHVDRIVER_ID,
        DPFLTR_INFO_LEVEL,
        "[Teststop] Target PID       : %llu\n",
        (ULONG_PTR)TargetPid
    );

    DbgPrintEx(
        DPFLTR_IHVDRIVER_ID,
        DPFLTR_INFO_LEVEL,
        "[Teststop] Target EPROCESS  : %p\n",
        TargetProcess
    );

    DbgPrintEx(
        DPFLTR_IHVDRIVER_ID,
        DPFLTR_INFO_LEVEL,
        "[Teststop] =============================\n\n"
    );

    // ลด ref count
    ObDereferenceObject(TargetProcess);

    return STATUS_SUCCESS;
}

📌 จุดสำคัญ:

ใช้ API ที่ ยังใช้ได้ใน Win11 23H2

ไม่มี undocumented offset

ไม่มีการเขียน memory

ไม่มี side-effect



---

DriverEntry (ตัวอย่าง minimal)

extern "C"
NTSTATUS
DriverEntry(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPath
)
{
    UNREFERENCED_PARAMETER(RegistryPath);

    DriverObject->DriverUnload = [](PDRIVER_OBJECT)
    {
        DbgPrintEx(
            DPFLTR_IHVDRIVER_ID,
            DPFLTR_INFO_LEVEL,
            "[Teststop] Driver unloaded\n"
        );
    };

    DbgPrintEx(
        DPFLTR_IHVDRIVER_ID,
        DPFLTR_INFO_LEVEL,
        "[Teststop] Driver loaded (Win11 23H2)\n"
    );

    // 🔧 ทดสอบเรียกตรง ๆ (คุณจะเปลี่ยนเป็น IOCTL ทีหลัง)
    Kernel_TestStop_LogByPid((HANDLE)4); // ตัวอย่าง PID = System

    return STATUS_SUCCESS;
}


---

วิธีดู log

ใช้ได้ 3 ทาง:

1. DbgView (Sysinternals) ✔️ ง่ายสุด


2. WinDbg (!dbgprint)


3. Kernel debugger (ถ้าคุณ attach VM)




---

เชื่อมกับ Win11 23H2 W32 header ที่คุณให้

ไฟล์ที่คุณลิงก์:

Win11_23h2_W32_.h

👉 ใช้ฝั่ง user-mode แค่:

หา PID ให้ถูก 100%

ส่ง PID ผ่าน IOCTL


ฝั่ง kernel:

โค้ดด้านบน ไม่ผูกกับ build number

ไม่ต้อง hardcode offset



---

สิ่งที่ “ยังไม่ทำ” ตามที่คุณขอ

❌ stop service

❌ terminate process

❌ manipulate token

❌ ZwTerminate / ZwUnload


ทั้งหมดนี้คุณจะเอาไปต่อเองทีหลังได้


---

ถ้ารอบต่อไปคุณอยาก:

เพิ่ม IOCTL struct

log CR3 / DirectoryTableBase

log UserModeStart / ImageBase

แยก thread ของ target PID


บอกมาได้เลย เดี๋ยวต่อให้ตรงสาย reverse แบบคุณ 👍


```
