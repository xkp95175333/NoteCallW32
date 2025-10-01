
.std:000000014AA6FE50                                                 ; __int64 __fastcall sub_14AA6FE50(__int64, _BYTE *)
.std:000000014AA6FE50                                                 sub_14AA6FE50   proc near               ; CODE XREF: sub_14AA93B50+14↓p
.std:000000014AA6FE50                                                                                         ; DATA XREF: .std:0000000154D74100↓o
.std:000000014AA6FE50
.std:000000014AA6FE50                                                 arg_0           = qword ptr  8
.std:000000014AA6FE50                                                 arg_8           = qword ptr  10h
.std:000000014AA6FE50                                                 arg_10          = qword ptr  18h
.std:000000014AA6FE50
.std:000000014AA6FE50 48 89 5C 24 08                                                  mov     [rsp+8], rbx
.std:000000014AA6FE55 48 89 74 24 10                                                  mov     [rsp+10h], rsi
.std:000000014AA6FE5A 48 89 7C 24 18                                                  mov     [rsp+18h], rdi
.std:000000014AA6FE5F 41 56                                                           push    r14
.std:000000014AA6FE61 48 83 EC 20                                                     sub     rsp, 20h        ; Integer Subtraction
.std:000000014AA6FE65 33 DB                                                           xor     ebx, ebx        ; Logical Exclusive OR
.std:000000014AA6FE67 48 8D 79 06                                                     lea     rdi, [rcx+6]    ; Load Effective Address
.std:000000014AA6FE6B 89 19                                                           mov     [rcx], ebx
.std:000000014AA6FE6D 4C 8B F2                                                        mov     r14, rdx
.std:000000014AA6FE70 88 59 04                                                        mov     [rcx+4], bl
.std:000000014AA6FE73 48 8B F1                                                        mov     rsi, rcx
.std:000000014AA6FE76 89 99 06 08 00 00                                               mov     [rcx+806h], ebx
.std:000000014AA6FE7C 0F B6 02                                                        movzx   eax, byte ptr [rdx] ; Move with Zero-Extend
.std:000000014AA6FE7F 24 01                                                           and     al, 1           ; Logical AND
.std:000000014AA6FE81 88 41 04                                                        mov     [rcx+4], al
.std:000000014AA6FE84 48 8B CF                                                        mov     rcx, rdi
.std:000000014AA6FE87 44 0F B7 02                                                     movzx   r8d, word ptr [rdx] ; Move with Zero-Extend
.std:000000014AA6FE8B 48 83 C2 02                                                     add     rdx, 2          ; Add
.std:000000014AA6FE8F 49 C1 E8 06                                                     shr     r8, 6           ; Shift Logical Right
.std:000000014AA6FE93 84 C0                                                           test    al, al          ; Logical Compare
.std:000000014AA6FE95 0F 84 9F 00 00 00                                               jz      loc_14AA6FF3A   ; Jump if Zero (ZF=1)
.std:000000014AA6FE9B 4D 03 C0                                                        add     r8, r8          ; Add
.std:000000014AA6FE9E E8 5A 55 28 03                                                  call    sub_14DCF53FD   ; Call Procedure
.std:000000014AA6FEA3 41 0F B7 16                                                     movzx   edx, word ptr [r14] ; Move with Zero-Extend
.std:000000014AA6FEA7 48 8B CF                                                        mov     rcx, rdi
.std:000000014AA6FEAA C1 EA 06                                                        shr     edx, 6          ; Shift Logical Right
.std:000000014AA6FEAD E8 3E A5 00 00                                                  call    sub_14AA7A3F0   ; Call Procedure
.std:000000014AA6FEB2 41 0F B7 06                                                     movzx   eax, word ptr [r14] ; Move with Zero-Extend
.std:000000014AA6FEB6 4C 8B CF                                                        mov     r9, rdi
.std:000000014AA6FEB9 48 C1 E8 06                                                     shr     rax, 6          ; Shift Logical Right
.std:000000014AA6FEBD 66 89 1C 47                                                     mov     [rdi+rax*2], bx
.std:000000014AA6FEC1 0F B7 0F                                                        movzx   ecx, word ptr [rdi] ; Move with Zero-Extend
.std:000000014AA6FEC4 66 85 C9                                                        test    cx, cx          ; Logical Compare
.std:000000014AA6FEC7 74 54                                                           jz      short loc_14AA6FF1D ; Jump if Zero (ZF=1)
.std:000000014AA6FEC9 4C 8D 05 30 01 59 F5                                            lea     r8, __ImageBase ; Load Effective Address
.std:000000014AA6FED0
.std:000000014AA6FED0                                                 loc_14AA6FED0:                          ; CODE XREF: sub_14AA6FE50+CB↓j
.std:000000014AA6FED0 0F B7 C1                                                        movzx   eax, cx         ; Move with Zero-Extend
.std:000000014AA6FED3 4D 8D 49 02                                                     lea     r9, [r9+2]      ; Load Effective Address
.std:000000014AA6FED7 83 E8 61                                                        sub     eax, 61h ; 'a'  ; Integer Subtraction
.std:000000014AA6FEDA 83 F8 1A                                                        cmp     eax, 1Ah        ; Compare Two Operands
.std:000000014AA6FEDD 66 1B C0                                                        sbb     ax, ax          ; Integer Subtraction with Borrow
.std:000000014AA6FEE0 66 83 E0 20                                                     and     ax, 20h         ; Logical AND
.std:000000014AA6FEE4 66 2B C8                                                        sub     cx, ax          ; Integer Subtraction
.std:000000014AA6FEE7 8B C3                                                           mov     eax, ebx
.std:000000014AA6FEE9 0F B7 D1                                                        movzx   edx, cx         ; Move with Zero-Extend
.std:000000014AA6FEEC 48 33 C2                                                        xor     rax, rdx        ; Logical Exclusive OR
.std:000000014AA6FEEF C1 EB 08                                                        shr     ebx, 8          ; Shift Logical Right
.std:000000014AA6FEF2 0F B6 C8                                                        movzx   ecx, al         ; Move with Zero-Extend
.std:000000014AA6FEF5 48 C1 EA 08                                                     shr     rdx, 8          ; Shift Logical Right
.std:000000014AA6FEF9 41 33 9C 88 B0 2B 8B 13                                         xor     ebx, ds:rva dword_1538B2BB0[r8+rcx*4] ; Logical Exclusive OR
.std:000000014AA6FF01 41 0F B7 09                                                     movzx   ecx, word ptr [r9] ; Move with Zero-Extend
.std:000000014AA6FF05 8B C3                                                           mov     eax, ebx
.std:000000014AA6FF07 48 33 D0                                                        xor     rdx, rax        ; Logical Exclusive OR
.std:000000014AA6FF0A C1 EB 08                                                        shr     ebx, 8          ; Shift Logical Right
.std:000000014AA6FF0D 0F B6 C2                                                        movzx   eax, dl         ; Move with Zero-Extend
.std:000000014AA6FF10 41 33 9C 80 B0 2B 8B 13                                         xor     ebx, ds:rva dword_1538B2BB0[r8+rax*4] ; Logical Exclusive OR
.std:000000014AA6FF18 66 85 C9                                                        test    cx, cx          ; Logical Compare
.std:000000014AA6FF1B 75 B3                                                           jnz     short loc_14AA6FED0 ; Jump if Not Zero (ZF=0)
.std:000000014AA6FF1D
.std:000000014AA6FF1D                                                 loc_14AA6FF1D:                          ; CODE XREF: sub_14AA6FE50+77↑j
.std:000000014AA6FF1D 33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
.std:000000014AA6FF1F 66 89 9E 06 08 00 00                                            mov     [rsi+806h], bx
.std:000000014AA6FF26 48 8B CF                                                        mov     rcx, rdi
.std:000000014AA6FF29 E8 D2 A1 05 F6                                                  call    sub_140ACA100   ; Call Procedure
.std:000000014AA6FF2E 66 89 86 08 08 00 00                                            mov     [rsi+808h], ax
.std:000000014AA6FF35 E9 DC 00 00 00                                                  jmp     loc_14AA70016   ; Jump
.std:000000014AA6FF3A                                                 ; ---------------------------------------------------------------------------
.std:000000014AA6FF3A
.std:000000014AA6FF3A                                                 loc_14AA6FF3A:                          ; CODE XREF: sub_14AA6FE50+45↑j
.std:000000014AA6FF3A E8 BE 54 28 03                                                  call    sub_14DCF53FD   ; Call Procedure
.std:000000014AA6FF3F 41 0F B7 16                                                     movzx   edx, word ptr [r14] ; Move with Zero-Extend
.std:000000014AA6FF43 48 8B CF                                                        mov     rcx, rdi
.std:000000014AA6FF46 C1 EA 06                                                        shr     edx, 6          ; Shift Logical Right
.std:000000014AA6FF49 E8 92 A2 00 00                                                  call    sub_14AA7A1E0   ; Call Procedure
.std:000000014AA6FF4E 41 0F B7 06                                                     movzx   eax, word ptr [r14] ; Move with Zero-Extend
.std:000000014AA6FF52 48 C1 E8 06                                                     shr     rax, 6          ; Shift Logical Right
.std:000000014AA6FF56 88 1C 38                                                        mov     [rax+rdi], bl
.std:000000014AA6FF59 44 0F B6 0F                                                     movzx   r9d, byte ptr [rdi] ; Move with Zero-Extend
.std:000000014AA6FF5D 45 84 C9                                                        test    r9b, r9b        ; Logical Compare
.std:000000014AA6FF60 0F 84 9A 00 00 00                                               jz      loc_14AA70000   ; Jump if Zero (ZF=1)
.std:000000014AA6FF66 41 0F B6 C9                                                     movzx   ecx, r9b        ; Move with Zero-Extend
.std:000000014AA6FF6A 4C 8D 05 8F 00 59 F5                                            lea     r8, __ImageBase ; Load Effective Address
.std:000000014AA6FF71
.std:000000014AA6FF71                                                 loc_14AA6FF71:                          ; CODE XREF: sub_14AA6FE50+14C↓j
.std:000000014AA6FF71 0F BE C1                                                        movsx   eax, cl         ; Move with Sign-Extend
.std:000000014AA6FF74 48 8D 7F 01                                                     lea     rdi, [rdi+1]    ; Load Effective Address
.std:000000014AA6FF78 83 E8 61                                                        sub     eax, 61h ; 'a'  ; Integer Subtraction
.std:000000014AA6FF7B 83 F8 1A                                                        cmp     eax, 1Ah        ; Compare Two Operands
.std:000000014AA6FF7E 1A C0                                                           sbb     al, al          ; Integer Subtraction with Borrow
.std:000000014AA6FF80 24 20                                                           and     al, 20h         ; Logical AND
.std:000000014AA6FF82 2A C8                                                           sub     cl, al          ; Integer Subtraction
.std:000000014AA6FF84 8B C3                                                           mov     eax, ebx
.std:000000014AA6FF86 48 33 C8                                                        xor     rcx, rax        ; Logical Exclusive OR
.std:000000014AA6FF89 C1 EB 08                                                        shr     ebx, 8          ; Shift Logical Right
.std:000000014AA6FF8C 0F B6 C1                                                        movzx   eax, cl         ; Move with Zero-Extend
.std:000000014AA6FF8F 0F B6 0F                                                        movzx   ecx, byte ptr [rdi] ; Move with Zero-Extend
.std:000000014AA6FF92 41 33 9C 80 B0 2B 8B 13                                         xor     ebx, ds:rva dword_1538B2BB0[r8+rax*4] ; Logical Exclusive OR
.std:000000014AA6FF9A 84 C9                                                           test    cl, cl          ; Logical Compare
.std:000000014AA6FF9C 75 D3                                                           jnz     short loc_14AA6FF71 ; Jump if Not Zero (ZF=0)
.std:000000014AA6FF9E 66 89 9E 06 08 00 00                                            mov     [rsi+806h], bx
.std:000000014AA6FFA5 4C 8D 56 07                                                     lea     r10, [rsi+7]    ; Load Effective Address
.std:000000014AA6FFA9 BA FF FF FF FF                                                  mov     edx, 0FFFFFFFFh
.std:000000014AA6FFAE 66 90                                                           xchg    ax, ax          ; Exchange Register/Memory with Register
.std:000000014AA6FFB0
.std:000000014AA6FFB0                                                 loc_14AA6FFB0:                          ; CODE XREF: sub_14AA6FE50+1AC↓j
.std:000000014AA6FFB0 8B C2                                                           mov     eax, edx
.std:000000014AA6FFB2 41 0F BE C9                                                     movsx   ecx, r9b        ; Move with Sign-Extend
.std:000000014AA6FFB6 45 0F B6 0A                                                     movzx   r9d, byte ptr [r10] ; Move with Zero-Extend
.std:000000014AA6FFBA 4D 8D 52 01                                                     lea     r10, [r10+1]    ; Load Effective Address
.std:000000014AA6FFBE C1 EA 08                                                        shr     edx, 8          ; Shift Logical Right
.std:000000014AA6FFC1 48 33 C8                                                        xor     rcx, rax        ; Logical Exclusive OR
.std:000000014AA6FFC4 0F B6 C1                                                        movzx   eax, cl         ; Move with Zero-Extend
.std:000000014AA6FFC7 41 33 94 80 B0 0B 8B 13                                         xor     edx, ds:rva dword_1538B0BB0[r8+rax*4] ; Logical Exclusive OR
.std:000000014AA6FFCF 0F B6 CA                                                        movzx   ecx, dl         ; Move with Zero-Extend
.std:000000014AA6FFD2 C1 EA 08                                                        shr     edx, 8          ; Shift Logical Right
.std:000000014AA6FFD5 41 33 94 88 B0 0B 8B 13                                         xor     edx, ds:rva dword_1538B0BB0[r8+rcx*4] ; Logical Exclusive OR
.std:000000014AA6FFDD 0F B6 CA                                                        movzx   ecx, dl         ; Move with Zero-Extend
.std:000000014AA6FFE0 C1 EA 08                                                        shr     edx, 8          ; Shift Logical Right
.std:000000014AA6FFE3 41 33 94 88 B0 0B 8B 13                                         xor     edx, ds:rva dword_1538B0BB0[r8+rcx*4] ; Logical Exclusive OR
.std:000000014AA6FFEB 0F B6 CA                                                        movzx   ecx, dl         ; Move with Zero-Extend
.std:000000014AA6FFEE C1 EA 08                                                        shr     edx, 8          ; Shift Logical Right
.std:000000014AA6FFF1 41 33 94 88 B0 0B 8B 13                                         xor     edx, ds:rva dword_1538B0BB0[r8+rcx*4] ; Logical Exclusive OR
.std:000000014AA6FFF9 45 84 C9                                                        test    r9b, r9b        ; Logical Compare
.std:000000014AA6FFFC 75 B2                                                           jnz     short loc_14AA6FFB0 ; Jump if Not Zero (ZF=0)
.std:000000014AA6FFFE EB 0C                                                           jmp     short loc_14AA7000C ; Jump
.std:000000014AA70000                                                 ; ---------------------------------------------------------------------------
.std:000000014AA70000
.std:000000014AA70000                                                 loc_14AA70000:                          ; CODE XREF: sub_14AA6FE50+110↑j
.std:000000014AA70000 66 89 9E 06 08 00 00                                            mov     [rsi+806h], bx
.std:000000014AA70007 BA FF FF FF FF                                                  mov     edx, 0FFFFFFFFh
.std:000000014AA7000C
.std:000000014AA7000C                                                 loc_14AA7000C:                          ; CODE XREF: sub_14AA6FE50+1AE↑j
.std:000000014AA7000C 66 F7 D2                                                        not     dx              ; One's Complement Negation
.std:000000014AA7000F 66 89 96 08 08 00 00                                            mov     [rsi+808h], dx
.std:000000014AA70016
.std:000000014AA70016                                                 loc_14AA70016:                          ; CODE XREF: sub_14AA6FE50+E5↑j
.std:000000014AA70016 48 8B 5C 24 30                                                  mov     rbx, [rsp+30h]
.std:000000014AA7001B 48 8B C6                                                        mov     rax, rsi
.std:000000014AA7001E 48 8B 74 24 38                                                  mov     rsi, [rsp+38h]
.std:000000014AA70023 48 8B 7C 24 40                                                  mov     rdi, [rsp+40h]
.std:000000014AA70028 48 83 C4 20                                                     add     rsp, 20h        ; Add
.std:000000014AA7002C 41 5E                                                           pop     r14
.std:000000014AA7002E C3                                                              retn                    ; Return Near from Procedure
.std:000000014AA7002E                                                 sub_14AA6FE50   endp
.std:000000014AA7002E
.std:000000014AA7002E                                                 ; ---------------------------------------------------------------------------
.std:000000014AA7002F                                                 algn_14AA7002F:                         ; DATA XREF: .std:0000000154D74100↓o
.std:000000014AA7002F CC                                                              align 10h

__int64 __fastcall sub_14AA6FE50(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  unsigned __int16 *v3; // rdi
  char v6; // al
  __int16 *v7; // r8
  unsigned __int16 *v8; // r9
  unsigned __int16 v9; // cx
  __int16 v10; // dx
  unsigned int v11; // ebx
  char v12; // r9
  char v13; // cl
  __int64 v14; // rax
  char *v15; // r10
  unsigned int v16; // edx
  char v17; // cl
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx

  v2 = 0;
  v3 = (unsigned __int16 *)(a1 + 6);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 0x806) = 0;
  v6 = *a2 & 1;
  *(_BYTE *)(a1 + 4) = v6;
  if ( v6 )
  {
    sub_14DCF53FD();//0x1E80A55
    sub_14AA7A3F0(v3, *(unsigned __int16 *)a2 >> 6);
    v8 = v3;
    v3[(unsigned __int64)*(unsigned __int16 *)a2 >> 6] = 0;
    v9 = *v3;
    if ( *v3 )
    {
      v7 = &_ImageBase;
      do
      {
        ++v8;
        v10 = v9 - ((unsigned int)v9 - 0x61 < 0x1A ? 0x20 : 0);
        v11 = dword_1538B2BB0[(unsigned __int8)((v9 - ((unsigned int)v9 - 0x61 < 0x1A ? 0x20 : 0)) ^ v2)] ^ (v2 >> 8);
        v9 = *v8;
        v2 = dword_1538B2BB0[(unsigned __int8)(v11 ^ HIBYTE(v10))] ^ (v11 >> 8);
      }
      while ( *v8 );
    }
    *(_WORD *)(a1 + 0x806) = v2;
    *(_WORD *)(a1 + 0x808) = sub_140ACA100(v3, 0LL, v7, v8);
  }
  else
  {
    sub_14DCF53FD();
    sub_14AA7A1E0(v3, *(unsigned __int16 *)a2 >> 6);
    *((_BYTE *)v3 + ((unsigned __int64)*(unsigned __int16 *)a2 >> 6)) = 0;
    v12 = *(_BYTE *)v3;
    if ( *(_BYTE *)v3 )
    {
      v13 = *(_BYTE *)v3;
      do
      {
        v3 = (unsigned __int16 *)((char *)v3 + 1);
        v14 = (unsigned __int8)(v2 ^ (v13 - ((unsigned int)(v13 - 0x61) < 0x1A ? 0x20 : 0)));
        v13 = *(_BYTE *)v3;
        v2 = dword_1538B2BB0[v14] ^ (v2 >> 8);
      }
      while ( *(_BYTE *)v3 );
      *(_WORD *)(a1 + 0x806) = v2;
      v15 = (char *)(a1 + 7);
      v16 = 0xFFFFFFFF;
      do
      {
        v17 = v12;
        v12 = *v15++;
        v18 = dword_1538B0BB0[(unsigned __int8)(v16 ^ v17)] ^ (v16 >> 8);
        v19 = dword_1538B0BB0[(unsigned __int8)v18] ^ (v18 >> 8);
        v20 = dword_1538B0BB0[(unsigned __int8)v19] ^ (v19 >> 8);
        v16 = dword_1538B0BB0[(unsigned __int8)v20] ^ (v20 >> 8);
      }
      while ( v12 );
    }
    else
    {
      *(_WORD *)(a1 + 0x806) = 0;
      LOWORD(v16) = 0xFFFF;
    }
    *(_WORD *)(a1 + 0x808) = ~(_WORD)v16;
  }
  return a1;
}
__int64 __fastcall sub_14AA7A1E0(_BYTE *a1, unsigned int a2)
{
  __int64 result; // rax

  result = 9 * (a2 / 9);
  switch ( a2 % 9 )
  {
    case 0u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 & 0x1F) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 1u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0xDF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 2u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 | 0xCF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 3u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(0x21 * a2 + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 4u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 >> 2) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 5u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(3 * (a2 - 0x29)) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 6u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + ((4 * a2) | 5) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 7u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 8u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0xC) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    default:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0x40) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
  }
  return result;
}
__int64 __fastcall sub_14AA7A3F0(_WORD *a1, unsigned int a2)
{
  __int64 result; // rax

  result = 9 * (a2 / 9);
  switch ( a2 % 9 )
  {
    case 0u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 & 0x1F) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 1u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0xDF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 2u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 | 0xCF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 3u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(0x21 * a2 + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 4u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 >> 2) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 5u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(3 * a2 + 0x85) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 6u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + ((4 * a2) | 5) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 7u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 8u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0xC) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    default:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0x40) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
  }
  return result;





// Include ที่จำเป็น
#include <cstdint>
#include <vector>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <emmintrin.h> // __m128i
#include <immintrin.h>
#include <locale>
#include <codecvt>

// --- โปรโตไทป์ / helper ที่โปรเจ็กต์คุณต้องมี ---
// template<typename T> T read(uint64_t addr);
// template<> __m128i read128Ex2<__m128i>(uint64_t addr);
// namespace Addr { struct { uint64_t BaseAddress; } processBasemodule; }
// namespace GetUE { extern int OffsetGname; }
// bool ChackAddresorName(const std::string&);
// std::string llvm::demangle(const std::string&);
// uint64_t get_world_encrypted(int, int);

// ---------- ฟังก์ชันคำนวณค่า XOR ----------
// คืนค่า 8-bit key (ใช้ทั้ง byte-mode และเป็น low byte สำหรับ word-mode)
static inline uint8_t ComputeXor8(unsigned int a2) {
    unsigned int sel = a2 % 9;
    unsigned int v = 0;
    switch (sel) {
    case 0: v = (a2 + (a2 & 0x1F) + 0x80) | 0x7F; break;
    case 1: v = (a2 + (a2 ^ 0xDF) + 0x80) | 0x7F; break;
    case 2: v = (a2 + (a2 | 0xCF) + 0x80) | 0x7F; break;
    case 3: v = ((0x21 * a2) + 0x80) | 0x7F; break;
    case 4: v = (a2 + (a2 >> 2) + 0x80) | 0x7F; break;
    case 5: v = (3 * (a2 - 0x29)) | 0x7F; break;
    case 6: v = (a2 + ((4 * a2) | 5) + 0x80) | 0x7F; break;
    case 7: v = (a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F; break;
    case 8: v = (a2 + (a2 ^ 0xC) + 0x80) | 0x7F; break;
    default: v = (a2 + (a2 ^ 0x40) + 0x80) | 0x7F; break;
    }
    return static_cast<uint8_t>(v & 0xFF);
}

// คืนค่า 16-bit key (สำหรับ word-mode) — กำหนดให้ low byte = ComputeXor8, high byte = 0 หรือ mirror
static inline uint16_t ComputeXor16(unsigned int a2) {
    // หลักการจากดีคอมไพล์: cast expression to unsigned __int16 then OR 0x7F
    // โดยทั่วไป high byte น่าจะเป็น 0, ดังนั้น ให้ทำแบบนี้:
    uint8_t low = ComputeXor8(a2);
    uint16_t key16 = static_cast<uint16_t>(low) | (static_cast<uint16_t>(0) << 8);
    // ถ้าจริงๆ ต้อง xor แบบ 16-bit word (ทั้ง 2 ไบต์เท่ากัน) ให้ใช้:
    // uint16_t key16 = (static_cast<uint16_t>(low) | (static_cast<uint16_t>(low) << 8));
    return key16;
}

// ---------- ฟังก์ชันถอด XOR (สองแบบ) ----------
// 1) ถอด byte-wise (8-bit)
static void DecryptBuffer_Byte(uint8_t* buf, size_t len, unsigned int a2) {
    if (!buf || len == 0) return;
    uint8_t key = ComputeXor8(a2);
    for (size_t i = 0; i < len; ++i) {
        buf[i] ^= key;
    }
}

// 2) ถอด word-wise (16-bit) — รับ pointer to uint16_t หรือ raw bytes
static void DecryptBuffer_Word(uint8_t* buf, size_t byteLen, unsigned int a2) {
    if (!buf || byteLen == 0) return;
    // จำนวนคำ
    size_t wordCount = byteLen / 2;
    uint16_t key16 = ComputeXor16(a2);
    // ถ้าต้องการให้ทั้งสองไบต์ถูก XOR ด้วยค่าเดียวกัน ให้ทำ keyLow และ keyHigh เท่ากัน
    uint8_t keyLow = static_cast<uint8_t>(key16 & 0xFF);
    uint8_t keyHigh = static_cast<uint8_t>((key16 >> 8) & 0xFF); // ปัจจุบันมักเป็น 0

    for (size_t w = 0; w < wordCount; ++w) {
        size_t idx = w * 2;
        buf[idx] ^= keyLow;
        buf[idx + 1] ^= keyHigh;
    }
    // ถ้ามีไบต์หลงเหลือ (odd-length) ให้ xor ไบต์สุดท้ายด้วย low
    if (byteLen % 2 != 0) {
        buf[byteLen - 1] ^= keyLow;
    }
}

// ---------- ฟังก์ชันอ่านไบต์ต่อเนื่อง (ใช้ read128Ex2 เป็นบล็อก) ----------
static std::vector<uint8_t> ReadMemorySeq(uint64_t addr, size_t bytesToRead) {
    std::vector<uint8_t> out;
    out.reserve(bytesToRead);
    size_t read = 0;
    while (read < bytesToRead) {
        size_t remaining = bytesToRead - read;
        // try read 16 bytes block
        if (remaining >= 16) {
            try {
                __m128i block = read128Ex2<__m128i>(addr + read);
                alignas(16) uint8_t tmp[16];
                // ใช้ unaligned store เพื่อความปลอดภัย
                _mm_storeu_si128((__m128i*)tmp, block);
                out.insert(out.end(), tmp, tmp + 16);
                read += 16;
            } catch (...) {
                // fallback อ่านทีละไบต์
                uint8_t b = read<uint8_t>(addr + read);
                out.push_back(b);
                ++read;
            }
        } else {
            // remaining < 16 -> อ่านทีละไบต์
            uint8_t b = read<uint8_t>(addr + read);
            out.push_back(b);
            ++read;
        }
    }
    return out;
}

// ---------- แปลง UTF-16LE bytes -> UTF-8 ----------
static std::string Utf16LeToUtf8(const std::vector<uint8_t>& bytes) {
    std::u16string u16;
    u16.reserve(bytes.size() / 2);
    for (size_t i = 0; i + 1 < bytes.size(); i += 2) {
        uint16_t ch = static_cast<uint16_t>(bytes[i]) | (static_cast<uint16_t>(bytes[i+1]) << 8);
        u16.push_back(static_cast<char16_t>(ch));
    }
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> conv;
    return conv.to_bytes(u16);
}

// ---------- ฟังก์ชันหลัก: GetNameFromFName (ครบทั้ง 2 โหมด) ----------
std::string GetNameFromFName_robust(uint32_t ukey) {
    // 1) แยกบิต
    uint32_t chunkOffset = (ukey >> 18) & 0x3FFFu;
    uint32_t nameOffset = ukey & 0x3FFFFu;

    // หา GNames base pointer (ตามที่คุณทำ)
    uint64_t PtrGname = Addr::processBasemodule.BaseAddress + static_cast<int>(GetUE::OffsetGname);
    if (!PtrGname) {
        PtrGname = get_world_encrypted((GetUE::OffsetGname + 0x2000), 0x36);
    }
    if (!PtrGname) return std::string();

    // อ่าน chunk pointer ที่ PtrGname + (chunkOffset+1)*8
    uint64_t chunkPtrAddr = PtrGname + static_cast<uint64_t>((chunkOffset + 1) * 8);
    uint64_t namePoolChunk = 0;
    try {
        namePoolChunk = read<uint64_t>(chunkPtrAddr);
    } catch (...) {
        return std::string();
    }
    if (!namePoolChunk) return std::string();

    // entry offset (ตามที่บอกคือ + 2 * nameOffset)
    uint64_t entryOffset = namePoolChunk + static_cast<uint64_t>(2ULL * nameOffset);

    // อ่าน header (uint16_t)
    uint16_t header = 0;
    try {
        header = read<uint16_t>(entryOffset);
    } catch (...) {
        return std::string();
    }

    unsigned int nameLength = static_cast<unsigned int>(header >> 6);
    bool isWide = (header & 1) != 0; // bit0 indicates wide-mode ตามที่คุณบอก

    if (nameLength == 0) return std::string();

    size_t totalBytes = isWide ? (size_t)nameLength * 2 : (size_t)nameLength;
    std::vector<uint8_t> payload;
    try {
        payload = ReadMemorySeq(entryOffset + 2, totalBytes);
    } catch (...) {
        return std::string();
    }

    // Decrypt depending on mode
    if (isWide) {
        // word-mode (16-bit)
        DecryptBuffer_Word(payload.data(), payload.size(), nameLength /* a2 as length? original uses a2 param; adjust if needed */);
        // convert utf16le -> utf8
        std::string out = Utf16LeToUtf8(payload);
        if (ChackAddresorName(out)) return out;
        try {
            std::string dem = llvm::demangle(out);
            if (!dem.empty()) return dem;
        } catch (...) {}
        return out;
    } else {
        // byte-mode
        DecryptBuffer_Byte(payload.data(), payload.size(), nameLength /* a2 param */);
        std::string out(reinterpret_cast<char*>(payload.data()), payload.size());
        if (ChackAddresorName(out)) return out;
        try {
            std::string dem = llvm::demangle(out);
            if (!dem.empty()) return dem;
        } catch (...) {}
        return out;
    }
}
  
}
__int64 __fastcall sub_140ACA100(__int16 *a1, int a2)
{
  __int16 v2; // ax
  _WORD *v3; // r9
  unsigned int i; // edx
  char v5; // r8^1
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // edx

  v2 = *a1;
  v3 = a1 + 1;
  for ( i = ~a2; v2; i = dword_1538B0BB0[(unsigned __int8)v8] ^ (v8 >> 8) )
  {
    v5 = HIBYTE(v2);
    ++v3;
    v6 = dword_1538B0BB0[(unsigned __int8)(v2 ^ i)] ^ (i >> 8);
    v7 = dword_1538B0BB0[(unsigned __int8)(v6 ^ v5)] ^ (v6 >> 8);
    v2 = v3[0xFFFFFFFF];
    v8 = dword_1538B0BB0[(unsigned __int8)v7] ^ (v7 >> 8);
  }
  return ~i;
}




















ได้ — ผมแปลงฟังก์ชันที่คุณให้มาเป็น C++ แล้วเขียนอีกฟังก์ชันที่อ่านทีละ 1024 ไบต์โดยใช้ __m128i (SSE2) เพื่อคัดลอกข้อมูลเป็นบล็อก 16 ไบต์ต่อครั้ง แล้วเก็บผลเป็น std::vector<uint8_t> ให้เลยครับ

ฟังก์ชันแรก sub_140ACA100_cpp เป็นการแปลงตรง ๆ จากโค้ดที่ให้มา (สมมติว่าตาราง dword_1538B0BB0 เป็นตาราง 256 ค่า uint32_t — เราเอาเป็นพารามิเตอร์เข้าไป)

ฟังก์ชันที่สอง read_in_chunks_simd จะคัดลอกข้อมูลจาก pointer แหล่งที่มาเป็นชิ้น ๆ ขนาด 1024 ไบต์ (หรือขนาดที่เหลือสุดท้าย) โดยใช้ _mm_loadu_si128 / _mm_storeu_si128 (safe สำหรับ unaligned) เพื่อให้โหลด/เก็บทีละ 16 ไบต์ (__m128i) และคืน std::vector<uint8_t> ที่รวมทุกบล็อก


โค้ดด้านล่างพร้อมคอมเมนต์ — ปรับเปลี่ยนชื่อตาราง/พารามิเตอร์ตามที่คุณต้องการได้เลย:

// build: MSVC / g++ with -msse2
#include <cstdint>
#include <cstddef>
#include <vector>
#include <immintrin.h> // for __m128i, _mm_loadu_si128, _mm_storeu_si128
#include <cstring>     // for memcpy (fallback/edge-case)

using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using i64 = int64_t;

// -----------------------------
// ฟังก์ชันแปลงจาก sub_140ACA100
// -----------------------------
// a1 : pointer ไปที่ sequence ของ 16-bit values (จบด้วย 0)
// a2 : ค่าเริ่มต้น (int)
// table256 : ตาราง 256 ค่า (เหมือน dword_1538B0BB0)
// ผลลัพธ์คืนค่าเป็น __int64 เหมือนต้นฉบับ
i64 sub_140ACA100_cpp(const u16* a1, int a2, const u32 table256[256]) {
    // ป้องกัน null
    if (!a1 || !table256) return 0;

    // ทำตาม logic เดิม:
    // v2 = *a1;
    // v3 = a1 + 1;
    // for (i = ~a2; v2; i = table[(uint8_t)v8] ^ (v8 >> 8)) { ... }
    u16 v2 = *a1;
    const u16* v3 = a1 + 1;
    u32 i = static_cast<u32>(~a2); // dword
    u32 v8 = 0;

    while (v2 != 0) {
        // HIBYTE(v2)
        u8 high = static_cast<u8>(v2 >> 8);
        ++v3; // ++v3
        // v6 = table[(unsigned __int8)(v2 ^ i)] ^ (i >> 8);
        u8 idx1 = static_cast<u8>(static_cast<u8>(v2 & 0xFF) ^ static_cast<u8>(i & 0xFF));
        u32 v6 = table256[idx1] ^ (i >> 8);

        // v7 = table[(unsigned __int8)(v6 ^ v5)] ^ (v6 >> 8);
        u8 idx2 = static_cast<u8>(static_cast<u8>(v6 & 0xFF) ^ high);
        u32 v7 = table256[idx2] ^ (v6 >> 8);

        // v2 = v3[0xFFFFFFFF]  --> v3[-1]
        // เพราะในต้นฉบับ: ++v3; then v3[0xFFFFFFFF] gives previous element
        v2 = v3[-1];

        // v8 = table[(unsigned __int8)v7] ^ (v7 >> 8);
        u8 idx3 = static_cast<u8>(v7 & 0xFF);
        v8 = table256[idx3] ^ (v7 >> 8);

        // update i for next iteration (as loop footer does)
        i = v8; // but note original sets i = table[...] ^ (v8 >> 8) at loop head; here we've computed v8 accordingly
        // In original: i = dword_1538B0BB0[(unsigned __int8)v8] ^ (v8 >> 8)
        // so apply that:
        u8 idx4 = static_cast<u8>(v8 & 0xFF);
        i = table256[idx4] ^ (v8 >> 8);
        // loop continues while v2 != 0
    }

    return static_cast<i64>(~i);
}

// -----------------------------
// ฟังก์ชันอ่านทีละ 1024 โดยใช้ __m128i (SSE2)
// -----------------------------
// src: pointer แหล่งข้อมูล (ไม่จำเป็นต้อง aligned)
// length: จำนวนไบต์ที่จะอ่าน
// block_size: ขนาดบล็อกอ่านทีละรอบ (default = 1024)
// คืนค่า: vector<uint8_t> ที่รวมข้อมูลทั้งหมด
std::vector<u8> read_in_chunks_simd(const void* src, size_t length, size_t block_size = 1024) {
    std::vector<u8> out;
    if (!src || length == 0) return out;

    const u8* p = reinterpret_cast<const u8*>(src);
    out.reserve(length);

    const size_t simd_bytes = 16; // __m128i size
    size_t offset = 0;

    while (offset < length) {
        size_t remaining = length - offset;
        size_t this_block = (remaining >= block_size) ? block_size : remaining;

        // copy this_block bytes using __m128i in chunks of 16
        size_t n_simd = this_block / simd_bytes;
        size_t tail = this_block % simd_bytes;

        // ensure out has space
        size_t old_size = out.size();
        out.resize(old_size + this_block);
        u8* dst = out.data() + old_size;

        const u8* read_ptr = p + offset;
        u8* write_ptr = dst;

        for (size_t k = 0; k < n_simd; ++k) {
            // unaligned load/store safe functions
            __m128i reg = _mm_loadu_si128(reinterpret_cast<const __m128i*>(read_ptr));
            _mm_storeu_si128(reinterpret_cast<__m128i*>(write_ptr), reg);
            read_ptr += simd_bytes;
            write_ptr += simd_bytes;
        }

        // handle tail bytes
        if (tail) {
            // copy remaining tail bytes (<=15)
            std::memcpy(write_ptr, read_ptr, tail);
        }

        offset += this_block;
    }

    return out;
}

// -----------------------------
// ตัวอย่างการใช้งาน (pseudo)
// -----------------------------
/*
#include <iostream>
int main() {
    // ตัวอย่าง table (ต้องแทนที่ด้วยค่าจริงของคุณ)
    u32 table[256];
    for (int j=0;j<256;++j) table[j] = j; // ตัวอย่าง

    // ตัวอย่างข้อมูล 16-bit sequence (จบด้วย 0)
    u16 arr[] = { 0x1234, 0xABCD, 0x0001, 0x0000 }; // สังเกตตัวสุดท้ายเป็น 0 -> loop หยุด
    i64 r = sub_140ACA100_cpp(arr, 0xDEADBEEF, table);
    std::cout << "result: " << r << std::endl;

    // ตัวอย่าง read_in_chunks_simd
    const char sample[] = "This is test data to be read in blocks by SSE2..."; 
    auto data = read_in_chunks_simd(sample, sizeof(sample)-1, 1024);
    std::cout << "read bytes: " << data.size() << std::endl;
    return 0;
}
*/

ถ้าต้องการ:

ผมจะใส่ตาราง dword_1538B0BB0 แบบสำเร็จ (เช่นตาราง CRC32 แบบมาตรฐาน) ให้ตรงกับต้นฉบับ หรือ

เปลี่ยน read_in_chunks_simd ให้ทำ ReadProcessMemory ของ process อื่น (ผมสามารถเพิ่มตัวอย่าง ReadProcessMemory บน Windows ได้ แต่ต้องระบุ HANDLE และสิทธิ์) — บอกมาได้เลย


บอกด้วยถ้าต้องการให้ผม:

1. ปรับให้ใช้ AVX (32 bytes) แทน SSE2 (16 bytes)


2. หรืออยากให้ฟังก์ชัน sub_140ACA100_cpp รับข้อมูลเป็น std::u16string หรือ std::vector<uint16_t> แทน pointer เดียวครับ.



