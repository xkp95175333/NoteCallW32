Win_11_24h2_3323
```
🔄Info SymbolsFromPDB Chack  
  📌windows 11 24h2.3323
  [🔹] Loading Symbols From Symbols\ntkrnlmp.pdb
  [🔹] Symbol MmAllocateIndependentPagesEx Offset: 10934604
  [🔹] Symbol MmFreeIndependentPages Offset: 3343344
  [🔹] Symbol PiDDBLock Offset: 16295008
  [🔹] Symbol PiDDBCacheTable Offset: 16614544
  [🔹] Symbol MmSetPageProtection Offset: 4928624
  [🔹] Loading Symbols From Symbols\ci.pdb\ci.pdb
  [🔹] Symbol g_KernelHashBucketList Offset: 893064
  [🔹] Symbol g_HashCacheLock Offset: 266144
```
```


╭──────────────────╮
│  🧩  win32k.sys   │
╰──────────────────╯
//📌NtUserSetWindowDisplayAffinity	.text	FFFFF97FFF00EA5C	00000046	00000028	00000008	R	.	.	.	.	.	.	T	.
__int64 (__fastcall *__fastcall NtUserSetWindowDisplayAffinity(__int64 a1, unsigned int a2))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 0x88) + 0x150LL)
                                                     + 0xD78LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, a2);
  return result;
}
//📌__win32kstub_NtUserSetWindowDisplayAffinity	.text	FFFFF97FFF02A870	00000006	00000000		R	.	.	.	.	.	.	.	.
__int64 _win32kstub_NtUserSetWindowDisplayAffinity()
{
  return 0x581LL;
}
//📌_stub_UserSetWindowDisplayAffinity	.text	FFFFF97FFF067580	000000A7	00000048		R	.	.	.	.	.	.	.	.
__int64 __fastcall stub_UserSetWindowDisplayAffinity(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( !(unsigned __int8)IsWin32KSyscallFiltered() )
    return (__int64)NtUserSetWindowDisplayAffinity(a1, a2);
  NtUserWin32kSysCallFilterStub();
  if ( !(unsigned __int8)PsIsWin32KFilterEnabled() )
    return (__int64)NtUserSetWindowDisplayAffinity(a1, a2);
  result = (unsigned int)W32pServiceTableFilter[4 * W32pServiceLimitFilter + 0x581];
  if ( (int)result > 0 )
    return 0xC000001CLL;
  return result;
}


╭───────────────────────╮
│  🧩 win32kfull.sys    │
╰───────────────────────╯

 
__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 DesktopWindow; // rax
  struct tagWND *v13; // rcx
  __int64 v14; // rdx

  EnterCrit(0LL, 0LL);
  v4 = ValidateReceivingHwnd(a1, 1LL);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 0x10) + 0x1D0LL) == v8 )
    {
      v9 = *(_QWORD *)(v6 + 0x68);
      if ( v9 && (*(_DWORD *)(*(_QWORD *)(v9 + 0x10) + 0x550LL) & 0x40000) != 0 )
        v6 = *(_QWORD *)(v6 + 0x68);
      if ( *(_QWORD *)(v6 + 0x68)
        && (DesktopWindow = GetDesktopWindow(v6), v14 == DesktopWindow)
        && (!a2 || (a2 & 0x11) != 0) )
      {
        if ( (unsigned int)SetDisplayAffinity(v13) )
        {
          v5 = 1LL;
          goto LABEL_11;
        }
        v10 = 8LL;
      }
      else
      {
        v10 = 0x57LL;
      }
    }
    else
    {
      v10 = 5LL;
    }
    UserSetLastError(v10);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v5;
}

```


```amdacpafd.sys: //ไดรเวอร์ที่เกี่ยวข้องกับ AMD Audio CoProcessor สำหรับการประมวลผลเสียง

amdkmdag.sys: //ไดรเวอร์ของ AMD graphics kernel mode driver  nvlddmkm.sys: //ไดรเวอร์ของ NVIDIA graphics
dxgkrnl.sys 
และ dxgmms2.sys: เ//กี่ยวข้องกับการทำงานของ DirectX Graphics ซึ่งใช้ในการเรนเดอร์กราฟิก
AcerAirplaneModeController.sys:// อาจเกี่ยวข้องกับการควบคุมโหมดเครื่องบิน (Airplane Mode) บนอุปกรณ์ Acer

ACPI.sys:// เป็นไดรเวอร์สำหรับ Advanced Configuration and Power Interface (ACPI) ซึ่งจัดการการตั้งค่าพลังงานและการจัดการระบบ
  ```
  nt
```
CACHEALI:0000000140D52FFF                               CACHEALI        ends
CACHEALI:0000000140D52FFF
PAGEDATA:0000000140D53000                               ; Section 27. (virtual address 00D53000)
PAGEDATA:0000000140D53000                               ; Virtual size                  : 00013120 (  78112.)
PAGEDATA:0000000140D53000                               ; Section size in file          : 00002000 (   8192.)
PAGEDATA:0000000140D53000                               ; Offset to raw data for section: 00B28000
PAGEDATA:0000000140D53000                               ; Flags C0000040: Data Readable Writable
PAGEDATA:0000000140D53000                               ; Alignment     : default
PAGEDATA:0000000140D53000                               ; Exported entry 1619. NlsMbOemCodePageTag
PAGEDATA:0000000140D53000                               ; ===========================================================================
PAGEDATA:0000000140D53000
PAGEDATA:0000000140D53000                               ; Segment type: Pure data
PAGEDATA:0000000140D53000                               ; Segment permissions: Read/Write
PAGEDATA:0000000140D53000                               PAGEDATA        segment para public 'DATA' use64
PAGEDATA:0000000140D53000                                               assume cs:PAGEDATA
PAGEDATA:0000000140D53000                                               ;org 140D53000h
PAGEDATA:0000000140D53000                                               public NlsMbOemCodePageTag
PAGEDATA:0000000140D53000 00                            NlsMbOemCodePageTag db 0                ; DATA XREF: RtlpInitCodePageTables+13C↑w
PAGEDATA:0000000140D53000                                                                       ; FsRtlDoesDbcsContainWildCards+20↑r ...
PAGEDATA:0000000140D53001 01                            CmpNoWrite      db 1                    ; DATA XREF: CmpDoFlushAll+14↑r
PAGEDATA:0000000140D53001                                                                       ; CmpDoFileFlush+6↑r ...
PAGEDATA:0000000140D53002 01                            CmpSelfHeal     db 1                    ; DATA XREF: CmpValidateHiveSecurityDescriptors+3BB↑r
PAGEDATA:0000000140D53002                                                                       ; CmpCheckValueList+3F9↑r ...
PAGEDATA:0000000140D53003 00                            PnpNotificationInProgress db 0          ; DATA XREF: PnpUnregisterPlugPlayNotification+35↑r
PAGEDATA:0000000140D53003                                                                       ; PnpInsertEventInQueue+72↑r ...
PAGEDATA:0000000140D53004 00 00 00 00                   SeTokenLeakTracking dd 0                ; DATA XREF: SepCreateTokenEx+338↑r
PAGEDATA:0000000140D53004                                                                       ; SepCreateTokenEx+659↑r ...
PAGEDATA:0000000140D53008 00 00 00 00 00 00 00 00       CmpTraceRoutine dq 0                    ; DATA XREF: CmpCloseKeyObject+30↑r
PAGEDATA:0000000140D53008                                                                       ; CmpCloseKeyObject+63↑r ...
PAGEDATA:0000000140D53010 00 00 00 00 00 00 00 00       EtwpRegTraceHandle dq 0                 ; DATA XREF: CmpTraceHiveLoadStop+1F↑r
PAGEDATA:0000000140D53010                                                                       ; CmpTraceHiveLoadStart+2E↑r ...
PAGEDATA:0000000140D53018 00                            CmpShareSystemHives db 0                ; DATA XREF: CmpFinishSystemHivesLoad+5D3↑r
PAGEDATA:0000000140D53018                                                                       ; CmpInitializeSystemHivesLoad+42↑r ...
PAGEDATA:0000000140D53019 00                            CmpMiniNTBoot   db 0                    ; DATA XREF: CmpTransSilentIgnore↑r
PAGEDATA:0000000140D53019                                                                       ; CmpInitCmRM+49↑r ...
PAGEDATA:0000000140D5301A 00                            CmpPuntBoot     db 0                    ; DATA XREF: CmpMountPreloadedHives+FCD2A↑w
PAGEDATA:0000000140D5301A                                                                       ; CmpLoadHiveThread+F3AC1↑w ...
PAGEDATA:0000000140D5301B 00                            ExpUuidCacheValid db 0                  ; DATA XREF: NtAllocateUuids+122↑r
PAGEDATA:0000000140D5301B                                                                       ; ExUuidCreate+36↑r ...
PAGEDATA:0000000140D5301C 00                            ExpUuidSequenceNumberNotSaved db 0      ; DATA XREF: ExpUuidSaveSequenceNumberIf+6↑r
PAGEDATA:0000000140D5301C                                                                       ; ExpUuidSaveSequenceNumberIf+1E↑w ...
PAGEDATA:0000000140D5301D 00                            EtwpRegTracingEnabled db 0              ; DATA XREF: EtwpRegTraceEnableCallback+31↑r
PAGEDATA:0000000140D5301D                                                                       ; EtwpRegTraceEnableCallback+7A↑w ...
PAGEDATA:0000000140D5301E 00                            PspSyscallProvidersEnabled db 0         ; DATA XREF: PsRegisterSyscallProviderServiceTableMetadata+14↑r
PAGEDATA:0000000140D5301E                                                                       ; PsRegisterSyscallProvider+2F↑r ...
PAGEDATA:0000000140D5301F 00                            CmpForceSynchronousMachineHiveLoad db 0 ; DATA XREF: CmCompleteRegistryInitialization+A4↑r
PAGEDATA:0000000140D5301F                                                                       ; CmpInitializeSystemHivesLoad+6E↑r ...
PAGEDATA:0000000140D53020                               ; Exported entry 2715. SeTokenObjectType
PAGEDATA:0000000140D53020                                               public SeTokenObjectType
PAGEDATA:0000000140D53020 00 00 00 00 00 00 00 00       SeTokenObjectType dq 0                  ; DATA XREF: RtlCheckTokenMembershipEx+2C4↑r
PAGEDATA:0000000140D53020                                                                       ; SepCreateTokenEx+41C↑r ...
PAGEDATA:0000000140D53028 00 00 00 00 00 00 00 00       qword_140D53028 dq 0                    ; DATA XREF: IopBootLog+51↑r
PAGEDATA:0000000140D53028                                                                       ; IopCopyBootLogRegistryToFile+47↑r ...
PAGEDATA:0000000140D53030 00 00 00 00                   PiDevCfgFlags   dd 0                    ; DATA XREF: PiDevCfgConfigureDevice:loc_140873AA4↑r
PAGEDATA:0000000140D53030                                                                       ; PiDevCfgConfigureDevice+66AD2↑r ...
PAGEDATA:0000000140D53034 00                            CmpSpecialBootCondition db 0            ; DATA XREF: CmpFinishSystemHivesLoad+5DA↑w
PAGEDATA:0000000140D53034                                                                       ; CmpFinishSystemHivesLoad:loc_1408158C4↑w ...
PAGEDATA:0000000140D53035 00                            ExpUuidSequenceNumberValid db 0         ; DATA XREF: ExpAllocateUuids+17↑r
PAGEDATA:0000000140D53035                                                                       ; ExpAllocateUuids+C9↑w
PAGEDATA:0000000140D53036                               ; Exported entry 1618. NlsMbCodePageTag
PAGEDATA:0000000140D53036                                               public NlsMbCodePageTag
PAGEDATA:0000000140D53036 00                            NlsMbCodePageTag db 0                   ; DATA XREF: RtlpInitCodePageTables+10D↑w
PAGEDATA:0000000140D53036                                                                       ; RtlpInitCodePageTables+FFE20↑w
PAGEDATA:0000000140D53037 00                            PpBootDDBInitialized db 0               ; DATA XREF: PpCheckInDriverDatabase+2A↑r
PAGEDATA:0000000140D53037                                                                       ; PpInitializeBootDDB:loc_140B5A76C↑w
PAGEDATA:0000000140D53038 00 01 00 00                   TunnelMaxEntries dd 100h                ; DATA XREF: FsRtlDeleteKeyFromTunnelCache+1B↑r
PAGEDATA:0000000140D53038                                                                       ; FsRtlAddToTunnelCacheEx+51↑r ...
PAGEDATA:0000000140D5303C 08 00 00 00                   EtwpMaxPmcCounter dd 8                  ; DATA XREF: EtwpGetPmcOwnership:loc_1405F9C5E↑r
PAGEDATA:0000000140D5303C                                                                       ; EtwpGetPmcOwnership+CE↑r ...
PAGEDATA:0000000140D53040 00 00 00 00                   WmipSMBiosTableLength dd 0              ; DATA XREF: WmipGetSMBiosTableData:loc_140725B36↑r
PAGEDATA:0000000140D53040                                                                       ; WmipGetSMBiosTableData:loc_140725B45↑r ...
PAGEDATA:0000000140D53044 01                            FsRtlSafeExtensions db 1                ; DATA XREF: RtlGenerate8dot3Name:loc_140768780↑r
PAGEDATA:0000000140D53044                                                                       ; FsRtlInitSystem+ED↑w
PAGEDATA:0000000140D53045 00                            FsRtlpVolumeStartupApplicationsComplete db 0
PAGEDATA:0000000140D53045                                                                       ; DATA XREF: FsRtlAreVolumeStartupApplicationsComplete↑r
PAGEDATA:0000000140D53045                                                                       ; PfSnBeginTrace+3B↑r ...
PAGEDATA:0000000140D53046 00                            g_TrustFlightSigning db    0
PAGEDATA:0000000140D53047 00                            g_IgnoreFlightSigningEKU db    0
PAGEDATA:0000000140D53048 00 00 00 00 00 00 00 00       PnpDeviceEventList dq 0                 ; DATA XREF: PnpInsertEventInQueue:loc_140688DE6↑r
PAGEDATA:0000000140D53048                                                                       ; PnpInsertEventInQueue:loc_140688E3D↑r ...
PAGEDATA:0000000140D53050 03 00 00 00                   PiDevCfgMode    dd 3                    ; DATA XREF: PiProcessNewDeviceNode:loc_140686621↑r
PAGEDATA:0000000140D53050                                                                       ; PpDevCfgProcessDevices+2E↑r ...
PAGEDATA:0000000140D53054 00 00 00 00                   dword_140D53054 dd 0                    ; DATA XREF: sub_1406DF1C0:loc_1406DF9D8↑r
PAGEDATA:0000000140D53054                                                                       ; sub_1406DF1C0:loc_1406DF9E8↑w ...
PAGEDATA:0000000140D53058 00 00 00 00                   WmipSMBiosVersionInfo dd 0              ; DATA XREF: WmipGetSMBiosTableData:loc_140725B8C↑r
PAGEDATA:0000000140D53058                                                                       ; WmipGetSMBiosFromLoaderBlock+50↑w ...
PAGEDATA:0000000140D5305C 00 40 00 00                   CmpConfigurationAreaSize dd 4000h       ; DATA XREF: CmLogMcUpdateStatus+178↑r
PAGEDATA:0000000140D5305C                                                                       ; CmpInitializeRegistryNode+30E↑r ...
PAGEDATA:0000000140D53060 FF FF FF FF 00 00 00 00       CmpGlobalQuota  dq 0FFFFFFFFh           ; DATA XREF: CmpSetGlobalQuotaAllowed↑r
PAGEDATA:0000000140D53060                                                                       ; CmQueryRegistryQuotaInformation:loc_14087FE9D↑r ...
PAGEDATA:0000000140D53068 68 54 D5 40 01 00 00 00       SeLuidToIndexMapping dq offset SeLuidToIndexMappingData
PAGEDATA:0000000140D53068                                                                       ; DATA XREF: SepCleanupMarkedForDeletionEntries+14↑r
PAGEDATA:0000000140D53068                                                                       ; SepCleanupMarkedForDeletionEntries+9F↑r ...
PAGEDATA:0000000140D53070 00 00 00 00 00 00 00 00       CmpTrustedInstallerSid dq 0             ; DATA XREF: CmpCheckExeOwnerForPca+1A↑r
PAGEDATA:0000000140D53070                                                                       ; CmpCheckExeOwnerForPca+E0↑r ...
PAGEDATA:0000000140D53078 00 00 00 00                   ExpUuidSequenceNumber dd 0              ; DATA XREF: ExpAllocateUuids:loc_140792F67↑r
PAGEDATA:0000000140D53078                                                                       ; ExpAllocateUuids+BB↑r ...
PAGEDATA:0000000140D5307C 00 00 00 00                   ExpUuidTimeSequenceNumber dd 0          ; DATA XREF: ExpAllocateUuids+50↑r
PAGEDATA:0000000140D5307C                                                                       ; ExpAllocateUuids:loc_1408F0602↑r ...
PAGEDATA:0000000140D53080 00 00 00 00 00 00 00 00       ExpPcwExtensionHost dq 0                ; DATA XREF: PcwCloseInstance+9↑r
PAGEDATA:0000000140D53080                                                                       ; PcwCloseInstance+26↑r ...
PAGEDATA:0000000140D53088 38 53 D5 40 01 00 00 00       g_SepSidMapping dq offset SepSidMapping ; DATA XREF: SepInitializeSharedSidMap+6↑r
PAGEDATA:0000000140D53088                                                                       ; SepDeReferenceSharedSidEntries+30↑r ...
PAGEDATA:0000000140D53090                               ; Exported entry 1621. NlsOemLeadByteInfo
PAGEDATA:0000000140D53090                                               public NlsOemLeadByteInfo
PAGEDATA:0000000140D53090 80 3A D5 40 01 00 00 00       NlsOemLeadByteInfo dq offset NlsEmptyLeadByteInfoTable
PAGEDATA:0000000140D53090                                                                       ; DATA XREF: RtlpInitCodePageTables+129↑w
PAGEDATA:0000000140D53090                                                                       ; FsRtlDoesDbcsContainWildCards+29↑r ...
PAGEDATA:0000000140D53098 00 00 00 00 00 00 00 00       SepAdtRegNotifyHandle dq 0              ; DATA XREF: SepAdtRegNotificationCallback+13↑r
PAGEDATA:0000000140D53098                                                                       ; SepAdtInitializeCrashOnFail+4↑r ...
PAGEDATA:0000000140D530A0 2C 01 00 00                   PopExecutionRequiredTimeout dd 12Ch     ; DATA XREF: PopPowerRequestExecutionRequiredSettingCallback+5F↑w
PAGEDATA:0000000140D530A0                                                                       ; PopPowerRequestHandleExecutionEnablementUpdate+17↑r ...
PAGEDATA:0000000140D530A4 00 00 00 00                   PiDevCfgOptions dd 0                    ; DATA XREF: PiDevCfgConfigureDevice+66C83↑r
PAGEDATA:0000000140D530A4                                                                       ; PiDevCfgConfigureDevice+66E53↑r ...
PAGEDATA:0000000140D530A8 00 00 00 00 00 00 00 00       ExpPlatformBinaryLock dq 0              ; DATA XREF: ExNotifyPlatformBinaryExecuted+18↑o
PAGEDATA:0000000140D530A8                                                                       ; ExNotifyPlatformBinaryExecuted+40↑w ...
PAGEDATA:0000000140D530B0 00 00 00 00 00 00 00 00       EtwpRegTraceOptions dq 0                ; DATA XREF: EtwpRegTraceCallback:loc_1408A62FA↑r
PAGEDATA:0000000140D530B0                                                                       ; EtwpRegTraceCallback:loc_1408A637E↑r ...
PAGEDATA:0000000140D530B8 00                            g_MobilePlatform db    0
PAGEDATA:0000000140D530B9 00                                            db    0
PAGEDATA:0000000140D530BA 00                                            db    0
PAGEDATA:0000000140D530BB 00                            PsContinueWaiting db 0                  ; DATA XREF: PsShutdownSystem+19E↑r
PAGEDATA:0000000140D530BC 00                            PopPowerRequestPdcNotifiedExecutionRequired db 0
PAGEDATA:0000000140D530BC                                                                       ; DATA XREF: PopPowerRequestCallbackExecutionRequired:loc_14073B0AE↑r
PAGEDATA:0000000140D530BC                                                                       ; PopPowerRequestCallbackExecutionRequired+94↑o
PAGEDATA:0000000140D530BD 00                            PopPowerRequestPdcNotifiedSystemRequired db 0
PAGEDATA:0000000140D530BD                                                                       ; DATA XREF: PopPowerRequestCallbackExecutionRequired+1E↑o
PAGEDATA:0000000140D530BD                                                                       ; PopPowerRequestCallbackExecutionRequired+2C↑r
PAGEDATA:0000000140D530BE 00 00                                         align 20h
PAGEDATA:0000000140D530C0                               ; Exported entry 1620. NlsOemCodePage
PAGEDATA:0000000140D530C0                                               public NlsOemCodePage
PAGEDATA:0000000140D530C0 E9 FD                         NlsOemCodePage  dw 0FDE9h               ; DATA XREF: RtlpInitCodePageTables+117↑w
PAGEDATA:0000000140D530C0                                                                       ; RtlpInitCodePageTables+FFE18↑w
PAGEDATA:0000000140D530C2 00 00                                         align 4
PAGEDATA:0000000140D530C4                               ; Exported entry 1616. NlsAnsiCodePage
PAGEDATA:0000000140D530C4                                               public NlsAnsiCodePage
PAGEDATA:0000000140D530C4 E9 FD                         NlsAnsiCodePage dw 0FDE9h               ; DATA XREF: RtlpInitCodePageTables+DE↑w
PAGEDATA:0000000140D530C4                                                                       ; RtlpInitCodePageTables:loc_14090E848↑w
PAGEDATA:0000000140D530C6 00 00                                         align 8
PAGEDATA:0000000140D530C8 01 00 00 00                   CmFirstTime     dd 1                    ; DATA XREF: CmShutdownSystem1+154↑r
PAGEDATA:0000000140D530C8                                                                       ; CmShutdownSystem2+118↑r ...
PAGEDATA:0000000140D530CC 00 00 00 00                   EtwpSpinLockCountersCount dd 0          ; DATA XREF: EtwDereferenceSpinLockCounters+1E↑w
PAGEDATA:0000000140D530CC                                                                       ; EtwReferenceSpinLockCounters+1E↑r ...
PAGEDATA:0000000140D530D0 00 00 00 00                   SeTokenDoesNotTrackSessionObject dd 0   ; DATA XREF: SepSetTokenSessionById+23↑r
PAGEDATA:0000000140D530D0                                                                       ; SeSetSessionIdToken+1E↑r ...
PAGEDATA:0000000140D530D4 0F 00 00 00                   TunnelMaxAge    dd 0Fh                  ; DATA XREF: FsRtlPruneTunnelCache+2E↑r
PAGEDATA:0000000140D530D4                                                                       ; FsRtlInitializeTunnels+4C↑o ...
PAGEDATA:0000000140D530D8 00 00 00 00 00 00 00 00       ExpPlatformBinaryTableInformation dq 0  ; DATA XREF: ExNotifyPlatformBinaryExecuted+32↑r
PAGEDATA:0000000140D530D8                                                                       ; ExNotifyPlatformBinaryExecuted+39↑w ...
PAGEDATA:0000000140D530E0 00 00 00 00 00 00 00 00       qword_140D530E0 dq 0                    ; DATA XREF: I_MinCryptIsCertificateHashRevokedV2+F↑r
PAGEDATA:0000000140D530E8 00 00 00 00 00 00 00 00       WmipSMBiosTablePhysicalAddress dq 0     ; DATA XREF: WmipGetSMBiosTableData:loc_140725B96↑r
PAGEDATA:0000000140D530E8                                                                       ; PopUpdateSmbiosData+17↑r ...
PAGEDATA:0000000140D530F0 00 00 00 00 00 00 00 00       SepRmDefaultCap dq 0                    ; DATA XREF: SeAccessCheckByType+E07↑r
PAGEDATA:0000000140D530F0                                                                       ; SepCommonAccessCheckEx+262CF9↑r ...
PAGEDATA:0000000140D530F8 00 00 00 00 00 00 00 00       SepRmCapTable   dq 0                    ; DATA XREF: SepRmReferenceFindCap+59↑r
PAGEDATA:0000000140D530F8                                                                       ; SepRmCapUpdateWrkr+64↑r ...
PAGEDATA:0000000140D53100 00 00 00 00                   CmRegistrySizeLimitType dd 0            ; DATA XREF: CmpInitGlobalQuotaAllowed:loc_140B82732↑r
PAGEDATA:0000000140D53100                                                                       ; CmpInitGlobalQuotaAllowed:loc_140B82754↑r ...
PAGEDATA:0000000140D53104 08 00 00 00                   CmRegistrySizeLimitLength dd 8          ; DATA XREF: CmpInitGlobalQuotaAllowed+15↑r
PAGEDATA:0000000140D53104                                                                       ; INIT:0000000140B9F7D8↑o
PAGEDATA:0000000140D53108 00 00 00 00                   CmpLKGEnabled   dd 0                    ; DATA XREF: CmpAcceptBoot+4B↑r
PAGEDATA:0000000140D53108                                                                       ; CmInitSystem1+506↑r ...
PAGEDATA:0000000140D5310C 08 00 00 00                   EtwpMaxProfilingSources dd 8            ; DATA XREF: EtwSetPerformanceTraceInformation+3EB↑r
PAGEDATA:0000000140D5310C                                                                       ; EtwpSetPmcProfileSource+23↑r ...
PAGEDATA:0000000140D53110 00 00 00 00                   SepProcessAccessesToAudit dd 0          ; DATA XREF: SepInitProcessAuditSd:loc_140384A66↑r
PAGEDATA:0000000140D53110                                                                       ; SepInitProcessAuditSd+15800B↑r ...
PAGEDATA:0000000140D53114 00 00 00 00                   PspRundownNeededCountCache dd 0         ; DATA XREF: PspProcessRundownWorkerSingle+11↑w
PAGEDATA:0000000140D53114                                                                       ; PspProcessRundownWorkerSingle+4D↑w ...
PAGEDATA:0000000140D53118 00 00 00 00                   PspRundownNeededCount dd 0              ; DATA XREF: PspProcessRundownWorker+13↑w
PAGEDATA:0000000140D53118                                                                       ; PspProcessRundownWorker+83↑w ...
PAGEDATA:0000000140D5311C 00 00 00 00                   PspEnforcementSequenceNumber dd 0       ; DATA XREF: PspRemoveProcessFromJobChain+1C0↑r
PAGEDATA:0000000140D5311C                                                                       ; PspEnforceLimits+32↑w ...
PAGEDATA:0000000140D53120 01 00 00 00                   PopPowerRequestConvertSystemToExecution dd 1
PAGEDATA:0000000140D53120                                                                       ; DATA XREF: PopPowerRequestCallbackExecutionRequired+17↑r
PAGEDATA:0000000140D53120                                                                       ; PopPowerRequestHandleExecutionEnablementUpdate+B↑r ...
PAGEDATA:0000000140D53124 00 00 00 00                   dword_140D53124 dd 0                    ; DATA XREF: sub_140A49A48+CE↑r
PAGEDATA:0000000140D53124                                                                       ; sub_140A49A48+F9↑w
PAGEDATA:0000000140D53128 00 00 00 00 00 00 00 00       PspUniqueJobIdTable dq 0                ; DATA XREF: PspJobDelete+210↑r
PAGEDATA:0000000140D53128                                                                       ; PspJobDelete+227↑r ...
PAGEDATA:0000000140D53130 00 00 00 00 00 00 00 00       qword_140D53130 dq 0                    ; DATA XREF: sub_1406DF1C0+6B6↑w
PAGEDATA:0000000140D53130                                                                       ; sub_1406DF1C0+6C3↑r ...
PAGEDATA:0000000140D53138 00 00 00 00 00 00 00 00       CmRegistrySizeLimit dq 0                ; DATA XREF: CmpInitGlobalQuotaAllowed+31DA7↑r
PAGEDATA:0000000140D53138                                                                       ; CmpInitGlobalQuotaAllowed+31DC9↑r ...
PAGEDATA:0000000140D53140 00 00 00 00 00 00 00 00       PspRundownProcessCache dq 0             ; DATA XREF: PspProcessRundownWorker+52↑w
PAGEDATA:0000000140D53140                                                                       ; PspProcessRundownWorker:loc_1409B0D45↑r ...
PAGEDATA:0000000140D53148 00 00 00 00 00 00 00 00       PspJobListLock  dq 0                    ; DATA XREF: PspJobDelete+125↑o
PAGEDATA:0000000140D53148                                                                       ; NtCreateJobObject+1CE↑o ...
PAGEDATA:0000000140D53150 00 00 00 00 00 00 00 00       PspNoWakeChargeReferencedProcess dq 0   ; DATA XREF: PspEnforceLimits:loc_1406FB69F↑r
PAGEDATA:0000000140D53150                                                                       ; PspEnforceLimits+1CAE87↑r ...
PAGEDATA:0000000140D53158 00 00 00 00 00 00 00 00       PspAffinityUpdateLock dq 0              ; DATA XREF: PsUpdateActiveProcessAffinity+18↑o
PAGEDATA:0000000140D53158                                                                       ; PsUpdateActiveProcessAffinity:loc_1409AB8DD↑w ...
PAGEDATA:0000000140D53160 00 00 00 00 00 00 00 00       pFsRtlpMupCalls dq 0                    ; DATA XREF: FsRtlRegisterMupCalls↑w
PAGEDATA:0000000140D53160                                                                       ; FsRtlMupGetProviderIdFromName+4↑r ...
PAGEDATA:0000000140D53168 05 00 0B 00 0E 00 03 00       AdtpPerCategoryCount dq 3000E000B0005h  ; DATA XREF: AdtpGetCategoryAndSubCategoryId+19↑o
PAGEDATA:0000000140D53168                                                                       ; SepRmSetAuditEventWrkr+3D↑o ...
PAGEDATA:0000000140D53170 06                                            db    6
PAGEDATA:0000000140D53171 00                                            db    0
PAGEDATA:0000000140D53172 06                                            db    6
PAGEDATA:0000000140D53173 00                                            db    0
PAGEDATA:0000000140D53174 06                                            db    6
PAGEDATA:0000000140D53175 00                                            db    0
PAGEDATA:0000000140D53176 04                                            db    4
PAGEDATA:0000000140D53177 00                                            db    0
PAGEDATA:0000000140D53178 04                                            db    4
PAGEDATA:0000000140D53179 00                                            db    0
PAGEDATA:0000000140D5317A 00                                            db    0
PAGEDATA:0000000140D5317B 00                                            db    0
PAGEDATA:0000000140D5317C 3F 42 0F 00                   g_ulOldGenuineStateForWnf dd 0F423Fh    ; DATA XREF: sub_1406DF1C0:loc_1406DF6F7↑r
PAGEDATA:0000000140D5317C                                                                       ; sub_1406DF1C0+546↑w
PAGEDATA:0000000140D53180 00 00 00 00                   g_ulOldGenuineState dd 0                ; DATA XREF: sub_1406DF1C0+639↑r
PAGEDATA:0000000140D53180                                                                       ; sub_1406DF1C0+651↑w ...
PAGEDATA:0000000140D53184 00 00 00 00                   g_bWNFEventFired dd 0                   ; DATA XREF: sub_1406DF1C0+589↑r
PAGEDATA:0000000140D53184                                                                       ; sub_1406DF1C0+5B3↑w
PAGEDATA:0000000140D53188 00 00 00 00                   dword_140D53188 dd 0                    ; DATA XREF: sub_1406DF1C0+6E0↑r
PAGEDATA:0000000140D53188                                                                       ; SPCallServerHandleWaitForDisplayWindow:loc_14079982F↑w
PAGEDATA:0000000140D5318C 07 00 00 00                   CmpCheckHiveIndex dd 7                  ; DATA XREF: CmpLoadHiveThread+BF↑r
PAGEDATA:0000000140D5318C                                                                       ; CmpLoadHiveThread:loc_1408209CA↑r
PAGEDATA:0000000140D53190 00 00 00 00                   ExpPcwEnableState dd 0                  ; DATA XREF: ExpPcwDisabledStatus+12↑r
PAGEDATA:0000000140D53190                                                                       ; ExpPcwDisabledStatus+9E↑w
PAGEDATA:0000000140D53194 0A 00 00 00                   EtwpMaxNonPagedPoolUsage dd 0Ah         ; DATA XREF: EtwpGetSystemMaximumBufferCount:loc_14074878C↑r
PAGEDATA:0000000140D53194                                                                       ; EtwpReadConfigParameters:loc_140B6F86C↑w
PAGEDATA:0000000140D53198 00 00 00 00                   SepAllowAllApplicationAceRemoval dd 0   ; DATA XREF: SepCheckForCriticalAceRemoval:loc_1402438E3↑r
PAGEDATA:0000000140D53198                                                                       ; INIT:0000000140BA2200↑o
PAGEDATA:0000000140D5319C 00 00 00 00                   SepAllowSessionImpersonationCap dd 0    ; DATA XREF: SepIsImpersonationAllowedDueToCapability:loc_1408D5727↑r
PAGEDATA:0000000140D5319C                                                                       ; INIT:0000000140BA22F0↑o
PAGEDATA:0000000140D531A0 FF FF FF FF                   PspProcessNodeAssignment dd 0FFFFFFFFh  ; DATA XREF: PspSelectNodeForProcess+1C142E↑w
PAGEDATA:0000000140D531A0                                                                       ; PspSelectNodeForProcess+1C146E↑w
PAGEDATA:0000000140D531A4 01 00 00 00                   PopPowerRequestActiveAudioEnablesExecutionRequired dd 1
PAGEDATA:0000000140D531A4                                                                       ; DATA XREF: PopPowerRequestHandleExecutionEnablementUpdate:loc_1409226B8↑r
PAGEDATA:0000000140D531A4                                                                       ; INIT:0000000140B9EF90↑o
PAGEDATA:0000000140D531A8 00 00 00 00                   FsRtlpRedirs    dd 0                    ; DATA XREF: FsRtlpRegisterUncProvider+BA↑w
PAGEDATA:0000000140D531A8                                                                       ; FsRtlDeregisterUncProvider+31↑w
PAGEDATA:0000000140D531AC 00 00 00 00                                   align 10h
PAGEDATA:0000000140D531B0 00 00 00 00 00 00 00 00       g_qwSystemInitTime dq 0                 ; DATA XREF: sub_1406DF1C0+53F↑w
PAGEDATA:0000000140D531B0                                                                       ; sub_1406DF1C0+552↑r ...
PAGEDATA:0000000140D531B8 FF FF FF FF 00 00 00 00       CmpGlobalQuotaWarning dq 0FFFFFFFFh     ; DATA XREF: CmpClaimGlobalQuota+2D↑r
PAGEDATA:0000000140D531B8                                                                       ; CmpUpdateGlobalQuotaAllowed+1A1A5E↑w ...
PAGEDATA:0000000140D531C0 FF FF FF FF 00 00 00 00       CmpGlobalQuotaAllowed dq 0FFFFFFFFh     ; DATA XREF: CmpClaimGlobalQuota+11↑r
PAGEDATA:0000000140D531C0                                                                       ; CmpSetGlobalQuotaAllowed+7↑w ...
PAGEDATA:0000000140D531C8 00 00 00 00 00 00 00 00       CmpTraceTxrRoutine dq 0                 ; DATA XREF: CmKtmNotification:loc_140734429↑r
PAGEDATA:0000000140D531C8                                                                       ; CmKtmNotification:loc_14073465B↑r ...
PAGEDATA:0000000140D531D0 00 00 00 00 00 00 00 00       ExpUuidLastTimeAllocated dq 0           ; DATA XREF: ExpAllocateUuids+3A↑r
PAGEDATA:0000000140D531D0                                                                       ; ExpAllocateUuids+88↑w ...
PAGEDATA:0000000140D531D8 00 00 00 00 00 00 00 00       PspJobAssignmentLock dq 0               ; DATA XREF: PspLockJobAssignment+13↑o
PAGEDATA:0000000140D531D8                                                                       ; PspUnlockJobAssignment+D↑w ...
PAGEDATA:0000000140D531E0 00                            TtmpBreakOnError db 0                   ; DATA XREF: TtmiLogError+28↑r
PAGEDATA:0000000140D531E1 00 00 00                                      align 4
PAGEDATA:0000000140D531E4 00 00 00 00                   dword_140D531E4 dd 0                    ; DATA XREF: TtmiLogError+3C↑r
PAGEDATA:0000000140D531E8 00 00 00 00                   dword_140D531E8 dd 0                    ; DATA XREF: TtmiLogError:loc_1409A53B6↑r
PAGEDATA:0000000140D531EC 00 00 00 00                   dword_140D531EC dd 0                    ; DATA XREF: TtmiLogError:loc_1409A53C4↑r
PAGEDATA:0000000140D531F0 C0 39 D5 40 01 00 00 00       PspSystemDlls   dq offset PspNativeSystemDllData
PAGEDATA:0000000140D531F0                                                                       ; DATA XREF: PspPrepareSystemDllInitBlock+AF↑r
PAGEDATA:0000000140D531F0                                                                       ; PspPrepareSystemDllInitBlock+DF↑o ...
PAGEDATA:0000000140D531F8 00 3A D5 40 01 00 00 00                       dq offset PspWowX86SystemDllData
PAGEDATA:0000000140D53200 00                                            db    0
PAGEDATA:0000000140D53201 00                                            db    0
PAGEDATA:0000000140D53202 00                                            db    0
PAGEDATA:0000000140D53203 00                                            db    0
PAGEDATA:0000000140D53204 00                                            db    0
PAGEDATA:0000000140D53205 00                                            db    0
PAGEDATA:0000000140D53206 00                                            db    0
PAGEDATA:0000000140D53207 00                                            db    0
PAGEDATA:0000000140D53208 00                                            db    0
PAGEDATA:0000000140D53209 00                                            db    0
PAGEDATA:0000000140D5320A 00                                            db    0
PAGEDATA:0000000140D5320B 00                                            db    0
PAGEDATA:0000000140D5320C 00                                            db    0
PAGEDATA:0000000140D5320D 00                                            db    0
PAGEDATA:0000000140D5320E 00                                            db    0
PAGEDATA:0000000140D5320F 00                                            db    0
PAGEDATA:0000000140D53210 00                                            db    0
PAGEDATA:0000000140D53211 00                                            db    0
PAGEDATA:0000000140D53212 00                                            db    0
PAGEDATA:0000000140D53213 00                                            db    0
PAGEDATA:0000000140D53214 00                                            db    0
PAGEDATA:0000000140D53215 00                                            db    0
PAGEDATA:0000000140D53216 00                                            db    0
PAGEDATA:0000000140D53217 00                                            db    0
PAGEDATA:0000000140D53218 40 3A D5 40 01 00 00 00       off_140D53218   dq offset PspVsmEnclaveRuntimeDllData
PAGEDATA:0000000140D53218                                                                       ; DATA XREF: PspInitPhase3+1A516↑r
PAGEDATA:0000000140D53218                                                                       ; PspInitPhase3+1A531↑r
PAGEDATA:0000000140D53220 00                                            db    0
PAGEDATA:0000000140D53221 00                                            db    0
PAGEDATA:0000000140D53222 00                                            db    0
PAGEDATA:0000000140D53223 00                                            db    0
PAGEDATA:0000000140D53224 00                                            db    0
PAGEDATA:0000000140D53225 00                                            db    0
PAGEDATA:0000000140D53226 00                                            db    0
PAGEDATA:0000000140D53227 00                                            db    0
PAGEDATA:0000000140D53228 00 00 00 00 00 00 00 00       qword_140D53228 dq 0                    ; DATA XREF: SPCallServerHandleUpdatePolicies+60↑r
PAGEDATA:0000000140D53228                                                                       ; SPCallServerHandleAuthenticateCaller+41↑w
PAGEDATA:0000000140D53230 00 00 00 00 00 00 00 00       CmpLoadHiveLockOwner dq 0               ; DATA XREF: LOCK_HIVE_LOAD+49↑w
PAGEDATA:0000000140D53230                                                                       ; UNLOCK_HIVE_LOAD+12↑w ...
PAGEDATA:0000000140D53238 00 00 00 00 00 00 00 00       ExpConDrvLoadLock dq 0                  ; DATA XREF: NtSetSystemInformation+880↑o
PAGEDATA:0000000140D53238                                                                       ; NtSetSystemInformation+89E↑w ...
PAGEDATA:0000000140D53240 00 00 00 00 00 00 00 00       EtwpRegTraceCookie dq 0                 ; DATA XREF: EtwpRegTraceCallback+3EB↑o
PAGEDATA:0000000140D53240                                                                       ; EtwpRegTraceEnableCallback+51↑o ...
PAGEDATA:0000000140D53248 30 62 A7 40 01 00 00 00       SepFilterPrivileges dq offset SepFilterPrivilegesShort
PAGEDATA:0000000140D53248                                                                       ; DATA XREF: SepFilterPrivilegeAudits+13↑r
PAGEDATA:0000000140D53248                                                                       ; SepAdtInitializePrivilegeAuditing:loc_140841D42↑w
PAGEDATA:0000000140D53250 00 00 00 00 00 00 00 00       PspLegoNotifyRoutine dq 0               ; DATA XREF: PspExitThread:loc_1409029DD↑r
PAGEDATA:0000000140D53250                                                                       ; PsSetLegoNotifyRoutine↑w
PAGEDATA:0000000140D53258 2D 00 00 00 00 00 00 00       PspMaximumWorkingSet dq 2Dh             ; DATA XREF: PsGetDefaultWsMaximum↑r
PAGEDATA:0000000140D53258                                                                       ; PspAllocateProcess+B43↑r ...
PAGEDATA:0000000140D53260 14 00 00 00 00 00 00 00       PspMinimumWorkingSet dq 14h             ; DATA XREF: NtSetInformationJobObject+A83↑r
PAGEDATA:0000000140D53260                                                                       ; MmCreateProcessAddressSpace+27↑r ...
PAGEDATA:0000000140D53268 00 00 00 00 00 00 00 00       ExpUuidCachedValues dq 0                ; DATA XREF: ExUuidCreate+2F↑r
PAGEDATA:0000000140D53268                                                                       ; ExUuidCreate+55↑r ...
PAGEDATA:0000000140D53270 FF FF FF FF                   dword_140D53270 dd 0FFFFFFFFh           ; DATA XREF: ExUuidCreate+4B↑w
PAGEDATA:0000000140D53274 00 00 80 6E                   dword_140D53274 dd 6E800000h            ; DATA XREF: ExUuidCreate:loc_1406F7F19↑r
PAGEDATA:0000000140D53274                                                                       ; NtAllocateUuids+167↑r ...
PAGEDATA:0000000140D53278 6F                            unk_140D53278   db  6Fh ; o             ; DATA XREF: ExUuidCreate+40↑r
PAGEDATA:0000000140D53279 6E                                            db  6Eh ; n
PAGEDATA:0000000140D5327A 69 63                         word_140D5327A  dw 6369h                ; DATA XREF: NtAllocateUuids+171↑r
PAGEDATA:0000000140D5327A                                                                       ; NtSetUuidSeed+328↑w
PAGEDATA:0000000140D5327C 00 00 00 00                                   align 20h
PAGEDATA:0000000140D53280 00                            PopAdaptiveBootContext db 0             ; DATA XREF: NtSetThreadExecutionState+1AA↑r
PAGEDATA:0000000140D53280                                                                       ; PopSessionConnected+4B↑r ...
PAGEDATA:0000000140D53281 00                            byte_140D53281  db 0                    ; DATA XREF: PoInitHiberServices+119↑r
PAGEDATA:0000000140D53281                                                                       ; PopAdaptiveInitializeBootContext+278A9↑w
PAGEDATA:0000000140D53282 00 00 00 00 00 00                             align 8
PAGEDATA:0000000140D53288 00 00 00 00 00 00 00 00       qword_140D53288 dq 0                    ; DATA XREF: PopUpdateSystemIdleContext+67↑r
PAGEDATA:0000000140D53288                                                                       ; PopSystemIdleEventHandler+AEB18↑r ...
PAGEDATA:0000000140D53290 00 00 00 00 00 00 00 00       qword_140D53290 dq 0                    ; DATA XREF: PopAdaptiveGetSystemInitiatedRebootTargetState+27↑r
PAGEDATA:0000000140D53290                                                                       ; PopAdaptiveSetSystemInitiatedRebootTargetStateOverride+27↑r ...
PAGEDATA:0000000140D53298 00                            byte_140D53298  db 0                    ; DATA XREF: PopAdaptivePersistSystemInitatedRebootState+35↑r
PAGEDATA:0000000140D53298                                                                       ; PopPowerInformationInternal+14AC↑w
PAGEDATA:0000000140D53299 00 00 00 00 00 00 00                          align 20h
PAGEDATA:0000000140D532A0 00 00 00 00 00 00 00 00       qword_140D532A0 dq 0                    ; DATA XREF: PopAdaptivePersistSystemInitatedRebootState+8F↑r
PAGEDATA:0000000140D532A0                                                                       ; PopPowerInformationInternal+14A5↑w
PAGEDATA:0000000140D532A8 00 00 00 00 00 00 00 00       SeFileSystemNotifyRoutinesHead dq 0     ; DATA XREF: SeRegisterLogonSessionTerminatedRoutine+5A↑r
PAGEDATA:0000000140D532A8                                                                       ; SeRegisterLogonSessionTerminatedRoutine+6F↑w ...
PAGEDATA:0000000140D532B0 00                                            db    0
PAGEDATA:0000000140D532B1 00                                            db    0
PAGEDATA:0000000140D532B2 00                                            db    0
PAGEDATA:0000000140D532B3 00                                            db    0
PAGEDATA:0000000140D532B4 00                                            db    0
PAGEDATA:0000000140D532B5 00                                            db    0
PAGEDATA:0000000140D532B6 00                                            db    0
PAGEDATA:0000000140D532B7 00                                            db    0
PAGEDATA:0000000140D532B8 01 00 00 00                   CmBootAcceptFirstTime dd 1              ; DATA XREF: CmpAcceptBoot+1F↑w
PAGEDATA:0000000140D532BC 00 00 00 00                   PspSystemThreadAssignment dd 0          ; DATA XREF: PsCreateSystemThreadEx+272↑w
PAGEDATA:0000000140D532C0 02                            PopAdaptiveSystemRebootDisplayTimeout db    2
PAGEDATA:0000000140D532C1 00                                            db    0
PAGEDATA:0000000140D532C2 00                                            db    0
PAGEDATA:0000000140D532C3 00                                            db    0
PAGEDATA:0000000140D532C4 01                            IopUseCompletionOptimization db    1
PAGEDATA:0000000140D532C5 00                                            db    0
PAGEDATA:0000000140D532C6 00                                            db    0
PAGEDATA:0000000140D532C7 00                                            db    0
PAGEDATA:0000000140D532C8 00 00 00 00                   FsRtlPagingIoResourceSelector dd 0      ; DATA XREF: FsRtlAllocateResource↑r
PAGEDATA:0000000140D532C8                                                                       ; FsRtlAllocateResource+11↑w
PAGEDATA:0000000140D532CC 00                                            db    0
PAGEDATA:0000000140D532CD 00                                            db    0
PAGEDATA:0000000140D532CE 00                                            db    0
PAGEDATA:0000000140D532CF 00                                            db    0
PAGEDATA:0000000140D532D0 00                                            db    0
PAGEDATA:0000000140D532D1 00                                            db    0
PAGEDATA:0000000140D532D2 00                                            db    0
PAGEDATA:0000000140D532D3 00                                            db    0
PAGEDATA:0000000140D532D4 00                                            db    0
PAGEDATA:0000000140D532D5 00                                            db    0
PAGEDATA:0000000140D532D6 00                                            db    0
PAGEDATA:0000000140D532D7 00                                            db    0
PAGEDATA:0000000140D532D8 00 00 00 00 00 00 00 00       g_FlightSignedNotBefore dq 0            ; DATA XREF: MinCryptVerifyCertificateWithPolicy2+1FE↑r
PAGEDATA:0000000140D532E0 A8 6C 9C 29 EE 05 2F E7       qword_140D532E0 dq 0E72F05EE299C6CA8h   ; DATA XREF: sub_14075B3C4+37↑r
PAGEDATA:0000000140D532E0                                                                       ; sub_14084DFBC+37↑r
PAGEDATA:0000000140D532E8                               ; Exported entry 1617. NlsLeadByteInfo
PAGEDATA:0000000140D532E8                                               public NlsLeadByteInfo
PAGEDATA:0000000140D532E8 80 3A D5 40 01 00 00 00       NlsLeadByteInfo dq offset NlsEmptyLeadByteInfoTable
PAGEDATA:0000000140D532E8                                                                       ; DATA XREF: RtlpInitCodePageTables+F7↑w
PAGEDATA:0000000140D532E8                                                                       ; RtlpInitCodePageTables+FFDEC↑w
PAGEDATA:0000000140D532F0 00 00 00 00 00 00 00 00       PopAdpmLockThread dq 0                  ; DATA XREF: PopAcquireAdaptiveLock+58↑w
PAGEDATA:0000000140D532F0                                                                       ; PopReleaseAdaptiveLock+2E↑w
PAGEDATA:0000000140D532F8 90 F8 03 40 01 00 00 00       off_140D532F8   dq offset DEVPKEY_Device_GenericDriverInstalled
PAGEDATA:0000000140D532F8                                                                       ; DATA XREF: PiDevCfgConfigurePropertyMatchCallback+69↑o
PAGEDATA:0000000140D53300 00 33 D5 40 01 00 00 00       ExpWnfPermenentDataStoresList dq offset ExpWnfPermenentDataStoresList
PAGEDATA:0000000140D53300                                                                       ; DATA XREF: ExpWnfGetPermanentDataStore+151↑o
PAGEDATA:0000000140D53300                                                                       ; ExpWnfInvalidateDataStores:loc_1408C4424↑r ...
PAGEDATA:0000000140D53308 00 33 D5 40 01 00 00 00       off_140D53308   dq offset ExpWnfPermenentDataStoresList
PAGEDATA:0000000140D53308                                                                       ; DATA XREF: ExpWnfGetPermanentDataStore:loc_140794FCA↑r
PAGEDATA:0000000140D53308                                                                       ; ExpWnfGetPermanentDataStore+16F↑w
PAGEDATA:0000000140D53310                               CapeName:                               ; DATA XREF: SepReadAndPopulateCapes+CB76B↑o
PAGEDATA:0000000140D53310                                                                       ; SepReadAndPopulateCapes+CB984↑o ...
PAGEDATA:0000000140D53310 08 00 0A 00 00 00                             text "UTF-16LE", 8,0Ah,0
PAGEDATA:0000000140D53316 00 00                                         align 8
PAGEDATA:0000000140D53318 E0 65 04 40 01 00 00 00                       dq offset aName         ; "Name"
PAGEDATA:0000000140D53320 20 33 D5 40 01 00 00 00       PspSyscallProviders dq offset PspSyscallProviders
PAGEDATA:0000000140D53320                                                                       ; DATA XREF: PspInsertSyscallProvider+52↑o
PAGEDATA:0000000140D53320                                                                       ; PspLookupSyscallProviderByIdNoLock↑r ...
PAGEDATA:0000000140D53328 20 33 D5 40 01 00 00 00       off_140D53328   dq offset PspSyscallProviders
PAGEDATA:0000000140D53328                                                                       ; DATA XREF: PspInsertSyscallProvider+4B↑r
PAGEDATA:0000000140D53328                                                                       ; PspInsertSyscallProvider+6D↑w
PAGEDATA:0000000140D53330 00 00 00 00 00 00 00 00       PspJobList      dq 0                    ; DATA XREF: NtCreateJobObject+1E5↑o
PAGEDATA:0000000140D53330                                                                       ; PspGetNextJob+3C↑r ...
PAGEDATA:0000000140D53338 00 00 00 00 00 00 00 00       qword_140D53338 dq 0                    ; DATA XREF: NtCreateJobObject+1DE↑r
PAGEDATA:0000000140D53338                                                                       ; NtCreateJobObject+1FF↑w ...
PAGEDATA:0000000140D53340 00 00 00 00 00 00 00 00       SeFileSystemNotifyRoutinesExHead dq 0   ; DATA XREF: SeRegisterLogonSessionTerminatedRoutineEx+58↑r
PAGEDATA:0000000140D53340                                                                       ; SeRegisterLogonSessionTerminatedRoutineEx+71↑w ...
PAGEDATA:0000000140D53348 00                                            db    0
PAGEDATA:0000000140D53349 00                                            db    0
PAGEDATA:0000000140D5334A 00                                            db    0
PAGEDATA:0000000140D5334B 00                                            db    0
PAGEDATA:0000000140D5334C 00                                            db    0
PAGEDATA:0000000140D5334D 00                                            db    0
PAGEDATA:0000000140D5334E 00                                            db    0
PAGEDATA:0000000140D5334F 00                                            db    0
PAGEDATA:0000000140D53350 00                                            db    0
PAGEDATA:0000000140D53351 00                                            db    0
PAGEDATA:0000000140D53352 00                                            db    0
PAGEDATA:0000000140D53353 00                                            db    0
PAGEDATA:0000000140D53354 00                                            db    0
PAGEDATA:0000000140D53355 00                                            db    0
PAGEDATA:0000000140D53356 00                                            db    0
PAGEDATA:0000000140D53357 00                                            db    0
PAGEDATA:0000000140D53358 00                            WheaRegPolicyTableChanged db    0       ; DATA XREF: WheapCommitPolicy+61↑o
PAGEDATA:0000000140D53359 00                                            db    0
PAGEDATA:0000000140D5335A 00                                            db    0
PAGEDATA:0000000140D5335B 00                                            db    0
PAGEDATA:0000000140D5335C 00                                            db    0
PAGEDATA:0000000140D5335D 00                                            db    0
PAGEDATA:0000000140D5335E 00                                            db    0
PAGEDATA:0000000140D5335F 00                                            db    0
PAGEDATA:0000000140D53360 00                                            db    0
PAGEDATA:0000000140D53361 00                                            db    0
PAGEDATA:0000000140D53362 00                                            db    0
PAGEDATA:0000000140D53363 00                                            db    0
PAGEDATA:0000000140D53364 00                                            db    0
PAGEDATA:0000000140D53365 00                                            db    0
PAGEDATA:0000000140D53366 00                                            db    0
PAGEDATA:0000000140D53367 00                                            db    0
PAGEDATA:0000000140D53368 00                                            db    0
PAGEDATA:0000000140D53369 00                                            db    0
PAGEDATA:0000000140D5336A 00                                            db    0
PAGEDATA:0000000140D5336B 00                                            db    0
PAGEDATA:0000000140D5336C 00                                            db    0
PAGEDATA:0000000140D5336D 00                                            db    0
PAGEDATA:0000000140D5336E 00                                            db    0
PAGEDATA:0000000140D5336F 00                                            db    0
PAGEDATA:0000000140D53370 60 00 00 00 00 00 00 00       PspMemoryReserveObjectSizes dq 60h      ; DATA XREF: NtAllocateReserveObject+6B↑r
PAGEDATA:0000000140D53370                                                                       ; NtAllocateReserveObject+AF↑r ...
PAGEDATA:0000000140D53378 58                                            db  58h ; X
PAGEDATA:0000000140D53379 00                                            db    0
PAGEDATA:0000000140D5337A 00                                            db    0
PAGEDATA:0000000140D5337B 00                                            db    0
PAGEDATA:0000000140D5337C 00                                            db    0
PAGEDATA:0000000140D5337D 00                                            db    0
PAGEDATA:0000000140D5337E 00                                            db    0
PAGEDATA:0000000140D5337F 00                                            db    0
PAGEDATA:0000000140D53380 00                            g_kernelCallbacks db    0               ; DATA XREF: ClipInitHandles+14↑o
PAGEDATA:0000000140D53381 00                                            db    0
PAGEDATA:0000000140D53382 00                                            db    0
PAGEDATA:0000000140D53383 00                                            db    0
PAGEDATA:0000000140D53384 00                                            db    0
PAGEDATA:0000000140D53385 00                                            db    0
PAGEDATA:0000000140D53386 00                                            db    0
PAGEDATA:0000000140D53387 00                                            db    0
PAGEDATA:0000000140D53388 00                                            db    0
PAGEDATA:0000000140D53389 00                                            db    0
PAGEDATA:0000000140D5338A 00                                            db    0
PAGEDATA:0000000140D5338B 00                                            db    0
PAGEDATA:0000000140D5338C 00                                            db    0
PAGEDATA:0000000140D5338D 00                                            db    0
PAGEDATA:0000000140D5338E 00                                            db    0
PAGEDATA:0000000140D5338F 00                                            db    0
PAGEDATA:0000000140D53390 00                                            db    0
PAGEDATA:0000000140D53391 00                                            db    0
PAGEDATA:0000000140D53392 00                                            db    0
PAGEDATA:0000000140D53393 00                                            db    0
PAGEDATA:0000000140D53394 00                                            db    0
PAGEDATA:0000000140D53395 00                                            db    0
PAGEDATA:0000000140D53396 00                                            db    0
PAGEDATA:0000000140D53397 00                                            db    0
PAGEDATA:0000000140D53398 00 00 00 00 00 00 00 00       qword_140D53398 dq 0                    ; DATA XREF: SPCallServerHandleGetLicenseChallenge+E2↑r
PAGEDATA:0000000140D533A0 00 00 00 00 00 00 00 00       qword_140D533A0 dq 0                    ; DATA XREF: SPCallServerHandleRemoveLicense+87↑r
PAGEDATA:0000000140D533A8 00 00 00 00 00 00 00 00       qword_140D533A8 dq 0                    ; DATA XREF: SPCallServerHandleUpdateLicense+87↑r
PAGEDATA:0000000140D533B0 00 00 00 00 00 00 00 00       qword_140D533B0 dq 0                    ; DATA XREF: sub_140A48280+7E↑r
PAGEDATA:0000000140D533B8 00                                            db    0
PAGEDATA:0000000140D533B9 00                                            db    0
PAGEDATA:0000000140D533BA 00                                            db    0
PAGEDATA:0000000140D533BB 00                                            db    0
PAGEDATA:0000000140D533BC 00                                            db    0
PAGEDATA:0000000140D533BD 00                                            db    0
PAGEDATA:0000000140D533BE 00                                            db    0
PAGEDATA:0000000140D533BF 00                                            db    0
PAGEDATA:0000000140D533C0 00                                            db    0
PAGEDATA:0000000140D533C1 00                                            db    0
PAGEDATA:0000000140D533C2 00                                            db    0
PAGEDATA:0000000140D533C3 00                                            db    0
PAGEDATA:0000000140D533C4 00                                            db    0
PAGEDATA:0000000140D533C5 00                                            db    0
PAGEDATA:0000000140D533C6 00                                            db    0
PAGEDATA:0000000140D533C7 00                                            db    0
PAGEDATA:0000000140D533C8 00                                            db    0
PAGEDATA:0000000140D533C9 00                                            db    0
PAGEDATA:0000000140D533CA 00                                            db    0
PAGEDATA:0000000140D533CB 00                                            db    0
PAGEDATA:0000000140D533CC 00                                            db    0
PAGEDATA:0000000140D533CD 00                                            db    0
PAGEDATA:0000000140D533CE 00                                            db    0
PAGEDATA:0000000140D533CF 00                                            db    0
PAGEDATA:0000000140D533D0 00                                            db    0
PAGEDATA:0000000140D533D1 00                                            db    0
PAGEDATA:0000000140D533D2 00                                            db    0
PAGEDATA:0000000140D533D3 00                                            db    0
PAGEDATA:0000000140D533D4 00                                            db    0
PAGEDATA:0000000140D533D5 00                                            db    0
PAGEDATA:0000000140D533D6 00                                            db    0
PAGEDATA:0000000140D533D7 00                                            db    0
PAGEDATA:0000000140D533D8 00                                            db    0
PAGEDATA:0000000140D533D9 00                                            db    0
PAGEDATA:0000000140D533DA 00                                            db    0
PAGEDATA:0000000140D533DB 00                                            db    0
PAGEDATA:0000000140D533DC 00                                            db    0
PAGEDATA:0000000140D533DD 00                                            db    0
PAGEDATA:0000000140D533DE 00                                            db    0
PAGEDATA:0000000140D533DF 00                                            db    0
PAGEDATA:0000000140D533E0 00                                            db    0
PAGEDATA:0000000140D533E1 00                                            db    0
PAGEDATA:0000000140D533E2 00                                            db    0
PAGEDATA:0000000140D533E3 00                                            db    0
PAGEDATA:0000000140D533E4 00                                            db    0
PAGEDATA:0000000140D533E5 00                                            db    0
PAGEDATA:0000000140D533E6 00                                            db    0
PAGEDATA:0000000140D533E7 00                                            db    0
PAGEDATA:0000000140D533E8 00 00 00 00 00 00 00 00       qword_140D533E8 dq 0                    ; DATA XREF: SPCallServerHandleIsAppLicensed+329↑r
PAGEDATA:0000000140D533E8                                                                       ; ExpGenuinePolicyPostProcess+104↑r ...
PAGEDATA:0000000140D533F0 00 00 00 00 00 00 00 00       qword_140D533F0 dq 0                    ; DATA XREF: sub_140A49374:loc_140A496C4↑r
PAGEDATA:0000000140D533F8 00 00 00 00 00 00 00 00       qword_140D533F8 dq 0                    ; DATA XREF: SPCallServerHandleGetAppPolicyValue:loc_1407887A5↑r
PAGEDATA:0000000140D533F8                                                                       ; SLQueryLicenseValueInternal+1D3↑r ...
PAGEDATA:0000000140D53400 00 00 00 00 00 00 00 00       qword_140D53400 dq 0                    ; DATA XREF: sub_140A4A29C+1E8↑r
PAGEDATA:0000000140D53408 00 00 00 00 00 00 00 00       qword_140D53408 dq 0                    ; DATA XREF: sub_14066B1EC:loc_14066B36A↑r
PAGEDATA:0000000140D53410 00 00 00 00 00 00 00 00       qword_140D53410 dq 0                    ; DATA XREF: sub_140A48FC0+220↑r
PAGEDATA:0000000140D53418 00 00 00 00 00 00 00 00       qword_140D53418 dq 0                    ; DATA XREF: SPCallServerHandleClepSign+B1↑r
PAGEDATA:0000000140D53420 00 00 00 00 00 00 00 00       qword_140D53420 dq 0                    ; DATA XREF: SPCallServerHandleClepKdf+DB↑r
PAGEDATA:0000000140D53420                                                                       ; sub_140A476D4+189↑r
PAGEDATA:0000000140D53428 00 00 00 00 00 00 00 00       qword_140D53428 dq 0                    ; DATA XREF: ExpGenuinePolicyPostProcess:loc_1409F70D1↑r
PAGEDATA:0000000140D53430 00 00 00 00 00 00 00 00       qword_140D53430 dq 0                    ; DATA XREF: NtCreateUserProcess+464↑r
PAGEDATA:0000000140D53438 00 00 00 00 00 00 00 00       qword_140D53438 dq 0                    ; DATA XREF: sub_140A484C0:loc_140A4868C↑r
PAGEDATA:0000000140D53440 00 00 00 00 00 00 00 00       qword_140D53440 dq 0                    ; DATA XREF: sub_140A48A10:loc_140A48C35↑r
PAGEDATA:0000000140D53448 00 00 00 00 00 00 00 00       qword_140D53448 dq 0                    ; DATA XREF: sub_140A49D04+3CD↑r
PAGEDATA:0000000140D53450 00 00 00 00 00 00 00 00       qword_140D53450 dq 0                    ; DATA XREF: sub_140A4A6B8+291↑r
PAGEDATA:0000000140D53458 00 00 00 00 00 00 00 00       qword_140D53458 dq 0                    ; DATA XREF: SPCallServerHandleCheckLicense+93↑r
PAGEDATA:0000000140D53460 00                                            db    0
PAGEDATA:0000000140D53461 00                                            db    0
PAGEDATA:0000000140D53462 00                                            db    0
PAGEDATA:0000000140D53463 00                                            db    0
PAGEDATA:0000000140D53464 00                                            db    0
PAGEDATA:0000000140D53465 00                                            db    0
PAGEDATA:0000000140D53466 00                                            db    0
PAGEDATA:0000000140D53467 00                                            db    0
PAGEDATA:0000000140D53468 00 00 00 00 00 00 00 00       qword_140D53468 dq 0                    ; DATA XREF: SPCallServerHandleGetCurrentHardwareID:loc_1403D0360↑r
PAGEDATA:0000000140D53470 00                                            db    0
PAGEDATA:0000000140D53471 00                                            db    0
PAGEDATA:0000000140D53472 00                                            db    0
PAGEDATA:0000000140D53473 00                                            db    0
PAGEDATA:0000000140D53474 00                                            db    0
PAGEDATA:0000000140D53475 00                                            db    0
PAGEDATA:0000000140D53476 00                                            db    0
PAGEDATA:0000000140D53477 00                                            db    0
PAGEDATA:0000000140D53478 00                                            db    0
PAGEDATA:0000000140D53479 00                                            db    0
PAGEDATA:0000000140D5347A 00                                            db    0
PAGEDATA:0000000140D5347B 00                                            db    0
PAGEDATA:0000000140D5347C 00                                            db    0
PAGEDATA:0000000140D5347D 00                                            db    0
PAGEDATA:0000000140D5347E 00                                            db    0
PAGEDATA:0000000140D5347F 00                                            db    0
PAGEDATA:0000000140D53480 00                                            db    0
PAGEDATA:0000000140D53481 00                                            db    0
PAGEDATA:0000000140D53482 00                                            db    0
PAGEDATA:0000000140D53483 00                                            db    0
PAGEDATA:0000000140D53484 00                                            db    0
PAGEDATA:0000000140D53485 00                                            db    0
PAGEDATA:0000000140D53486 00                                            db    0
PAGEDATA:0000000140D53487 00                                            db    0
PAGEDATA:0000000140D53488 00 00 00 00 00 00 00 00       qword_140D53488 dq 0                    ; DATA XREF: sub_1406DC290+1EB9↑r
PAGEDATA:0000000140D53490 00 00 00 00 00 00 00 00       qword_140D53490 dq 0                    ; DATA XREF: sub_140A47AC4:loc_140A47BD5↑r
PAGEDATA:0000000140D53498 00 00 00 00 00 00 00 00       qword_140D53498 dq 0                    ; DATA XREF: sub_140A476D4+197↑r
PAGEDATA:0000000140D534A0 00 00 00 00 00 00 00 00       qword_140D534A0 dq 0                    ; DATA XREF: ClipInitHandles+D↑w
PAGEDATA:0000000140D534A0                                                                       ; SPCallServerHandleUpdatePolicies+BB↑r
PAGEDATA:0000000140D534A8 00 00 00 00 00 00 00 00       qword_140D534A8 dq 0                    ; DATA XREF: ClipInitHandles+22↑w
PAGEDATA:0000000140D534A8                                                                       ; sub_1406DF1C0:loc_1406DF4A0↑r ...
PAGEDATA:0000000140D534B0 00 00 00 00 00 00 00 00       qword_140D534B0 dq 0                    ; DATA XREF: ClipInitHandles+30↑w
PAGEDATA:0000000140D534B0                                                                       ; sub_140A4A6B8+266↑r
PAGEDATA:0000000140D534B8 00 00 00 00 00 00 00 00       qword_140D534B8 dq 0                    ; DATA XREF: ClipInitHandles+3E↑w
PAGEDATA:0000000140D534B8                                                                       ; sub_1406DC290:loc_1406DD152↑r ...
PAGEDATA:0000000140D534C0 00                                            db    0
PAGEDATA:0000000140D534C1 00                                            db    0
PAGEDATA:0000000140D534C2 00                                            db    0
PAGEDATA:0000000140D534C3 00                                            db    0
PAGEDATA:0000000140D534C4 00                                            db    0
PAGEDATA:0000000140D534C5 00                                            db    0
PAGEDATA:0000000140D534C6 00                                            db    0
PAGEDATA:0000000140D534C7 00                                            db    0
PAGEDATA:0000000140D534C8 00                                            db    0
PAGEDATA:0000000140D534C9 00                                            db    0
PAGEDATA:0000000140D534CA 00                                            db    0
PAGEDATA:0000000140D534CB 00                                            db    0
PAGEDATA:0000000140D534CC 00                                            db    0
PAGEDATA:0000000140D534CD 00                                            db    0
PAGEDATA:0000000140D534CE 00                                            db    0
PAGEDATA:0000000140D534CF 00                                            db    0
PAGEDATA:0000000140D534D0 00                                            db    0
PAGEDATA:0000000140D534D1 00                                            db    0
PAGEDATA:0000000140D534D2 00                                            db    0
PAGEDATA:0000000140D534D3 00                                            db    0
PAGEDATA:0000000140D534D4 00                                            db    0
PAGEDATA:0000000140D534D5 00                                            db    0
PAGEDATA:0000000140D534D6 00                                            db    0
PAGEDATA:0000000140D534D7 00                                            db    0
PAGEDATA:0000000140D534D8 00                                            db    0
PAGEDATA:0000000140D534D9 00                                            db    0
PAGEDATA:0000000140D534DA 00                                            db    0
PAGEDATA:0000000140D534DB 00                                            db    0
PAGEDATA:0000000140D534DC 00                                            db    0
PAGEDATA:0000000140D534DD 00                                            db    0
PAGEDATA:0000000140D534DE 00                                            db    0
PAGEDATA:0000000140D534DF 00                                            db    0
PAGEDATA:0000000140D534E0 00 00 00 00 00 00 00 00       qword_140D534E0 dq 0                    ; DATA XREF: ExpTimeRefreshWork+29↑r
PAGEDATA:0000000140D534E8 00 00 00 00 00 00 00 00       qword_140D534E8 dq 0                    ; DATA XREF: ExpWatchProductTypeWork+220↑r
PAGEDATA:0000000140D534F0 00 00 00 00 00 00 00 00       qword_140D534F0 dq 0                    ; DATA XREF: ntoskrnl_27+13↑r
PAGEDATA:0000000140D534F8 00 00 00 00 00 00 00 00       qword_140D534F8 dq 0                    ; DATA XREF: ExUpdateOsPfnInRegistry+19↑r
PAGEDATA:0000000140D53500 00                                            db    0
PAGEDATA:0000000140D53501 00                                            db    0
PAGEDATA:0000000140D53502 00                                            db    0
PAGEDATA:0000000140D53503 00                                            db    0
PAGEDATA:0000000140D53504 00                                            db    0
PAGEDATA:0000000140D53505 00                                            db    0
PAGEDATA:0000000140D53506 00                                            db    0
PAGEDATA:0000000140D53507 00                                            db    0
PAGEDATA:0000000140D53508 00 00 00 00 00 00 00 00       qword_140D53508 dq 0                    ; DATA XREF: ExSetLicenseTamperState+E9↑r
PAGEDATA:0000000140D53510 00 00 00 00 00 00 00 00       qword_140D53510 dq 0                    ; DATA XREF: ExUpdateLicenseData+19↑r
PAGEDATA:0000000140D53510                                                                       ; ExInitLicenseData+1D2↑r
PAGEDATA:0000000140D53518 00 00 00 00 00 00 00 00                       align 20h
PAGEDATA:0000000140D53520 D0 69 77 40 01 00 00 00       funcs_1406DC7FD dq offset sub_1407769D0 ; DATA XREF: sub_1406DC290+539↑r
PAGEDATA:0000000140D53520                                                                       ; sub_1406DC290+585↑r ...
PAGEDATA:0000000140D53528 B0 C8 75 40 01 00 00 00                       dq offset sub_14075C8B0
PAGEDATA:0000000140D53530 70 B5 75 40 01 00 00 00                       dq offset sub_14075B570
PAGEDATA:0000000140D53538 30 84 76 40 01 00 00 00                       dq offset sub_140768430
PAGEDATA:0000000140D53540 A0 78 77 40 01 00 00 00                       dq offset sub_1407778A0
PAGEDATA:0000000140D53548 60 CE 75 40 01 00 00 00                       dq offset sub_14075CE60
PAGEDATA:0000000140D53550 20 FA 75 40 01 00 00 00                       dq offset sub_14075FA20
PAGEDATA:0000000140D53558 A0 1C 77 40 01 00 00 00                       dq offset sub_140771CA0
PAGEDATA:0000000140D53560 90 B7 76 40 01 00 00 00                       dq offset sub_14076B790
PAGEDATA:0000000140D53568 20 86 75 40 01 00 00 00                       dq offset sub_140758620
PAGEDATA:0000000140D53570 80 89 76 40 01 00 00 00                       dq offset sub_140768980
PAGEDATA:0000000140D53578 E0 97 75 40 01 00 00 00                       dq offset sub_1407597E0
PAGEDATA:0000000140D53580 10 0C 76 40 01 00 00 00                       dq offset sub_140760C10
PAGEDATA:0000000140D53588 70 FD 76 40 01 00 00 00                       dq offset sub_14076FD70
PAGEDATA:0000000140D53590 30 B0 75 40 01 00 00 00                       dq offset sub_14075B030
PAGEDATA:0000000140D53598 20 84 75 40 01 00 00 00                       dq offset sub_140758420
PAGEDATA:0000000140D535A0 20 BB 76 40 01 00 00 00                       dq offset sub_14076BB20
PAGEDATA:0000000140D535A8 A0 C1 76 40 01 00 00 00                       dq offset sub_14076C1A0
PAGEDATA:0000000140D535B0 50 8E 76 40 01 00 00 00                       dq offset sub_140768E50
PAGEDATA:0000000140D535B8 40 C2 76 40 01 00 00 00                       dq offset sub_14076C240
PAGEDATA:0000000140D535C0 00 03 76 40 01 00 00 00                       dq offset sub_140760300
PAGEDATA:0000000140D535C8 60 0D 76 40 01 00 00 00                       dq offset sub_140760D60
PAGEDATA:0000000140D535D0 D0 18 76 40 01 00 00 00                       dq offset sub_1407618D0
PAGEDATA:0000000140D535D8 50 8E 76 40 01 00 00 00                       dq offset sub_140768E50
PAGEDATA:0000000140D535E0 30 C9 75 40 01 00 00 00                       dq offset sub_14075C930
PAGEDATA:0000000140D535E8 C0 B6 75 40 01 00 00 00                       dq offset sub_14075B6C0
PAGEDATA:0000000140D535F0 E0 CE 75 40 01 00 00 00                       dq offset sub_14075CEE0
PAGEDATA:0000000140D535F8 E0 0B 76 40 01 00 00 00                       dq offset sub_140760BE0
PAGEDATA:0000000140D53600 A0 AF 76 40 01 00 00 00                       dq offset sub_14076AFA0
PAGEDATA:0000000140D53608 B0 0B 76 40 01 00 00 00                       dq offset sub_140760BB0
PAGEDATA:0000000140D53610 90 FB 75 40 01 00 00 00                       dq offset sub_14075FB90
PAGEDATA:0000000140D53618 00                            ExpFullProcessInfoInit db    0          ; DATA XREF: ExCheckFullProcessInformationAccess+37↑o
PAGEDATA:0000000140D53619 00                                            db    0
PAGEDATA:0000000140D5361A 00                                            db    0
PAGEDATA:0000000140D5361B 00                                            db    0
PAGEDATA:0000000140D5361C 00                                            db    0
PAGEDATA:0000000140D5361D 00                                            db    0
PAGEDATA:0000000140D5361E 00                                            db    0
PAGEDATA:0000000140D5361F 00                                            db    0
PAGEDATA:0000000140D53620 00                            ExpBootEntropyInit db    0              ; DATA XREF: ExQueryBootEntropyInformation+18↑o
PAGEDATA:0000000140D53621 00                                            db    0
PAGEDATA:0000000140D53622 00                                            db    0
PAGEDATA:0000000140D53623 00                                            db    0
PAGEDATA:0000000140D53624 00                                            db    0
PAGEDATA:0000000140D53625 00                                            db    0
PAGEDATA:0000000140D53626 00                                            db    0
PAGEDATA:0000000140D53627 00                                            db    0
PAGEDATA:0000000140D53628 00 DD A7 40 01 00 00 00       PfSnActivityScenarioTypePrefix dq offset aActivity ; "Activity"
PAGEDATA:0000000140D53630 E8 DC A7 40 01 00 00 00       PfSnAppLaunchScenarioTypePrefix dq offset aApplaunch ; "AppLaunch"
PAGEDATA:0000000140D53638 00 00 00 00 00 00 00 00       CmpAsyncKernelPostList dq 0             ; DATA XREF: CmpNotifyChangeKey+17D↑o
PAGEDATA:0000000140D53638                                                                       ; CmInitSystem1+159↑o ...
PAGEDATA:0000000140D53640 00 00 00 00 00 00 00 00       qword_140D53640 dq 0                    ; DATA XREF: CmpNotifyChangeKey+176↑r
PAGEDATA:0000000140D53640                                                                       ; CmpNotifyChangeKey+19B↑w ...
PAGEDATA:0000000140D53648 48 36 D5 40 01 00 00 00       ExpWnfProcessesListHead dq offset ExpWnfProcessesListHead
PAGEDATA:0000000140D53648                                                                       ; DATA XREF: ExpWnfCreateProcessContext+BF↑o
PAGEDATA:0000000140D53648                                                                       ; PAGEDATA:ExpWnfProcessesListHead↓o ...
PAGEDATA:0000000140D53650 48 36 D5 40 01 00 00 00       off_140D53650   dq offset ExpWnfProcessesListHead
PAGEDATA:0000000140D53650                                                                       ; DATA XREF: ExpWnfCreateProcessContext:loc_1407816EC↑r
PAGEDATA:0000000140D53650                                                                       ; ExpWnfCreateProcessContext+DD↑w
PAGEDATA:0000000140D53658 82                            unk_140D53658   db  82h                 ; DATA XREF: SpRegOpenRedirectedKey+6A↑o
PAGEDATA:0000000140D53659 00                                            db    0
PAGEDATA:0000000140D5365A 84                                            db  84h
PAGEDATA:0000000140D5365B 00                                            db    0
PAGEDATA:0000000140D5365C 00                                            db    0
PAGEDATA:0000000140D5365D 00                                            db    0
PAGEDATA:0000000140D5365E 00                                            db    0
PAGEDATA:0000000140D5365F 00                                            db    0
PAGEDATA:0000000140D53660 80 F0 A7 40 01 00 00 00                       dq offset aRegistryMachin_37 ; "\\Registry\\Machine\\System\\CurrentCon"...
PAGEDATA:0000000140D53668 24 00 26 00 00 00                             text "UTF-16LE", '$&',0
PAGEDATA:0000000140D5366E 00 00                                         align 10h
PAGEDATA:0000000140D53670 78 F5 A7 40 01 00 00 00       off_140D53670   dq offset aClipproductopt
PAGEDATA:0000000140D53670                                                                       ; DATA XREF: SpRegOpenRedirectedKey+19↑r
PAGEDATA:0000000140D53670                                                                       ; SpRegOpenRedirectedKey:loc_1409255FF↑r
PAGEDATA:0000000140D53670                                                                       ; "ClipProductOptions"
PAGEDATA:0000000140D53678 0A                            ContainedCapes  db  0Ah                 ; DATA XREF: SepReadSingleCap+63↑o
PAGEDATA:0000000140D53678                                                                       ; SepReadSingleCap+25E↑o
PAGEDATA:0000000140D53679 00                                            db    0
PAGEDATA:0000000140D5367A 0C                                            db  0Ch
PAGEDATA:0000000140D5367B 00                                            db    0
PAGEDATA:0000000140D5367C 00                                            db    0
PAGEDATA:0000000140D5367D 00                                            db    0
PAGEDATA:0000000140D5367E 00                                            db    0
PAGEDATA:0000000140D5367F 00                                            db    0
PAGEDATA:0000000140D53680 F0 65 04 40 01 00 00 00                       dq offset aCapes        ; "CAPEs"
PAGEDATA:0000000140D53688 0A                            CapeFlags       db  0Ah                 ; DATA XREF: SepReadAndPopulateCapes+CB92F↑o
PAGEDATA:0000000140D53688                                                                       ; SepReadSingleCap+13D↑o
PAGEDATA:0000000140D53689 00                                            db    0
PAGEDATA:0000000140D5368A 0C                                            db  0Ch
PAGEDATA:0000000140D5368B 00                                            db    0
PAGEDATA:0000000140D5368C 00                                            db    0
PAGEDATA:0000000140D5368D 00                                            db    0
PAGEDATA:0000000140D5368E 00                                            db    0
PAGEDATA:0000000140D5368F 00                                            db    0
PAGEDATA:0000000140D53690 28 66 04 40 01 00 00 00                       dq offset aFlags        ; "Flags"
PAGEDATA:0000000140D53698 10                            CapeStagedSD    db  10h                 ; DATA XREF: SepReadAndPopulateCapes+CB81D↑o
PAGEDATA:0000000140D53698                                                                       ; SepReadAndPopulateCapes+CBAD6↑o
PAGEDATA:0000000140D53699 00                                            db    0
PAGEDATA:0000000140D5369A 12                                            db  12h
PAGEDATA:0000000140D5369B 00                                            db    0
PAGEDATA:0000000140D5369C 00                                            db    0
PAGEDATA:0000000140D5369D 00                                            db    0
PAGEDATA:0000000140D5369E 00                                            db    0
PAGEDATA:0000000140D5369F 00                                            db    0
PAGEDATA:0000000140D536A0 38 66 04 40 01 00 00 00                       dq offset aStagedsd     ; "StagedSD"
PAGEDATA:0000000140D536A8 0A                            CapSid          db  0Ah                 ; DATA XREF: SepReadSingleCap+E8↑o
PAGEDATA:0000000140D536A8                                                                       ; SepReadSingleCap+1F8↑o
PAGEDATA:0000000140D536A9 00                                            db    0
PAGEDATA:0000000140D536AA 0C                                            db  0Ch
PAGEDATA:0000000140D536AB 00                                            db    0
PAGEDATA:0000000140D536AC 00                                            db    0
PAGEDATA:0000000140D536AD 00                                            db    0
PAGEDATA:0000000140D536AE 00                                            db    0
PAGEDATA:0000000140D536AF 00                                            db    0
PAGEDATA:0000000140D536B0 00 66 04 40 01 00 00 00                       dq offset aCapid        ; "CAPID"
PAGEDATA:0000000140D536B8 04                            CapeSD          db    4                 ; DATA XREF: SepReadAndPopulateCapes+CB7D7↑o
PAGEDATA:0000000140D536B8                                                                       ; SepReadAndPopulateCapes+CBA50↑o
PAGEDATA:0000000140D536B9 00                                            db    0
PAGEDATA:0000000140D536BA 06                                            db    6
PAGEDATA:0000000140D536BB 00                                            db    0
PAGEDATA:0000000140D536BC 00                                            db    0
PAGEDATA:0000000140D536BD 00                                            db    0
PAGEDATA:0000000140D536BE 00                                            db    0
PAGEDATA:0000000140D536BF 00                                            db    0
PAGEDATA:0000000140D536C0 3C C8 01 40 01 00 00 00                       dq offset aSd           ; "SD"
PAGEDATA:0000000140D536C8 12                            CapePredicate   db  12h                 ; DATA XREF: SepReadAndPopulateCapes+CB7AB↑o
PAGEDATA:0000000140D536C8                                                                       ; SepReadAndPopulateCapes+CB9E0↑o
PAGEDATA:0000000140D536C9 00                                            db    0
PAGEDATA:0000000140D536CA 14                                            db  14h
PAGEDATA:0000000140D536CB 00                                            db    0
PAGEDATA:0000000140D536CC 00                                            db    0
PAGEDATA:0000000140D536CD 00                                            db    0
PAGEDATA:0000000140D536CE 00                                            db    0
PAGEDATA:0000000140D536CF 00                                            db    0
PAGEDATA:0000000140D536D0 10 66 04 40 01 00 00 00                       dq offset aAppliesto    ; "AppliesTo"
PAGEDATA:0000000140D536D8 90 F7 00 40 01 00 00 00       off_140D536D8   dq offset DEVPKEY_Device_LowerFilters
PAGEDATA:0000000140D536D8                                                                       ; DATA XREF: PpDevCfgProcessDeviceExtensions+37E↑o
PAGEDATA:0000000140D536D8                                                                       ; PpDevCfgProcessDeviceExtensions+434↑o
PAGEDATA:0000000140D536E0 A8 F7 00 40 01 00 00 00                       dq offset DEVPKEY_Device_UpperFilters
PAGEDATA:0000000140D536E8 40 F1 01 40 01 00 00 00                       dq offset DEVPKEY_Device_DriverIncludedInfs
PAGEDATA:0000000140D536F0 F0 CE 03 40 01 00 00 00                       dq offset DEVPKEY_Device_DriverIncludedConfigs
PAGEDATA:0000000140D536F8                               aBd:                                    ; DATA XREF: sub_1406DF1C0+747↑o
PAGEDATA:0000000140D536F8 42 00 44 00 00 00                             text "UTF-16LE", 'BD',0
PAGEDATA:0000000140D536FE 00                                            db    0
PAGEDATA:0000000140D536FF 00                                            db    0
PAGEDATA:0000000140D53700 00 11 A8 40 01 00 00 00                       dq offset aKernelNongenui ; "Kernel-NonGenuineNotificationType"
PAGEDATA:0000000140D53708                               aLn:                                    ; DATA XREF: sub_1406DF1C0+7C5↑o
PAGEDATA:0000000140D53708 4C 00 4E 00 00 00                             text "UTF-16LE", 'LN',0
PAGEDATA:0000000140D5370E 00 00                                         align 10h
PAGEDATA:0000000140D53710 A0 0F A8 40 01 00 00 00                       dq offset aKernelNongenui_0 ; "Kernel-NonGenuineNotificationStringIds"
PAGEDATA:0000000140D53718 16                            DefaultCapeName db  16h                 ; DATA XREF: SepBuildDefaultCape+27↑r
PAGEDATA:0000000140D53719 00                                            db    0
PAGEDATA:0000000140D5371A 18                                            db  18h
PAGEDATA:0000000140D5371B 00                                            db    0
PAGEDATA:0000000140D5371C 00                                            db    0
PAGEDATA:0000000140D5371D 00                                            db    0
PAGEDATA:0000000140D5371E 00                                            db    0
PAGEDATA:0000000140D5371F 00                                            db    0
PAGEDATA:0000000140D53720 B0 38 02 40 01 00 00 00                       dq offset aDefaultcape  ; "DefaultCape"
PAGEDATA:0000000140D53728 14                            DefaultCapName  db  14h                 ; DATA XREF: SepBuildDefaultCap+58↑r
PAGEDATA:0000000140D53729 00                                            db    0
PAGEDATA:0000000140D5372A 16                                            db  16h
PAGEDATA:0000000140D5372B 00                                            db    0
PAGEDATA:0000000140D5372C 00                                            db    0
PAGEDATA:0000000140D5372D 00                                            db    0
PAGEDATA:0000000140D5372E 00                                            db    0
PAGEDATA:0000000140D5372F 00                                            db    0
PAGEDATA:0000000140D53730 C8 38 02 40 01 00 00 00                       dq offset aDefaultcap   ; "DefaultCap"
PAGEDATA:0000000140D53738 98 8A 01 40 01 00 00 00       PopPowerRequestStatsVerboseProcessList dq offset aSvchost
PAGEDATA:0000000140D53738                                                                       ; DATA XREF: PopPowerRequestStatsIsDetailedRequestReason+59↑o
PAGEDATA:0000000140D53738                                                                       ; "svchost"
PAGEDATA:0000000140D53740 A0 8A 01 40 01 00 00 00                       dq offset aTeProcesshost ; "te.processhost"
PAGEDATA:0000000140D53748 D0 5B A7 40 01 00 00 00       CmpWellKnownVolumeList dq offset CmSystemRootPath
PAGEDATA:0000000140D53748                                                                       ; DATA XREF: CmShutdownSystem2+132↑o
PAGEDATA:0000000140D53748                                                                       ; CmShutdownSystem2+139↑r ...
PAGEDATA:0000000140D53750 00                                            db    0
PAGEDATA:0000000140D53751 00                                            db    0
PAGEDATA:0000000140D53752 00                                            db    0
PAGEDATA:0000000140D53753 00                                            db    0
PAGEDATA:0000000140D53754 00                                            db    0
PAGEDATA:0000000140D53755 00                                            db    0
PAGEDATA:0000000140D53756 00                                            db    0
PAGEDATA:0000000140D53757 00                                            db    0
PAGEDATA:0000000140D53758 C0 5B A7 40 01 00 00 00                       dq offset CmOSDataRootPath
PAGEDATA:0000000140D53760 00                                            db    0
PAGEDATA:0000000140D53761 00                                            db    0
PAGEDATA:0000000140D53762 00                                            db    0
PAGEDATA:0000000140D53763 00                                            db    0
PAGEDATA:0000000140D53764 00                                            db    0
PAGEDATA:0000000140D53765 00                                            db    0
PAGEDATA:0000000140D53766 00                                            db    0
PAGEDATA:0000000140D53767 00                                            db    0
PAGEDATA:0000000140D53768 00                                            db    0
PAGEDATA:0000000140D53769 00                                            db    0
PAGEDATA:0000000140D5376A 00                                            db    0
PAGEDATA:0000000140D5376B 00                                            db    0
PAGEDATA:0000000140D5376C 00                                            db    0
PAGEDATA:0000000140D5376D 00                                            db    0
PAGEDATA:0000000140D5376E 00                                            db    0
PAGEDATA:0000000140D5376F 00                                            db    0
PAGEDATA:0000000140D53770 00                                            db    0
PAGEDATA:0000000140D53771 00                                            db    0
PAGEDATA:0000000140D53772 00                                            db    0
PAGEDATA:0000000140D53773 00                                            db    0
PAGEDATA:0000000140D53774 00                                            db    0
PAGEDATA:0000000140D53775 00                                            db    0
PAGEDATA:0000000140D53776 00                                            db    0
PAGEDATA:0000000140D53777 00                                            db    0
PAGEDATA:0000000140D53778 B0 E4 00 40 01 00 00 00       off_140D53778   dq offset DEVPKEY_Device_HardwareIds
PAGEDATA:0000000140D53778                                                                       ; DATA XREF: PiDevCfgInitDeviceContext+67↑o
PAGEDATA:0000000140D53780 08 EC 00 40 01 00 00 00                       dq offset DEVPKEY_Device_CompatibleIds
PAGEDATA:0000000140D53788 20 EC 00 40 01 00 00 00                       dq offset DEVPKEY_Device_LocationPaths
PAGEDATA:0000000140D53790 E9 FD 04 00 3F 00 FD FF 3F 00 Utf8TableInfo   xmmword 3F003FFFFD003F0004FDE9h
PAGEDATA:0000000140D53790 3F 00 00 00 00 00                                                     ; DATA XREF: RtlAnsiCharToUnicodeChar:loc_1406EA75C↑o
PAGEDATA:0000000140D53790                                                                       ; RtlUnicodeToMultiByteN:loc_1407A3701↑o ...
PAGEDATA:0000000140D537A0 00 00 00 00 00 00 00 00 00 00…xmmword_140D537A0 xmmword 0             ; DATA XREF: RtlInitCodePageTable+FFCD7↑r
PAGEDATA:0000000140D537B0 00 00 00 00 00 00 00 00 00 00…xmmword_140D537B0 xmmword 0             ; DATA XREF: RtlInitCodePageTable+FFCE2↑r
PAGEDATA:0000000140D537C0 00 00 00 00 00 00 00 00 00 00…xmmword_140D537C0 xmmword 0             ; DATA XREF: RtlInitCodePageTable+FFCED↑r
PAGEDATA:0000000140D537D0 E0 16 01 40 01 00 00 00       off_140D537D0   dq offset DEVPKEY_Device_FriendlyName
PAGEDATA:0000000140D537D0                                                                       ; DATA XREF: PiDevCfgConfigurePropertyMatchCallback+12↑r
PAGEDATA:0000000140D537D0                                                                       ; PiDevCfgConfigurePropertyMatchCallback+31↑o
PAGEDATA:0000000140D537D8 88 F7 01 40 01 00 00 00                       dq offset DEVPKEY_Device_UINumber
PAGEDATA:0000000140D537E0 A8 F7 00 40 01 00 00 00                       dq offset DEVPKEY_Device_UpperFilters
PAGEDATA:0000000140D537E8 90 F7 00 40 01 00 00 00                       dq offset DEVPKEY_Device_LowerFilters
PAGEDATA:0000000140D537F0 E0 F6 01 40 01 00 00 00                       dq offset DEVPKEY_Device_SecuritySDS
PAGEDATA:0000000140D537F8 C8 F6 01 40 01 00 00 00                       dq offset DEVPKEY_Device_DevType
PAGEDATA:0000000140D53800 10 F7 01 40 01 00 00 00                       dq offset DEVPKEY_Device_Exclusive
PAGEDATA:0000000140D53808 F8 F6 01 40 01 00 00 00                       dq offset DEVPKEY_Device_Characteristics
PAGEDATA:0000000140D53810 68 F6 01 40 01 00 00 00                       dq offset DEVPKEY_Device_UINumberDescFormat
PAGEDATA:0000000140D53818 20 F6 01 40 01 00 00 00                       dq offset DEVPKEY_Device_RemovalPolicyOverride
PAGEDATA:0000000140D53820 06                            PopAdaptiveSystemPowerStateToBootState db    6
PAGEDATA:0000000140D53820                                                                       ; DATA XREF: PopAdaptiveGetSystemInitiatedRebootTargetState+71↑o
PAGEDATA:0000000140D53821 00                                            db    0
PAGEDATA:0000000140D53822 00                                            db    0
PAGEDATA:0000000140D53823 00                                            db    0
PAGEDATA:0000000140D53824 07                                            db    7
PAGEDATA:0000000140D53825 00                                            db    0
PAGEDATA:0000000140D53826 00                                            db    0
PAGEDATA:0000000140D53827 00                                            db    0
PAGEDATA:0000000140D53828 02                                            db    2
PAGEDATA:0000000140D53829 00                                            db    0
PAGEDATA:0000000140D5382A 00                                            db    0
PAGEDATA:0000000140D5382B 00                                            db    0
PAGEDATA:0000000140D5382C 03                                            db    3
PAGEDATA:0000000140D5382D 00                                            db    0
PAGEDATA:0000000140D5382E 00                                            db    0
PAGEDATA:0000000140D5382F 00                                            db    0
PAGEDATA:0000000140D53830 04                                            db    4
PAGEDATA:0000000140D53831 00                                            db    0
PAGEDATA:0000000140D53832 00                                            db    0
PAGEDATA:0000000140D53833 00                                            db    0
PAGEDATA:0000000140D53834 05                                            db    5
PAGEDATA:0000000140D53835 00                                            db    0
PAGEDATA:0000000140D53836 00                                            db    0
PAGEDATA:0000000140D53837 00                                            db    0
PAGEDATA:0000000140D53838 07                                            db    7
PAGEDATA:0000000140D53839 00                                            db    0
PAGEDATA:0000000140D5383A 00                                            db    0
PAGEDATA:0000000140D5383B 00                                            db    0
PAGEDATA:0000000140D5383C 00                                            db    0
PAGEDATA:0000000140D5383D 00                                            db    0
PAGEDATA:0000000140D5383E 00                                            db    0
PAGEDATA:0000000140D5383F 00                                            db    0
PAGEDATA:0000000140D53840 07                            PopAdaptiveBootstateToSystemPowerState db    7
PAGEDATA:0000000140D53840                                                                       ; DATA XREF: PopSystemIdleEventHandler:loc_14092F745↑o
PAGEDATA:0000000140D53841 00                                            db    0
PAGEDATA:0000000140D53842 00                                            db    0
PAGEDATA:0000000140D53843 00                                            db    0
PAGEDATA:0000000140D53844 07                                            db    7
PAGEDATA:0000000140D53845 00                                            db    0
PAGEDATA:0000000140D53846 00                                            db    0
PAGEDATA:0000000140D53847 00                                            db    0
PAGEDATA:0000000140D53848 02                                            db    2
PAGEDATA:0000000140D53849 00                                            db    0
PAGEDATA:0000000140D5384A 00                                            db    0
PAGEDATA:0000000140D5384B 00                                            db    0
PAGEDATA:0000000140D5384C 03                                            db    3
PAGEDATA:0000000140D5384D 00                                            db    0
PAGEDATA:0000000140D5384E 00                                            db    0
PAGEDATA:0000000140D5384F 00                                            db    0
PAGEDATA:0000000140D53850 04                                            db    4
PAGEDATA:0000000140D53851 00                                            db    0
PAGEDATA:0000000140D53852 00                                            db    0
PAGEDATA:0000000140D53853 00                                            db    0
PAGEDATA:0000000140D53854 05                                            db    5
PAGEDATA:0000000140D53855 00                                            db    0
PAGEDATA:0000000140D53856 00                                            db    0
PAGEDATA:0000000140D53857 00                                            db    0
PAGEDATA:0000000140D53858 00                                            db    0
PAGEDATA:0000000140D53859 00                                            db    0
PAGEDATA:0000000140D5385A 00                                            db    0
PAGEDATA:0000000140D5385B 00                                            db    0
PAGEDATA:0000000140D5385C 00                                            db    0
PAGEDATA:0000000140D5385D 00                                            db    0
PAGEDATA:0000000140D5385E 00                                            db    0
PAGEDATA:0000000140D5385F 00                                            db    0
PAGEDATA:0000000140D53860                               UNIDENTIFIED_DRIVER:                    ; DATA XREF: PopPowerRequestStatsGetIdForRequest+170↑o
PAGEDATA:0000000140D53860 55 00 6E 00 69 00 64 00 65 00…                text "UTF-16LE", 'Unidentified Driver',0
PAGEDATA:0000000140D53888 00 00 00 00                   dword_140D53888 dd 0                    ; DATA XREF: IoGetConfigurationInformation↑o
PAGEDATA:0000000140D53888                                                                       ; ExpQuerySystemInformation:loc_1408B6211↑r
PAGEDATA:0000000140D5388C 00 00 00 00                   dword_140D5388C dd 0                    ; DATA XREF: ExpQuerySystemInformation+209F79↑r
PAGEDATA:0000000140D53890 00 00 00 00                   dword_140D53890 dd 0                    ; DATA XREF: ExpQuerySystemInformation+209F82↑r
PAGEDATA:0000000140D53894 00 00 00 00                   dword_140D53894 dd 0                    ; DATA XREF: ExpQuerySystemInformation+209F8B↑r
PAGEDATA:0000000140D53898 00                                            db    0
PAGEDATA:0000000140D53899 00                                            db    0
PAGEDATA:0000000140D5389A 00                                            db    0
PAGEDATA:0000000140D5389B 00                                            db    0
PAGEDATA:0000000140D5389C 00 00 00 00                   dword_140D5389C dd 0                    ; DATA XREF: ExpQuerySystemInformation+209F94↑r
PAGEDATA:0000000140D538A0 00 00 00 00                   dword_140D538A0 dd 0                    ; DATA XREF: ExpQuerySystemInformation+209F9D↑r
PAGEDATA:0000000140D538A4 00 00 00 00                                   align 8
PAGEDATA:0000000140D538A8 28                                            db  28h ; (
PAGEDATA:0000000140D538A9 00                                            db    0
PAGEDATA:0000000140D538AA 00                                            db    0
PAGEDATA:0000000140D538AB 00                                            db    0
PAGEDATA:0000000140D538AC 00                                            db    0
PAGEDATA:0000000140D538AD 00                                            db    0
PAGEDATA:0000000140D538AE 00                                            db    0
PAGEDATA:0000000140D538AF 00                                            db    0
PAGEDATA:0000000140D538B0                               UNIDENTIFIED_PROCESS:                   ; DATA XREF: PopPowerRequestStatsGetIdForRequest:loc_14073C578↑o
PAGEDATA:0000000140D538B0 55 00 6E 00 69 00 64 00 65 00…                text "UTF-16LE", 'Unidentified Process',0
PAGEDATA:0000000140D538DA 00 00 00 00 00 00                             align 20h
PAGEDATA:0000000140D538E0                               a0_3:                                   ; DATA XREF: sub_1406DF1C0+708↑o
PAGEDATA:0000000140D538E0 30 00 00 00                                   text "UTF-16LE", '0',0
PAGEDATA:0000000140D538E4 00 00 00 00 00 00 00 00 00 00…                align 10h
PAGEDATA:0000000140D538F0 10 5B A7 40 01 00 00 00                       dq offset qword_140A75B10
PAGEDATA:0000000140D538F8 40                                            db  40h ; @
PAGEDATA:0000000140D538F9 02                                            db    2
PAGEDATA:0000000140D538FA 00                                            db    0
PAGEDATA:0000000140D538FB 00                                            db    0
PAGEDATA:0000000140D538FC 00                                            db    0
PAGEDATA:0000000140D538FD 00                                            db    0
PAGEDATA:0000000140D538FE 00                                            db    0
PAGEDATA:0000000140D538FF 00                                            db    0
PAGEDATA:0000000140D53900 00                                            db    0
PAGEDATA:0000000140D53901 00                                            db    0
PAGEDATA:0000000140D53902 00                                            db    0
PAGEDATA:0000000140D53903 00                                            db    0
PAGEDATA:0000000140D53904 00                                            db    0
PAGEDATA:0000000140D53905 00                                            db    0
PAGEDATA:0000000140D53906 00                                            db    0
PAGEDATA:0000000140D53907 00                                            db    0
PAGEDATA:0000000140D53908 00                                            db    0
PAGEDATA:0000000140D53909 00                                            db    0
PAGEDATA:0000000140D5390A 00                                            db    0
PAGEDATA:0000000140D5390B 00                                            db    0
PAGEDATA:0000000140D5390C 00                                            db    0
PAGEDATA:0000000140D5390D 00                                            db    0
PAGEDATA:0000000140D5390E 00                                            db    0
PAGEDATA:0000000140D5390F 00                                            db    0
PAGEDATA:0000000140D53910 00 00 00 00                   dword_140D53910 dd 0                    ; DATA XREF: TtmInit+7E↑o
PAGEDATA:0000000140D53910                                                                       ; TtmiLogCalloutStop:loc_1409A3E4A↑r ...
PAGEDATA:0000000140D53914 00 00 00 00                                   align 8
PAGEDATA:0000000140D53918 8E AC 03 40 01 00 00 00                       dq offset qword_14003AC78+16h
PAGEDATA:0000000140D53920 00                                            db    0
PAGEDATA:0000000140D53921 00                                            db    0
PAGEDATA:0000000140D53922 00                                            db    0
PAGEDATA:0000000140D53923 00                                            db    0
PAGEDATA:0000000140D53924 00                                            db    0
PAGEDATA:0000000140D53925 00                                            db    0
PAGEDATA:0000000140D53926 00                                            db    0
PAGEDATA:0000000140D53927 00                                            db    0
PAGEDATA:0000000140D53928 00                                            db    0
PAGEDATA:0000000140D53929 00                                            db    0
PAGEDATA:0000000140D5392A 00                                            db    0
PAGEDATA:0000000140D5392B 00                                            db    0
PAGEDATA:0000000140D5392C 00                                            db    0
PAGEDATA:0000000140D5392D 00                                            db    0
PAGEDATA:0000000140D5392E 00                                            db    0
PAGEDATA:0000000140D5392F 00                                            db    0
PAGEDATA:0000000140D53930 00                                            db    0
PAGEDATA:0000000140D53931 00                                            db    0
PAGEDATA:0000000140D53932 00                                            db    0
PAGEDATA:0000000140D53933 00                                            db    0
PAGEDATA:0000000140D53934 00                                            db    0
PAGEDATA:0000000140D53935 00                                            db    0
PAGEDATA:0000000140D53936 00                                            db    0
PAGEDATA:0000000140D53937 00                                            db    0
PAGEDATA:0000000140D53938 00                                            db    0
PAGEDATA:0000000140D53939 00                                            db    0
PAGEDATA:0000000140D5393A 00                                            db    0
PAGEDATA:0000000140D5393B 00                                            db    0
PAGEDATA:0000000140D5393C 00                                            db    0
PAGEDATA:0000000140D5393D 00                                            db    0
PAGEDATA:0000000140D5393E 00                                            db    0
PAGEDATA:0000000140D5393F 00                                            db    0
PAGEDATA:0000000140D53940 00                                            db    0
PAGEDATA:0000000140D53941 00                                            db    0
PAGEDATA:0000000140D53942 00                                            db    0
PAGEDATA:0000000140D53943 00                                            db    0
PAGEDATA:0000000140D53944 00                                            db    0
PAGEDATA:0000000140D53945 00                                            db    0
PAGEDATA:0000000140D53946 00                                            db    0
PAGEDATA:0000000140D53947 00                                            db    0
PAGEDATA:0000000140D53948 00 00 00 00                   dword_140D53948 dd 0                    ; DATA XREF: TtmInit+6F↑o
PAGEDATA:0000000140D53948                                                                       ; TtmiLogCalloutStart+2D↑r ...
PAGEDATA:0000000140D5394C 00 00 00 00                                   align 10h
PAGEDATA:0000000140D53950 D1 AC 03 40 01 00 00 00                       dq offset byte_14003ACD1
PAGEDATA:0000000140D53958 00 00 00 00 00 00 00 00 00 00…                align 40h
PAGEDATA:0000000140D53980 00 00 00 00                   dword_140D53980 dd 0                    ; DATA XREF: PopDirectedDripsDiagNotifySessionStop+98↑r
PAGEDATA:0000000140D53980                                                                       ; PopDirectedDripsDiagNotifySessionStop+AF↑o ...
PAGEDATA:0000000140D53984 00 00 00 00                                   align 8
PAGEDATA:0000000140D53988 E5 AB 03 40 01 00 00 00                       dq offset byte_14003ABE1+4
PAGEDATA:0000000140D53990 00 00 00 00 00 00 00 00 00 00…                align 40h
PAGEDATA:0000000140D539C0 18 54 D5 40 01 00 00 00       PspNativeSystemDllData dq offset PspNativeSystemDll
PAGEDATA:0000000140D539C0                                                                       ; DATA XREF: PAGEDATA:PspSystemDlls↑o
PAGEDATA:0000000140D539C8 13                                            db  13h
PAGEDATA:0000000140D539C9 00                                            db    0
PAGEDATA:0000000140D539CA 64                                            db  64h ; d
PAGEDATA:0000000140D539CB 86                                            db  86h
PAGEDATA:0000000140D539CC 00                                            db    0
PAGEDATA:0000000140D539CD 00                                            db    0
PAGEDATA:0000000140D539CE 00                                            db    0
PAGEDATA:0000000140D539CF 00                                            db    0
PAGEDATA:0000000140D539D0 3C                                            db  3Ch ; <
PAGEDATA:0000000140D539D1 00                                            db    0
PAGEDATA:0000000140D539D2 3E                                            db  3Eh ; >
PAGEDATA:0000000140D539D3 00                                            db    0
PAGEDATA:0000000140D539D4 00                                            db    0
PAGEDATA:0000000140D539D5 00                                            db    0
PAGEDATA:0000000140D539D6 00                                            db    0
PAGEDATA:0000000140D539D7 00                                            db    0
PAGEDATA:0000000140D539D8 70 E2 A7 40 01 00 00 00                       dq offset aSystemrootSyst_6 ; "\\SystemRoot\\System32\\ntdll.dll"
PAGEDATA:0000000140D539E0 00                                            db    0
PAGEDATA:0000000140D539E1 00                                            db    0
PAGEDATA:0000000140D539E2 00                                            db    0
PAGEDATA:0000000140D539E3 00                                            db    0
PAGEDATA:0000000140D539E4 00                                            db    0
PAGEDATA:0000000140D539E5 00                                            db    0
PAGEDATA:0000000140D539E6 00                                            db    0
PAGEDATA:0000000140D539E7 00                                            db    0
PAGEDATA:0000000140D539E8 00                                            db    0
PAGEDATA:0000000140D539E9 00                                            db    0
PAGEDATA:0000000140D539EA 00                                            db    0
PAGEDATA:0000000140D539EB 00                                            db    0
PAGEDATA:0000000140D539EC 00                                            db    0
PAGEDATA:0000000140D539ED 00                                            db    0
PAGEDATA:0000000140D539EE 00                                            db    0
PAGEDATA:0000000140D539EF 00                                            db    0
PAGEDATA:0000000140D539F0 B0 E2 A7 40 01 00 00 00                       dq offset aNtdllDll     ; "ntdll.dll"
PAGEDATA:0000000140D539F8 00 00 00 00 00 00 00 00                       align 20h
PAGEDATA:0000000140D53A00 28 54 D5 40 01 00 00 00       PspWowX86SystemDllData dq offset PspWowX86SystemDll
PAGEDATA:0000000140D53A00                                                                       ; DATA XREF: PAGEDATA:0000000140D531F8↑o
PAGEDATA:0000000140D53A08 08                                            db    8
PAGEDATA:0000000140D53A09 00                                            db    0
PAGEDATA:0000000140D53A0A 4C                                            db  4Ch ; L
PAGEDATA:0000000140D53A0B 01                                            db    1
PAGEDATA:0000000140D53A0C 00                                            db    0
PAGEDATA:0000000140D53A0D 00                                            db    0
PAGEDATA:0000000140D53A0E 00                                            db    0
PAGEDATA:0000000140D53A0F 00                                            db    0
PAGEDATA:0000000140D53A10 3C                                            db  3Ch ; <
PAGEDATA:0000000140D53A11 00                                            db    0
PAGEDATA:0000000140D53A12 3E                                            db  3Eh ; >
PAGEDATA:0000000140D53A13 00                                            db    0
PAGEDATA:0000000140D53A14 00                                            db    0
PAGEDATA:0000000140D53A15 00                                            db    0
PAGEDATA:0000000140D53A16 00                                            db    0
PAGEDATA:0000000140D53A17 00                                            db    0
PAGEDATA:0000000140D53A18 C8 E2 A7 40 01 00 00 00                       dq offset aSystemrootSysw ; "\\SystemRoot\\SysWOW64\\ntdll.dll"
PAGEDATA:0000000140D53A20 00                                            db    0
PAGEDATA:0000000140D53A21 00                                            db    0
PAGEDATA:0000000140D53A22 00                                            db    0
PAGEDATA:0000000140D53A23 00                                            db    0
PAGEDATA:0000000140D53A24 00                                            db    0
PAGEDATA:0000000140D53A25 00                                            db    0
PAGEDATA:0000000140D53A26 00                                            db    0
PAGEDATA:0000000140D53A27 00                                            db    0
PAGEDATA:0000000140D53A28 00                                            db    0
PAGEDATA:0000000140D53A29 00                                            db    0
PAGEDATA:0000000140D53A2A 00                                            db    0
PAGEDATA:0000000140D53A2B 00                                            db    0
PAGEDATA:0000000140D53A2C 00                                            db    0
PAGEDATA:0000000140D53A2D 00                                            db    0
PAGEDATA:0000000140D53A2E 00                                            db    0
PAGEDATA:0000000140D53A2F 00                                            db    0
PAGEDATA:0000000140D53A30 50 E3 A7 40 01 00 00 00                       dq offset aNtdll32Dll   ; "ntdll32.dll"
PAGEDATA:0000000140D53A38 00 00 00 00 00 00 00 00                       align 20h
PAGEDATA:0000000140D53A40 38 54 D5 40 01 00 00 00       PspVsmEnclaveRuntimeDllData dq offset PspVsmEnclaveRuntimeDll
PAGEDATA:0000000140D53A40                                                                       ; DATA XREF: PAGEDATA:off_140D53218↑o
PAGEDATA:0000000140D53A48 12                                            db  12h
PAGEDATA:0000000140D53A49 00                                            db    0
PAGEDATA:0000000140D53A4A 64                                            db  64h ; d
PAGEDATA:0000000140D53A4B 86                                            db  86h
PAGEDATA:0000000140D53A4C 00                                            db    0
PAGEDATA:0000000140D53A4D 00                                            db    0
PAGEDATA:0000000140D53A4E 00                                            db    0
PAGEDATA:0000000140D53A4F 00                                            db    0
PAGEDATA:0000000140D53A50 40                                            db  40h ; @
PAGEDATA:0000000140D53A51 00                                            db    0
PAGEDATA:0000000140D53A52 42                                            db  42h ; B
PAGEDATA:0000000140D53A53 00                                            db    0
PAGEDATA:0000000140D53A54 00                                            db    0
PAGEDATA:0000000140D53A55 00                                            db    0
PAGEDATA:0000000140D53A56 00                                            db    0
PAGEDATA:0000000140D53A57 00                                            db    0
PAGEDATA:0000000140D53A58 70 E3 A7 40 01 00 00 00                       dq offset aSystemrootSyst_11 ; "\\SystemRoot\\System32\\vertdll.dll"
PAGEDATA:0000000140D53A60 00                                            db    0
PAGEDATA:0000000140D53A61 00                                            db    0
PAGEDATA:0000000140D53A62 00                                            db    0
PAGEDATA:0000000140D53A63 00                                            db    0
PAGEDATA:0000000140D53A64 00                                            db    0
PAGEDATA:0000000140D53A65 00                                            db    0
PAGEDATA:0000000140D53A66 00                                            db    0
PAGEDATA:0000000140D53A67 00                                            db    0
PAGEDATA:0000000140D53A68 00                                            db    0
PAGEDATA:0000000140D53A69 00                                            db    0
PAGEDATA:0000000140D53A6A 00                                            db    0
PAGEDATA:0000000140D53A6B 00                                            db    0
PAGEDATA:0000000140D53A6C 00                                            db    0
PAGEDATA:0000000140D53A6D 00                                            db    0
PAGEDATA:0000000140D53A6E 00                                            db    0
PAGEDATA:0000000140D53A6F 00                                            db    0
PAGEDATA:0000000140D53A70 B8 E3 A7 40 01 00 00 00                       dq offset aVertdllDll   ; "vertdll.dll"
PAGEDATA:0000000140D53A78 00 00 00 00 00 00 00 00                       align 20h
PAGEDATA:0000000140D53A80 00                            NlsEmptyLeadByteInfoTable db    0       ; DATA XREF: RtlpInitCodePageTables+E5↑o
PAGEDATA:0000000140D53A80                                                                       ; RtlNlsInitState+68↑o ...
PAGEDATA:0000000140D53A81 00                                            db    0
PAGEDATA:0000000140D53A82 00                                            db    0
PAGEDATA:0000000140D53A83 00                                            db    0
PAGEDATA:0000000140D53A84 00                                            db    0
PAGEDATA:0000000140D53A85 00                                            db    0
PAGEDATA:0000000140D53A86 00                                            db    0
PAGEDATA:0000000140D53A87 00                                            db    0
PAGEDATA:0000000140D53A88 00                                            db    0
PAGEDATA:0000000140D53A89 00                                            db    0
PAGEDATA:0000000140D53A8A 00                                            db    0
PAGEDATA:0000000140D53A8B 00                                            db    0
PAGEDATA:0000000140D53A8C 00                                            db    0
PAGEDATA:0000000140D53A8D 00                                            db    0
PAGEDATA:0000000140D53A8E 00                                            db    0
PAGEDATA:0000000140D53A8F 00                                            db    0
PAGEDATA:0000000140D53A90 00                                            db    0
PAGEDATA:0000000140D53A91 00                                            db    0
PAGEDATA:0000000140D53A92 00                                            db    0
PAGEDATA:0000000140D53A93 00                                            db    0
PAGEDATA:0000000140D53A94 00                                            db    0
PAGEDATA:0000000140D53A95 00                                            db    0
PAGEDATA:0000000140D53A96 00                                            db    0
PAGEDATA:0000000140D53A97 00                                            db    0
PAGEDATA:0000000140D53A98 00                                            db    0
PAGEDATA:0000000140D53A99 00                                            db    0
PAGEDATA:0000000140D53A9A 00                                            db    0
PAGEDATA:0000000140D53A9B 00                                            db    0
PAGEDATA:0000000140D53A9C 00                                            db    0
PAGEDATA:0000000140D53A9D 00                                            db    0
PAGEDATA:0000000140D53A9E 00                                            db    0
PAGEDATA:0000000140D53A9F 00                                            db    0
PAGEDATA:0000000140D53AA0 00                                            db    0
PAGEDATA:0000000140D53AA1 00                                            db    0
PAGEDATA:0000000140D53AA2 00                                            db    0
PAGEDATA:0000000140D53AA3 00                                            db    0
PAGEDATA:0000000140D53AA4 00                                            db    0
PAGEDATA:0000000140D53AA5 00                                            db    0
PAGEDATA:0000000140D53AA6 00                                            db    0
PAGEDATA:0000000140D53AA7 00                                            db    0
PAGEDATA:0000000140D53AA8 00                                            db    0
PAGEDATA:0000000140D53AA9 00                                            db    0
PAGEDATA:0000000140D53AAA 00                                            db    0
PAGEDATA:0000000140D53AAB 00                                            db    0
PAGEDATA:0000000140D53AAC 00                                            db    0
PAGEDATA:0000000140D53AAD 00                                            db    0
PAGEDATA:0000000140D53AAE 00                                            db    0
PAGEDATA:0000000140D53AAF 00                                            db    0
PAGEDATA:0000000140D53AB0 00                                            db    0
PAGEDATA:0000000140D53AB1 00                                            db    0
PAGEDATA:0000000140D53AB2 00                                            db    0
PAGEDATA:0000000140D53AB3 00                                            db    0
PAGEDATA:0000000140D53AB4 00                                            db    0
PAGEDATA:0000000140D53AB5 00                                            db    0
PAGEDATA:0000000140D53AB6 00                                            db    0
PAGEDATA:0000000140D53AB7 00                                            db    0
PAGEDATA:0000000140D53AB8 00                                            db    0
PAGEDATA:0000000140D53AB9 00                                            db    0
PAGEDATA:0000000140D53ABA 00                                            db    0
PAGEDATA:0000000140D53ABB 00                                            db    0
PAGEDATA:0000000140D53ABC 00                                            db    0
PAGEDATA:0000000140D53ABD 00                                            db    0
PAGEDATA:0000000140D53ABE 00                                            db    0
PAGEDATA:0000000140D53ABF 00                                            db    0
PAGEDATA:0000000140D53AC0 00                                            db    0
PAGEDATA:0000000140D53AC1 00                                            db    0
PAGEDATA:0000000140D53AC2 00                                            db    0
PAGEDATA:0000000140D53AC3 00                                            db    0
PAGEDATA:0000000140D53AC4 00                                            db    0
PAGEDATA:0000000140D53AC5 00                                            db    0
PAGEDATA:0000000140D53AC6 00                                            db    0
PAGEDATA:0000000140D53AC7 00                                            db    0
PAGEDATA:0000000140D53AC8 00                                            db    0
PAGEDATA:0000000140D53AC9 00                                            db    0
PAGEDATA:0000000140D53ACA 00                                            db    0
PAGEDATA:0000000140D53ACB 00                                            db    0
PAGEDATA:0000000140D53ACC 00                                            db    0
PAGEDATA:0000000140D53ACD 00                                            db    0
PAGEDATA:0000000140D53ACE 00                                            db    0
PAGEDATA:0000000140D53ACF 00                                            db    0
PAGEDATA:0000000140D53AD0 00                                            db    0
PAGEDATA:0000000140D53AD1 00                                            db    0
PAGEDATA:0000000140D53AD2 00                                            db    0
PAGEDATA:0000000140D53AD3 00                                            db    0
PAGEDATA:0000000140D53AD4 00                                            db    0
PAGEDATA:0000000140D53AD5 00                                            db    0
PAGEDATA:0000000140D53AD6 00                                            db    0
PAGEDATA:0000000140D53AD7 00                                            db    0
PAGEDATA:0000000140D53AD8 00                                            db    0
PAGEDATA:0000000140D53AD9 00                                            db    0
PAGEDATA:0000000140D53ADA 00                                            db    0
PAGEDATA:0000000140D53ADB 00                                            db    0
PAGEDATA:0000000140D53ADC 00                                            db    0
PAGEDATA:0000000140D53ADD 00                                            db    0
PAGEDATA:0000000140D53ADE 00                                            db    0
PAGEDATA:0000000140D53ADF 00                                            db    0
PAGEDATA:0000000140D53AE0 00                                            db    0
PAGEDATA:0000000140D53AE1 00                                            db    0
PAGEDATA:0000000140D53AE2 00                                            db    0
PAGEDATA:0000000140D53AE3 00                                            db    0
PAGEDATA:0000000140D53AE4 00                                            db    0
PAGEDATA:0000000140D53AE5 00                                            db    0
PAGEDATA:0000000140D53AE6 00                                            db    0
PAGEDATA:0000000140D53AE7 00                                            db    0
PAGEDATA:0000000140D53AE8 00                                            db    0
PAGEDATA:0000000140D53AE9 00                                            db    0
PAGEDATA:0000000140D53AEA 00                                            db    0
PAGEDATA:0000000140D53AEB 00                                            db    0
PAGEDATA:0000000140D53AEC 00                                            db    0
PAGEDATA:0000000140D53AED 00                                            db    0
PAGEDATA:0000000140D53AEE 00                                            db    0
PAGEDATA:0000000140D53AEF 00                                            db    0
PAGEDATA:0000000140D53AF0 00                                            db    0
PAGEDATA:0000000140D53AF1 00                                            db    0
PAGEDATA:0000000140D53AF2 00                                            db    0
PAGEDATA:0000000140D53AF3 00                                            db    0
PAGEDATA:0000000140D53AF4 00                                            db    0
PAGEDATA:0000000140D53AF5 00                                            db    0

```
  
