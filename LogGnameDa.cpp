
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
*/
  
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

















  ดีครับ คุณชี้จุดมาถูกทางแล้ว — ถ้าเกมใช้ bcrypt (CNG / Windows Bcrypt API) สำหรับเข้ารหัส / ถอดรหัสบางส่วน (เช่น AES, hashing, HMAC ฯลฯ) — คุณสามารถใช้ API ของ Windows CNG / bcrypt.dll ร่วมกับ .lib ที่มากับ Windows SDK ได้เลย ไม่จำเป็นต้องหา lib ภายนอกเสริม (ยกเว้นคุณอยากใช้ implementation ของบุคคลที่สาม)

ผมจะอธิบายให้เข้าใจว่า .lib ไหน / .h ไหน / API แนวทางอย่างไรพร้อมตัวอย่างโค้ดให้คุณนำไปทดลองเอง:


---

🧩 .lib / .dll / .h ที่เกี่ยวกับ bcrypt บน Windows (CNG)

Windows มี API ชื่อ CNG (Cryptography Next Generation) ซึ่งให้ฟังก์ชันเช่น BCryptEncrypt, BCryptDecrypt, BCryptCreateHash, BCryptDeriveKey, ฯลฯ ซึ่งอยู่ใน bcrypt.dll และ header ที่ประกอบ:

Header: bcrypt.h (และ ntstatus.h) — ประกาศฟังก์ชัน CNG เช่น BCryptDecrypt, BCryptOpenAlgorithmProvider ฯลฯ 

Library import: bcrypt.lib (ซึ่งลิงก์กับ bcrypt.dll) — เมื่อคุณ include bcrypt.h และลิงก์กับ bcrypt.lib คุณก็เรียกใช้ฟังก์ชัน CNG ได้

DLL runtime: bcrypt.dll — เป็น library ที่ระบบปฏิบัติการจัดสรรให้


ตัวอย่างจากเอกสาร Microsoft:

> BCryptDecrypt เป็นฟังก์ชันที่ถอดรหัสข้อมูลที่ถูกเข้ารหัสแล้ว (input) ไปเป็น plaintext โดยต้องให้ key, IV, padding info ฯลฯ 



ดังนั้น ถ้าคุณต้องการ “ถอด” ข้อความที่ถูกเข้ารหัสโดย bcrypt-API ภายในเกม (หรือใช้ CNG) — ใช้ bcrypt.lib + bcrypt.h ได้เลย


---

🔍 ตัวอย่างโค้ดเบื้องต้นในการใช้ BCryptDecrypt

สมมุติว่าคุณได้ key / IV / mode ที่เกมใช้มา (ต้อง reverse-engineer มา) — จากนั้น:

#include <windows.h>
#include <bcrypt.h>
#pragma comment(lib, "bcrypt.lib")

NTSTATUS decryptWithBcrypt(
    BCRYPT_KEY_HANDLE hKey,
    const uint8_t* ciphertext,
    size_t cbCiphertext,
    const uint8_t* iv,
    size_t cbIV,
    uint8_t* plaintext,
    size_t cbPlaintext,
    ULONG* pcbResult)
{
    // ตัวเลือก flags — ถ้าต้องใช้ padding
    DWORD flags = 0;
    // ถ้าเกมใช้ padding แบบ block padding
    // flags |= BCRYPT_BLOCK_PADDING;

    NTSTATUS status = BCryptDecrypt(
        hKey,
        (PUCHAR)ciphertext,
        static_cast<ULONG>(cbCiphertext),
        nullptr,           // pPaddingInfo (NULL ถ้าไม่ใช้ authenticated mode)
        (PUCHAR)iv,
        static_cast<ULONG>(cbIV),
        (PUCHAR)plaintext,
        static_cast<ULONG>(cbPlaintext),
        pcbResult,
        flags);

    return status;
}

ในขั้นตอนคุณต้อง:

1. Open algorithm provider: BCryptOpenAlgorithmProvider


2. Generate / import key: BCryptGenerateKey หรือ BCryptImportKey


3. กำหนด IV และ padding ถ้าจำเป็น


4. เรียก BCryptDecrypt เพื่อถอดรหัส




---

📂 เกี่ยวกับ Dumper-7 ที่คุณส่งมา

ผมตรวจดู repository Encryqed/Dumper-7 — มันเป็น “SDK Generator สำหรับ UE” 
แต่ดูเงื่อนไขแล้ว ในรหัสของ Dumper-7 มัน override offset / decryption บางส่วน เช่น:

ใน Generator::InitEngineCore() มี:

InitObjectArrayDecryption([](void* ObjPtr) -> uint8* {
    return reinterpret_cast<uint8*>(uint64(ObjPtr) ^ 0x8375);
});

ซึ่งเป็น XOR ปกติ ไม่ใช่ bcrypt เรียกว่า decryption แบบง่าย
ถ้าเกมใส่ bcrypt จริง ๆ — Dumper-7 อาจไม่รองรับ ถ้าไม่ได้ reverse เงื่อนไขนั้น


---

⚠️ ข้อสังเกตสำคัญเกี่ยวกับ bcrypt

bcrypt (CNG) ใน Windows ให้ encryption / decryption / hash / key derivation — ใช้สำหรับ symmetric / asymmetric / hashing

แต่ bcrypt ในงานทั่วไป (เช่น bcrypt() ที่ใช้เก็บรหัสผ่าน) เป็น hash one-way — คุณไม่สามารถ “ถอดกลับ” ได้ (ซึ่งต่างกันกับ CNG) 

ถ้าเกมใช้ bcrypt ในฐานะ “hash” เช่น เก็บ hash รหัสผ่าน / token — คุณ ไม่สามารถ ถอดออก — ได้แค่ “ลอง hashing ใหม่แล้วเปรียบเทียบ”


ดังนั้นคุณต้องแยกให้ชัด:

สถานการณ์	ใช้ bcrypt แบบไหน	ถอดรหัสได้หรือไม่	วิธีใช้ใน C++

เกมใช้ CNG / bcrypt.dll (เช่น AES, symmetric crypto)	BCryptDecrypt / BCryptEncrypt	ถอดได้ (ถ้ามีคีย์ + IV + โหมด)	ใช้ bcrypt.h + bcrypt.lib
เกมใช้ bcrypt แบบ hashing (password hashing)	hash one-way	ไม่สามารถถอดกลับ	ต้อง brute-force / dictionary / same hash compare



---

✅ สรุป – คุณต้องใช้อะไร

ถ้าเกมใช้ CNG crypto → ใช้ bcrypt.h + ลิงก์ bcrypt.lib

ถ้าคุณยังไม่มี bcrypt.lib ใน project → หามาจาก Windows SDK (มักมาพร้อม)

ถ้าคุณเจอ unresolved externals เช่น _BCryptDecrypt@… — ตรวจให้ลิงก์ bcrypt.lib ถูกต้อง

ถ้าคุณอยากให้ผมช่วย integrate bcrypt + Capstone + __m128i ในกรณีเกมจริง — ผมช่วยเขียนโค้ดตัวอย่างเต็มให้เลยมั้ยครับ?










โอเค งั้นผมจะเขียนโค้ดรวมให้คุณเลยครับ เอาแบบ อ่านค่า 128 บิต (__m128i) จาก address ที่คุณส่งเข้ามา → เช็คว่ามันเป็น block ที่ “น่าจะถูกเข้ารหัส/เก็บ pointer” ตามเงื่อนไข → ถ้าผ่าน ก็คืนค่าเป็น true และให้คุณไปถอด/ใช้งานต่อได้

ตัวอย่าง (C++11 ขึ้นไป, ใช้ <emmintrin.h>):

#include <windows.h>
#include <emmintrin.h>  // __m128i
#include <vector>
#include <cstdint>
#include <iostream>

// อ่านจาก driver / ReadProcessMemory แบบ generic
template<typename T>
T readEx(uint64_t addr, HANDLE hProc)
{
    T buffer{};
    SIZE_T bytesRead = 0;
    if (!ReadProcessMemory(hProc, reinterpret_cast<LPCVOID>(addr), &buffer, sizeof(T), &bytesRead)) {
        return T{};
    }
    return buffer;
}

// ฟังก์ชันตรวจสอบว่า block (__m128i) ที่อ่านมาเป็น "ข้อมูลเข้ารหัส/ptr"
bool isEncodedBlock(const __m128i& block)
{
    alignas(16) uint8_t bytes[16];
    _mm_storeu_si128(reinterpret_cast<__m128i*>(bytes), block);

    int zeroCount = 0;
    for (int i = 0; i < 16; i++) {
        if (bytes[i] == 0x00) zeroCount++;
    }

    // เงื่อนไขตามที่คุณบอก:
    // - byte แรกหรือท้ายมีค่า != 0
    // - และมี 0x00 เกินครึ่ง (>= 8 bytes)
    bool headTailNonZero = (bytes[0] != 0x00 || bytes[15] != 0x00);
    bool tooManyZeros = (zeroCount >= 8);

    return headTailNonZero && tooManyZeros;
}

// ใช้งานจริง
void testEncoded(HANDLE hProc, uint64_t addr)
{
    __m128i data = readEx<__m128i>(addr, hProc);

    if (isEncodedBlock(data)) {
        std::cout << "Address 0x" << std::hex << addr
                  << " looks like ENCODED pointer block.\n";
    } else {
        std::cout << "Address 0x" << std::hex << addr
                  << " looks like NORMAL data.\n";
    }
}


---

อธิบาย

1. readEx<T> → อ่าน memory จาก process ด้วย type ที่คุณส่ง (__m128i ก็ได้, uint32_t, float, ฯลฯ)


2. isEncodedBlock → เช็คว่า block 16 bytes นั้นมี pattern น่าสงสัย

byte แรก/ท้าย ต้องไม่เป็นศูนย์ทั้งคู่ (อย่างน้อยมีค่า ≠ 0)

จำนวนศูนย์ ≥ 8 (ครึ่งหนึ่งขึ้นไปเป็น 00)



3. testEncoded → ใช้ตรวจสอบ address ที่ส่งมา




---

👉 คุณสามารถเอาไป integrate กับ Capstone disasm + readEx ที่คุณมีอยู่แล้วได้เลย เช่น เวลาคุณเจอ pointer candidate ก็ดึง 16 bytes (__m128i) มาเช็คก่อนว่า “เข้ารหัสหรือไม่”

คุณอยากให้ผมเขียนเวอร์ชันที่ คืนค่า pointer จริง (uint64_t) ด้วยเลย (เช่นถ้า block ผ่านเงื่อนไข ก็แตกออกมาเลือก field ที่น่าจะเป็น pointer) มั้ยครับ?
























#newwwwewww

ยอด — ผมจะสรุปให้เป็นภาพรวมแบบปฏิบัติได้เลย (ภาษาไทย) แล้วตามด้วยโค้ดตัวอย่างที่คุณสามารถเอาไปต่อยอดทันที

สิ่งที่ต้องรู้ก่อนเริ่ม (จากโค้ด Assembly / Decompile ที่คุณให้มา)

โค้ดมี สองโหมดหลัก ขึ้นกับบิตใน *a2 & 1:

ถ้า v6 = *a2 & 1 เป็นจริง → โหมด wide (16-bit / __int16 / word) (ใช้ sub_14AA7A3F0)

ถ้าไม่เป็นจริง → โหมด narrow / byte (8-bit) (ใช้ sub_14AA7A1E0)


ทั้งสองโหมดใช้ pattern XOR/rolling (กลุ่ม dword_1538B0BB0, dword_1538B2BB0) เพื่อคำนวณค่า rolling (เหมือน CRC-lookup) และมีการเรียก sub_140ACA100 (ฟังก์ชัน checksum/rolling ที่คุณให้ก่อนหน้านี้)

sub_14AA7A1E0 / sub_14AA7A3F0 เป็น การ XOR byte/word ด้วยค่าที่คำนวณจาก (a2 % 9) — นั่นคือมี 9 แบบของการ XOR (case 0..8) — ต้อง implement ตามต้นฉบับ

จุดที่อ่าน string จริง ๆ อยู่ที่ a1 + 6 (wide) หรือ a1 + 7 (narrow) ตามตัวอย่าง decompile — ดังนั้น offset ของ start string เป็นจุดสำคัญ



---

คำตอบสั้น ๆ: มีกี่แบบ และต้องปรับกี่จุด?

1. รูปแบบการเข้ารหัสที่เห็นในฟังก์ชันนี้ (หลัก ๆ)

แบบ byte-wise XOR (narrow) — sub_14AA7A1E0 (9 แบบตาม a2 % 9)

แบบ word-wise XOR (wide) — sub_14AA7A3F0 (9 แบบตาม a2 % 9)

แบบ rolling-table (CRC-like) — ใช้ dword_1538B0BB0 / dword_1538B2BB0 lookup + shifts/xor (ใน loop)

อ่าน/เช็ค flag byte (bit0) เพื่อเลือกโหมด wide/narrow



2. จุดที่ต้องปรับ/ดู/มีตัวแปรสำคัญ (integration points) — อย่างน้อยต้องมี:

address ของ GNames (หรือ pointer table) — PtrGname

การอ่าน chunk pointer จาก PtrGname + (chunkOffset+1)*8

การอ่าน name entry pointer จาก chunk (index nameOffset)

offsets ใน structure — start-of-string (น่าจะ +6 สำหรับ wide, +7 สำหรับ narrow) และ field ที่เก็บ flags/length (a2 ใน decomp)

ที่อยู่ของ lookup tables (dword_1538B0BB0, dword_1538B2BB0) — อ่านมาจาก process เพื่อใช้คำนวณ

ImageBase หรือ pointer ที่ใช้ใน XOR (ใน assemble: lea r8, __ImageBase) — อาจใช้เป็น base index

ตัวแปรชั่วคราวสำหรับ buffer เมื่ออ่านแบบ __m128i (16-bytes chunk)

ถ้าจะเขียนค่าแทน (apply decoded back) ต้องมี buffer/flag ว่าเขียนจริงหรือแค่ decode locally



3. ถ้าใช้ฟังก์ชันที่ผมเขียนด้านบน (อ่านแบบ __m128i) แล้วแทนค่าเองตามไปด้วย ต้องมีตัวแปร/ข้อมูลเพิ่ม:

HANDLE hProc หรือ driver handle ที่อ่านหน่วยความจำ

BaseAddress ของ process/module (Addr::processBasemodule.BaseAddress)

Offsets: OffsetGname (และ fallback decrypt function ถ้า pointer ถูกเข้ารหัส)

Address ของ lookup tables (dword_1538B0BB0, dword_1538B2BB0) — เก็บเป็น uint64_t tbl0_addr, tbl2_addr แล้วอ่านตาราง 256*4 ไบต์

bool isWide หรือ read flag byte (จาก entry header) เพื่อเลือก routine

temporary buffers: std::vector<uint8_t> bufferBytes, std::vector<uint16_t> bufferWords

ถ้าต้องการความเร็ว: buffer ที่เก็บ data ในหน่วย __m128i เช่น std::vector<__m128i> chunkVec (แต่ยังต้องแปลงเป็น bytes/words เพื่อ decode)

ถ้าจะคำนวณ checksum/validate ต้องเก็บค่าที่ return (เช่น a1+0x806, a1+0x808 ใน decomp) เพื่อเปรียบเทียบ





---

ต่อไปผมให้โค้ดตัวอย่าง (ครบ flow) — โค้ดนี้เป็น best-effort โดยผมแปลง logic จาก decompiled code มาเป็น C++ ที่ใช้ ReadProcessMemory (หรือ driver read) + ใช้ __m128i อ่านทีละ 16 ไบต์ แล้ว decode ตาม case 0..8 สำหรับ byte/word branch และมีฟังก์ชัน rolling-table (CRC-like) ที่สามารถใช้กับ table ที่อ่านมาจาก process ได้

> หมายเหตุสำคัญ: บางตำแหน่ง (เช่นตำแหน่งของ a2 field ที่จริง ๆ อาจอยู่ที่ offset อื่น) ผมเดาจาก decompile — คุณอาจต้องปรับ offset เช่น nameHeaderFlagOffset หรือ nameStartOffset ให้ตรงกับเกมจริง



// GetNameFromFName_robust.cpp
// C++17, Windows.
// Requires: <emmintrin.h>, linking bcrypt/lib not required here.
// Uses ReadProcessMemory - replace with your read driver function if needed.

#include <windows.h>
#include <emmintrin.h>
#include <vector>
#include <string>
#include <cstdint>
#include <cassert>
#include <iostream>

// --- helper reads (wrap ReadProcessMemory or your driver read) ---
template<typename T>
bool read_mem(HANDLE hProc, uint64_t address, T &out) {
    SIZE_T br = 0;
    return ReadProcessMemory(hProc, (LPCVOID)address, &out, sizeof(T), &br) && br == sizeof(T);
}
bool read_bytes(HANDLE hProc, uint64_t address, void* buf, size_t sz) {
    SIZE_T br = 0;
    return ReadProcessMemory(hProc, (LPCVOID)address, buf, sz, &br) && br == sz;
}

// read using __m128i block (unaligned safe)
bool read128_block(HANDLE hProc, uint64_t address, __m128i &out) {
    alignas(16) uint8_t tmp[16];
    if (!read_bytes(hProc, address, tmp, 16)) return false;
    out = _mm_loadu_si128(reinterpret_cast<const __m128i*>(tmp));
    return true;
}

// --- decoding helpers translated from sub_14AA7A1E0 (byte) and sub_14AA7A3F0 (word) ---
void decode_bytes_case(std::vector<uint8_t> &buf, unsigned int a2) {
    size_t n = buf.size();
    unsigned int mode = a2 % 9;
    for (size_t i = 0; i < n && i < a2; ++i) { // decompiled loop used comparision result < a2
        uint8_t key = 0;
        switch (mode) {
            case 0: key = static_cast<uint8_t>((a2 + (a2 & 0x1F) + 0x80) | 0x7F); break;
            case 1: key = static_cast<uint8_t>((a2 + (a2 ^ 0xDF) + 0x80) | 0x7F); break;
            case 2: key = static_cast<uint8_t>((a2 + (a2 | 0xCF) + 0x80) | 0x7F); break;
            case 3: key = static_cast<uint8_t>((0x21 * a2 + 0x80) | 0x7F); break;
            case 4: key = static_cast<uint8_t>((a2 + (a2 >> 2) + 0x80) | 0x7F); break;
            case 5: key = static_cast<uint8_t>((3 * (a2 - 0x29)) | 0x7F); break;
            case 6: key = static_cast<uint8_t>((a2 + ((4 * a2) | 5) + 0x80) | 0x7F); break;
            case 7: key = static_cast<uint8_t>((a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F); break;
            case 8: key = static_cast<uint8_t>((a2 + (a2 ^ 0xC) + 0x80) | 0x7F); break;
            default: key = static_cast<uint8_t>((a2 + (a2 ^ 0x40) + 0x80) | 0x7F); break;
        }
        buf[i] ^= key;
    }
}

void decode_words_case(std::vector<uint16_t> &buf, unsigned int a2) {
    size_t n = buf.size();
    unsigned int mode = a2 % 9;
    for (size_t i = 0; i < n && (i*2) < a2; ++i) { // decompiled increments by 2 for word
        uint16_t key = 0;
        switch (mode) {
            case 0: key = static_cast<uint16_t>((a2 + (a2 & 0x1F) + 0x80) | 0x7F); break;
            case 1: key = static_cast<uint16_t>((a2 + (a2 ^ 0xDF) + 0x80) | 0x7F); break;
            case 2: key = static_cast<uint16_t>((a2 + (a2 | 0xCF) + 0x80) | 0x7F); break;
            case 3: key = static_cast<uint16_t>((0x21 * a2 + 0x80) | 0x7F); break;
            case 4: key = static_cast<uint16_t>((a2 + (a2 >> 2) + 0x80) | 0x7F); break;
            case 5: key = static_cast<uint16_t>((3 * a2 + 0x85) | 0x7F); break; // note: decompiled word-case uses different constant
            case 6: key = static_cast<uint16_t>((a2 + ((4 * a2) | 5) + 0x80) | 0x7F); break;
            case 7: key = static_cast<uint16_t>((a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F); break;
            case 8: key = static_cast<uint16_t>((a2 + (a2 ^ 0xC) + 0x80) | 0x7F); break;
            default: key = static_cast<uint16_t>((a2 + (a2 ^ 0x40) + 0x80) | 0x7F); break;
        }
        buf[i] ^= key;
    }
}

// --- rolling-table CRC-like (generic) ---
// buf: bytes to feed, table: pointer to 256 uint32 entries read from target
uint32_t rolling_table_calc(const std::vector<uint8_t> &buf, const uint32_t table256[256], uint32_t init = 0xFFFFFFFFu) {
    uint32_t r = init;
    for (uint8_t b : buf) {
        r = table256[(uint8_t)(r ^ b)] ^ (r >> 8);
    }
    return r;
}

// --- high-level routine to read name entry and decode ---
std::string GetNameFromFName_robust(
    HANDLE hProc,
    uint32_t ukey,
    uint64_t PtrGname,
    uint64_t tbl0_addr, // address of dword_1538B0BB0 in remote process
    uint64_t tbl2_addr, // address of dword_1538B2BB0 in remote process (if used)
    uint64_t imageBase  // __ImageBase
) {
    // extract chunk and name index (as your snippet)
    uint32_t chunkOffset = (ukey >> 18) & 0x3FFFu;
    uint32_t nameOffset  = ukey & 0x3FFFFu;

    if (!PtrGname) return {};

    // read chunk pointer (PtrGname[(chunkOffset+1)]) as u64
    uint64_t chunkPtrAddr = PtrGname + static_cast<uint64_t>((chunkOffset + 1) * 8);
    uint64_t chunkPtr = 0;
    if (!read_mem<uint64_t>(hProc, chunkPtrAddr, chunkPtr) || !chunkPtr) return {};

    // read name entry pointer from chunk: typically chunkPtr[nameOffset]
    uint64_t nameEntryPtr = 0;
    uint64_t namePtrAddr = chunkPtr + static_cast<uint64_t>(nameOffset * 8);
    if (!read_mem<uint64_t>(hProc, namePtrAddr, nameEntryPtr) || !nameEntryPtr) return {};

    // read first few bytes of the header to find flag & lengths
    // Based on decompile: a2 is pointer to some header: *a2 & 1 => wide flag
    // In decompile they later access word at a2 >> 6 etc. We'll try to read first 8 bytes:
    alignas(8) uint8_t header8[8] = {0};
    if (!read_bytes(hProc, nameEntryPtr, header8, sizeof(header8))) return {};

    bool isWide = (header8[0] & 1) != 0;            // *a2 & 1
    // guess length-field: they used *(unsigned __int16 *)a2 >> 6 in decompile
    // we try reading a 16-bit value at header start:
    uint16_t header16 = *reinterpret_cast<uint16_t*>(header8);
    unsigned int lengthCandidate = (unsigned int)header16 >> 6; // used by decompiled code
    if (lengthCandidate == 0) lengthCandidate = 256; // fallback limit

    // Read the actual string data start addresses (based on decompile)
    uint64_t dataStart = isWide ? (nameEntryPtr + 6) : (nameEntryPtr + 7);

    // read up to N chars/words (safe guard)
    size_t maxChars = 512;
    if (isWide) {
        // read words until 0 (null-terminated) but read in chunks via __m128i
        std::vector<uint16_t> words;
        words.reserve(256);
        for (size_t i = 0; i < maxChars; ++i) {
            uint16_t w = 0;
            if (!read_mem<uint16_t>(hProc, dataStart + i * 2, w)) break;
            if (w == 0) { words.push_back(0); break; }
            words.push_back(w);
        }

        // decode words using the word-case function (we used header16 >> 6 as a2)
        decode_words_case(words, lengthCandidate);

        // convert words -> utf8 string
        std::u16string u16s;
        for (uint16_t w : words) {
            if (w == 0) break;
            u16s.push_back(w);
        }
        // convert u16 to utf8
        std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> conv;
        return conv.to_bytes(reinterpret_cast<char16_t*>(u16s.data()), reinterpret_cast<char16_t*>(u16s.data()+u16s.size()));
    } else {
        // narrow (bytes)
        std::vector<uint8_t> bytes;
        bytes.reserve(256);
        for (size_t i = 0; i < maxChars; ++i) {
            uint8_t b = 0;
            if (!read_mem<uint8_t>(hProc, dataStart + i, b)) break;
            if (b == 0) { bytes.push_back(0); break; }
            bytes.push_back(b);
        }

        // decode bytes using byte-case (header16 >> 6)
        decode_bytes_case(bytes, lengthCandidate);

        // convert to std::string (assuming ASCII/UTF-8 already)
        std::string out;
        for (uint8_t c : bytes) {
            if (c == 0) break;
            out.push_back(char(c));
        }
        return out;
    }
}


---

อธิบายโค้ด & สิ่งที่คุณต้องปรับตามจริงในเกม

1. Offset ของ header / a2 field — ผมใช้ nameEntryPtr + 0..+7 แล้วใช้ first byte/word as header (ตาม decompile) — คุณต้องเช็คว่าในเกมจริง a2 อยู่ที่ที่เดียวกันหรือไม่ (บางเกมเก็บในโครงสร้างอื่น)


2. การอ่าน chunk pointer — รูปแบบ PtrGname[(chunkOffset+1)] ผมตามตัวอย่างคุณ — บางเกมอาจใช้ layout ต่างกัน (ต้องปรับ)


3. ค่า lengthCandidate (a2 >> 6) — ผมเดาจาก decompile ว่าพวก length/size ถูกเก็บแบบนี้ — ถ้าพบว่าผลลัพธ์ไม่ถูกต้อง ให้เปลี่ยนการคำนวณ length (เช่นอ่านจาก field อื่นหรืออ่านจนเจอ \0)


4. lookup tables — ถ้าคุณต้องคำนวณ rolling-table หรือ validate checksum ให้ read_mem ตาราง 256*4 ไบต์ จาก tbl0_addr/tbl2_addr แล้วเรียก rolling_table_calc ก่อน/หลัง decode เพื่อเช็คค่า a1+0x806/0x808 ตาม decompile


5. การใช้ __m128i — โค้ดตอนอ่านทีละ char/word ปกติ ถาต้องการ optimize ให้ใช้ read128_block เพื่อดึง 16 ไบต์ต่อครั้ง จากนั้นแยกเป็น bytes/words ใน buffer ก่อน decode — โค้ดตัวอย่างใช้ read_mem ต่อค่า เพราะอ่านทีละตัวง่ายเข้าใจ แต่คุณสามารถเปลี่ยนเป็น loop ที่ read128_block เป็นชุด ๆ เพื่อความเร็ว


6. เขียนคืน (แทนค่าใน process) — โค้ดตัวอย่างนี้ ไม่เขียนกลับไป ถ้าคุณต้องการเขียน decoded data กลับไปยัง process (dangerous) ให้มี:

bool doWriteBack parameter

หลัง decode ให้เรียก WriteProcessMemory(hProc, (LPVOID)dataStart, decodedBuf.data(), decodedSize, &bw) (หรือ driver write)

อย่าลืมตรวจสอบ permissions / anti-cheat





---

Checklist ที่ควรมีในโปรเจกต์คุณ (ตัวแปร/ข้อมูล)

HANDLE hProc หรือ driver interface

uint64_t processBase (module base)

uint64_t PtrGname (GNames base)

uint64_t tbl0_addr, tbl2_addr (addresses for lookup tables)

uint64_t imageBase (if used for index)

temporary buffer vectors (bytes / words / __m128i)

reader function (read_mem, read_bytes, read128_block)

write function (ถ้าจะเขียน)

demangle / capstone contexts (ถ้าจะ disasm/resolve)

fallback / heuristics (เช่น อ่านจนเจอ NUL, หรือ ถ้า lengthCandidate == 0 ให้ใช้ different method)



---

สรุปสั้น ๆ (action plan)

1. โหลด/อ่าน PtrGname และ lookup tables จาก process


2. สำหรับแต่ละ ukey หา chunkPtr → nameEntryPtr


3. อ่าน header (first byte/word) เพื่อดู isWide และ length-related field


4. อ่าน data block (ใช้ read128_block เป็นชุด ๆ) เก็บเป็น bytes/words


5. เรียก decode_bytes_case หรือ decode_words_case ตามโหมด









แนวคิดเบื้องต้นเกี่ยวกับการเข้ารหัสตัวชี้

ในการพัฒนาเกมหรือระบบที่มีการป้องกัน (anti-cheat) มักมีการเข้ารหัส (obfuscate) ตัวชี้ (pointer) ของข้อมูลสำคัญ เช่น ตัวชี้ไปยังรายชื่อผู้เล่น อ็อบเจ็กต์ในโลกเกม หรือโครงสร้างข้อมูลภายในเกม. วิธีนี้คล้ายกับเทคนิค EncodePointer ใน Windows ที่เพิ่มชั้นการป้องกันให้กับตัวชี้ โดยเข้ารหัสค่าของ pointer ทุกครั้งที่ถูกใช้งาน. จุดประสงค์คือหากผู้โจมตีสามารถอ่านค่าที่ถูกเข้ารหัสได้ ก็ไม่สามารถรู้ตำแหน่งจริงของข้อมูลในหน่วยความจำได้ง่ายๆ (เพราะต้องถอดรหัสก่อนถึงจะได้ pointer จริง). การเข้ารหัสตัวชี้นี้มักทำให้ไม่สามารถใช้วิธี pointer scan แบบเดิมได้ เพราะในหน่วยความจำค่านั้นเป็นค่าที่เข้ารหัสอยู่ (และ pointer เดิมที่ถูกถอดรหัสจะอยู่เฉพาะบน Stack เท่านั้น).

ตัวอย่างในเกม: ในกรณีของเกม Delta Force: Hawk Ops (Unreal Engine) และเกมอื่นๆ ที่มีระบบป้องกัน ผู้พัฒนาเกมอาจเข้ารหัสตัวชี้เพื่อป้องกันการดักอ่าน เช่น การแทรกค่า 0x00 เข้าไปในตัวชี้ 8 ไบต์ตามรูปแบบที่บอกไว้ ทำให้ไม่สามารถอ่าน pointer ตัวจริงได้ทันทีจากหน่วยความจำ.

ผลกระทบ: เนื่องจากตัวชี้สำคัญถูกเข้ารหัสอยู่ การเรียก Pointer Scan หรือ ReadMemory ปกติจะได้ค่า pointer ที่ผิดเพี้ยน (เป็นค่าที่ถูกเข้ารหัสไว้) เราจึงต้องถอดรหัสคืนก่อนนำมาใช้.


ขั้นตอนและเทคนิคในการถอดรหัสตัวชี้

เนื่องจากค่าตัวชี้ในหน่วยความจำถูกบิดเบือน (เช่นมีค่า 0x00 แทรกอยู่ตรงกลาง) เราจึงต้องอ่านข้อมูลเป็นแบบ raw bytes แล้วทำการรวม (reassemble) ให้ได้ pointer จริง ดังนี้:

อ่านหน่วยความจำด้วย driver: ใช้ฟังก์ชันอ่านหน่วยความจำ เช่น driver.read<uintptr_t>(address+offset) หรืออ่านเป็นบัฟเฟอร์ดิบ (driver.readdm(address+offset, &buff, size)) เพื่อดึงข้อมูล 8 ไบต์จากตำแหน่งที่ต้องการ. วิธีนี้จะได้ค่า encoded pointer หรือ raw bytes 8 ตัว ซึ่งอาจมีค่า 0x00 แทรกอยู่ภายใน.

ตรวจสอบไบต์ทั้งหมด: ตรวจสอบว่าใน 8 ไบต์ที่อ่านมา ไม่ใช่ค่าศูนย์ทั้งหมด (เพราะถ้าเป็น 0x0000000000000000 แสดงว่าเป็น null pointer หรือเป็น pointer ชี้ไปยังหน้า memory-mapped ซึ่งไม่ต้องการ). ถ้าเป็น null ให้ข้าม (ไม่ประมวลผล) เพื่อลดข้อผิดพลาด.

ถอดรหัสโดยแยกไบต์: สมมติรูปแบบที่พบคือแทรก 0x00 0x00 0x00 0x00 ตรงกลาง เช่น ใน little-endian ถ้ามีแค่ไบต์ส่วนล่าง 2 ไบต์และส่วนบน 2 ไบต์ไม่เป็นศูนย์ เราสามารถนำส่วนบนและส่วนล่างมาเชื่อมกัน (shift and OR) เพื่อคืนค่า pointer จริง. ตัวอย่างโค้ดการถอดรหัส:

// สมมติอ่านค่าที่เข้ารหัสมาเป็น 8 ไบต์ใน encodedPtr
uintptr_t encodedPtr = driver.read<uintptr_t>(address + offset);
// แยกค่า 16 บิตล่างและ 16 บิตบน (bit 0-15 และ bit 48-63)
uint64_t lowPart  = (uint64_t)(encodedPtr & 0xFFFF);
uint64_t highPart = (uint64_t)((encodedPtr >> 48) & 0xFFFF);
// รวม pointer ใหม่ (สมมติรูปแบบที่เข้ารหัสคือ highPart << 16 | lowPart)
uintptr_t realPtr = (uintptr_t)((highPart << 16) | lowPart);

หากรูปแบบการเข้ารหัสต่างออกไป (เช่นสลับตำแหน่งไบต์ หรือ XOR ค่าเฉพาะ) ก็ต้องปรับ algorithm ตามที่เจอตามผลการวิเคราะห์. ขั้นตอนหลักคือ อ่านข้อมูลเป็นไบต์ และ รวมส่วนที่ไม่ใช่ 0 เข้าด้วยกัน เพื่อคืนค่า pointer จริง.

วนลูปตรวจสอบ: หากต้องเดิน pointer chain (pointer หลายทอด) ให้ทำแบบ loop ดังนี้: อ่าน pointer แรก, ถอดรหัสตามขั้นตอนข้างต้น, ตรวจสอบว่าไม่ใช่ 0x0, แล้วใช้ผลลัพธ์เป็น base address สำหรับอ่าน offset ถัดไป ทำซ้ำจนกว่าจะครบทอดหรือ pointer กลายเป็น 0. การเช็คว่า pointer ไม่ใช่ null (8 ไบต์ไม่ใช่ 0 ทุกตำแหน่ง) เป็นการป้องกันไม่ให้เกิดการ dereference pointer ผิด (เช่นชี้ไปยังหน้า memory map ที่ไม่ควรเข้าถึง). ขั้นตอนนี้ช่วยให้มั่นใจว่าการใช้ pointer ปลายทางทำได้อย่างปลอดภัย.

การใช้บัฟเฟอร์ดิบ: หากไลบรารีหรือ driver จำกัดว่าฟังก์ชัน read<T>() รับได้สูงสุด 8 ไบต์เพียง 1 ตัว คุณอาจใช้วิธีอ่านเป็นบัฟเฟอร์ของอาร์เรย์ไบต์ เช่น:

uint8_t buff[8];
driver.readdm(address + offset, buff, sizeof(buff));
// จากนั้นวิเคราะห์ buff[0]..buff[7] แทน, เช่น รวม buff[6..7] และ buff[0..1]

วิธีนี้ทำให้มองเห็นไบต์ทั้งหมดและจัดเรียงใหม่ได้ละเอียดกว่า โดยหลีกเลี่ยงเงื่อนไขปกติของ <T> template.


สรุปตัวอย่างโค้ด (C++)

สรุปขั้นตอนโดยย่อ โค้ดตัวอย่างต่อไปนี้แสดงวิธีอ่านและถอดรหัส pointer (สมมติรูปแบบที่อธิบายไว้ข้างต้น):

uintptr_t readDecodedPointer(uintptr_t baseAddress, uintptr_t offset) {
    // อ่าน pointer ที่เข้ารหัสมา (8 ไบต์)
    uintptr_t encodedPtr = driver.read<uintptr_t>(baseAddress + offset);
    // ถ้าเป็น null (0x000...00) คืน 0 ทันที
    if (encodedPtr == 0) return 0;
    // ถอดรหัสโดยแยกส่วนล่างและบนแล้วรวมกัน
    uint64_t lowPart  = (uint64_t)(encodedPtr & 0xFFFF);
    uint64_t highPart = (uint64_t)((encodedPtr >> 48) & 0xFFFF);
    uintptr_t realPtr = (uintptr_t)((highPart << 16) | lowPart);
    // ตรวจสอบอีกครั้งว่า pointer ที่ถอดรหัสได้ไม่ใช่ 0 ทั้งหมด
    return (realPtr != 0 ? realPtr : 0);
}

// ตัวอย่างการวน loop อ่าน pointer chain
uintptr_t p = someBaseAddress;
for (int i = 0; i < MAX_DEPTH; ++i) {
    uintptr_t next = readDecodedPointer(p, offsets[i]);
    if (next == 0) break; // จบหาก pointer เป็น null
    p = next;
}
// p ตอนนี้คือ pointer ปลายทางที่ถอดรหัสได้

ขั้นตอนข้างต้นสาธิตการผนวกค่าจากไบต์ส่วนที่ไม่ใช่ศูนย์ให้กลายเป็น pointer จริง การตรวจสอบว่า pointer ไม่ใช่ค่า null (ทุกไบต์ไม่ใช่ 0) เป็นวิธีตรวจสอบง่ายๆ เพื่อหลีกเลี่ยงการเข้าถึงที่อยู่ที่ไม่ถูกต้อง. นอกจากวิธีนี้แล้ว บางครั้งอาจต้องค้นหา algorithm การถอดรหัสเฉพาะ (เช่น XOR key หรือการสลับไบต์อื่นๆ) ตามความซับซ้อนของระบบ anti-cheat นั้นๆ.

อ้างอิง: แนวคิดการเข้ารหัส pointer นี้พบได้ในเทคนิคป้องกัน cheat ของหลายเกม เช่น COD ที่สำคัญในหน่วยความจำจะถูกเข้ารหัสและถอดรหัสก่อนใช้งาน. Windows เองก็มีฟังก์ชัน EncodePointer สำหรับแนวคิดลักษณะเดียวกัน. การใช้วิธีอ่านหน่วยความจำแบบ raw และตรวจสอบบิตจึงเป็นวิธีปฏิบัติหนึ่งในการกู้คืน pointer ตัวจริงจากค่าที่เข้ารหัสในเกม.














การเข้ารหัส/ถอดรหัส Pointer Address ด้วย SSE

ในการวิเคราะห์โค้ดภาษาแอสเซมบลีข้างต้น พบว่ามีการเข้ารหัส (encryption) ค่า pointer address เอาไว้ ซึ่งถ้าเราต้องการถอดรหัส pointer นี้ จำเป็นต้องเข้าใจลำดับการทำงานและเงื่อนไขต่างๆ ในโค้ดดังกล่าว โดยเฉพาะจุดที่โค้ดอ่านค่าจากตัวแปร encodedPtr1 และ encodedPtr2 ที่ผู้ใช้กล่าวถึง รวมทั้งการตรวจสอบ “หัว” และ “ท้าย” ของข้อมูลด้วย ดังนั้นขั้นตอนทั่วไปมีดังนี้

1. รวบรวมค่า pointer เข้าด้วยกันเป็น 128 บิต – จากข้อความที่ผู้ใช้กล่าวถึง เราสามารถนำตัวแปร 64 บิตสองตัว (encodedPtr1 และ encodedPtr2) มารวมกันเป็นข้อมูล 128 บิตหนึ่งชุดได้ โดยใช้ SSE intrinsic เช่น _mm_set_epi64x ซึ่งจะเก็บค่าสองค่า 64 บิตไว้ในตัวแปรชนิด __m128i:

__m128i combined = _mm_set_epi64x(encodedPtr2, encodedPtr1);

การทำเช่นนี้จะได้ข้อมูล 16 ไบต์ (128 บิต) ที่ประกอบด้วยค่าของตัวแปรทั้งสองรวมกัน


2. ตรวจสอบเงื่อนไข “หัว” และ “ท้าย” – โค้ดต้นฉบับมีการเช็คว่าบิตแรกของ encodedPtr (จาก [rdx] & 1) เป็น 0 หรือ 1 เพื่อตัดสินการทำงานคนละสาขา การอิมพลีเมนต์ด้วย SSE สามารถทำได้โดยการตรวจสอบส่วนของข้อมูลในตำแหน่งต่างๆ ของ __m128i ซึ่งอาจใช้ intrinsic อย่าง _mm_extract_epi16 เพื่อดึงค่า 16-บิต ณ ตำแหน่งที่ต้องการ (แม้โค้ดต้นฉบับพูดถึง “ตำแหน่งที่ 2” หรือ “6,7,8” ที่ไม่ชัดเจนว่าเป็น byte index ใด แต่แนวคิดคือการตรวจสอบบางไบต์ว่าไม่เป็น 0 หรือไม่) ตัวอย่างเช่น:

// ดึงค่า 16 บิตในตำแหน่ง index 1 (นับจาก 0) ของ __m128i – สมมุติเป็น “หัว”
uint16_t head = _mm_extract_epi16(combined, 1);
// ดึงค่า 16 บิตสองตำแหน่งสุดท้ายของ __m128i – สมมุติเป็น “หาง”
uint16_t tail1 = _mm_extract_epi16(combined, 6);
uint16_t tail2 = _mm_extract_epi16(combined, 7);

จากนั้นตรวจสอบเงื่อนไขตามที่ผู้ใช้กล่าว (เช่น “หัวและท้ายไม่ใช่ 0” และส่วนกลางบางตำแหน่งเป็น 0) จากค่าที่ดึงมา ตัวอย่าง:

if (head != 0 && (tail1 != 0 || tail2 != 0)) {
    // สร้าง address ตัวชี้ใหม่จากหัว-หาง (สมมุติว่าจะนำมาประกอบที่อยู่จริง)
    uint64_t candidate = (static_cast<uint64_t>(head) << 48) | static_cast<uint64_t>(tail2);
    // ตรวจสอบหน่วยความจำที่ pointer ชี้ว่ามีค่าไม่ใช่ 0 ทั้งหมด
    if (!isAllZero(reinterpret_cast<uint64_t*>(candidate))) {
        return candidate;  // เจอ address ที่น่าจะถูกต้อง
    }
}

ในตัวอย่างนี้สมมุติว่าเราเชื่อมเอา head เป็นบิตบนสุดของ address และ tail2 เป็นบิตล่างสุด อย่างไรก็ตาม การประกอบ address จริง ๆ อาจต้องปรับตามโครงสร้างจริง


3. โหลดและตรวจสอบหน่วยความจำด้วย SSE – สมมุติว่ามี address ใหม่ (candidate) ที่สร้างขึ้นจากหัว-ท้ายของ pointer ข้างต้น เราจำเป็นต้องตรวจสอบว่าบริเวณหน่วยความจำที่ address นั้นชี้ไปมีข้อมูลที่ไม่เป็น 0 ทั้งหมดหรือไม่ วิธีการที่สะดวกคือโหลดข้อมูล 128 บิต (16 ไบต์) จากหน่วยความจำแล้วตรวจสอบด้วย SSE เช่น:

bool isAllZero(const uint64_t* ptr) {
    // โหลด 16 ไบต์จากหน่วยความจำ (movdqu)
    __m128i v = _mm_loadu_si128(reinterpret_cast<const __m128i*>(ptr));
#if defined(__SSE4_1__)
    // ถ้ามี SSE4.1 ใช้ _mm_testz_si128 ตรวจสอบว่า v เป็น 0 ทั้งหมดหรือไม่
    return _mm_testz_si128(v, v) != 0;
#else
    // ถ้าไม่มี SSE4.1 ใช้วิธีเทียบกับ zero vector
    __m128i zero = _mm_setzero_si128();  // สร้างเวกเตอร์ศูนย์1
    int mask = _mm_movemask_epi8(_mm_cmpeq_epi8(v, zero));
    return (mask == 0xFFFF);
#endif
}

โดยในกรณีที่ไม่มี SSE4.1 เราใช้วิธีเปรียบเทียบแต่ละไบต์กับศูนย์ด้วย _mm_cmpeq_epi8 และ _mm_movemask_epi8 เพื่อตรวจสอบว่าไบต์ทั้งหมดเท่ากับศูนย์หรือไม่ ซึ่งสอดคล้องกับคำแนะนำบน StackOverflow ว่าสามารถใช้คำสั่งเหล่านี้ตรวจสอบว่า __m128i เป็นศูนย์ทั้งหมด. ถ้า isAllZero() คืนค่า false หมายความว่ายังมีไบต์ที่ไม่เป็น 0 อยู่ ซึ่งสอดคล้องกับเงื่อนไขที่ต้องการ


4. หมุนข้อมูล (Rotate) ในกรณีไม่พบ – ถ้าการตรวจสอบครั้งแรกไม่สำเร็จ ผู้ใช้เสนอไอเดียการหมุนข้อมูล 2 ตำแหน่งเป็นขั้นตอน (โดยให้ 0x0000 อยู่บนก่อน และหมุนทีละ 2) ในระดับ SSE เราสามารถทำได้ด้วยการใช้ intrinsic ของ SSE2 เช่น _mm_slli_si128 และ _mm_srli_si128 เพื่อ shift ซ้ายและขวา แล้ว OR เข้าด้วยกัน เช่น:

for (int shift = 2; shift < 16; shift += 2) {
    __m128i rotated = _mm_or_si128(
        _mm_slli_si128(combined, shift),
        _mm_srli_si128(combined, 16 - shift)
    );
    // ดึงค่า head/tail จากข้อมูลที่หมุนแล้วและตรวจสอบเช่นเดิม
    uint16_t newHead = _mm_extract_epi16(rotated, 1);
    uint16_t newTail1 = _mm_extract_epi16(rotated, 6);
    uint16_t newTail2 = _mm_extract_epi16(rotated, 7);
    if (newHead != 0 && (newTail1 != 0 || newTail2 != 0)) {
        uint64_t candidate = (static_cast<uint64_t>(newHead) << 48) |
                              static_cast<uint64_t>(newTail2);
        if (!isAllZero(reinterpret_cast<uint64_t*>(candidate))) {
            return candidate;
        }
    }
}

แนวทางนี้จะหมุนข้อมูลทีละ 2 ไบต์ (16 บิต) ภายใน __m128i แล้วตรวจสอบเงื่อนไขซ้ำอีกครั้ง โดยใช้วิธีเดียวกับขั้นตอนก่อนหน้า จนกว่าจะพบ address ที่หน่วยความจำไม่เป็นศูนย์เต็มหรือหมดวิธี


5. สรุปการทำงานและโค้ดตัวอย่าง – รวมขั้นตอนทั้งหมดข้างต้นเป็นฟังก์ชัน C++ สรุปได้ดังนี้:



#include <emmintrin.h> // SSE2 intrinsics
#include <cstdint>

// ตรวจสอบว่าหน่วยความจำ 8 ไบต์ (หรือ 16 ไบต์) ทั้งหมดเป็น 0 หรือไม่
bool isAllZero(const uint64_t* ptr) {
    __m128i v = _mm_loadu_si128(reinterpret_cast<const __m128i*>(ptr));
#if defined(__SSE4_1__)
    // SSE4.1: ใช้ _mm_testz_si128 ตรวจสอบ zero vector3
    return _mm_testz_si128(v, v) != 0;
#else
    // แบบไม่มี SSE4.1: เปรียบเทียบกับ zero vector4
    __m128i zero = _mm_setzero_si128();
    int mask = _mm_movemask_epi8(_mm_cmpeq_epi8(v, zero));
    return (mask == 0xFFFF);
#endif
}

uint64_t decodePointer(uint64_t encPtr1, uint64_t encPtr2) {
    // รวมสองค่าตัวแปร (สอง pointer) เป็น 128 บิต
    __m128i combined = _mm_set_epi64x(encPtr2, encPtr1); //5

    // ตรวจสอบเงื่อนไขเบื้องต้น (กรณี head และ tail ไม่เป็น 0)
    uint16_t head = _mm_extract_epi16(combined, 1);
    uint16_t tail1 = _mm_extract_epi16(combined, 6);
    uint16_t tail2 = _mm_extract_epi16(combined, 7);
    if (head != 0 && (tail1 != 0 || tail2 != 0)) {
        uint64_t candidate = (static_cast<uint64_t>(head) << 48) | static_cast<uint64_t>(tail2);
        if (!isAllZero(reinterpret_cast<uint64_t*>(candidate))) {
            return candidate;  // พบ address ที่ดูน่าจะถูกต้อง
        }
    }

    // ถ้ายังไม่พบ ให้หมุนข้อมูลทีละ 2 ตำแหน่งแล้วตรวจสอบซ้ำ
    for (int shift = 2; shift < 16; shift += 2) {
        __m128i rotated = _mm_or_si128(
            _mm_slli_si128(combined, shift),
            _mm_srli_si128(combined, 16 - shift)
        );
        uint16_t newHead = _mm_extract_epi16(rotated, 1);
        uint16_t newTail1 = _mm_extract_epi16(rotated, 6);
        uint16_t newTail2 = _mm_extract_epi16(rotated, 7);
        if (newHead != 0 && (newTail1 != 0 || newTail2 != 0)) {
            uint64_t candidate = (static_cast<uint64_t>(newHead) << 48) | static_cast<uint64_t>(newTail2);
            if (!isAllZero(reinterpret_cast<uint64_t*>(candidate))) {
                return candidate;
            }
        }
    }

    return 0; // ไม่พบ address ที่ถูกต้อง
}

ในโค้ดตัวอย่างนี้ เราได้ใช้ SSE2 Intrinsics เช่น _mm_set_epi64x เพื่อรวมค่า 64 บิตสองค่าเป็น 128 บิต และ _mm_loadu_si128/_mm_testz_si128 หรือวิธีเปรียบเทียบกับ zero vector เพื่อเช็คว่าค่าหน่วยความจำเป็น 0 ทั้งหมดหรือไม่ ตามหลักการของ SSE. ส่วนการหมุนข้อมูลทำได้โดยการเลื่อนเลเยอร์ซ้าย-ขวา (_mm_slli_si128, _mm_srli_si128) แล้ว OR กัน. ท้ายสุด หากผ่านเงื่อนไขและหน่วยความจำไม่ใช่ 0 ทั้งหมด โค้ดจะส่งคืน address ที่คิดว่าเป็น pointer ที่ถอดรหัสได้.

หมายเหตุ: โค้ดด้านบนเป็นเพียงตัวอย่างแนวทาง ซึ่งต้องปรับให้เหมาะสมกับข้อมูลจริงในเกมหรือไบต์ของ pointer ที่เข้ารหัสจริง. นอกจากนี้ ในการใช้งานจริงอาจต้องตรวจสอบความปลอดภัยของ address ที่ได้มา (เช่นว่า pointer นั้นอยู่ในแอดเดรสสเปซที่ถูกต้อง) ด้วย. แต่หลักการสำคัญคือการรวมค่า pointer เป็น 128 บิต, ตรวจสอบเงื่อนไขบนไบต์ต่างๆ, โหลดข้อมูลจากหน่วยความจำ และทดสอบไม่ให้เป็นศูนย์ทั้งหมด.

อ้างอิง: ใน Microsoft API มีฟังก์ชัน EncodePointer ซึ่งแสดงให้เห็นว่าการออบฟัสเกต pointer (encoding) เป็นวิธีป้องกันขั้นหนึ่ง โดย pointer ที่เข้ารหัสจะต้องถูกถอดออกก่อนใช้งาน. การตรวจสอบข้อมูลด้วย SSE Intrinsics และ zero test ได้แสดงไว้ในเอกสาร Intel/StackOverflow เช่นการใช้ _mm_set_epi64x รวมค่า 64 บิต และการใช้ _mm_testz_si128 เพื่อตรวจสอบว่าทุกบิตเป็นศูนย์.

  


6. แปลงเป็น std::string แล้วคืนค่า


7. ถ้าต้องการ validate: run rolling_table_calc กับ table ที่อ่านมา แล้วเทียบกับ stored checksum fields (a1+0x806 / 0x808 ใน decompile)




---

ถ้าคุณต้องการผมจะ:

แก้โค้ดตัวอย่างให้ ใช้ read128_block เต็มรูปแบบ เพื่อให้เร็วขึ้น (อ่านทีละ 16 ไบต์แล้ว decode เป็นชุด) — หรือ

ปรับให้ เขียนค่า decoded กลับ ใน process (ถ้าคุณต้องการ) — ผมจะใส่ example WriteProcessMemory/driver write

หรือถ้าคุณส่ง offset ที่แน่นอน (เช่น nameHeaderFlagOffset, nameStartOffset, GNames offset ที่ถูกต้องจากเกมที่คุณทดสอบ) ผมจะปรับโค้ดให้ตรง 1:1 กับเกมและทดสอบ logic decode ให้ชัวร์


บอกผมเลยว่าต้องการแบบไหนจาก 3 ข้อนี้ — ผมทำให้เสร็จตอนนี้ได้เลย (พร้อมโค้ด optimized หรือ with write-back)



