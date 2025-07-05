
 
//ฟังชั้นหลัก
void* sub_1442F3CF0()
{
    void* result; // rax
    char v1; // cl
    char v2; // [rsp+30h] [rbp+8h] BYREF

    if (byte_14A8EA849)
        return &unk_14A8EAC00;
    MEMORY[0x32A8F670](&v2);
    v1 = v2 ^ 0x61 ^ ((unsigned __int8)(v2 ^ 0x61) >> 1) & 8;
    byte_14A8EA848 = v1 ^ (2 * (v1 & 8)) ^ ((unsigned __int8)(v1 ^ (2 * (v1 & 8))) >> 1) & 8;
    result = (void*)sub_1442E9150((__int64)&unk_14A8EAC00);
    byte_14A8EA849 = 1;
    return result;

    /*
    Direction	Type	Address	Text
    Up	j	sub_1442F3CF0+B	jz      short loc_1442F3D09; Jump if Zero (ZF=1)


    .data:000000014A8EAC00 ??                            unk_14A8EAC00   db    ? ;               ; DATA XREF: sub_1442F3CF0+D↑o
    .data:000000014A8EAC00                                                                       ; sub_1442F3CF0+3F↑o ...
    .data:000000014A8EAC01 ??                                            db    ? ;
    .data:000000014A8EAC02 ??                                            db    ? ;
    .data:000000014A8EAC03 ??                                            db    ? ;
    .data:000000014A8EAC04 ??                                            db    ? ;
    .data:000000014A8EAC05 ??                                            db    ? ;
    .data:000000014A8EAC06 ??                                            db    ? ;
    .data:000000014A8EAC07 ??                                            db    ? ;
    .data:000000014A8EAC08 ?? ?? ?? ??                   dword_14A8EAC08 dd ?                    ; DATA XREF: sub_1442F9F20↑r
    .data:000000014A8EAC08                                                                       ; sub_1443001C0+66↑r ...
    .data:000000014A8EAC0C ?? ?? ?? ??                                   align 10h
    .data:000000014A8EAC10 ??                            unk_14A8EAC10   db    ? ;               ; DATA XREF: sub_1442F0BF0↑o

    Get X off 0xA8EAC00 ..unk_14A8EAC00 Chack 


    .rdata:0000000147920010 C0 DE DB 21 FA 7F 00 00       qword_147920010 dq 7FFA21DBDEC0h        ; DATA XREF: sub_14093B810+B↑r
    .rdata:0000000147920010; sub_1412FBB70 + 38↑r ...


    */
    void* sub_1442F3CF0()
    {
        void* result; // rax
        char v1; // cl
        char v2; // [rsp+30h] [rbp+8h] BYREF

        if (byte_14A8EA849)
            return &unk_14A8EAC00;
        MEMORY[0x32A8F670](&v2);
        v1 = v2 ^ 0x61 ^ ((unsigned __int8)(v2 ^ 0x61) >> 1) & 8;
        byte_14A8EA848 = v1 ^ (2 * (v1 & 8)) ^ ((unsigned __int8)(v1 ^ (2 * (v1 & 8))) >> 1) & 8;
        result = (void*)sub_1442E9150((__int64)&unk_14A8EAC00);
        byte_14A8EA849 = 1;
        return result;
    }

    
}
    
#pragma endregion
  

#pragma region byte_14A8EA848_Andfunusethis


//Direction	Type	Address	Text
//Up	r	sub_1442E1390 : loc_1442E1380	movzx   edx, cs : byte_14A8EA848; Move with Zero - Extend
 
 
    char __fastcall sub_1442E1390(__int64 a1, char a2, __int64 a3, __int64 a4)
    {
        char v4; // cl
        char result; // al

        while (1)
        {
            v4 = byte_14A8EA848 ^ a2 ^ (2 * ((byte_14A8EA848 ^ a2) & 8));
            result = v4 ^ *(_BYTE*)(a3 - 1) ^ ((unsigned __int8)(v4 & 0x10 ^ 0xC3) >> 1);
            *(_BYTE*)(a3 - 1) = result;
            if (!--a4)
                break;
            ++a3;
            a2 = ((unsigned __int8)byte_14A8EA848 >> 1) & 8;
        }
        return result;
    }

    //Up	r	sub_1442E1390 xor dl, cs:byte_14A8EA848; Logical Exclusive OR
    char __fastcall sub_1442E1390(__int64 a1, char a2, __int64 a3, __int64 a4)
    {
        char v4; // cl
        char result; // al

        while (1)
        {
            v4 = byte_14A8EA848 ^ a2 ^ (2 * ((byte_14A8EA848 ^ a2) & 8));
            result = v4 ^ *(_BYTE*)(a3 - 1) ^ ((unsigned __int8)(v4 & 0x10 ^ 0xC3) >> 1);
            *(_BYTE*)(a3 - 1) = result;
            if (!--a4)
                break;
            ++a3;
            a2 = ((unsigned __int8)byte_14A8EA848 >> 1) & 8;
        }
        return result;
    }
    //w	sub_1442F3CF0 + 4F	mov     cs : byte_14A8EA848, al
    //.text:00000001442F3D3F 88 05 03 6B 5F 06                             mov     cs:byte_14A8EA848, al

    Chack **ptr  DATA XREF : sub_1442E1390:loc_1442E1380↑r  
    { x  
        //a2
        char __fastcall sub_1442E1390(__int64 a1, char a2, __int64 a3, __int64 a4)
            {
              char v4; // cl
              char result; // al

              while (1)
              {
                v4 = byte_14A8EA848 ^ a2 ^ (2 * ((byte_14A8EA848 ^ a2) & 8));
                result = v4 ^ *(_BYTE*)(a3 - 1) ^ ((unsigned __int8)(v4 & 0x10 ^ 0xC3) >> 1);
                *(_BYTE*)(a3 - 1) = result;
                if (!--a4)
                  break;
                ++a3;
                a2 = ((unsigned __int8)byte_14A8EA848 >> 1) & 8;
              }
              return result;
            }

        Up	j	sub_1442E1390 + 27	jnz     short loc_1442E1380; Jump if Not Zero(ZF = 0)

        .text:00000001442E1380; START OF FUNCTION CHUNK FOR sub_1442E1390
        .text:00000001442E1380
        .text : 00000001442E1380                               loc_1442E1380 : ; CODE XREF : sub_1442E1390 + 27↓j
        .text : 00000001442E1380 0F B6 15 C1 94 60 06                          movzx   edx, cs : byte_14A8EA848; Move with Zero - Extend
        .text:00000001442E1387 4D 8D 40 01                                   lea     r8, [r8 + 1]; Load Effective Address
        .text:00000001442E138B D0 EA                                         shr     dl, 1; Shift Logical Right
        .text:00000001442E138D 80 E2 08 and dl, 8; Logical AND
        .text:00000001442E138D; END OF FUNCTION CHUNK FOR sub_1442E1390
        .te
    }
    else ctrl+x
    {
            Direction	Type	Address	Text
            Up	r	sub_1442E1390 : loc_1442E1380	movzx   edx, cs : byte_14A8EA848; Move with Zero - Extend
            [.text:00000001442E1390; char __fastcall sub_1442E1390(__int64, char, __int64, __int64)
            .text:00000001442E1390                               sub_1442E1390   proc near
            .text : 00000001442E1390
            .text : 00000001442E1390; FUNCTION CHUNK AT.text:00000001442E1380 SIZE 00000010 BYTES
            .text : 00000001442E1390
            .text : 00000001442E1390 32 15 B2 94 60 06 xor dl, cs : byte_14A8EA848; Logical Exclusive OR
             ]
            Up	w	sub_1442F3CF0 + 4F	mov     cs : byte_14A8EA848, al
            [.text:00000001442F3D3F 88 05 03 6B 5F 06                             mov     cs : byte_14A8EA848, al]
    }
    ///


            #pragma region *ptr
     
     
            .data:000000014A8EA710 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA710 dq ? ; DATA XREF : .text : 000000014092E896↑w
            .data : 000000014A8EA710;.text:000000014092E89D↑o ...
            .data : 000000014A8EA718 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA718 dq ? ; DATA XREF : .text : 000000014092E8A4↑w
            .data : 000000014A8EA718;.text:000000014092E8B0↑r ...
            .data : 000000014A8EA720 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA720 dq ? ; DATA XREF : .text : 000000014092E902↑w
            .data : 000000014A8EA720;.text:000000014092E909↑o ...
            .data : 000000014A8EA728 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA728 dq ? ; DATA XREF : .text : 000000014092E910↑w
            .data : 000000014A8EA728;.text:000000014092E91C↑r ...
            .data : 000000014A8EA730 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA730 dq ? ; DATA XREF : .text : 000000014092E96E↑w
            .data : 000000014A8EA730;.text:000000014092E975↑o ...
            .data : 000000014A8EA738 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA738 dq ? ; DATA XREF : .text : 000000014092E97C↑w
            .data : 000000014A8EA738;.text:000000014092E988↑r ...
            .data : 000000014A8EA740 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA740 dq ? ; DATA XREF : .text : 000000014092E9DA↑w
            .data : 000000014A8EA740;.text:000000014092E9E1↑o ...
            .data : 000000014A8EA748 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA748 dq ? ; DATA XREF : .text : 000000014092E9E8↑w
            .data : 000000014A8EA748;.text:000000014092E9F4↑r ...
            .data : 000000014A8EA750 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA750 dq ? ; DATA XREF : .text : 000000014092EA46↑w
            .data : 000000014A8EA750;.text:000000014092EA4D↑o ...
            .data : 000000014A8EA758 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA758 dq ? ; DATA XREF : .text : 000000014092EA54↑w
            .data : 000000014A8EA758;.text:000000014092EA60↑r ...
            .data : 000000014A8EA760 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA760 dq ? ; DATA XREF : .text : 000000014092EAB2↑w
            .data : 000000014A8EA760;.text:000000014092EAB9↑o ...
            .data : 000000014A8EA768 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA768 dq ? ; DATA XREF : .text : 000000014092EAC0↑w
            .data : 000000014A8EA768;.text:000000014092EACC↑r ...
            .data : 000000014A8EA770 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA770 dq ? ; DATA XREF : .text : 000000014092EB1E↑w
            .data : 000000014A8EA770;.text:000000014092EB25↑o ...
            .data : 000000014A8EA778 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA778 dq ? ; DATA XREF : .text : 000000014092EB2C↑w
            .data : 000000014A8EA778;.text:000000014092EB38↑r ...
            .data : 000000014A8EA780 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA780 dq ? ; DATA XREF : .text : 000000014092EB8A↑w
            .data : 000000014A8EA780;.text:000000014092EB91↑o ...
            .data : 000000014A8EA788 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA788 dq ? ; DATA XREF : .text : 000000014092EB98↑w
            .data : 000000014A8EA788;.text:000000014092EBA4↑r ...
            .data : 000000014A8EA790 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA790 dq ? ; DATA XREF : .text : 000000014092EBF6↑w
            .data : 000000014A8EA790;.text:000000014092EBFD↑o ...
            .data : 000000014A8EA798 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA798 dq ? ; DATA XREF : .text : 000000014092EC04↑w
            .data : 000000014A8EA798;.text:000000014092EC10↑r ...
            .data : 000000014A8EA7A0 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7A0 dq ? ; DATA XREF : .text : 000000014092EC62↑w
            .data : 000000014A8EA7A0;.text:000000014092EC69↑o ...
            .data : 000000014A8EA7A8 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7A8 dq ? ; DATA XREF : .text : 000000014092EC70↑w
            .data : 000000014A8EA7A8;.text:000000014092EC7C↑r ...
            .data : 000000014A8EA7B0 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7B0 dq ? ; DATA XREF : .text : 000000014092ECCE↑w
            .data : 000000014A8EA7B0;.text:000000014092ECD5↑o ...
            .data : 000000014A8EA7B8 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7B8 dq ? ; DATA XREF : .text : 000000014092ECDC↑w
            .data : 000000014A8EA7B8;.text:000000014092ECE8↑r ...
            .data : 000000014A8EA7C0 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7C0 dq ? ; DATA XREF : .text : 000000014092ED3A↑w
            .data : 000000014A8EA7C0;.text:000000014092ED41↑o ...
            .data : 000000014A8EA7C8 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7C8 dq ? ; DATA XREF : .text : 000000014092ED48↑w
            .data : 000000014A8EA7C8;.text:000000014092ED54↑r ...
            .data : 000000014A8EA7D0 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7D0 dq ? ; DATA XREF : .text : 000000014092EDA6↑w
            .data : 000000014A8EA7D0;.text:000000014092EDAD↑o ...
            .data : 000000014A8EA7D8 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7D8 dq ? ; DATA XREF : .text : 000000014092EDB4↑w
            .data : 000000014A8EA7D8;.text:000000014092EDC0↑r ...
            .data : 000000014A8EA7E0 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7E0 dq ? ; DATA XREF : .text : 000000014092EE12↑w
            .data : 000000014A8EA7E0;.text:000000014092EE19↑o ...
            .data : 000000014A8EA7E8 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7E8 dq ? ; DATA XREF : .text : 000000014092EE20↑w
            .data : 000000014A8EA7E8;.text:000000014092EE2C↑r ...
            .data : 000000014A8EA7F0 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7F0 dq ? ; DATA XREF : .text : 000000014092EE7E↑w
            .data : 000000014A8EA7F0;.text:000000014092EE85↑o ...
            .data : 000000014A8EA7F8 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA7F8 dq ? ; DATA XREF : .text : 000000014092EE8C↑w
            .data : 000000014A8EA7F8;.text:000000014092EE98↑r ...
            .data : 000000014A8EA800 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA800 dq ? ; DATA XREF : .text : 000000014092EEEA↑w
            .data : 000000014A8EA800;.text:000000014092EEF1↑o ...
            .data : 000000014A8EA808 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA808 dq ? ; DATA XREF : .text : 000000014092EEF8↑w
            .data : 000000014A8EA808;.text:000000014092EF04↑r ...
            .data : 000000014A8EA810 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA810 dq ? ; DATA XREF : .text : 000000014092EF56↑w
            .data : 000000014A8EA810;.text:000000014092EF5D↑o ...
            .data : 000000014A8EA818 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA818 dq ? ; DATA XREF : .text : 000000014092EF64↑w
            .data : 000000014A8EA818;.text:000000014092EF70↑r ...
            .data : 000000014A8EA820 ? ? byte_14A8EA820  db ? ; DATA XREF : sub_141D5C160 + 54↑r
            .data : 000000014A8EA820; sub_1442FFEE0 + 24↑w
            .data:000000014A8EA821 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? …                align 20h
            .data : 000000014A8EA840 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? qword_14A8EA840 dq ? ; DATA XREF : sub_1442FD840 + BB↑w
            .data : 000000014A8EA840; sub_1442FDBC0 + D↑r
            .data:000000014A8EA848 ? ? byte_14A8EA848  db ? ; DATA XREF : sub_1442E1390:loc_1442E1380↑r
            .data : 000000014A8EA848; sub_1442E1390↑r ...
            .data:000000014A8EA849 ? ? byte_14A8EA849  db ? ; DATA XREF : sub_1442F3CF0 + 4↑r
            .data : 000000014A8EA849; sub_1442F3CF0 + 5A↑w
            .data:000000014A8EA84A ? ? ? ? ? ? ? ? ? ? ? ? align 10h
            .data : 000000014A8EA850 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? …xmmword_14A8EA850 xmmword ? ; DATA XREF : .text : 000000014092F347↑w
            .data:000000014A8EA860 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? …xmmword_14A8EA860 xmmword ? ; DATA XREF : .text : 000000014092F397↑w
            .data:000000014A8EA870 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? …xmmword_14A8EA870 xmmword ? ; DATA XREF : .text : 000000014092F3A7↑w

        #pragma endregion

#pragma endregion
#pragma region byte_14A8EA849_Andfunusethis
                Direction	Type	Address	Text
              //  Up	r	sub_1442F3CF0 + 4	cmp     cs : byte_14A8EA849, 0; Compare Two Operands
                this = sub_1442F3CF0

                //Up	w	sub_1442F3CF0 + 5A	mov     cs : byte_14A8EA849, 1
                //.text:00000001442F3D4A C6 05 F8 6A 5F 06 01                          mov     cs:byte_14A8EA849, 1

#pragma endregion



#pragma region  ChackFun_follow
    bool __fastcall sub_1442E7D50(__int64 a1, _BYTE* a2)
    {
        _WORD* v3; // rdi
        _WORD* v4; // rdx
        unsigned __int64 v5; // rbx
        char v7; // al
        char v8[2048]; // [rsp+30h] [rbp-818h] BYREF
        int v9; // [rsp+854h] [rbp+Ch]

        v9 = HIDWORD(a1);
        if (!a2 || !*a2)
            return a1 == 0;
        v3 = (_WORD*)(*((_QWORD*)sub_1442F3CF0() + WORD1(a1) + 2) + 2 * (unsigned int)(unsigned __int16)a1);
        v4 = v3 + 1;
        v5 = (unsigned __int64)(unsigned __int16)*v3 >> 6;
        if ((*v3 & 1) != 0)
        {
            sub_14766AF37(v8, v4, 2 * v5);
            qword_14A434108(v8, 2 * ((unsigned __int16)*v3 >> 6));
            if ((unsigned int)sub_1441795B0(v8, a2, v5))
                return 0;
        LABEL_7:
            v7 = a2[v5];
            if (!v9)
                return v7 == 0;
            return v7 == 0x5F && (unsigned __int8)sub_1442E86F0((unsigned int)(v9 - 1), &a2[v5 + 1]);
        }
        sub_14766AF37(v8, v4, (unsigned __int64)(unsigned __int16)*v3 >> 6);
        qword_14A434108(v8, (unsigned __int16)*v3 >> 6);
        if (!(unsigned int)sub_144179400(v8, a2, v5))
            goto LABEL_7;
        return 0;
    }
#pragma endregion


#pragma region Fun_GObject_Arena
 

//ตัวอย่างฟังชั้น Gname_Arena 
// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1442E9150(__int64 a1)
{
    int v2; // ebx
    _QWORD* v3; // rdi
    __int64 v4; // r14
    int* v5; // r14
    __int64* v6; // rdi
    __int64 v7; // rax
    int v8; // ecx
    __int128 v9; // xmm0
    int v10; // ecx
    __int128 v11; // xmm0
    int v12; // ecx
    __int128 v13; // xmm0
    int v14; // ecx
    __int128 v15; // xmm0
    int v16; // ecx
    __int128 v17; // xmm0
    int v18; // ecx
    __int128 v19; // xmm0
    int v20; // ecx
    __int128 v21; // xmm0
    int v22; // ecx
    __int128 v23; // xmm0
    int v24; // ecx
    __int128 v25; // xmm0
    int v26; // ecx
    __int128 v27; // xmm0
    int v28; // ecx
    __int128 v29; // xmm0
    int v30; // ecx
    __int128 v31; // xmm0
    int v32; // ecx
    int v33; // ecx
    __int128 v34; // xmm0
    int v35; // ecx
    __int128 v36; // xmm0
    int v37; // ecx
    __int128 v38; // xmm0
    int v39; // ecx
    __int128 v40; // xmm0
    int v41; // ecx
    __int128 v42; // xmm0
    int v43; // ecx
    __int128 v44; // xmm0
    int v45; // ecx
    int v46; // ecx
    __int128 v47; // xmm0
    int v48; // ecx
    __int128 v49; // xmm0
    int v50; // ecx
    __int128 v51; // xmm0
    int v52; // ecx
    __int128 v53; // xmm0
    int v54; // ecx
    __int128 v55; // xmm0
    int v56; // ecx
    __int128 v57; // xmm0
    int v58; // ecx
    __int128 v59; // xmm0
    int v60; // ecx
    __int128 v61; // xmm0
    int v62; // ecx
    __int128 v63; // xmm0
    int v64; // ecx
    __int128 v65; // xmm0
    int v66; // ecx
    __int128 v67; // xmm0
    int v68; // ecx
    __int128 v69; // xmm0
    int v70; // ecx
    __int128 v71; // xmm0
    int v72; // ecx
    __int128 v73; // xmm0
    int v74; // ecx
    __int128 v75; // xmm0
    int v76; // ecx
    __int128 v77; // xmm0
    int v78; // ecx
    __int128 v79; // xmm0
    int v80; // ecx
    __int128 v81; // xmm0
    int v82; // ecx
    int v83; // ecx
    __int128 v84; // xmm0
    int v85; // ecx
    __int128 v86; // xmm0
    int v87; // ecx
    __int128 v88; // xmm0
    int v89; // ecx
    __int128 v90; // xmm0
    int v91; // ecx
    __int128 v92; // xmm0
    int v93; // ecx
    __int128 v94; // xmm0
    int v95; // ecx
    int v96; // ecx
    __int128 v97; // xmm0
    int v98; // ecx
    __int128 v99; // xmm0
    int v100; // ecx
    __int128 v101; // xmm0
    int v102; // ecx
    __int128 v103; // xmm0
    int v104; // ecx
    __int128 v105; // xmm0
    int v106; // ecx
    __int128 v107; // xmm0
    int v108; // ecx
    __int128 v109; // xmm0
    int v110; // ecx
    __int128 v111; // xmm0
    int v112; // ecx
    __int128 v113; // xmm0
    int v114; // ecx
    __int128 v115; // xmm0
    int v116; // ecx
    __int128 v117; // xmm0
    int v118; // ecx
    __int128 v119; // xmm0
    int v120; // ecx
    __int128 v121; // xmm0
    int v122; // ecx
    __int128 v123; // xmm0
    int v124; // ecx
    __int128 v125; // xmm0
    int v126; // ecx
    __int128 v127; // xmm0
    int v128; // ecx
    __int128 v129; // xmm0
    int v130; // ecx
    __int128 v131; // xmm0
    int v132; // ecx
    int v133; // ecx
    __int128 v134; // xmm0
    int v135; // ecx
    __int128 v136; // xmm0
    int v137; // ecx
    __int128 v138; // xmm0
    int v139; // ecx
    __int128 v140; // xmm0
    int v141; // ecx
    __int128 v142; // xmm0
    int v143; // ecx
    __int128 v144; // xmm0
    int v145; // ecx
    int v146; // ecx
    __int128 v147; // xmm0
    int v148; // ecx
    __int128 v149; // xmm0
    int v150; // ecx
    __int128 v151; // xmm0
    int v152; // ecx
    __int128 v153; // xmm0
    int v154; // ecx
    __int128 v155; // xmm0
    int v156; // ecx
    __int128 v157; // xmm0
    int v158; // ecx
    __int128 v159; // xmm0
    int v160; // ecx
    __int128 v161; // xmm0
    int v162; // ecx
    __int128 v163; // xmm0
    int v164; // ecx
    __int128 v165; // xmm0
    int v166; // ecx
    __int128 v167; // xmm0
    int v168; // ecx
    __int128 v169; // xmm0
    int v170; // ecx
    __int128 v171; // xmm0
    int v172; // ecx
    __int128 v173; // xmm0
    int v174; // ecx
    __int128 v175; // xmm0
    int v176; // ecx
    __int128 v177; // xmm0
    int v178; // ecx
    __int128 v179; // xmm0
    int v180; // ecx
    __int128 v181; // xmm0
    int v182; // ecx
    int v183; // ecx
    __int128 v184; // xmm0
    int v185; // ecx
    __int128 v186; // xmm0
    int v187; // ecx
    __int128 v188; // xmm0
    int v189; // ecx
    __int128 v190; // xmm0
    int v191; // ecx
    __int128 v192; // xmm0
    int v193; // ecx
    __int128 v194; // xmm0
    int v195; // ecx
    int v196; // ecx
    __int128 v197; // xmm0
    int v198; // ecx
    __int128 v199; // xmm0
    int v200; // ecx
    __int128 v201; // xmm0
    int v202; // ecx
    __int128 v203; // xmm0
    int v204; // ecx
    __int128 v205; // xmm0
    int v206; // ecx
    __int128 v207; // xmm0
    int v208; // ecx
    __int128 v209; // xmm0
    int v210; // ecx
    __int128 v211; // xmm0
    int v212; // ecx
    __int128 v213; // xmm0
    int v214; // ecx
    __int128 v215; // xmm0
    int v216; // ecx
    __int128 v217; // xmm0
    int v218; // ecx
    __int128 v219; // xmm0
    int v220; // ecx
    __int128 v221; // xmm0
    int v222; // ecx
    __int128 v223; // xmm0
    int v224; // ecx
    __int128 v225; // xmm0
    int v226; // ecx
    __int128 v227; // xmm0
    int v228; // ecx
    __int128 v229; // xmm0
    int v230; // ecx
    __int128 v231; // xmm0
    int v232; // ecx
    int v233; // ecx
    __int128 v234; // xmm0
    int v235; // ecx
    __int128 v236; // xmm0
    int v237; // ecx
    __int128 v238; // xmm0
    int v239; // ecx
    __int128 v240; // xmm0
    int v241; // ecx
    __int128 v242; // xmm0
    int v243; // ecx
    __int128 v244; // xmm0
    int v245; // ecx
    int v246; // ecx
    __int128 v247; // xmm0
    int v248; // ecx
    __int128 v249; // xmm0
    int v250; // ecx
    __int128 v251; // xmm0
    int v252; // ecx
    __int128 v253; // xmm0
    int v254; // ecx
    __int128 v255; // xmm0
    int v256; // ecx
    __int128 v257; // xmm0
    int v258; // ecx
    __int128 v259; // xmm0
    int v260; // ecx
    __int128 v261; // xmm0
    int v262; // ecx
    __int128 v263; // xmm0
    int v264; // ecx
    __int128 v265; // xmm0
    int v266; // ecx
    __int128 v267; // xmm0
    int v268; // ecx
    __int128 v269; // xmm0
    int v270; // ecx
    __int128 v271; // xmm0
    int v272; // ecx
    __int128 v273; // xmm0
    int v274; // ecx
    __int128 v275; // xmm0
    int v276; // ecx
    __int128 v277; // xmm0
    int v278; // ecx
    __int128 v279; // xmm0
    int v280; // ecx
    __int128 v281; // xmm0
    int v282; // ecx
    int v283; // ecx
    __int128 v284; // xmm0
    int v285; // ecx
    __int128 v286; // xmm0
    int v287; // ecx
    __int128 v288; // xmm0
    int v289; // ecx
    __int128 v290; // xmm0
    int v291; // ecx
    __int128 v292; // xmm0
    int v293; // ecx
    __int128 v294; // xmm0
    int v295; // ecx
    int v296; // ecx
    __int128 v297; // xmm0
    int v298; // ecx
    __int128 v299; // xmm0
    int v300; // ecx
    __int128 v301; // xmm0
    int v302; // ecx
    __int128 v303; // xmm0
    int v304; // ecx
    __int128 v305; // xmm0
    int v306; // ecx
    __int128 v307; // xmm0
    int v308; // ecx
    __int128 v309; // xmm0
    int v310; // ecx
    __int128 v311; // xmm0
    int v312; // ecx
    __int128 v313; // xmm0
    int v314; // ecx
    __int128 v315; // xmm0
    int v316; // ecx
    __int128 v317; // xmm0
    int v318; // ecx
    __int128 v319; // xmm0
    int v320; // ecx
    __int128 v321; // xmm0
    int v322; // ecx
    __int128 v323; // xmm0
    int v324; // ecx
    __int128 v325; // xmm0
    int v326; // ecx
    __int128 v327; // xmm0
    int v328; // ecx
    __int128 v329; // xmm0
    unsigned int v330; // edi
    int v331; // ecx
    __int64 v332; // rax
    int v333; // ecx
    __int64 v334; // rax
    __int64 v335; // rax
    __int64 v336; // rdx
    volatile signed __int32* v337; // rbx
    char v338; // bl
    __int64 v339; // rax
    __int64 v340; // rax
    unsigned int v341; // ebx
    __int64 v342; // rax
    __int128 v344; // [rsp+28h] [rbp-D8h] BYREF
    __int64 v345; // [rsp+38h] [rbp-C8h] BYREF
    char v346[4]; // [rsp+40h] [rbp-C0h] BYREF
    char v347[4]; // [rsp+44h] [rbp-BCh] BYREF
    char v348[4]; // [rsp+48h] [rbp-B8h] BYREF
    char v349[4]; // [rsp+4Ch] [rbp-B4h] BYREF
    char v350[4]; // [rsp+50h] [rbp-B0h] BYREF
    char v351[4]; // [rsp+54h] [rbp-ACh] BYREF
    char v352[4]; // [rsp+58h] [rbp-A8h] BYREF
    char v353[4]; // [rsp+5Ch] [rbp-A4h] BYREF
    char v354[4]; // [rsp+60h] [rbp-A0h] BYREF
    char v355[4]; // [rsp+64h] [rbp-9Ch] BYREF
    char v356[4]; // [rsp+68h] [rbp-98h] BYREF
    char v357[4]; // [rsp+6Ch] [rbp-94h] BYREF
    char v358[4]; // [rsp+70h] [rbp-90h] BYREF
    char v359[4]; // [rsp+74h] [rbp-8Ch] BYREF
    char v360[4]; // [rsp+80h] [rbp-80h] BYREF
    char v361[4]; // [rsp+84h] [rbp-7Ch] BYREF
    char v362[4]; // [rsp+88h] [rbp-78h] BYREF
    char v363[4]; // [rsp+8Ch] [rbp-74h] BYREF
    char v364[4]; // [rsp+90h] [rbp-70h] BYREF
    char v365[4]; // [rsp+94h] [rbp-6Ch] BYREF
    char v366[4]; // [rsp+98h] [rbp-68h] BYREF
    char v367[4]; // [rsp+9Ch] [rbp-64h] BYREF
    char v368[4]; // [rsp+A0h] [rbp-60h] BYREF
    char v369[4]; // [rsp+A4h] [rbp-5Ch] BYREF
    char v370[4]; // [rsp+A8h] [rbp-58h] BYREF
    char v371[4]; // [rsp+ACh] [rbp-54h] BYREF
    char v372[4]; // [rsp+B0h] [rbp-50h] BYREF
    char v373[4]; // [rsp+B4h] [rbp-4Ch] BYREF
    char v374[4]; // [rsp+B8h] [rbp-48h] BYREF
    char v375[4]; // [rsp+BCh] [rbp-44h] BYREF
    char v376[4]; // [rsp+C0h] [rbp-40h] BYREF
    char v377[4]; // [rsp+C4h] [rbp-3Ch] BYREF
    char v378[4]; // [rsp+C8h] [rbp-38h] BYREF
    char v379[4]; // [rsp+CCh] [rbp-34h] BYREF
    char v380[4]; // [rsp+D0h] [rbp-30h] BYREF
    char v381[4]; // [rsp+D4h] [rbp-2Ch] BYREF
    char v382[4]; // [rsp+D8h] [rbp-28h] BYREF
    char v383[4]; // [rsp+DCh] [rbp-24h] BYREF
    char v384[4]; // [rsp+E0h] [rbp-20h] BYREF
    char v385[4]; // [rsp+E4h] [rbp-1Ch] BYREF
    char v386[4]; // [rsp+E8h] [rbp-18h] BYREF
    char v387[4]; // [rsp+ECh] [rbp-14h] BYREF
    char v388[4]; // [rsp+F0h] [rbp-10h] BYREF
    char v389[4]; // [rsp+F4h] [rbp-Ch] BYREF
    char v390[4]; // [rsp+F8h] [rbp-8h] BYREF
    char v391[4]; // [rsp+FCh] [rbp-4h] BYREF
    char v392[4]; // [rsp+100h] [rbp+0h] BYREF
    char v393[4]; // [rsp+104h] [rbp+4h] BYREF
    char v394[4]; // [rsp+108h] [rbp+8h] BYREF
    char v395[4]; // [rsp+10Ch] [rbp+Ch] BYREF
    char v396[4]; // [rsp+110h] [rbp+10h] BYREF
    char v397[4]; // [rsp+114h] [rbp+14h] BYREF
    char v398[4]; // [rsp+118h] [rbp+18h] BYREF
    char v399[4]; // [rsp+11Ch] [rbp+1Ch] BYREF
    char v400[4]; // [rsp+120h] [rbp+20h] BYREF
    char v401[4]; // [rsp+124h] [rbp+24h] BYREF
    char v402[4]; // [rsp+128h] [rbp+28h] BYREF
    char v403[4]; // [rsp+12Ch] [rbp+2Ch] BYREF
    char v404[4]; // [rsp+130h] [rbp+30h] BYREF
    char v405[4]; // [rsp+134h] [rbp+34h] BYREF
    char v406[4]; // [rsp+138h] [rbp+38h] BYREF
    char v407[4]; // [rsp+13Ch] [rbp+3Ch] BYREF
    char v408[4]; // [rsp+140h] [rbp+40h] BYREF
    char v409[4]; // [rsp+144h] [rbp+44h] BYREF
    char v410[4]; // [rsp+148h] [rbp+48h] BYREF
    char v411[4]; // [rsp+14Ch] [rbp+4Ch] BYREF
    char v412[4]; // [rsp+150h] [rbp+50h] BYREF
    char v413[4]; // [rsp+154h] [rbp+54h] BYREF
    char v414[4]; // [rsp+158h] [rbp+58h] BYREF
    char v415[4]; // [rsp+15Ch] [rbp+5Ch] BYREF
    char v416[4]; // [rsp+160h] [rbp+60h] BYREF
    char v417[4]; // [rsp+164h] [rbp+64h] BYREF
    char v418[4]; // [rsp+168h] [rbp+68h] BYREF
    char v419[4]; // [rsp+16Ch] [rbp+6Ch] BYREF
    char v420[4]; // [rsp+170h] [rbp+70h] BYREF
    char v421[4]; // [rsp+174h] [rbp+74h] BYREF
    char v422[4]; // [rsp+178h] [rbp+78h] BYREF
    char v423[4]; // [rsp+17Ch] [rbp+7Ch] BYREF
    char v424[4]; // [rsp+180h] [rbp+80h] BYREF
    char v425[4]; // [rsp+184h] [rbp+84h] BYREF
    char v426[4]; // [rsp+188h] [rbp+88h] BYREF
    char v427[4]; // [rsp+18Ch] [rbp+8Ch] BYREF
    char v428[4]; // [rsp+190h] [rbp+90h] BYREF
    char v429[4]; // [rsp+194h] [rbp+94h] BYREF
    char v430[4]; // [rsp+198h] [rbp+98h] BYREF
    char v431[4]; // [rsp+19Ch] [rbp+9Ch] BYREF
    char v432[4]; // [rsp+1A0h] [rbp+A0h] BYREF
    char v433[4]; // [rsp+1A4h] [rbp+A4h] BYREF
    char v434[4]; // [rsp+1A8h] [rbp+A8h] BYREF
    char v435[4]; // [rsp+1ACh] [rbp+ACh] BYREF
    char v436[4]; // [rsp+1B0h] [rbp+B0h] BYREF
    char v437[4]; // [rsp+1B4h] [rbp+B4h] BYREF
    char v438[4]; // [rsp+1B8h] [rbp+B8h] BYREF
    char v439[4]; // [rsp+1BCh] [rbp+BCh] BYREF
    char v440[4]; // [rsp+1C0h] [rbp+C0h] BYREF
    char v441[4]; // [rsp+1C4h] [rbp+C4h] BYREF
    char v442[4]; // [rsp+1C8h] [rbp+C8h] BYREF
    char v443[4]; // [rsp+1CCh] [rbp+CCh] BYREF
    char v444[4]; // [rsp+1D0h] [rbp+D0h] BYREF
    char v445[4]; // [rsp+1D4h] [rbp+D4h] BYREF
    char v446[4]; // [rsp+1D8h] [rbp+D8h] BYREF
    char v447[4]; // [rsp+1DCh] [rbp+DCh] BYREF
    char v448[4]; // [rsp+1E0h] [rbp+E0h] BYREF
    char v449[4]; // [rsp+1E4h] [rbp+E4h] BYREF
    char v450[4]; // [rsp+1E8h] [rbp+E8h] BYREF
    char v451[4]; // [rsp+1ECh] [rbp+ECh] BYREF
    char v452[4]; // [rsp+1F0h] [rbp+F0h] BYREF
    char v453[4]; // [rsp+1F4h] [rbp+F4h] BYREF
    char v454[4]; // [rsp+1F8h] [rbp+F8h] BYREF
    char v455[4]; // [rsp+1FCh] [rbp+FCh] BYREF
    char v456[4]; // [rsp+200h] [rbp+100h] BYREF
    char v457[4]; // [rsp+204h] [rbp+104h] BYREF
    char v458[4]; // [rsp+208h] [rbp+108h] BYREF
    char v459[4]; // [rsp+20Ch] [rbp+10Ch] BYREF
    char v460[4]; // [rsp+210h] [rbp+110h] BYREF
    char v461[4]; // [rsp+214h] [rbp+114h] BYREF
    char v462[4]; // [rsp+218h] [rbp+118h] BYREF
    char v463[4]; // [rsp+21Ch] [rbp+11Ch] BYREF
    char v464[4]; // [rsp+220h] [rbp+120h] BYREF
    char v465[4]; // [rsp+224h] [rbp+124h] BYREF
    char v466[4]; // [rsp+228h] [rbp+128h] BYREF
    char v467[4]; // [rsp+22Ch] [rbp+12Ch] BYREF
    char v468[4]; // [rsp+230h] [rbp+130h] BYREF
    char v469[4]; // [rsp+234h] [rbp+134h] BYREF
    char v470[4]; // [rsp+238h] [rbp+138h] BYREF
    char v471[4]; // [rsp+23Ch] [rbp+13Ch] BYREF
    char v472[4]; // [rsp+240h] [rbp+140h] BYREF
    char v473[4]; // [rsp+244h] [rbp+144h] BYREF
    char v474[4]; // [rsp+248h] [rbp+148h] BYREF
    char v475[4]; // [rsp+24Ch] [rbp+14Ch] BYREF
    char v476[4]; // [rsp+250h] [rbp+150h] BYREF
    char v477[4]; // [rsp+254h] [rbp+154h] BYREF
    char v478[4]; // [rsp+258h] [rbp+158h] BYREF
    char v479[4]; // [rsp+25Ch] [rbp+15Ch] BYREF
    char v480[4]; // [rsp+260h] [rbp+160h] BYREF
    char v481[4]; // [rsp+264h] [rbp+164h] BYREF
    char v482[4]; // [rsp+268h] [rbp+168h] BYREF
    char v483[4]; // [rsp+26Ch] [rbp+16Ch] BYREF
    char v484[4]; // [rsp+270h] [rbp+170h] BYREF
    char v485[4]; // [rsp+274h] [rbp+174h] BYREF
    char v486[4]; // [rsp+278h] [rbp+178h] BYREF
    char v487[4]; // [rsp+27Ch] [rbp+17Ch] BYREF
    char v488[4]; // [rsp+280h] [rbp+180h] BYREF
    char v489[4]; // [rsp+284h] [rbp+184h] BYREF
    char v490[4]; // [rsp+288h] [rbp+188h] BYREF
    char v491[4]; // [rsp+28Ch] [rbp+18Ch] BYREF
    char v492[4]; // [rsp+290h] [rbp+190h] BYREF
    char v493[4]; // [rsp+294h] [rbp+194h] BYREF
    char v494[4]; // [rsp+298h] [rbp+198h] BYREF
    char v495[4]; // [rsp+29Ch] [rbp+19Ch] BYREF
    char v496[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
    char v497[4]; // [rsp+2A4h] [rbp+1A4h] BYREF
    char v498[4]; // [rsp+2A8h] [rbp+1A8h] BYREF
    char v499[4]; // [rsp+2ACh] [rbp+1ACh] BYREF
    char v500[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
    char v501[4]; // [rsp+2B4h] [rbp+1B4h] BYREF
    char v502[4]; // [rsp+2B8h] [rbp+1B8h] BYREF
    char v503[4]; // [rsp+2BCh] [rbp+1BCh] BYREF
    char v504[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
    char v505[4]; // [rsp+2C4h] [rbp+1C4h] BYREF
    char v506[4]; // [rsp+2C8h] [rbp+1C8h] BYREF
    char v507[4]; // [rsp+2CCh] [rbp+1CCh] BYREF
    char v508[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
    char v509[4]; // [rsp+2D4h] [rbp+1D4h] BYREF
    char v510[4]; // [rsp+2D8h] [rbp+1D8h] BYREF
    char v511[4]; // [rsp+2DCh] [rbp+1DCh] BYREF
    char v512[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
    char v513[4]; // [rsp+2E4h] [rbp+1E4h] BYREF
    char v514[8]; // [rsp+2E8h] [rbp+1E8h] BYREF
    __int128 v515; // [rsp+2F0h] [rbp+1F0h] BYREF
    __int128 v516; // [rsp+300h] [rbp+200h] BYREF
    __int128 v517; // [rsp+310h] [rbp+210h] BYREF
    __int128 v518; // [rsp+320h] [rbp+220h] BYREF
    __int128 v519; // [rsp+330h] [rbp+230h] BYREF
    __int128 v520; // [rsp+340h] [rbp+240h] BYREF
    __int128 v521; // [rsp+350h] [rbp+250h] BYREF
    __int128 v522; // [rsp+360h] [rbp+260h] BYREF
    __int128 v523; // [rsp+370h] [rbp+270h] BYREF
    __int128 v524; // [rsp+380h] [rbp+280h] BYREF
    __int128 v525; // [rsp+390h] [rbp+290h] BYREF
    __int128 v526; // [rsp+3A0h] [rbp+2A0h] BYREF
    __int128 v527; // [rsp+3B0h] [rbp+2B0h] BYREF
    __int128 v528; // [rsp+3C0h] [rbp+2C0h] BYREF
    __int128 v529; // [rsp+3D0h] [rbp+2D0h] BYREF
    __int128 v530; // [rsp+3E0h] [rbp+2E0h] BYREF
    __int128 v531; // [rsp+3F0h] [rbp+2F0h] BYREF
    __int128 v532; // [rsp+400h] [rbp+300h] BYREF
    __int128 v533; // [rsp+410h] [rbp+310h] BYREF
    __int128 v534; // [rsp+420h] [rbp+320h] BYREF
    __int128 v535; // [rsp+430h] [rbp+330h] BYREF
    __int128 v536; // [rsp+440h] [rbp+340h] BYREF
    __int128 v537; // [rsp+450h] [rbp+350h] BYREF
    __int128 v538; // [rsp+460h] [rbp+360h] BYREF
    __int128 v539; // [rsp+470h] [rbp+370h] BYREF
    __int128 v540; // [rsp+480h] [rbp+380h] BYREF
    __int128 v541; // [rsp+490h] [rbp+390h] BYREF
    __int128 v542; // [rsp+4A0h] [rbp+3A0h] BYREF
    __int128 v543; // [rsp+4B0h] [rbp+3B0h] BYREF
    __int128 v544; // [rsp+4C0h] [rbp+3C0h] BYREF
    __int128 v545; // [rsp+4D0h] [rbp+3D0h] BYREF
    __int128 v546; // [rsp+4E0h] [rbp+3E0h] BYREF
    __int128 v547; // [rsp+4F0h] [rbp+3F0h] BYREF
    __int128 v548; // [rsp+500h] [rbp+400h] BYREF
    __int128 v549; // [rsp+510h] [rbp+410h] BYREF
    __int128 v550; // [rsp+520h] [rbp+420h] BYREF
    __int128 v551; // [rsp+530h] [rbp+430h] BYREF
    __int128 v552; // [rsp+540h] [rbp+440h] BYREF
    __int128 v553; // [rsp+550h] [rbp+450h] BYREF
    __int128 v554; // [rsp+560h] [rbp+460h] BYREF
    __int128 v555; // [rsp+570h] [rbp+470h] BYREF
    __int128 v556; // [rsp+580h] [rbp+480h] BYREF
    __int128 v557; // [rsp+590h] [rbp+490h] BYREF
    __int128 v558; // [rsp+5A0h] [rbp+4A0h] BYREF
    __int128 v559; // [rsp+5B0h] [rbp+4B0h] BYREF
    __int128 v560; // [rsp+5C0h] [rbp+4C0h] BYREF
    __int128 v561; // [rsp+5D0h] [rbp+4D0h] BYREF
    __int128 v562; // [rsp+5E0h] [rbp+4E0h] BYREF
    __int128 v563; // [rsp+5F0h] [rbp+4F0h] BYREF
    __int128 v564; // [rsp+600h] [rbp+500h] BYREF
    __int128 v565; // [rsp+610h] [rbp+510h] BYREF
    __int128 v566; // [rsp+620h] [rbp+520h] BYREF
    __int128 v567; // [rsp+630h] [rbp+530h] BYREF
    __int128 v568; // [rsp+640h] [rbp+540h] BYREF
    __int128 v569; // [rsp+650h] [rbp+550h] BYREF
    __int128 v570; // [rsp+660h] [rbp+560h] BYREF
    __int128 v571; // [rsp+670h] [rbp+570h] BYREF
    __int128 v572; // [rsp+680h] [rbp+580h] BYREF
    __int128 v573; // [rsp+690h] [rbp+590h] BYREF
    __int128 v574; // [rsp+6A0h] [rbp+5A0h] BYREF
    __int128 v575; // [rsp+6B0h] [rbp+5B0h] BYREF
    __int128 v576; // [rsp+6C0h] [rbp+5C0h] BYREF
    __int128 v577; // [rsp+6D0h] [rbp+5D0h] BYREF
    __int128 v578; // [rsp+6E0h] [rbp+5E0h] BYREF
    __int128 v579; // [rsp+6F0h] [rbp+5F0h] BYREF
    __int128 v580; // [rsp+700h] [rbp+600h] BYREF
    __int128 v581; // [rsp+710h] [rbp+610h] BYREF
    __int128 v582; // [rsp+720h] [rbp+620h] BYREF
    __int128 v583; // [rsp+730h] [rbp+630h] BYREF
    __int128 v584; // [rsp+740h] [rbp+640h] BYREF
    __int128 v585; // [rsp+750h] [rbp+650h] BYREF
    __int128 v586; // [rsp+760h] [rbp+660h] BYREF
    __int128 v587; // [rsp+770h] [rbp+670h] BYREF
    __int128 v588; // [rsp+780h] [rbp+680h] BYREF
    __int128 v589; // [rsp+790h] [rbp+690h] BYREF
    __int128 v590; // [rsp+7A0h] [rbp+6A0h] BYREF
    __int128 v591; // [rsp+7B0h] [rbp+6B0h] BYREF
    __int128 v592; // [rsp+7C0h] [rbp+6C0h] BYREF
    __int128 v593; // [rsp+7D0h] [rbp+6D0h] BYREF
    __int128 v594; // [rsp+7E0h] [rbp+6E0h] BYREF
    __int128 v595; // [rsp+7F0h] [rbp+6F0h] BYREF
    __int128 v596; // [rsp+800h] [rbp+700h] BYREF
    __int128 v597; // [rsp+810h] [rbp+710h] BYREF
    __int128 v598; // [rsp+820h] [rbp+720h] BYREF
    __int128 v599; // [rsp+830h] [rbp+730h] BYREF
    __int128 v600; // [rsp+840h] [rbp+740h] BYREF
    __int128 v601; // [rsp+850h] [rbp+750h] BYREF
    __int128 v602; // [rsp+860h] [rbp+760h] BYREF
    __int128 v603; // [rsp+870h] [rbp+770h] BYREF
    __int128 v604; // [rsp+880h] [rbp+780h] BYREF
    __int128 v605; // [rsp+890h] [rbp+790h] BYREF
    __int128 v606; // [rsp+8A0h] [rbp+7A0h] BYREF
    __int128 v607; // [rsp+8B0h] [rbp+7B0h] BYREF
    __int128 v608; // [rsp+8C0h] [rbp+7C0h] BYREF
    __int128 v609; // [rsp+8D0h] [rbp+7D0h] BYREF
    __int128 v610; // [rsp+8E0h] [rbp+7E0h] BYREF
    __int128 v611; // [rsp+8F0h] [rbp+7F0h] BYREF
    __int128 v612; // [rsp+900h] [rbp+800h] BYREF
    __int128 v613; // [rsp+910h] [rbp+810h] BYREF
    __int128 v614; // [rsp+920h] [rbp+820h] BYREF
    __int128 v615; // [rsp+930h] [rbp+830h] BYREF
    __int128 v616; // [rsp+940h] [rbp+840h] BYREF
    __int128 v617; // [rsp+950h] [rbp+850h] BYREF
    __int128 v618; // [rsp+960h] [rbp+860h] BYREF
    __int128 v619; // [rsp+970h] [rbp+870h] BYREF
    __int128 v620; // [rsp+980h] [rbp+880h] BYREF
    __int128 v621; // [rsp+990h] [rbp+890h] BYREF
    __int128 v622; // [rsp+9A0h] [rbp+8A0h] BYREF
    __int128 v623; // [rsp+9B0h] [rbp+8B0h] BYREF
    __int128 v624; // [rsp+9C0h] [rbp+8C0h] BYREF
    __int128 v625; // [rsp+9D0h] [rbp+8D0h] BYREF
    __int128 v626; // [rsp+9E0h] [rbp+8E0h] BYREF
    __int128 v627; // [rsp+9F0h] [rbp+8F0h] BYREF
    __int128 v628; // [rsp+A00h] [rbp+900h] BYREF
    __int128 v629; // [rsp+A10h] [rbp+910h] BYREF
    __int128 v630; // [rsp+A20h] [rbp+920h] BYREF
    __int128 v631; // [rsp+A30h] [rbp+930h] BYREF
    __int128 v632; // [rsp+A40h] [rbp+940h] BYREF
    __int128 v633; // [rsp+A50h] [rbp+950h] BYREF
    __int128 v634; // [rsp+A60h] [rbp+960h] BYREF
    __int128 v635; // [rsp+A70h] [rbp+970h] BYREF
    __int128 v636; // [rsp+A80h] [rbp+980h] BYREF
    __int128 v637; // [rsp+A90h] [rbp+990h] BYREF
    __int128 v638; // [rsp+AA0h] [rbp+9A0h] BYREF
    __int128 v639; // [rsp+AB0h] [rbp+9B0h] BYREF
    __int128 v640; // [rsp+AC0h] [rbp+9C0h] BYREF
    __int128 v641; // [rsp+AD0h] [rbp+9D0h] BYREF
    __int128 v642; // [rsp+AE0h] [rbp+9E0h] BYREF
    __int128 v643; // [rsp+AF0h] [rbp+9F0h] BYREF
    __int128 v644; // [rsp+B00h] [rbp+A00h] BYREF
    __int128 v645; // [rsp+B10h] [rbp+A10h] BYREF
    __int128 v646; // [rsp+B20h] [rbp+A20h] BYREF
    __int128 v647; // [rsp+B30h] [rbp+A30h] BYREF
    __int128 v648; // [rsp+B40h] [rbp+A40h] BYREF
    __int128 v649; // [rsp+B50h] [rbp+A50h] BYREF
    __int128 v650; // [rsp+B60h] [rbp+A60h] BYREF
    __int128 v651; // [rsp+B70h] [rbp+A70h] BYREF
    __int128 v652; // [rsp+B80h] [rbp+A80h] BYREF
    __int128 v653; // [rsp+B90h] [rbp+A90h] BYREF
    __int128 v654; // [rsp+BA0h] [rbp+AA0h] BYREF
    __int128 v655; // [rsp+BB0h] [rbp+AB0h] BYREF
    __int128 v656; // [rsp+BC0h] [rbp+AC0h] BYREF
    __int128 v657; // [rsp+BD0h] [rbp+AD0h] BYREF
    __int128 v658; // [rsp+BE0h] [rbp+AE0h] BYREF
    __int128 v659; // [rsp+BF0h] [rbp+AF0h] BYREF
    __int128 v660; // [rsp+C00h] [rbp+B00h] BYREF
    __int128 v661; // [rsp+C10h] [rbp+B10h] BYREF
    __int128 v662; // [rsp+C20h] [rbp+B20h] BYREF
    __int128 v663; // [rsp+C30h] [rbp+B30h] BYREF
    __int128 v664; // [rsp+C40h] [rbp+B40h] BYREF
    __int128 v665; // [rsp+C50h] [rbp+B50h] BYREF
    __int128 v666; // [rsp+C60h] [rbp+B60h] BYREF
    __int128 v667; // [rsp+C70h] [rbp+B70h] BYREF
    __int128 v668; // [rsp+C80h] [rbp+B80h] BYREF
    __int128 v669; // [rsp+C90h] [rbp+B90h] BYREF
    __int128 v670; // [rsp+CA0h] [rbp+BA0h] BYREF
    __int128 v671; // [rsp+CB0h] [rbp+BB0h] BYREF
    __int128 v672; // [rsp+CC0h] [rbp+BC0h] BYREF
    __int128 v673; // [rsp+CD0h] [rbp+BD0h] BYREF
    __int128 v674; // [rsp+CE0h] [rbp+BE0h] BYREF
    __int128 v675; // [rsp+CF0h] [rbp+BF0h] BYREF
    __int128 v676; // [rsp+D00h] [rbp+C00h] BYREF
    __int128 v677; // [rsp+D10h] [rbp+C10h] BYREF
    __int128 v678; // [rsp+D20h] [rbp+C20h] BYREF
    __int128 v679; // [rsp+D30h] [rbp+C30h] BYREF
    __int128 v680; // [rsp+D40h] [rbp+C40h] BYREF
    __int128 v681; // [rsp+D50h] [rbp+C50h] BYREF
    __int128 v682; // [rsp+D60h] [rbp+C60h] BYREF
    __int128 v683; // [rsp+D70h] [rbp+C70h] BYREF
    __int128 v684; // [rsp+D80h] [rbp+C80h] BYREF
    __int128 v685; // [rsp+D90h] [rbp+C90h] BYREF
    __int128 v686; // [rsp+DA0h] [rbp+CA0h] BYREF
    __int128 v687; // [rsp+DB0h] [rbp+CB0h] BYREF
    char v688[8]; // [rsp+DC0h] [rbp+CC0h] BYREF
    volatile signed __int32* v689; // [rsp+DC8h] [rbp+CC8h]
    unsigned int v690; // [rsp+E30h] [rbp+D30h] BYREF
    char v691; // [rsp+E38h] [rbp+D38h] BYREF
    char v692; // [rsp+E40h] [rbp+D40h] BYREF
    char v693; // [rsp+E48h] [rbp+D48h] BYREF

    MEMORY[0x7FFA21DBDEC0]();
    v2 = 0;
    *(_QWORD*)(a1 + 8) = 0LL;
    ((void(__fastcall*)(__int64, _QWORD, __int64))sub_14766AF43)(a1 + 0x10, 0LL, 0x10000LL);
    *(_QWORD*)(a1 + 0x10) = ((__int64(__fastcall*)(__int64, __int64))sub_1441BCD30)(0x20000LL, 2LL);
    v3 = (_QWORD*)(a1 + 0x10040);
    v4 = 0x10LL;
    do
    {
        MEMORY[0x7FFA21DBDEC0](v3);
        v3[1] = 0LL;
        v3[2] = 0LL;
        v3[3] = 0LL;
        v3[4] = 0LL;
        v3 += 8;
        --v4;
    } while (v4);
    v5 = (int*)(a1 + 0x10440);
    ((void(__fastcall*)(__int64, _QWORD, __int64))sub_14766AF43)(a1 + 0x10440, 0LL, 0xAFCLL);
    *(_QWORD*)(a1 + 0x12F40) = 0LL;
    *(_DWORD*)(a1 + 0x12F48) = 0;
    *(_DWORD*)(a1 + 0x12F4C) = 0x200;
    *(_QWORD*)(a1 + 0x12F90) = 0LL;
    *(_DWORD*)(a1 + 0x12F98) = 0;
    *(_DWORD*)(a1 + 0x12F9C) = 0x200;
    *(_DWORD*)(a1 + 0x12FA0) = 0xFFFFFFFF;
    *(_DWORD*)(a1 + 0x12FA4) = 0;
    *(_QWORD*)(a1 + 0x133A8) = 0LL;
    *(_DWORD*)(a1 + 0x133B0) = 0;
    if (a1 + 0x10040 != a1 + 0x10440)
    {
        v6 = (__int64*)(a1 + 0x10050);
        do
        {
            v6[1] = a1;
            v7 = ((__int64(__fastcall*)(__int64, __int64))sub_1441BCCF0)(0x400LL, 4LL);
            *v6 = v7;
            ((void(__fastcall*)(__int64, _QWORD, __int64))sub_14766AF43)(v7, 0LL, 0x400LL);
            *((_DWORD*)v6 + 0xFFFFFFFF) = 0xFF;
            v6 += 8;
        } while (v6 + 0xFFFFFFFE != (__int64*)(a1 + 0x10440));
    }
    DWORD2(v344) = 4;
    *(_QWORD*)&v344 = "None";
    BYTE12(v344) = 0;
    v515 = v344;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v8 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, &v691, &v515);
    *(_QWORD*)&v344 = "ByteProperty";
    v9 = v344;
    *v5 = v8;
    v516 = v9;
    DWORD2(v344) = 0xB;
    BYTE12(v344) = 0;
    v10 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, &v692, &v516);
    *(_QWORD*)&v344 = "IntProperty";
    v11 = v344;
    *(_DWORD*)(a1 + 0x10444) = v10;
    v517 = v11;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v12 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, &v693, &v517);
    *(_QWORD*)&v344 = "BoolProperty";
    v13 = v344;
    *(_DWORD*)(a1 + 0x10448) = v12;
    v518 = v13;
    DWORD2(v344) = 0xD;
    BYTE12(v344) = 0;
    v14 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v472, &v518);
    *(_QWORD*)&v344 = "FloatProperty";
    v15 = v344;
    *(_DWORD*)(a1 + 0x1044C) = v14;
    v519 = v15;
    DWORD2(v344) = 0xE;
    BYTE12(v344) = 0;
    v16 = *(_DWORD*)((__int64(__fastcall*)(__int64, __int64*, __int128*))sub_144301B30)(a1, &v345, &v519);
    *(_QWORD*)&v344 = "ObjectProperty";
    v17 = v344;
    *(_DWORD*)(a1 + 0x10450) = v16;
    v520 = v17;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v18 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, (char*)&v345 + 4, &v520);
    *(_QWORD*)&v344 = "NameProperty";
    v19 = v344;
    *(_DWORD*)(a1 + 0x10454) = v18;
    v521 = v19;
    DWORD2(v344) = 0x10;
    BYTE12(v344) = 0;
    v20 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v346, &v521);
    *(_QWORD*)&v344 = "DelegateProperty";
    v21 = v344;
    *(_DWORD*)(a1 + 0x10458) = v20;
    v522 = v21;
    DWORD2(v344) = 0xE;
    BYTE12(v344) = 0;
    v22 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v347, &v522);
    *(_QWORD*)&v344 = "DoubleProperty";
    v23 = v344;
    *(_DWORD*)(a1 + 0x1045C) = v22;
    v523 = v23;
    DWORD2(v344) = 0xD;
    BYTE12(v344) = 0;
    v24 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v348, &v523);
    *(_QWORD*)&v344 = "ArrayProperty";
    v25 = v344;
    *(_DWORD*)(a1 + 0x10460) = v24;
    v524 = v25;
    DWORD2(v344) = 0xE;
    BYTE12(v344) = 0;
    v26 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v349, &v524);
    *(_QWORD*)&v344 = "StructProperty";
    v27 = v344;
    *(_DWORD*)(a1 + 0x10464) = v26;
    v525 = v27;
    DWORD2(v344) = 0xE;
    BYTE12(v344) = 0;
    v28 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v350, &v525);
    *(_QWORD*)&v344 = "VectorProperty";
    v29 = v344;
    *(_DWORD*)(a1 + 0x10468) = v28;
    v526 = v29;
    DWORD2(v344) = 0xF;
    BYTE12(v344) = 0;
    v30 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v351, &v526);
    *(_QWORD*)&v344 = "RotatorProperty";
    v31 = v344;
    *(_DWORD*)(a1 + 0x1046C) = v30;
    v527 = v31;
    DWORD2(v344) = 0xB;
    BYTE12(v344) = 0;
    v32 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v352, &v527);
    *(_QWORD*)&v344 = "StrProperty";
    v528 = v344;
    *(_DWORD*)(a1 + 0x10470) = v32;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v33 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v353, &v528);
    *(_QWORD*)&v344 = "TextProperty";
    v34 = v344;
    *(_DWORD*)(a1 + 0x10474) = v33;
    v529 = v34;
    DWORD2(v344) = 0x11;
    BYTE12(v344) = 0;
    v35 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v354, &v529);
    *(_QWORD*)&v344 = "InterfaceProperty";
    v36 = v344;
    *(_DWORD*)(a1 + 0x10478) = v35;
    v530 = v36;
    DWORD2(v344) = 0x19;
    BYTE12(v344) = 0;
    v37 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v355, &v530);
    *(_QWORD*)&v344 = "MulticastDelegateProperty";
    v38 = v344;
    *(_DWORD*)(a1 + 0x1047C) = v37;
    v531 = v38;
    DWORD2(v344) = 0x12;
    BYTE12(v344) = 0;
    v39 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v356, &v531);
    *(_QWORD*)&v344 = "LazyObjectProperty";
    v40 = v344;
    *(_DWORD*)(a1 + 0x10480) = v39;
    v532 = v40;
    DWORD2(v344) = 0x12;
    BYTE12(v344) = 0;
    v41 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v357, &v532);
    *(_QWORD*)&v344 = "SoftObjectProperty";
    v42 = v344;
    *(_DWORD*)(a1 + 0x10488) = v41;
    v533 = v42;
    DWORD2(v344) = 0xD;
    BYTE12(v344) = 0;
    v43 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v358, &v533);
    *(_QWORD*)&v344 = "Int64Property";
    v44 = v344;
    *(_DWORD*)(a1 + 0x1048C) = v43;
    v534 = v44;
    DWORD2(v344) = 0xD;
    v45 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v359, &v534);
    *(_QWORD*)&v344 = "Int32Property";
    *(_DWORD*)(a1 + 0x10490) = v45;
    BYTE12(v344) = 0;
    v535 = v344;
    DWORD2(v344) = 0xD;
    BYTE12(v344) = 0;
    v46 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v360, &v535);
    *(_QWORD*)&v344 = "Int16Property";
    v47 = v344;
    *(_DWORD*)(a1 + 0x10494) = v46;
    v536 = v47;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v48 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v361, &v536);
    *(_QWORD*)&v344 = "Int8Property";
    v49 = v344;
    *(_DWORD*)(a1 + 0x10498) = v48;
    v537 = v49;
    DWORD2(v344) = 0xE;
    BYTE12(v344) = 0;
    v50 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v362, &v537);
    *(_QWORD*)&v344 = "UInt64Property";
    v51 = v344;
    *(_DWORD*)(a1 + 0x1049C) = v50;
    v538 = v51;
    DWORD2(v344) = 0xE;
    BYTE12(v344) = 0;
    v52 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v363, &v538);
    *(_QWORD*)&v344 = "UInt32Property";
    v53 = v344;
    *(_DWORD*)(a1 + 0x104A0) = v52;
    v539 = v53;
    DWORD2(v344) = 0xE;
    BYTE12(v344) = 0;
    v54 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v364, &v539);
    *(_QWORD*)&v344 = "UInt16Property";
    v55 = v344;
    *(_DWORD*)(a1 + 0x104A4) = v54;
    v540 = v55;
    DWORD2(v344) = 0xB;
    BYTE12(v344) = 0;
    v56 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v365, &v540);
    *(_QWORD*)&v344 = "MapProperty";
    v57 = v344;
    *(_DWORD*)(a1 + 0x104A8) = v56;
    v541 = v57;
    *(_DWORD*)(a1 + 0x104B0) = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(
        a1,
        v366,
        &v541);
    DWORD2(v344) = 0xB;
    *(_QWORD*)&v344 = "SetProperty";
    BYTE12(v344) = 0;
    v542 = v344;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v58 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v367, &v542);
    *(_QWORD*)&v344 = "Core";
    v59 = v344;
    *(_DWORD*)(a1 + 0x104B4) = v58;
    v543 = v59;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v60 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v368, &v543);
    *(_QWORD*)&v344 = "Engine";
    v61 = v344;
    *(_DWORD*)(a1 + 0x104B8) = v60;
    v544 = v61;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v62 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v369, &v544);
    *(_QWORD*)&v344 = "Editor";
    v63 = v344;
    *(_DWORD*)(a1 + 0x104BC) = v62;
    v545 = v63;
    DWORD2(v344) = 0xB;
    BYTE12(v344) = 0;
    v64 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v370, &v545);
    *(_QWORD*)&v344 = "CoreUObject";
    v65 = v344;
    *(_DWORD*)(a1 + 0x104C0) = v64;
    v546 = v65;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v66 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v371, &v546);
    *(_QWORD*)&v344 = "EnumProperty";
    v67 = v344;
    *(_DWORD*)(a1 + 0x104C4) = v66;
    v547 = v67;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v68 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v372, &v547);
    *(_QWORD*)&v344 = "Cylinder";
    v69 = v344;
    *(_DWORD*)(a1 + 0x104C8) = v68;
    v548 = v69;
    DWORD2(v344) = 0xF;
    BYTE12(v344) = 0;
    v70 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v373, &v548);
    *(_QWORD*)&v344 = "BoxSphereBounds";
    v71 = v344;
    *(_DWORD*)(a1 + 0x10508) = v70;
    v549 = v71;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v72 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v374, &v549);
    *(_QWORD*)&v344 = "Sphere";
    v73 = v344;
    *(_DWORD*)(a1 + 0x1050C) = v72;
    v550 = v73;
    DWORD2(v344) = 3;
    BYTE12(v344) = 0;
    v74 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v375, &v550);
    *(_QWORD*)&v344 = &unk_1488C5128;
    v75 = v344;
    *(_DWORD*)(a1 + 0x10510) = v74;
    v551 = v75;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v76 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v376, &v551);
    *(_QWORD*)&v344 = "Vector2D";
    v77 = v344;
    *(_DWORD*)(a1 + 0x10514) = v76;
    v552 = v77;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v78 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v377, &v552);
    *(_QWORD*)&v344 = "IntRect";
    v79 = v344;
    *(_DWORD*)(a1 + 0x10518) = v78;
    v553 = v79;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v80 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v378, &v553);
    *(_QWORD*)&v344 = "IntPoint";
    v81 = v344;
    *(_DWORD*)(a1 + 0x1051C) = v80;
    v554 = v81;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v82 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v379, &v554);
    *(_QWORD*)&v344 = "Vector4";
    v555 = v344;
    *(_DWORD*)(a1 + 0x10520) = v82;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v83 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v380, &v555);
    *(_QWORD*)&v344 = "Name";
    v84 = v344;
    *(_DWORD*)(a1 + 0x10524) = v83;
    v556 = v84;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v85 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v381, &v556);
    *(_QWORD*)&v344 = "Vector";
    v86 = v344;
    *(_DWORD*)(a1 + 0x10528) = v85;
    v557 = v86;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v87 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v382, &v557);
    *(_QWORD*)&v344 = "Rotator";
    v88 = v344;
    *(_DWORD*)(a1 + 0x1052C) = v87;
    v558 = v88;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v89 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v383, &v558);
    *(_QWORD*)&v344 = "SHVector";
    v90 = v344;
    *(_DWORD*)(a1 + 0x10530) = v89;
    v559 = v90;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v91 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v384, &v559);
    *(_QWORD*)&v344 = "Color";
    v92 = v344;
    *(_DWORD*)(a1 + 0x10534) = v91;
    v560 = v92;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v93 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v385, &v560);
    *(_QWORD*)&v344 = "Plane";
    v94 = v344;
    *(_DWORD*)(a1 + 0x10538) = v93;
    v561 = v94;
    DWORD2(v344) = 6;
    v95 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v386, &v561);
    *(_QWORD*)&v344 = "Matrix";
    *(_DWORD*)(a1 + 0x1053C) = v95;
    BYTE12(v344) = 0;
    v562 = v344;
    DWORD2(v344) = 0xB;
    BYTE12(v344) = 0;
    v96 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v387, &v562);
    *(_QWORD*)&v344 = "LinearColor";
    v97 = v344;
    *(_DWORD*)(a1 + 0x10540) = v96;
    v563 = v97;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v98 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v388, &v563);
    *(_QWORD*)&v344 = "AdvanceFrame";
    v99 = v344;
    *(_DWORD*)(a1 + 0x10544) = v98;
    v564 = v99;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v100 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v389, &v564);
    *(_QWORD*)&v344 = "Pointer";
    v101 = v344;
    *(_DWORD*)(a1 + 0x10548) = v100;
    v565 = v101;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v102 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v390, &v565);
    *(_QWORD*)&v344 = "Double";
    v103 = v344;
    *(_DWORD*)(a1 + 0x1054C) = v102;
    v566 = v103;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v104 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v391, &v566);
    *(_QWORD*)&v344 = "Quat";
    v105 = v344;
    *(_DWORD*)(a1 + 0x10550) = v104;
    v567 = v105;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v106 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v392, &v567);
    *(_QWORD*)&v344 = "Self";
    v107 = v344;
    *(_DWORD*)(a1 + 0x10554) = v106;
    v568 = v107;
    *(_DWORD*)(a1 + 0x10558) = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(
        a1,
        v393,
        &v568);
    DWORD2(v344) = 9;
    *(_QWORD*)&v344 = "Transform";
    BYTE12(v344) = 0;
    v569 = v344;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v108 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v394, &v569);
    *(_QWORD*)&v344 = "Object";
    v109 = v344;
    *(_DWORD*)(a1 + 0x1055C) = v108;
    v570 = v109;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v110 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v395, &v570);
    *(_QWORD*)&v344 = "Camera";
    v111 = v344;
    *(_DWORD*)(a1 + 0x105D0) = v110;
    v571 = v111;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v112 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v396, &v571);
    *(_QWORD*)&v344 = "Actor";
    v113 = v344;
    *(_DWORD*)(a1 + 0x105D4) = v112;
    v572 = v113;
    DWORD2(v344) = 0x10;
    BYTE12(v344) = 0;
    v114 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v397, &v572);
    *(_QWORD*)&v344 = "ObjectRedirector";
    v115 = v344;
    *(_DWORD*)(a1 + 0x105D8) = v114;
    v573 = v115;
    DWORD2(v344) = 0xF;
    BYTE12(v344) = 0;
    v116 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v398, &v573);
    *(_QWORD*)&v344 = "ObjectArchetype";
    v117 = v344;
    *(_DWORD*)(a1 + 0x105DC) = v116;
    v574 = v117;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v118 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v399, &v574);
    *(_QWORD*)&v344 = "";
    v119 = v344;
    *(_DWORD*)(a1 + 0x105E0) = v118;
    v575 = v119;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v120 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v400, &v575);
    *(_QWORD*)&v344 = "ScriptStruct";
    v121 = v344;
    *(_DWORD*)(a1 + 0x105E4) = v120;
    v576 = v121;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v122 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v401, &v576);
    *(_QWORD*)&v344 = "Function";
    v123 = v344;
    *(_DWORD*)(a1 + 0x105E8) = v122;
    v577 = v123;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v124 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v402, &v577);
    *(_QWORD*)&v344 = "Pawn";
    v125 = v344;
    *(_DWORD*)(a1 + 0x105EC) = v124;
    v578 = v125;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v126 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v403, &v578);
    *(_QWORD*)&v344 = "State";
    v127 = v344;
    *(_DWORD*)(a1 + 0x105F0) = v126;
    v579 = v127;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v128 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v404, &v579);
    *(_QWORD*)&v344 = "TRUE";
    v129 = v344;
    *(_DWORD*)(a1 + 0x10760) = v128;
    v580 = v129;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v130 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v405, &v580);
    *(_QWORD*)&v344 = "FALSE";
    v131 = v344;
    *(_DWORD*)(a1 + 0x10764) = v130;
    v581 = v131;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v132 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v406, &v581);
    *(_QWORD*)&v344 = "Enum";
    v582 = v344;
    *(_DWORD*)(a1 + 0x10768) = v132;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v133 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v407, &v582);
    *(_QWORD*)&v344 = "Default";
    v134 = v344;
    *(_DWORD*)(a1 + 0x1076C) = v133;
    v583 = v134;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v135 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v408, &v583);
    *(_QWORD*)&v344 = "Skip";
    v136 = v344;
    *(_DWORD*)(a1 + 0x10770) = v135;
    v584 = v136;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v137 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v409, &v584);
    *(_QWORD*)&v344 = "Input";
    v138 = v344;
    *(_DWORD*)(a1 + 0x10774) = v137;
    v585 = v138;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v139 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v410, &v585);
    *(_QWORD*)&v344 = "Package";
    v140 = v344;
    *(_DWORD*)(a1 + 0x10778) = v139;
    v586 = v140;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v141 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v411, &v586);
    *(_QWORD*)&v344 = "Groups";
    v142 = v344;
    *(_DWORD*)(a1 + 0x1077C) = v141;
    v587 = v142;
    DWORD2(v344) = 9;
    BYTE12(v344) = 0;
    v143 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v412, &v587);
    *(_QWORD*)&v344 = "Interface";
    v144 = v344;
    *(_DWORD*)(a1 + 0x10780) = v143;
    v588 = v144;
    DWORD2(v344) = 0xA;
    v145 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v413, &v588);
    *(_QWORD*)&v344 = "Components";
    *(_DWORD*)(a1 + 0x10784) = v145;
    BYTE12(v344) = 0;
    v589 = v344;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v146 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v414, &v589);
    *(_QWORD*)&v344 = "Global";
    v147 = v344;
    *(_DWORD*)(a1 + 0x10788) = v146;
    v590 = v147;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v148 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v415, &v590);
    *(_QWORD*)&v344 = "Super";
    v149 = v344;
    *(_DWORD*)(a1 + 0x1078C) = v148;
    v591 = v149;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v150 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v416, &v591);
    *(_QWORD*)&v344 = "Outer";
    v151 = v344;
    *(_DWORD*)(a1 + 0x10790) = v150;
    v592 = v151;
    DWORD2(v344) = 3;
    BYTE12(v344) = 0;
    v152 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v417, &v592);
    *(_QWORD*)&v344 = "Map";
    v153 = v344;
    *(_DWORD*)(a1 + 0x10794) = v152;
    v593 = v153;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v154 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v418, &v593);
    *(_QWORD*)&v344 = "Role";
    v155 = v344;
    *(_DWORD*)(a1 + 0x10798) = v154;
    v594 = v155;
    DWORD2(v344) = 0xA;
    BYTE12(v344) = 0;
    v156 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v419, &v594);
    *(_QWORD*)&v344 = "RemoteRole";
    v157 = v344;
    *(_DWORD*)(a1 + 0x1079C) = v156;
    v595 = v157;
    *(_DWORD*)(a1 + 0x107A0) = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(
        a1,
        v420,
        &v595);
    DWORD2(v344) = 0xF;
    *(_QWORD*)&v344 = "PersistentLevel";
    BYTE12(v344) = 0;
    v596 = v344;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v158 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v421, &v596);
    *(_QWORD*)&v344 = "TheWorld";
    v159 = v344;
    *(_DWORD*)(a1 + 0x107A4) = v158;
    v597 = v159;
    DWORD2(v344) = 0xF;
    BYTE12(v344) = 0;
    v160 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v422, &v597);
    *(_QWORD*)&v344 = "PackageMetaData";
    v161 = v344;
    *(_DWORD*)(a1 + 0x107A8) = v160;
    v598 = v161;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v162 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v423, &v598);
    *(_QWORD*)&v344 = "InitialState";
    v163 = v344;
    *(_DWORD*)(a1 + 0x107AC) = v162;
    v599 = v163;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v164 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v424, &v599);
    *(_QWORD*)&v344 = "Game";
    v165 = v344;
    *(_DWORD*)(a1 + 0x107B0) = v164;
    v600 = v165;
    DWORD2(v344) = 0xE;
    BYTE12(v344) = 0;
    v166 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v425, &v600);
    *(_QWORD*)&v344 = "SelectionColor";
    v167 = v344;
    *(_DWORD*)(a1 + 0x107B4) = v166;
    v601 = v167;
    DWORD2(v344) = 2;
    BYTE12(v344) = 0;
    v168 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v426, &v601);
    *(_QWORD*)&v344 = "UI";
    v169 = v344;
    *(_DWORD*)(a1 + 0x107B8) = v168;
    v602 = v169;
    DWORD2(v344) = 0x10;
    BYTE12(v344) = 0;
    v170 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v427, &v602);
    *(_QWORD*)&v344 = "ExecuteUbergraph";
    v171 = v344;
    *(_DWORD*)(a1 + 0x107BC) = v170;
    v603 = v171;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v172 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v428, &v603);
    *(_QWORD*)&v344 = "DeviceID";
    v173 = v344;
    *(_DWORD*)(a1 + 0x107C0) = v172;
    v604 = v173;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v174 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v429, &v604);
    *(_QWORD*)&v344 = "RootStat";
    v175 = v344;
    *(_DWORD*)(a1 + 0x107C4) = v174;
    v605 = v175;
    DWORD2(v344) = 9;
    BYTE12(v344) = 0;
    v176 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v430, &v605);
    *(_QWORD*)&v344 = "MoveActor";
    v177 = v344;
    *(_DWORD*)(a1 + 0x107C8) = v176;
    v606 = v177;
    DWORD2(v344) = 3;
    BYTE12(v344) = 0;
    v178 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v431, &v606);
    *(_QWORD*)&v344 = &unk_148323A70;
    v179 = v344;
    *(_DWORD*)(a1 + 0x107CC) = v178;
    v607 = v179;
    DWORD2(v344) = 0x16;
    BYTE12(v344) = 0;
    v180 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v432, &v607);
    *(_QWORD*)&v344 = "MeshEmitterVertexColor";
    v181 = v344;
    *(_DWORD*)(a1 + 0x107D8) = v180;
    v608 = v181;
    DWORD2(v344) = 0x16;
    BYTE12(v344) = 0;
    v182 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v433, &v608);
    *(_QWORD*)&v344 = "TextureOffsetParameter";
    v609 = v344;
    *(_DWORD*)(a1 + 0x107DC) = v182;
    DWORD2(v344) = 0x15;
    BYTE12(v344) = 0;
    v183 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v434, &v609);
    *(_QWORD*)&v344 = "TextureScaleParameter";
    v184 = v344;
    *(_DWORD*)(a1 + 0x107E0) = v183;
    v610 = v184;
    DWORD2(v344) = 9;
    BYTE12(v344) = 0;
    v185 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v435, &v610);
    *(_QWORD*)&v344 = "ImpactVel";
    v186 = v344;
    *(_DWORD*)(a1 + 0x107E4) = v185;
    v611 = v186;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v187 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v436, &v611);
    *(_QWORD*)&v344 = "SlideVel";
    v188 = v344;
    *(_DWORD*)(a1 + 0x107E8) = v187;
    v612 = v188;
    DWORD2(v344) = 0x17;
    BYTE12(v344) = 0;
    v189 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v437, &v612);
    *(_QWORD*)&v344 = "TextureOffset1Parameter";
    v190 = v344;
    *(_DWORD*)(a1 + 0x107EC) = v189;
    v613 = v190;
    DWORD2(v344) = 0x1B;
    BYTE12(v344) = 0;
    v191 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v438, &v613);
    *(_QWORD*)&v344 = "MeshEmitterDynamicParameter";
    v192 = v344;
    *(_DWORD*)(a1 + 0x107F0) = v191;
    v614 = v192;
    DWORD2(v344) = 0xF;
    BYTE12(v344) = 0;
    v193 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v439, &v614);
    *(_QWORD*)&v344 = "ExpressionInput";
    v194 = v344;
    *(_DWORD*)(a1 + 0x107F4) = v193;
    v615 = v194;
    DWORD2(v344) = 8;
    v195 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v440, &v615);
    *(_QWORD*)&v344 = "Untitled";
    *(_DWORD*)(a1 + 0x107F8) = v195;
    BYTE12(v344) = 0;
    v616 = v344;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v196 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v441, &v616);
    *(_QWORD*)&v344 = "Timer";
    v197 = v344;
    *(_DWORD*)(a1 + 0x107FC) = v196;
    v617 = v197;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v198 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v442, &v617);
    *(_QWORD*)&v344 = "Team";
    v199 = v344;
    *(_DWORD*)(a1 + 0x10800) = v198;
    v618 = v199;
    DWORD2(v344) = 3;
    BYTE12(v344) = 0;
    v200 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v443, &v618);
    *(_QWORD*)&v344 = &unk_147BAB978;
    v201 = v344;
    *(_DWORD*)(a1 + 0x10804) = v200;
    v619 = v201;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v202 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v444, &v619);
    *(_QWORD*)&v344 = "High";
    v203 = v344;
    *(_DWORD*)(a1 + 0x10808) = v202;
    v620 = v203;
    DWORD2(v344) = 0xB;
    BYTE12(v344) = 0;
    v204 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v445, &v620);
    *(_QWORD*)&v344 = "NetworkGUID";
    v205 = v344;
    *(_DWORD*)(a1 + 0x1080C) = v204;
    v621 = v205;
    DWORD2(v344) = 0xA;
    BYTE12(v344) = 0;
    v206 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v446, &v621);
    *(_QWORD*)&v344 = "GameThread";
    v207 = v344;
    *(_DWORD*)(a1 + 0x10810) = v206;
    v622 = v207;
    *(_DWORD*)(a1 + 0x10814) = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(
        a1,
        v447,
        &v622);
    DWORD2(v344) = 0xC;
    *(_QWORD*)&v344 = "RenderThread";
    BYTE12(v344) = 0;
    v623 = v344;
    DWORD2(v344) = 0xD;
    BYTE12(v344) = 0;
    v208 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v448, &v623);
    *(_QWORD*)&v344 = "OtherChildren";
    v209 = v344;
    *(_DWORD*)(a1 + 0x10818) = v208;
    v624 = v209;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v210 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v449, &v624);
    *(_QWORD*)&v344 = "Location";
    v211 = v344;
    *(_DWORD*)(a1 + 0x1081C) = v210;
    v625 = v211;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v212 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v450, &v625);
    *(_QWORD*)&v344 = "Rotation";
    v213 = v344;
    *(_DWORD*)(a1 + 0x10820) = v212;
    v626 = v213;
    DWORD2(v344) = 3;
    BYTE12(v344) = 0;
    v214 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v451, &v626);
    *(_QWORD*)&v344 = "BSP";
    v215 = v344;
    *(_DWORD*)(a1 + 0x10824) = v214;
    v627 = v215;
    DWORD2(v344) = 0xE;
    BYTE12(v344) = 0;
    v216 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v452, &v627);
    *(_QWORD*)&v344 = "EditorSettings";
    v217 = v344;
    *(_DWORD*)(a1 + 0x10828) = v216;
    v628 = v217;
    DWORD2(v344) = 0xB;
    BYTE12(v344) = 0;
    v218 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v453, &v628);
    *(_QWORD*)&v344 = "AudioThread";
    v219 = v344;
    *(_DWORD*)(a1 + 0x1082C) = v218;
    v629 = v219;
    DWORD2(v344) = 2;
    BYTE12(v344) = 0;
    v220 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v454, &v629);
    *(_QWORD*)&v344 = &unk_147B9DC58;
    v221 = v344;
    *(_DWORD*)(a1 + 0x10830) = v220;
    v630 = v221;
    DWORD2(v344) = 0xF;
    BYTE12(v344) = 0;
    v222 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v455, &v630);
    *(_QWORD*)&v344 = "UserDefinedEnum";
    v223 = v344;
    *(_DWORD*)(a1 + 0x10834) = v222;
    v631 = v223;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v224 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v456, &v631);
    *(_QWORD*)&v344 = "Control";
    v225 = v344;
    *(_DWORD*)(a1 + 0x10838) = v224;
    v632 = v225;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v226 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v457, &v632);
    *(_QWORD*)&v344 = "Voice";
    v227 = v344;
    *(_DWORD*)(a1 + 0x1083C) = v226;
    v633 = v227;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v228 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v458, &v633);
    *(_QWORD*)&v344 = "Zlib";
    v229 = v344;
    *(_DWORD*)(a1 + 0x10840) = v228;
    v634 = v229;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v230 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v459, &v634);
    *(_QWORD*)&v344 = "Gzip";
    v231 = v344;
    *(_DWORD*)(a1 + 0x10844) = v230;
    v635 = v231;
    DWORD2(v344) = 3;
    BYTE12(v344) = 0;
    v232 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v460, &v635);
    *(_QWORD*)&v344 = "LZ4";
    v636 = v344;
    *(_DWORD*)(a1 + 0x10848) = v232;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v233 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v461, &v636);
    *(_QWORD*)&v344 = "Mobile";
    v234 = v344;
    *(_DWORD*)(a1 + 0x1084C) = v233;
    v637 = v234;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v235 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v462, &v637);
    *(_QWORD*)&v344 = "DGram";
    v236 = v344;
    *(_DWORD*)(a1 + 0x10850) = v235;
    v638 = v236;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v237 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v463, &v638);
    *(_QWORD*)&v344 = "Stream";
    v238 = v344;
    *(_DWORD*)(a1 + 0x108A0) = v237;
    v639 = v238;
    DWORD2(v344) = 0xD;
    BYTE12(v344) = 0;
    v239 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v464, &v639);
    *(_QWORD*)&v344 = "GameNetDriver";
    v240 = v344;
    *(_DWORD*)(a1 + 0x108A4) = v239;
    v640 = v240;
    DWORD2(v344) = 0x10;
    BYTE12(v344) = 0;
    v241 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v465, &v640);
    *(_QWORD*)&v344 = "PendingNetDriver";
    v242 = v344;
    *(_DWORD*)(a1 + 0x108A8) = v241;
    v641 = v242;
    DWORD2(v344) = 0xF;
    BYTE12(v344) = 0;
    v243 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v466, &v641);
    *(_QWORD*)&v344 = "BeaconNetDriver";
    v244 = v344;
    *(_DWORD*)(a1 + 0x108AC) = v243;
    v642 = v244;
    DWORD2(v344) = 0x10;
    v245 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v467, &v642);
    *(_QWORD*)&v344 = "FlushNetDormancy";
    *(_DWORD*)(a1 + 0x108B0) = v245;
    BYTE12(v344) = 0;
    v643 = v344;
    DWORD2(v344) = 0xD;
    BYTE12(v344) = 0;
    v246 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v468, &v643);
    *(_QWORD*)&v344 = "DemoNetDriver";
    v247 = v344;
    *(_DWORD*)(a1 + 0x108B4) = v246;
    v644 = v247;
    DWORD2(v344) = 0xB;
    BYTE12(v344) = 0;
    v248 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v469, &v644);
    *(_QWORD*)&v344 = "GameSession";
    v249 = v344;
    *(_DWORD*)(a1 + 0x108B8) = v248;
    v645 = v249;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v250 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v470, &v645);
    *(_QWORD*)&v344 = "PartySession";
    v251 = v344;
    *(_DWORD*)(a1 + 0x108BC) = v250;
    v646 = v251;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v252 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v471, &v646);
    *(_QWORD*)&v344 = "GamePort";
    v253 = v344;
    *(_DWORD*)(a1 + 0x108C0) = v252;
    v647 = v253;
    DWORD2(v344) = 0xA;
    BYTE12(v344) = 0;
    v254 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v493, &v647);
    *(_QWORD*)&v344 = "BeaconPort";
    v255 = v344;
    *(_DWORD*)(a1 + 0x108C4) = v254;
    v648 = v255;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v256 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v473, &v648);
    *(_QWORD*)&v344 = "MeshPort";
    v257 = v344;
    *(_DWORD*)(a1 + 0x108C8) = v256;
    v649 = v257;
    *(_DWORD*)(a1 + 0x108CC) = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(
        a1,
        v474,
        &v649);
    DWORD2(v344) = 0xD;
    *(_QWORD*)&v344 = "MeshNetDriver";
    BYTE12(v344) = 0;
    v650 = v344;
    DWORD2(v344) = 0xF;
    BYTE12(v344) = 0;
    v258 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v475, &v650);
    *(_QWORD*)&v344 = "LiveStreamVoice";
    v259 = v344;
    *(_DWORD*)(a1 + 0x108D0) = v258;
    v651 = v259;
    DWORD2(v344) = 0x13;
    BYTE12(v344) = 0;
    v260 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v476, &v651);
    *(_QWORD*)&v344 = "LiveStreamAnimation";
    v261 = v344;
    *(_DWORD*)(a1 + 0x108D4) = v260;
    v652 = v261;
    DWORD2(v344) = 6;
    BYTE12(v344) = 0;
    v262 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v477, &v652);
    *(_QWORD*)&v344 = "Linear";
    v263 = v344;
    *(_DWORD*)(a1 + 0x108D8) = v262;
    v653 = v263;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v264 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v478, &v653);
    *(_QWORD*)&v344 = "Point";
    v265 = v344;
    *(_DWORD*)(a1 + 0x108F0) = v264;
    v654 = v265;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v266 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v479, &v654);
    *(_QWORD*)&v344 = "Aniso";
    v267 = v344;
    *(_DWORD*)(a1 + 0x108F4) = v266;
    v655 = v267;
    DWORD2(v344) = 0x12;
    BYTE12(v344) = 0;
    v268 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v480, &v655);
    *(_QWORD*)&v344 = "LightMapResolution";
    v269 = v344;
    *(_DWORD*)(a1 + 0x108F8) = v268;
    v656 = v269;
    DWORD2(v344) = 9;
    BYTE12(v344) = 0;
    v270 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v481, &v656);
    *(_QWORD*)&v344 = "UnGrouped";
    v271 = v344;
    *(_DWORD*)(a1 + 0x108FC) = v270;
    v657 = v271;
    DWORD2(v344) = 9;
    BYTE12(v344) = 0;
    v272 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v482, &v657);
    *(_QWORD*)&v344 = "VoiceChat";
    v273 = v344;
    *(_DWORD*)(a1 + 0x1091C) = v272;
    v658 = v273;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v274 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v483, &v658);
    *(_QWORD*)&v344 = "Playing";
    v275 = v344;
    *(_DWORD*)(a1 + 0x10920) = v274;
    v659 = v275;
    DWORD2(v344) = 0xA;
    BYTE12(v344) = 0;
    v276 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v484, &v659);
    *(_QWORD*)&v344 = "Spectating";
    v277 = v344;
    *(_DWORD*)(a1 + 0x10940) = v276;
    v660 = v277;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v278 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v485, &v660);
    *(_QWORD*)&v344 = "Inactive";
    v279 = v344;
    *(_DWORD*)(a1 + 0x10948) = v278;
    v661 = v279;
    DWORD2(v344) = 0xB;
    BYTE12(v344) = 0;
    v280 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v486, &v661);
    *(_QWORD*)&v344 = "PerfWarning";
    v281 = v344;
    *(_DWORD*)(a1 + 0x10954) = v280;
    v662 = v281;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v282 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v487, &v662);
    *(_QWORD*)&v344 = "Info";
    v663 = v344;
    *(_DWORD*)(a1 + 0x109B8) = v282;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v283 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v488, &v663);
    *(_QWORD*)&v344 = "Init";
    v284 = v344;
    *(_DWORD*)(a1 + 0x109BC) = v283;
    v664 = v284;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v285 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v489, &v664);
    *(_QWORD*)&v344 = "Exit";
    v286 = v344;
    *(_DWORD*)(a1 + 0x109C0) = v285;
    v665 = v286;
    DWORD2(v344) = 3;
    BYTE12(v344) = 0;
    v287 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v490, &v665);
    *(_QWORD*)&v344 = &unk_1486FDEE0;
    v288 = v344;
    *(_DWORD*)(a1 + 0x109C4) = v287;
    v666 = v288;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v289 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v491, &v666);
    *(_QWORD*)&v344 = "Warning";
    v290 = v344;
    *(_DWORD*)(a1 + 0x109C8) = v289;
    v667 = v290;
    DWORD2(v344) = 5;
    BYTE12(v344) = 0;
    v291 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v492, &v667);
    *(_QWORD*)&v344 = "Error";
    v292 = v344;
    *(_DWORD*)(a1 + 0x109CC) = v291;
    v668 = v292;
    DWORD2(v344) = 0xD;
    BYTE12(v344) = 0;
    v293 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v514, &v668);
    *(_QWORD*)&v344 = "FontCharacter";
    v294 = v344;
    *(_DWORD*)(a1 + 0x109D0) = v293;
    v669 = v294;
    DWORD2(v344) = 0x13;
    v295 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v494, &v669);
    *(_QWORD*)&v344 = "InitChild2StartBone";
    *(_DWORD*)(a1 + 0x10A80) = v295;
    BYTE12(v344) = 0;
    v670 = v344;
    DWORD2(v344) = 0x11;
    BYTE12(v344) = 0;
    v296 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v495, &v670);
    *(_QWORD*)&v344 = "SoundCueLocalized";
    v297 = v344;
    *(_DWORD*)(a1 + 0x10A84) = v296;
    v671 = v297;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v298 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v496, &v671);
    *(_QWORD*)&v344 = "SoundCue";
    v299 = v344;
    *(_DWORD*)(a1 + 0x10A88) = v298;
    v672 = v299;
    DWORD2(v344) = 0x14;
    BYTE12(v344) = 0;
    v300 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v497, &v672);
    *(_QWORD*)&v344 = "RawDistributionFloat";
    v301 = v344;
    *(_DWORD*)(a1 + 0x10A8C) = v300;
    v673 = v301;
    DWORD2(v344) = 0x15;
    BYTE12(v344) = 0;
    v302 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v498, &v673);
    *(_QWORD*)&v344 = "RawDistributionVector";
    v303 = v344;
    *(_DWORD*)(a1 + 0x10A90) = v302;
    v674 = v303;
    DWORD2(v344) = 0x10;
    BYTE12(v344) = 0;
    v304 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v499, &v674);
    *(_QWORD*)&v344 = "InterpCurveFloat";
    v305 = v344;
    *(_DWORD*)(a1 + 0x10A94) = v304;
    v675 = v305;
    DWORD2(v344) = 0x13;
    BYTE12(v344) = 0;
    v306 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v500, &v675);
    *(_QWORD*)&v344 = "InterpCurveVector2D";
    v307 = v344;
    *(_DWORD*)(a1 + 0x10A98) = v306;
    v676 = v307;
    *(_DWORD*)(a1 + 0x10A9C) = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(
        a1,
        v501,
        &v676);
    DWORD2(v344) = 0x11;
    *(_QWORD*)&v344 = "InterpCurveVector";
    BYTE12(v344) = 0;
    v677 = v344;
    DWORD2(v344) = 0x15;
    BYTE12(v344) = 0;
    v308 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v502, &v677);
    *(_QWORD*)&v344 = "InterpCurveTwoVectors";
    v309 = v344;
    *(_DWORD*)(a1 + 0x10AA0) = v308;
    v678 = v309;
    DWORD2(v344) = 0xF;
    BYTE12(v344) = 0;
    v310 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v503, &v678);
    *(_QWORD*)&v344 = "InterpCurveQuat";
    v311 = v344;
    *(_DWORD*)(a1 + 0x10AA4) = v310;
    v679 = v311;
    DWORD2(v344) = 2;
    BYTE12(v344) = 0;
    v312 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v504, &v679);
    *(_QWORD*)&v344 = &unk_148590B78;
    v313 = v344;
    *(_DWORD*)(a1 + 0x10AA8) = v312;
    v680 = v313;
    DWORD2(v344) = 7;
    BYTE12(v344) = 0;
    v314 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v505, &v680);
    *(_QWORD*)&v344 = "NavMesh";
    v315 = v344;
    *(_DWORD*)(a1 + 0x10B48) = v314;
    v681 = v315;
    DWORD2(v344) = 0x12;
    BYTE12(v344) = 0;
    v316 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v506, &v681);
    *(_QWORD*)&v344 = "PerformanceCapture";
    v317 = v344;
    *(_DWORD*)(a1 + 0x10B4C) = v316;
    v682 = v317;
    DWORD2(v344) = 0xC;
    BYTE12(v344) = 0;
    v318 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v507, &v682);
    *(_QWORD*)&v344 = "EditorLayout";
    v319 = v344;
    *(_DWORD*)(a1 + 0x10C10) = v318;
    v683 = v319;
    DWORD2(v344) = 0x11;
    BYTE12(v344) = 0;
    v320 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v508, &v683);
    *(_QWORD*)&v344 = "EditorKeyBindings";
    v321 = v344;
    *(_DWORD*)(a1 + 0x10DA0) = v320;
    v684 = v321;
    DWORD2(v344) = 0x10;
    BYTE12(v344) = 0;
    v322 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v509, &v684);
    *(_QWORD*)&v344 = "GameUserSettings";
    v323 = v344;
    *(_DWORD*)(a1 + 0x10DA4) = v322;
    v685 = v323;
    DWORD2(v344) = 8;
    BYTE12(v344) = 0;
    v324 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v510, &v685);
    *(_QWORD*)&v344 = "Filename";
    v325 = v344;
    *(_DWORD*)(a1 + 0x10DA8) = v324;
    v686 = v325;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v326 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v511, &v686);
    *(_QWORD*)&v344 = "Lerp";
    v327 = v344;
    *(_DWORD*)(a1 + 0x10F30) = v326;
    v687 = v327;
    DWORD2(v344) = 4;
    BYTE12(v344) = 0;
    v328 = *(_DWORD*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(a1, v512, &v687);
    *(_QWORD*)&v344 = "Root";
    v329 = v344;
    *(_DWORD*)(a1 + 0x10F34) = v328;
    v344 = v329;
    v330 = 0;
    *(_QWORD*)(a1 + 0x10F38) = *(unsigned int*)((__int64(__fastcall*)(__int64, char*, __int128*))sub_144301B30)(
        a1,
        v513,
        &v344);
    do
    {
        if (!v330 || *v5)
        {
            v690 = v330;
            ((void(__fastcall*)(__int64, __int64, unsigned int*))sub_1442E7A90)(
                a1 + 0x10F40,
                a1 + 4 * (v330 + 0x4110LL),
                &v690);
            v331 = *v5;
            if (*(_DWORD*)(a1 + 0x10F3C) >= (unsigned int)*v5)
                v331 = *(_DWORD*)(a1 + 0x10F3C);
            *(_DWORD*)(a1 + 0x10F3C) = v331;
        }
        ++v330;
        ++v5;
    } while (v330 < 0x2BF);
    v332 = a1 + 0x10040;
    v333 = 0;
    if (a1 + 0x10040 != a1 + 0x10440)
    {
        do
        {
            v333 += *(_DWORD*)(v332 + 0x20);
            v332 += 0x40LL;
        } while (v332 != a1 + 0x10440);
        v334 = a1 + 0x10040;
        do
        {
            v2 += *(_DWORD*)(v334 + 0x24);
            v334 += 0x40LL;
        } while (v334 != a1 + 0x10440);
    }
    if (v333 - v2 != *(_DWORD*)(a1 + 0x12F48) - *(_DWORD*)(a1 + 0x12FA4))
    {
        v335 = ((__int64(__fastcall*)(char*, const wchar_t*, const wchar_t*, const wchar_t*))sub_1441AF230)(
            v688,
            L"Duplicate hardcoded name",
            L"UnrealEd",
            L"DuplicatedHardcodedName");
        ((void(__fastcall*)(_QWORD, __int64, _QWORD))sub_1442B4110)(0LL, v335, 0LL);
        v337 = v689;
        if (v689)
        {
            if (_InterlockedExchangeAdd(v689 + 2, 0xFFFFFFFF) == 1)
            {
                (**(void(__fastcall***)(volatile signed __int32*))v337)(v337);
                if (_InterlockedExchangeAdd(v337 + 3, 0xFFFFFFFF) == 1)
                    (*(void(__fastcall**)(volatile signed __int32*, __int64))(*(_QWORD*)v337 + 8LL))(v337, 1LL);
            }
        }
        v338 = 0;
        LOBYTE(v690) = 0;
        if ((unsigned __int8)byte_14A425310 >= 5u && (unsigned __int8)byte_14A8DE2B8 >= 5u)
        {
            sub_1442E6110(
                &v691,
                &byte_14A8DE2B8,
                L"FPlatformMisc::RequestExit(%i)",
                "FWindowsPlatformMisc::RequestExit",
                &v690);
            v338 = v690;
        }
        ((void(__fastcall*)(const wchar_t*, __int64))sub_144287BF0)(L"Win RequestExit", v336);
        ((void(__fastcall*)(void*))sub_140B68060)(&unk_14A42AD30);
        if (v338)
        {
            if (sub_1442AA870())
            {
                v339 = sub_1442AA870();
                (*(void(__fastcall**)(__int64))(*(_QWORD*)v339 + 0x68LL))(v339);
                v340 = sub_1442AA870();
                (*(void(__fastcall**)(__int64))(*(_QWORD*)v340 + 0x20LL))(v340);
            }
            v341 = byte_14A8DDCAB != 0 ? 3 : 0;
            v342 = MEMORY[0x32A93DE1]();
            MEMORY[0x7FFA20D397C0](v342, v341);
        }
        else
        {
            MEMORY[0x32AAFEA3](0LL);
        }
    }
    return a1;
}

 
#pragma region GobjectASm

    .text : 00000001442E9150 40 55                                         push    rbp
    .text : 00000001442E9152 53                                            push    rbx
    .text : 00000001442E9153 56                                            push    rsi
    .text : 00000001442E9154 57                                            push    rdi
    .text : 00000001442E9155 41 54                                         push    r12
    .text : 00000001442E9157 41 55                                         push    r13
    .text : 00000001442E9159 41 56                                         push    r14
    .text : 00000001442E915B 41 57                                         push    r15
    .text : 00000001442E915D 48 8D AC 24 18 F3 FF FF                       lea     rbp, [rsp - 0CE8h]; Load Effective Address
    .text:00000001442E9165 48 81 EC E8 0D 00 00                          sub     rsp, 0DE8h; Integer Subtraction
    .text:00000001442E916C 48 8B F1                                      mov     rsi, rcx
    .text : 00000001442E916F FF 15 9B 6E 63 03                             call    cs : qword_147920010; Indirect Call Near Procedure
    .text:00000001442E9175 33 DB xor ebx, ebx; Logical Exclusive OR
    .text:00000001442E9177 48 8D 4E 10                                   lea     rcx, [rsi + 10h]; Load Effective Address
    .text:00000001442E917B 33 D2 xor edx, edx; Logical Exclusive OR
    .text:00000001442E917D 48 89 5E 08                                   mov[rsi + 8], rbx
    .text:00000001442E9181 41 B8 00 00 01 00                             mov     r8d, 10000h
    .text : 00000001442E9187 E8 B7 1D 38 03                                call    sub_14766AF43; Call Procedure
    .text:00000001442E918C 8D 53 02                                      lea     edx, [rbx + 2]; Load Effective Address
    .text:00000001442E918F B9 00 00 02 00                                mov     ecx, 20000h
    .text : 00000001442E9194 E8 97 3B ED FF                                call    sub_1441BCD30; Call Procedure
    .text:00000001442E9199 4C 8D AE 40 00 01 00                          lea     r13, [rsi + 10040h]; Load Effective Address
    .text:00000001442E91A0 48 89 46 10                                   mov[rsi + 10h], rax
    .text : 00000001442E91A4 49 8B FD                                      mov     rdi, r13
    .text : 00000001442E91A7 44 8D 73 10                                   lea     r14d, [rbx + 10h]; Load Effective Address
    .text:00000001442E91AB 0F 1F 44 00 00                                nop     dword ptr[rax + rax + 00h]; No Operation
    .text:00000001442E91B0
    .text : 00000001442E91B0                               loc_1442E91B0 : ; CODE XREF : sub_1442E9150 + 81↓j
    .text : 00000001442E91B0 48 8B CF                                      mov     rcx, rdi
    .text : 00000001442E91B3 FF 15 57 6E 63 03                             call    cs : qword_147920010; Indirect Call Near Procedure
    .text:00000001442E91B9 48 89 5F 08                                   mov[rdi + 8], rbx
    .text:00000001442E91BD 48 89 5F 10                                   mov[rdi + 10h], rbx
    .text : 00000001442E91C1 48 89 5F 18                                   mov[rdi + 18h], rbx
    .text : 00000001442E91C5 48 89 5F 20                                   mov[rdi + 20h], rbx
    .text : 00000001442E91C9 48 83 C7 40                                   add     rdi, 40h; '@'; Add
    .text:00000001442E91CD 49 83 EE 01                                   sub     r14, 1; Integer Subtraction
    .text:00000001442E91D1 75 DD                                         jnz     short loc_1442E91B0; Jump if Not Zero(ZF = 0)
    .text:00000001442E91D3 4C 8D B6 40 04 01 00                          lea     r14, [rsi + 10440h]; Load Effective Address
    .text:00000001442E91DA 33 D2 xor edx, edx; Logical Exclusive OR
    .text:00000001442E91DC 49 8B CE                                      mov     rcx, r14
    .text : 00000001442E91DF 41 B8 FC 0A 00 00                             mov     r8d, 0AFCh
    .text : 00000001442E91E5 E8 59 1D 38 03                                call    sub_14766AF43; Call Procedure
    .text:00000001442E91EA
    .text : 00000001442E91EA                               loc_1442E91EA : ; CODE XREF : sub_1442FC150 + 43↓p
    .text : 00000001442E91EA 4D 8D A5 00 04 00 00                          lea     r12, [r13 + 400h]; Load Effective Address
    .text:00000001442E91F1 48 89 9E 40 2F 01 00                          mov[rsi + 12F40h], rbx
    .text : 00000001442E91F8 89 9E 48 2F 01 00                             mov[rsi + 12F48h], ebx
    .text : 00000001442E91FE 41 BF FF FF FF FF                             mov     r15d, 0FFFFFFFFh
    .text : 00000001442E9204 C7 86 4C 2F 01 00 00 02 00 00                 mov     dword ptr[rsi + 12F4Ch], 200h
    .text : 00000001442E920E 48 89 9E 90 2F 01 00                          mov[rsi + 12F90h], rbx
    .text : 00000001442E9215 89 9E 98 2F 01 00                             mov[rsi + 12F98h], ebx
    .text : 00000001442E921B C7 86 9C 2F 01 00 00 02 00 00                 mov     dword ptr[rsi + 12F9Ch], 200h
    .text : 00000001442E9225 44 89 BE A0 2F 01 00                          mov[rsi + 12FA0h], r15d
    .text : 00000001442E922C 89 9E A4 2F 01 00                             mov[rsi + 12FA4h], ebx
    .text : 00000001442E9232 48 89 9E A8 33 01 00                          mov[rsi + 133A8h], rbx
    .text : 00000001442E9239 89 9E B0 33 01 00                             mov[rsi + 133B0h], ebx
    .text : 00000001442E923F 4D 3B EC                                      cmp     r13, r12; Compare Two Operands
    .text:00000001442E9242 74 46                                         jz      short loc_1442E928A; Jump if Zero(ZF = 1)
    .text:00000001442E9244 49 8D 7D 10                                   lea     rdi, [r13 + 10h]; Load Effective Address
    .text:00000001442E9248 0F 1F 84 00 00 00 00 00                       nop     dword ptr[rax + rax + 00000000h]; No Operation
    .text:00000001442E9250
    .text : 00000001442E9250                               loc_1442E9250 : ; CODE XREF : sub_1442E9150 + 138↓j
    .text : 00000001442E9250 BA 04 00 00 00                                mov     edx, 4
    .text : 00000001442E9255 48 89 77 08                                   mov[rdi + 8], rsi
    .text:00000001442E9259 B9 00 04 00 00                                mov     ecx, 400h
    .text : 00000001442E925E E8 8D 3A ED FF                                call    sub_1441BCCF0; Call Procedure
    .text:00000001442E9263 33 D2 xor edx, edx; Logical Exclusive OR
    .text:00000001442E9265 48 89 07                                      mov[rdi], rax
    .text : 00000001442E9268 41 B8 00 04 00 00                             mov     r8d, 400h
    .text : 00000001442E926E 48 8B C8                                      mov     rcx, rax
    .text : 00000001442E9271 E8 CD 1C 38 03                                call    sub_14766AF43; Call Procedure
    .text:00000001442E9276 C7 47 FC FF 00 00 00                          mov     dword ptr[rdi - 4], 0FFh
    .text : 00000001442E927D 48 8D 7F 40                                   lea     rdi, [rdi + 40h]; Load Effective Address
    .text:00000001442E9281 48 8D 47 F0                                   lea     rax, [rdi - 10h]; Load Effective Address
    .text:00000001442E9285 49 3B C4                                      cmp     rax, r12; Compare Two Operands
    .text:00000001442E9288 75 C6                                         jnz     short loc_1442E9250; Jump if Not Zero(ZF = 0)
    .text:00000001442E928A
    .text : 00000001442E928A                               loc_1442E928A : ; CODE XREF : sub_1442E9150 + F2↑j
    .text : 00000001442E928A 48 8D 05 CB EF 6E 03                          lea     rax, aNone; Load Effective Address
    .text:00000001442E9291 C7 44 24 38 04 00 00 00                       mov     dword ptr[rsp + 38h], 4
    .text : 00000001442E9299 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E929E 4C 8D 85 F0 01 00 00                          lea     r8, [rbp + 1F0h]; Load Effective Address
    .text:00000001442E92A5 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E92A9 48 8D 95 38 0D 00 00                          lea     rdx, [rbp + 0D38h]; Load Effective Address
    .text:00000001442E92B0 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E92B5 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E92B8 66 0F 7F 85 F0 01 00 00                       movdqa  xmmword ptr[rbp + 1F0h], xmm0; Move Aligned Double Quadword
    .text:00000001442E92C0 E8 6B 88 01 00                                call    sub_144301B30; Call Procedure
    .text:00000001442E92C5 C7 44 24 38 0C 00 00 00                       mov     dword ptr[rsp + 38h], 0Ch
    .text : 00000001442E92CD 4C 8D 85 00 02 00 00                          lea     r8, [rbp + 200h]; Load Effective Address
    .text:00000001442E92D4 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E92D8 48 8D 95 40 0D 00 00                          lea     rdx, [rbp + 0D40h]; Load Effective Address
    .text:00000001442E92DF 8B 08                                         mov     ecx, [rax]
    .text:00000001442E92E1 48 8D 05 20 68 AE 04                          lea     rax, aByteproperty; Load Effective Address
    .text:00000001442E92E8 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E92ED 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E92F2 41 89 0E                                      mov[r14], ecx
    .text : 00000001442E92F5 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E92F8 66 0F 7F 85 00 02 00 00                       movdqa  xmmword ptr[rbp + 200h], xmm0; Move Aligned Double Quadword
    .text:00000001442E9300 E8 2B 88 01 00                                call    sub_144301B30; Call Procedure
    .text:00000001442E9305 C7 44 24 38 0B 00 00 00                       mov     dword ptr[rsp + 38h], 0Bh
    .text:00000001442E930D 4C 8D 85 10 02 00 00                          lea     r8, [rbp + 210h]; Load Effective Address
    .text:00000001442E9314 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E9318 48 8D 95 48 0D 00 00                          lea     rdx, [rbp + 0D48h]; Load Effective Address
    .text:00000001442E931F 8B 08                                         mov     ecx, [rax]
    .text:00000001442E9321 48 8D 05 F0 67 AE 04                          lea     rax, aIntproperty; Load Effective Address
    .text:00000001442E9328 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E932D 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E9332 89 8E 44 04 01 00                             mov[rsi + 10444h], ecx
    .text : 00000001442E9338 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E933B 66 0F 7F 85 10 02 00 00                       movdqa  xmmword ptr[rbp + 210h], xmm0; Move Aligned Double Quadword
    .text:00000001442E9343 E8 E8 87 01 00                                call    sub_144301B30; Call Procedure
    .text:00000001442E9348 C7 44 24 38 0C 00 00 00                       mov     dword ptr[rsp + 38h], 0Ch
    .text : 00000001442E9350 4C 8D 85 20 02 00 00                          lea     r8, [rbp + 220h]; Load Effective Address
    .text:00000001442E9357 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E935B 48 8D 95 40 01 00 00                          lea     rdx, [rbp + 140h]; Load Effective Address
    .text:00000001442E9362 8B 08                                         mov     ecx, [rax]
    .text:00000001442E9364 48 8D 05 BD 67 AE 04                          lea     rax, aBoolproperty; Load Effective Address
    .text:00000001442E936B 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E9370 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E9375 89 8E 48 04 01 00                             mov[rsi + 10448h], ecx
    .text : 00000001442E937B 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E937E 66 0F 7F 85 20 02 00 00                       movdqa  xmmword ptr[rbp + 220h], xmm0; Move Aligned Double Quadword
    .text:00000001442E9386 E8 A5 87 01 00                                call    sub_144301B30; Call Procedure
    .text:00000001442E938B C7 44 24 38 0D 00 00 00                       mov     dword ptr[rsp + 38h], 0Dh
    .text : 00000001442E9393 4C 8D 85 30 02 00 00                          lea     r8, [rbp + 230h]; Load Effective Address
    .text:00000001442E939A 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E939E 48 8D 54 24 40                                lea     rdx, [rsp + 40h]; Load Effective Address
    .text:00000001442E93A3 8B 08                                         mov     ecx, [rax]
    .text:00000001442E93A5 48 8D 05 8C 67 AE 04                          lea     rax, aFloatproperty; Load Effective Address
    .text:00000001442E93AC 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E93B1 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E93B6 89 8E 4C 04 01 00                             mov[rsi + 1044Ch], ecx
    .text : 00000001442E93BC 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E93BF 66 0F 7F 85 30 02 00 00                       movdqa  xmmword ptr[rbp + 230h], xmm0; Move Aligned Double Quadword
    .text:00000001442E93C7 E8 64 87 01 00                                call    sub_144301B30; Call Procedure
    .text:00000001442E93CC C7 44 24 38 0E 00 00 00                       mov     dword ptr[rsp + 38h], 0Eh
    .text : 00000001442E93D4 4C 8D 85 40 02 00 00                          lea     r8, [rbp + 240h]; Load Effective Address
    .text:00000001442E93DB 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E93DF 48 8D 54 24 44                                lea     rdx, [rsp + 0E20h + var_DDC]; Load Effective Address
    .text:00000001442E93E4 8B 08                                         mov     ecx, [rax]
    .text:00000001442E93E6 48 8D 05 5B 67 AE 04                          lea     rax, aObjectproperty; Load Effective Address
    .text:00000001442E93ED 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E93F2 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E93F7 89 8E 50 04 01 00                             mov[rsi + 10450h], ecx
    .text : 00000001442E93FD 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E9400 66 0F 7F 85 40 02 00 00                       movdqa  xmmword ptr[rbp + 240h], xmm0; Move Aligned Double Quadword
    .text:00000001442E9408 E8 23 87 01 00                                call    sub_144301B30; Call Procedure
    .text:00000001442E940D C7 44 24 38 0C 00 00 00                       mov     dword ptr[rsp + 38h], 0Ch
    .text : 00000001442E9415 4C 8D 85 50 02 00 00                          lea     r8, [rbp + 250h]; Load Effective Address
    .text:00000001442E941C 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E9420 48 8D 54 24 48                                lea     rdx, [rsp + 48h]; Load Effective Address
    .text:00000001442E9425 8B 08                                         mov     ecx, [rax]
    .text:00000001442E9427 48 8D 05 2A 67 AE 04                          lea     rax, aNameproperty; Load Effective Address
    .text:00000001442E942E 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E9433 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E9438 89 8E 54 04 01 00                             mov[rsi + 10454h], ecx
    .text : 00000001442E943E 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E9441 66 0F 7F 85 50 02 00 00                       movdqa  xmmword ptr[rbp + 250h], xmm0; Move Aligned Double Quadword
    .text:00000001442E9449 E8 E2 86 01 00                                call    sub_144301B30; Call Procedure
    .text:00000001442E944E C7 44 24 38 10 00 00 00                       mov     dword ptr[rsp + 38h], 10h
    .text : 00000001442E9456 4C 8D 85 60 02 00 00                          lea     r8, [rbp + 260h]; Load Effective Address
    .text:00000001442E945D 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E9461 48 8D 54 24 4C                                lea     rdx, [rsp + 4Ch]; Load Effective Address
    .text:00000001442E9466 8B 08                                         mov     ecx, [rax]
    .text:00000001442E9468 48 8D 05 F9 66 AE 04                          lea     rax, aDelegateproper; Load Effective Address
    .text:00000001442E946F 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E9474 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E9479 89 8E 58 04 01 00                             mov[rsi + 10458h], ecx
    .text : 00000001442E947F 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E9482 66 0F 7F 85 60 02 00 00                       movdqa[rbp + 0D20h + var_AC0], xmm0; Move Aligned Double Quadword
    ...ข้าม
    .text:00000001442E9996 E8 95 81 01 00                                call    sub_144301B30; Call Procedure
    .text:00000001442E999B C7 44 24 38 04 00 00 00                       mov     dword ptr[rsp + 38h], 4
    .text : 00000001442E99A3 4C 8D 85 B0 03 00 00                          lea     r8, [rbp + 3B0h]; Load Effective Address
    .text:00000001442E99AA 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E99AE 48 8D 55 A0                                   lea     rdx, [rbp - 60h]; Load Effective Address
    .text:00000001442E99B2 8B 08                                         mov     ecx, [rax]
    .text:00000001442E99B4 48 8D 05 29 63 AE 04                          lea     rax, aCore_0; Load Effective Address
    .text:00000001442E99BB 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E99C0 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E99C5 89 8E B4 04 01 00                             mov[rsi + 104B4h], ecx
    .text : 00000001442E99CB 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E99CE 66 0F 7F 85 B0 03 00 00                       movdqa  xmmword ptr[rbp + 3B0h], xmm0; Move Aligned Double Quadword
    .text:00000001442E99D6 E8 55 81 01 00                                call    sub_144301B30; Call Procedure
    .text:00000001442E99DB C7 44 24 38 06 00 00 00                       mov     dword ptr[rsp + 38h], 6
    .text : 00000001442E99E3 4C 8D 85 C0 03 00 00                          lea     r8, [rbp + 3C0h]; Load Effective Address
    .text:00000001442E99EA 88 5C 24 3C                                   mov[rsp + 3Ch], bl
    .text : 00000001442E99EE 48 8D 55 A4                                   lea     rdx, [rbp - 5Ch]; Load Effective Address
    .text:00000001442E99F2 8B 08                                         mov     ecx, [rax]
    .text:00000001442E99F4 48 8D 05 75 8D 71 03                          lea     rax, aEngine_1; Load Effective Address
    .text:00000001442E99FB 48 89 44 24 30                                mov[rsp + 30h], rax
    .text : 00000001442E9A00 0F 28 44 24 30                                movaps  xmm0, xmmword ptr[rsp + 30h]; Move Aligned Four Packed Single - FP
    .text:00000001442E9A05 89 8E B8 04 01 00                             mov[rsi + 104B8h], ecx
    .text : 00000001442E9A0B 48 8B CE                                      mov     rcx, rsi
    .text : 00000001442E9A0E 66 0F 7F 85 C0 03 00 00                       movdqa  xmmword ptr[rbp + 3C0h], xmm0; Move Aligned Double Quadword


    #pragma endregion

#pragma endregion 


 
#pragma region Fun_Gname_all_asm
__int64 sub_1442F3420()
{
    int v1; // eax
    int v2; // r12d
    __int64 v3; // rax
    __int64 v4; // rbx
    __int64 v5; // rax
    __int64 v6; // rdx
    __int64 v7; // rcx
    __int64 v8; // rax
    __int64 v9; // rbx
    __int64 v10; // rax
    __int64 v11; // rsi
    __int64 v12; // rax
    __int64 v13; // rdi
    __int64 v14; // rax
    __int64 v15; // rdx
    __int64 v16; // rcx
    __int64 v17; // rcx
    __int64 v18; // rcx
    int v19; // r8d
    __int64 v20; // rdi
    __int64 v21; // rsi
    __int64 v22; // rsi
    unsigned int v23; // edi
    __int64 v24; // rax
    char* v25; // rbx
    int v26; // ebx
    __int64 v27; // rbx
    _BYTE* v28; // rax
    char v29; // r15
    char v30; // r14
    int v31; // ebx
    int v32; // edi
    __int64 v33; // rax
    char* v34; // r9
    unsigned int v35; // ecx
    __int64 v36; // rcx
    int v37; // ecx
    unsigned int v38; // esi
    unsigned __int64 v39; // rdi
    __int64 v40; // rbx
    __int64 v41; // rax
    unsigned int v42; // ebx
    __int64 v43; // rax
    char v44[4]; // [rsp+50h] [rbp-B0h] BYREF
    int v45; // [rsp+54h] [rbp-ACh] BYREF
    __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
    __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
    int v48; // [rsp+68h] [rbp-98h] BYREF
    __int64 v49; // [rsp+70h] [rbp-90h] BYREF
    __int64 v50; // [rsp+78h] [rbp-88h] BYREF
    __int128 v51; // [rsp+80h] [rbp-80h]
    __int128 v52; // [rsp+90h] [rbp-70h]
    __int128 v53; // [rsp+A0h] [rbp-60h] BYREF
    __int128 v54; // [rsp+B0h] [rbp-50h]
    __int64 v55; // [rsp+C0h] [rbp-40h]
    __int64 v56; // [rsp+C8h] [rbp-38h] BYREF
    _BYTE v57[40]; // [rsp+D0h] [rbp-30h]
    unsigned __int64 v58; // [rsp+108h] [rbp+8h]
    __int64 v59; // [rsp+120h] [rbp+20h] BYREF
    __int64 v60; // [rsp+128h] [rbp+28h]
    char v61[16]; // [rsp+130h] [rbp+30h] BYREF
    __int64 v62; // [rsp+140h] [rbp+40h] BYREF
    int v63; // [rsp+148h] [rbp+48h]
    int v64; // [rsp+14Ch] [rbp+4Ch]
    int v65; // [rsp+150h] [rbp+50h]
    int v66; // [rsp+154h] [rbp+54h]
    char v67; // [rsp+158h] [rbp+58h] BYREF
    __int64 v68; // [rsp+160h] [rbp+60h] BYREF
    int v69; // [rsp+168h] [rbp+68h]

    if (dword_14A434478 >= 0)
        return (unsigned int)dword_14A434478;
    dword_14A434478 = 0;
    v45 = MEMORY[0x7FFA1FF4AF70](0LL, 0LL);
    if (v45 < 0)
    {
        if ((unsigned __int8)byte_14A425310 >= 3u && (unsigned __int8)byte_14A8DE2B8 >= 3u)
            ((void (*)(char*, char*, const wchar_t*, ...))qword_1442E5C70[0])(
                v44,
                &byte_14A8DE2B8,
                L"GetMemoryChannel Step 0, HR %d",
                "FWindowsPlatformMisc::GetMemoryChannel",
                &v45);
        return (unsigned int)dword_14A434478;
    }
    v1 = MEMORY[0x7FFA1FF91220](0LL, 0xFFFFFFFFLL, 0LL);
    v45 = v1;
    if ((int)(v1 + 0x80000000) >= 0 && v1 != 0x80010119)
    {
        if ((unsigned __int8)byte_14A425310 >= 3u && (unsigned __int8)byte_14A8DE2B8 >= 3u)
        {
            sub_1442E5A20(
                (unsigned int)v44,
                (unsigned int)&byte_14A8DE2B8,
                (unsigned int)L"GetMemoryChannel Step 1, HR %d",
                (unsigned int)"FWindowsPlatformMisc::GetMemoryChannel",
                (__int64)&v45,
                3,
                0,
                0,
                0);
            MEMORY[0x7FFA1FF4B7E0]();
            return (unsigned int)dword_14A434478;
        }
        goto LABEL_16;
    }
    v47 = 0LL;
    v2 = 1;
    v45 = MEMORY[0x7FFA18B081D0](&unk_149AB6A30, 0LL, 1LL, &unk_149AB6A20, &v47);
    if (v45 < 0)
    {
        if ((unsigned __int8)byte_14A425310 >= 3u && (unsigned __int8)byte_14A8DE2B8 >= 3u)
            sub_1442E5EC0(
                v44,
                &byte_14A8DE2B8,
                L"GetMemoryChannel Step 2, HR %d",
                "FWindowsPlatformMisc::GetMemoryChannel",
                &v45);
    LABEL_16:
        MEMORY[0x7FFA1FF4B7E0]();
        return (unsigned int)dword_14A434478;
    }
    v46 = 0LL;
    v3 = sub_144020460(0x18LL);
    v4 = v3;
    if (!v3)
        goto LABEL_90;
    *(_QWORD*)(v3 + 8) = 0LL;
    *(_DWORD*)(v3 + 0x10) = 1;
    v5 = MEMORY[0x32AAC0D3](L"ROOT\\CIMV2");
    *(_QWORD*)v4 = v5;
    if (!v5)
        goto LABEL_90;
    v45 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(*(_QWORD*)v47 + 0x18LL))(
        v47,
        *(_QWORD*)v4,
        0LL,
        0LL,
        0LL,
        0,
        0LL,
        0LL);
    if (_InterlockedExchangeAdd((volatile signed __int32*)(v4 + 0x10), 0xFFFFFFFF) == 1)
    {
        if (*(_QWORD*)v4)
        {
            MEMORY[0x32AABF13]();
            *(_QWORD*)v4 = 0LL;
        }
        v7 = *(_QWORD*)(v4 + 8);
        if (v7)
        {
            sub_141F89600(v7, v6);
            *(_QWORD*)(v4 + 8) = 0LL;
        }
        sub_141F89600(v4, 0x18LL);
    }
    if (v45 < 0)
    {
        if ((unsigned __int8)byte_14A425310 >= 3u && (unsigned __int8)byte_14A8DE2B8 >= 3u)
            ((void (*)(char*, char*, const wchar_t*, ...))loc_1442E57D0)(
                v44,
                &byte_14A8DE2B8,
                L"GetMemoryChannel Step 3, HR %d",
                "FWindowsPlatformMisc::GetMemoryChannel",
                &v45);
        goto LABEL_34;
    }
    v45 = MEMORY[0x7FFA1FF1D470](v46, 0xALL, 0LL);
    if (v45 < 0)
    {
        if ((unsigned __int8)byte_14A425310 >= 3u && (unsigned __int8)byte_14A8DE2B8 >= 3u)
            sub_1442E5330(
                (unsigned int)v44,
                (unsigned int)&byte_14A8DE2B8,
                (unsigned int)L"GetMemoryChannel Step 4, HR %d",
                (unsigned int)"FWindowsPlatformMisc::GetMemoryChannel",
                (unsigned int)&v45,
                3,
                0,
                0,
                (unsigned int)&v46);
    LABEL_33:
        (*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 0x10LL))(v46);
    LABEL_34:
        (*(void(__fastcall**)(__int64))(*(_QWORD*)v47 + 0x10LL))(v47);
        MEMORY[0x7FFA1FF4B7E0]();
        return (unsigned int)dword_14A434478;
    }
    v50 = 0LL;
    v8 = sub_144020460(0x18LL);
    v9 = v8;
    if (!v8
        || (*(_QWORD*)(v8 + 8) = 0LL,
            *(_DWORD*)(v8 + 0x10) = 1,
            v10 = sub_14766A910("SELECT * FROM Win32_PhysicalMemory"),
            *(_QWORD*)v9 = v10,
            v11 = v10,
            v12 = sub_144020460(0x18LL),
            (v13 = v12) == 0))
    {
    LABEL_90:
        sub_14766A900(0x8007000ELL);
        JUMPOUT(0x1442F3CA3LL);
    }
    *(_QWORD*)(v12 + 8) = 0LL;
    *(_DWORD*)(v12 + 0x10) = 1;
    v14 = sub_14766A910(&unk_14827ACBC);
    *(_QWORD*)v13 = v14;
    v45 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, __int64*))(*(_QWORD*)v46 + 0xA0LL))(
        v46,
        v14,
        v11,
        0x30LL,
        0LL,
        &v50);
    if (_InterlockedExchangeAdd((volatile signed __int32*)(v13 + 0x10), 0xFFFFFFFF) == 1)
    {
        if (*(_QWORD*)v13)
        {
            MEMORY[0x32AABF13]();
            *(_QWORD*)v13 = 0LL;
        }
        v16 = *(_QWORD*)(v13 + 8);
        if (v16)
        {
            sub_141F89600(v16, v15);
            *(_QWORD*)(v13 + 8) = 0LL;
        }
        sub_141F89600(v13, 0x18LL);
    }
    if (_InterlockedExchangeAdd((volatile signed __int32*)(v9 + 0x10), 0xFFFFFFFF) == 1)
    {
        if (*(_QWORD*)v9)
        {
            MEMORY[0x32AABF13]();
            *(_QWORD*)v9 = 0LL;
        }
        v17 = *(_QWORD*)(v9 + 8);
        if (v17)
        {
            sub_141F89600(v17, v15);
            *(_QWORD*)(v9 + 8) = 0LL;
        }
        sub_141F89600(v9, 0x18LL);
    }
    if (v45 < 0)
    {
        if ((unsigned __int8)byte_14A425310 >= 3u && (unsigned __int8)byte_14A8DE2B8 >= 3u)
            sub_1442E5580(
                v44,
                &byte_14A8DE2B8,
                L"GetMemoryChannel Step 5, HR %d",
                "FWindowsPlatformMisc::GetMemoryChannel",
                &v45);
        goto LABEL_33;
    }
    v18 = v50;
    v19 = 0;
    v59 = 0LL;
    v60 = 0LL;
    v62 = 0LL;
    v63 = 0;
    v64 = 0x80;
    v65 = 0xFFFFFFFF;
    v66 = 0;
    v68 = 0LL;
    v69 = 0;
    v49 = 0LL;
    v48 = 0;
    if (v50)
    {
        do
        {
            (*(void(__fastcall**)(__int64, __int64, __int64, __int64*, int*))(*(_QWORD*)v18 + 0x20LL))(
                v18,
                0xFFFFFFFFLL,
                1LL,
                &v49,
                &v48);
            if (!v48)
                break;
            MEMORY[0x32AAC3F3](&v53);
            (*(void(__fastcall**)(__int64, const wchar_t*, _QWORD, __int128*, _QWORD, _QWORD))(*(_QWORD*)v49 + 0x20LL))(
                v49,
                L"Capacity",
                0LL,
                &v53,
                0LL,
                0LL);
            v20 = *((_QWORD*)&v53 + 1);
            MEMORY[0x32AAC1F3](&v53);
            (*(void(__fastcall**)(__int64, const wchar_t*, _QWORD, __int128*, _QWORD, _QWORD))(*(_QWORD*)v49 + 0x20LL))(
                v49,
                L"Speed",
                0LL,
                &v53,
                0LL,
                0LL);
            v21 = DWORD2(v53);
            MEMORY[0x32AAC1F3](&v53);
            v22 = v20 ^ v21;
            v56 = v22;
            v23 = v22 + 0x17 * HIDWORD(v22);
            if ((_DWORD)v60 == v66)
                goto LABEL_61;
            v24 = qword_14A426370(&v68);
            v25 = &v67;
            if (v24)
                v25 = (char*)v24;
            v26 = *(_DWORD*)&v25[4 * ((int)v23 & (unsigned __int64)(v69 - 1))];
            if (v26 == 0xFFFFFFFF)
                goto LABEL_61;
            while (1)
            {
                v27 = 0x18LL * v26;
                if (*(_QWORD*)(qword_14A426370(&v59) + v27) == v22)
                    break;
                v26 = *(_DWORD*)(v27 + qword_14A426370(&v59) + 0x10);
                if (v26 == 0xFFFFFFFF)
                    goto LABEL_61;
            }
            v41 = v27 + qword_14A426370(&v59);
            if (!v41)
                LABEL_61:
            v28 = (_BYTE*)sub_1442E7B50(&v59, v23, &v56);
            else
                v28 = (_BYTE*)(v41 + 8);
            ++*v28;
            (*(void(__fastcall**)(__int64))(*(_QWORD*)v49 + 0x10LL))(v49);
            v18 = v50;
        } while (v50);
        v19 = v63;
    }
    v29 = 0;
    v30 = 0;
    *(_QWORD*)((char*)&v52 + 4) = 0LL;
    v31 = 0;
    *(_QWORD*)&v51 = 0x100000000LL;
    *((_QWORD*)&v51 + 1) = v61;
    v32 = 0;
    LODWORD(v52) = 0xFFFFFFFF;
    if (v19)
    {
        v33 = qword_14A426370(&v62);
        v19 = v63;
        v34 = v61;
        if (v33)
            v34 = (char*)v33;
        v35 = *(_DWORD*)v34;
        if (*(_DWORD*)v34)
        {
        LABEL_70:
            v36 = -v35 & v35;
            DWORD1(v51) = v36;
            _BitScanReverse64((unsigned __int64*)&v36, (2 * v36) | 1);
            v37 = v32 + v36 - 1;
            if (v37 > v63)
                v37 = v63;
            DWORD1(v52) = v37;
        }
        else
        {
            while (1)
            {
                ++v31;
                v32 += 0x20;
                LODWORD(v51) = v31;
                DWORD2(v52) = v32;
                if (v31 > (v63 - 1) / 0x20)
                    break;
                LODWORD(v52) = 0xFFFFFFFF;
                v35 = *(_DWORD*)&v34[4 * v31];
                if (v35)
                    goto LABEL_70;
            }
            DWORD1(v52) = v63;
        }
    }
    *(_QWORD*)v57 = &v59;
    v38 = 0xFFFFFFFF << (v19 & 0x1F);
    *(_OWORD*)&v57[8] = v51;
    v58 = __PAIR64__(v19, v38);
    *(_OWORD*)&v57[0x18] = v52;
    v39 = __PAIR64__(v19, v38) >> 0x20;
    v53 = *(_OWORD*)v57;
    v54 = *(_OWORD*)&v57[0x10];
    v55 = *(_OWORD*)&_mm_unpackhi_pd(*(__m128d*) & v57[0x18], *(__m128d*) & v57[0x18]);
    while (1)
    {
        v40 = SHIDWORD(v54);
        if (HIDWORD(v54) == (_DWORD)v39 && (char*)v54 == v61 && (__int64*)v53 == &v59)
            break;
        if (*(_BYTE*)(qword_14A426370(v53) + 0x18 * v40 + 8) == 1)
            v30 = 1;
        else
            v29 = 1;
        DWORD2(v54) &= ~HIDWORD(v53);
        sub_140B6BA10((char*)&v53 + 8);
    }
    if (v29 && !v30)
        v2 = 2;
    dword_14A434478 = v2;
    (*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 0x10LL))(v46);
    (*(void(__fastcall**)(__int64))(*(_QWORD*)v47 + 0x10LL))(v47);
    (*(void(__fastcall**)(__int64))(*(_QWORD*)v50 + 0x10LL))(v50);
    MEMORY[0x7FFA1FF4B7E0]();
    v42 = dword_14A434478;
    v69 = 0;
    if (qword_14A426370(&v68))
    {
        v43 = qword_14A426370(&v68);
        sub_1441AFDF0(v43);
    }
    sub_140B97C50(&v59);
    return v42;
}
#pragma endregion
//.text:00000001442F3CE0 E9 CB 8A E7 FF                                jmp     sub_14416C7B0   ; Jump
#pragma region sub_14416C7B0
    .text:000000014416C7B0; ============== = S U B R O U T I N E ====================================== =
    .text:000000014416C7B0
    .text : 000000014416C7B0
    .text : 000000014416C7B0                               sub_14416C7B0   proc near; CODE XREF : .text : 00000001442F3CE0↓j
    .text : 000000014416C7B0 48 8D 05 09 88 C3 04                          lea     rax, unk_148DA4FC0; Load Effective Address
    .text:000000014416C7B7 C3                                            retn; Return Near from Procedure
    .text:000000014416C7B7                               sub_14416C7B0   endp
    .text : 000000014416C7B7
    .text : 000000014416C7B7; -------------------------------------------------------------------------- -
    .text:000000014416C7B8 CC CC CC CC CC CC CC CC                       align 20h
    .text : 000000014416C7C0
#pragma endregion


#pragma region BYTE_ALL


.text:00000001442F3420
.text:00000001442F3420                               ; =============== S U B R O U T I N E =======================================
.text:00000001442F3420
.text:00000001442F3420                               ; Attributes: bp-based frame fpd=0A0h
.text:00000001442F3420
.text:00000001442F3420                               sub_1442F3420   proc near               ; CODE XREF: sub_140B72500+EF↑p
.text:00000001442F3420                                                                       ; sub_141E5AE30+C28↑p ...
.text:00000001442F3420
.text:00000001442F3420                               var_180         = qword ptr -180h
.text:00000001442F3420                               var_178         = qword ptr -178h
.text:00000001442F3420                               var_170         = qword ptr -170h
.text:00000001442F3420                               var_168         = qword ptr -168h
.text:00000001442F3420                               var_160         = qword ptr -160h
.text:00000001442F3420                               var_150         = byte ptr -150h
.text:00000001442F3420                               var_14C         = dword ptr -14Ch
.text:00000001442F3420                               var_148         = qword ptr -148h
.text:00000001442F3420                               var_140         = qword ptr -140h
.text:00000001442F3420                               var_138         = dword ptr -138h
.text:00000001442F3420                               var_130         = qword ptr -130h
.text:00000001442F3420                               var_128         = qword ptr -128h
.text:00000001442F3420                               var_120         = xmmword ptr -120h
.text:00000001442F3420                               var_110         = xmmword ptr -110h
.text:00000001442F3420                               var_100         = xmmword ptr -100h
.text:00000001442F3420                               var_F0          = xmmword ptr -0F0h
.text:00000001442F3420                               var_E0          = qword ptr -0E0h
.text:00000001442F3420                               var_D8          = qword ptr -0D8h
.text:00000001442F3420                               var_D0          = xmmword ptr -0D0h
.text:00000001442F3420                               var_B8          = xmmword ptr -0B8h
.text:00000001442F3420                               var_98          = qword ptr -98h
.text:00000001442F3420                               var_80          = qword ptr -80h
.text:00000001442F3420                               var_78          = qword ptr -78h
.text:00000001442F3420                               var_70          = byte ptr -70h
.text:00000001442F3420                               var_60          = qword ptr -60h
.text:00000001442F3420                               var_58          = dword ptr -58h
.text:00000001442F3420                               var_54          = dword ptr -54h
.text:00000001442F3420                               var_50          = dword ptr -50h
.text:00000001442F3420                               var_4C          = dword ptr -4Ch
.text:00000001442F3420                               var_48          = byte ptr -48h
.text:00000001442F3420                               var_40          = qword ptr -40h
.text:00000001442F3420                               var_38          = dword ptr -38h
.text:00000001442F3420                               var_30          = qword ptr -30h
.text:00000001442F3420                               var_20          = qword ptr -20h
.text:00000001442F3420                               var_18          = qword ptr -18h
.text:00000001442F3420                               var_10          = qword ptr -10h
.text:00000001442F3420                               arg_0           = qword ptr  10h
.text:00000001442F3420                               arg_8           = qword ptr  18h
.text:00000001442F3420                               arg_10          = qword ptr  20h
.text:00000001442F3420
.text:00000001442F3420 40 55                                         push    rbp
.text:00000001442F3422 41 55                                         push    r13
.text:00000001442F3424 48 8D AC 24 68 FF FF FF                       lea     rbp, [rsp-98h]  ; Load Effective Address
.text:00000001442F342C 48 81 EC 98 01 00 00                          sub     rsp, 198h       ; Integer Subtraction
.text:00000001442F3433 48 8B 05 06 B6 37 06                          mov     rax, cs:qword_14A66EA40
.text:00000001442F343A 48 33 C4                                      xor     rax, rsp        ; Logical Exclusive OR
.text:00000001442F343D 48 89 45 70                                   mov     [rbp+70h], rax
.text:00000001442F3441 83 3D 30 10 14 06 00                          cmp     cs:dword_14A434478, 0 ; Compare Two Operands
.text:00000001442F3448 7D 57                                         jge     short loc_1442F34A1 ; Jump if Greater or Equal (SF=OF)
.text:00000001442F344A 45 33 ED                                      xor     r13d, r13d      ; Logical Exclusive OR
.text:00000001442F344D 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.text:00000001442F344F 33 C9                                         xor     ecx, ecx        ; Logical Exclusive OR
.text:00000001442F3451 44 89 2D 20 10 14 06                          mov     cs:dword_14A434478, r13d
.text:00000001442F3458 FF 15 2A E4 62 03                             call    cs:qword_147921888 ; Indirect Call Near Procedure
.text:00000001442F345E 89 44 24 54                                   mov     [rsp+54h], eax
.text:00000001442F3462 85 C0                                         test    eax, eax        ; Logical Compare
.text:00000001442F3464 79 46                                         jns     short loc_1442F34AC ; Jump if Not Sign (SF=0)
.text:00000001442F3466 80 3D A3 1E 13 06 03                          cmp     cs:byte_14A425310, 3 ; Compare Two Operands
.text:00000001442F346D 72 32                                         jb      short loc_1442F34A1 ; Jump if Below (CF=1)
.text:00000001442F346F 80 3D 42 AE 5E 06 03                          cmp     cs:byte_14A8DE2B8, 3 ; Compare Two Operands
.text:00000001442F3476 72 29                                         jb      short loc_1442F34A1 ; Jump if Below (CF=1)
.text:00000001442F3478 48 8D 44 24 54                                lea     rax, [rsp+54h]  ; Load Effective Address
.text:00000001442F347D 4C 8D 0D B4 FC AD 04                          lea     r9, aFwindowsplatfo_8 ; Load Effective Address
.text:00000001442F3484 48 89 44 24 20                                mov     [rsp+20h], rax
.text:00000001442F3489 4C 8D 05 D0 FC AD 04                          lea     r8, aGetmemorychann ; Load Effective Address
.text:00000001442F3490 48 8D 15 21 AE 5E 06                          lea     rdx, byte_14A8DE2B8 ; Load Effective Address
.text:00000001442F3497 48 8D 4C 24 50                                lea     rcx, [rsp+50h]  ; Load Effective Address
.text:00000001442F349C E8 CF 27 FF FF                                call    near ptr qword_1442E5C70 ; Call Procedure
.text:00000001442F34A1
.text:00000001442F34A1                               loc_1442F34A1:                          ; CODE XREF: sub_1442F3420+28↑j
.text:00000001442F34A1                                                                       ; sub_1442F3420+4D↑j ...
.text:00000001442F34A1 8B 05 D1 0F 14 06                             mov     eax, cs:dword_14A434478
.text:00000001442F34A7 E9 F3 02 00 00                                jmp     loc_1442F379F   ; Jump
.text:00000001442F34AC                               ; ---------------------------------------------------------------------------
.text:00000001442F34AC
.text:00000001442F34AC                               loc_1442F34AC:                          ; CODE XREF: sub_1442F3420+44↑j
.text:00000001442F34AC 4C 89 6C 24 40                                mov     [rsp+40h], r13
.text:00000001442F34B1 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.text:00000001442F34B4 44 89 6C 24 38                                mov     [rsp+38h], r13d
.text:00000001442F34B9 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.text:00000001442F34BC 4C 89 6C 24 30                                mov     [rsp+30h], r13
.text:00000001442F34C1 33 C9                                         xor     ecx, ecx        ; Logical Exclusive OR
.text:00000001442F34C3 C7 44 24 28 03 00 00 00                       mov     dword ptr [rsp+28h], 3
.text:00000001442F34CB 41 8D 51 FF                                   lea     edx, [r9-1]     ; Load Effective Address
.text:00000001442F34CF 4C 89 A4 24 90 01 00 00                       mov     [rsp+190h], r12
.text:00000001442F34D7 44 89 6C 24 20                                mov     [rsp+20h], r13d
.text:00000001442F34DC FF 15 AE E3 62 03                             call    cs:qword_147921890 ; Indirect Call Near Procedure
.text:00000001442F34E2 BA 00 00 00 80                                mov     edx, 80000000h
.text:00000001442F34E7 89 44 24 54                                   mov     [rsp+54h], eax
.text:00000001442F34EB 8D 0C 10                                      lea     ecx, [rax+rdx]  ; Load Effective Address
.text:00000001442F34EE 85 CA                                         test    edx, ecx        ; Logical Compare
.text:00000001442F34F0 75 5B                                         jnz     short loc_1442F354D ; Jump if Not Zero (ZF=0)
.text:00000001442F34F2 3D 19 01 01 80                                cmp     eax, 80010119h  ; Compare Two Operands
.text:00000001442F34F7 74 54                                         jz      short loc_1442F354D ; Jump if Zero (ZF=1)
.text:00000001442F34F9 80 3D 10 1E 13 06 03                          cmp     cs:byte_14A425310, 3 ; Compare Two Operands
.text:00000001442F3500 0F 82 B8 00 00 00                             jb      loc_1442F35BE   ; Jump if Below (CF=1)
.text:00000001442F3506 80 3D AB AD 5E 06 03                          cmp     cs:byte_14A8DE2B8, 3 ; Compare Two Operands
.text:00000001442F350D 0F 82 AB 00 00 00                             jb      loc_1442F35BE   ; Jump if Below (CF=1)
.text:00000001442F3513 48 8D 44 24 54                                lea     rax, [rsp+54h]  ; Load Effective Address
.text:00000001442F3518 4C 8D 0D 19 FC AD 04                          lea     r9, aFwindowsplatfo_8 ; Load Effective Address
.text:00000001442F351F 48 89 44 24 20                                mov     [rsp+20h], rax
.text:00000001442F3524 4C 8D 05 75 FC AD 04                          lea     r8, aGetmemorychann_0 ; Load Effective Address
.text:00000001442F352B 48 8D 15 86 AD 5E 06                          lea     rdx, byte_14A8DE2B8 ; Load Effective Address
.text:00000001442F3532 48 8D 4C 24 50                                lea     rcx, [rsp+50h]  ; Load Effective Address
.text:00000001442F3537 E8 E4 24 FF FF                                call    sub_1442E5A20   ; Call Procedure
.text:00000001442F353C FF 15 7E E3 62 03                             call    cs:qword_1479218C0 ; Indirect Call Near Procedure
.text:00000001442F3542 8B 05 30 0F 14 06                             mov     eax, cs:dword_14A434478
.text:00000001442F3548 E9 4A 02 00 00                                jmp     loc_1442F3797   ; Jump
.text:00000001442F354D                               ; ---------------------------------------------------------------------------
.text:00000001442F354D
.text:00000001442F354D                               loc_1442F354D:                          ; CODE XREF: sub_1442F3420+D0↑j
.text:00000001442F354D                                                                       ; sub_1442F3420+D7↑j
.text:00000001442F354D 48 8D 44 24 60                                lea     rax, [rsp+60h]  ; Load Effective Address
.text:00000001442F3552 4C 89 6C 24 60                                mov     [rsp+60h], r13
.text:00000001442F3557 41 BC 01 00 00 00                             mov     r12d, 1
.text:00000001442F355D 48 89 44 24 20                                mov     [rsp+20h], rax
.text:00000001442F3562 45 8B C4                                      mov     r8d, r12d
.text:00000001442F3565 4C 8D 0D B4 34 7C 05                          lea     r9, unk_149AB6A20 ; Load Effective Address
.text:00000001442F356C 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.text:00000001442F356E 48 8D 0D BB 34 7C 05                          lea     rcx, unk_149AB6A30 ; Load Effective Address
.text:00000001442F3575 FF 15 05 E3 62 03                             call    cs:qword_147921880 ; Indirect Call Near Procedure
.text:00000001442F357B 89 44 24 54                                   mov     [rsp+54h], eax
.text:00000001442F357F 85 C0                                         test    eax, eax        ; Logical Compare
.text:00000001442F3581 79 4C                                         jns     short loc_1442F35CF ; Jump if Not Sign (SF=0)
.text:00000001442F3583 80 3D 86 1D 13 06 03                          cmp     cs:byte_14A425310, 3 ; Compare Two Operands
.text:00000001442F358A 72 32                                         jb      short loc_1442F35BE ; Jump if Below (CF=1)
.text:00000001442F358C 80 3D 25 AD 5E 06 03                          cmp     cs:byte_14A8DE2B8, 3 ; Compare Two Operands
.text:00000001442F3593 72 29                                         jb      short loc_1442F35BE ; Jump if Below (CF=1)
.text:00000001442F3595 48 8D 44 24 54                                lea     rax, [rsp+54h]  ; Load Effective Address
.text:00000001442F359A 4C 8D 0D 97 FB AD 04                          lea     r9, aFwindowsplatfo_8 ; Load Effective Address
.text:00000001442F35A1 48 89 44 24 20                                mov     [rsp+20h], rax
.text:00000001442F35A6 4C 8D 05 33 FC AD 04                          lea     r8, aGetmemorychann_1 ; Load Effective Address
.text:00000001442F35AD 48 8D 15 04 AD 5E 06                          lea     rdx, byte_14A8DE2B8 ; Load Effective Address
.text:00000001442F35B4 48 8D 4C 24 50                                lea     rcx, [rsp+50h]  ; Load Effective Address
.text:00000001442F35B9 E8 02 29 FF FF                                call    sub_1442E5EC0   ; Call Procedure
.text:00000001442F35BE
.text:00000001442F35BE                               loc_1442F35BE:                          ; CODE XREF: sub_1442F3420+E0↑j
.text:00000001442F35BE                                                                       ; sub_1442F3420+ED↑j ...
.text:00000001442F35BE FF 15 FC E2 62 03                             call    cs:qword_1479218C0 ; Indirect Call Near Procedure
.text:00000001442F35C4 8B 05 AE 0E 14 06                             mov     eax, cs:dword_14A434478
.text:00000001442F35CA E9 C8 01 00 00                                jmp     loc_1442F3797   ; Jump
.text:00000001442F35CF                               ; ---------------------------------------------------------------------------
.text:00000001442F35CF
.text:00000001442F35CF                               loc_1442F35CF:                          ; CODE XREF: sub_1442F3420+161↑j
.text:00000001442F35CF 48 89 9C 24 B0 01 00 00                       mov     [rsp+1B0h], rbx
.text:00000001442F35D7 B9 18 00 00 00                                mov     ecx, 18h
.text:00000001442F35DC 48 89 B4 24 B8 01 00 00                       mov     [rsp+1B8h], rsi
.text:00000001442F35E4 48 89 BC 24 C0 01 00 00                       mov     [rsp+1C0h], rdi
.text:00000001442F35EC 4C 89 6C 24 58                                mov     [rsp+58h], r13
.text:00000001442F35F1 E8 6A CE D2 FF                                call    sub_144020460   ; Call Procedure
.text:00000001442F35F6 48 8B D8                                      mov     rbx, rax
.text:00000001442F35F9 48 85 C0                                      test    rax, rax        ; Logical Compare
.text:00000001442F35FC 0F 84 97 06 00 00                             jz      loc_1442F3C99   ; Jump if Zero (ZF=1)
.text:00000001442F3602 48 8D 0D AF 75 F8 03                          lea     rcx, aRootCimv2 ; Load Effective Address
.text:00000001442F3609 4C 89 68 08                                   mov     [rax+8], r13
.text:00000001442F360D 44 89 60 10                                   mov     [rax+10h], r12d
.text:00000001442F3611 FF 15 29 D1 62 03                             call    cs:qword_147920740 ; Indirect Call Near Procedure
.text:00000001442F3617 48 89 03                                      mov     [rbx], rax
.text:00000001442F361A 48 85 C0                                      test    rax, rax        ; Logical Compare
.text:00000001442F361D 0F 84 76 06 00 00                             jz      loc_1442F3C99   ; Jump if Zero (ZF=1)
.text:00000001442F3623 48 8B 4C 24 60                                mov     rcx, [rsp+60h]
.text:00000001442F3628 48 8D 54 24 58                                lea     rdx, [rsp+58h]  ; Load Effective Address
.text:00000001442F362D 48 89 54 24 40                                mov     [rsp+40h], rdx
.text:00000001442F3632 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.text:00000001442F3635 48 8B 13                                      mov     rdx, [rbx]
.text:00000001442F3638 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.text:00000001442F363B 4C 89 6C 24 38                                mov     [rsp+38h], r13
.text:00000001442F3640 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F3643 4C 89 6C 24 30                                mov     [rsp+30h], r13
.text:00000001442F3648 44 89 6C 24 28                                mov     [rsp+28h], r13d
.text:00000001442F364D 4C 89 6C 24 20                                mov     [rsp+20h], r13
.text:00000001442F3652 FF 50 18                                      call    qword ptr [rax+18h] ; Indirect Call Near Procedure
.text:00000001442F3655 89 44 24 54                                   mov     [rsp+54h], eax
.text:00000001442F3659 B8 FF FF FF FF                                mov     eax, 0FFFFFFFFh
.text:00000001442F365E F0 0F C1 43 10                                lock xadd [rbx+10h], eax ; t<-dest; dest<-src+dest; src<-t
.text:00000001442F3663 41 3B C4                                      cmp     eax, r12d       ; Compare Two Operands
.text:00000001442F3666 75 30                                         jnz     short loc_1442F3698 ; Jump if Not Zero (ZF=0)
.text:00000001442F3668 48 8B 0B                                      mov     rcx, [rbx]
.text:00000001442F366B 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.text:00000001442F366E 74 09                                         jz      short loc_1442F3679 ; Jump if Zero (ZF=1)
.text:00000001442F3670 FF 15 C2 D0 62 03                             call    cs:qword_147920738 ; Indirect Call Near Procedure
.text:00000001442F3676 4C 89 2B                                      mov     [rbx], r13
.text:00000001442F3679
.text:00000001442F3679                               loc_1442F3679:                          ; CODE XREF: sub_1442F3420+24E↑j
.text:00000001442F3679 48 8B 4B 08                                   mov     rcx, [rbx+8]
.text:00000001442F367D 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.text:00000001442F3680 74 09                                         jz      short loc_1442F368B ; Jump if Zero (ZF=1)
.text:00000001442F3682 E8 79 5F C9 FD                                call    sub_141F89600   ; Call Procedure
.text:00000001442F3687 4C 89 6B 08                                   mov     [rbx+8], r13
.text:00000001442F368B
.text:00000001442F368B                               loc_1442F368B:                          ; CODE XREF: sub_1442F3420+260↑j
.text:00000001442F368B BA 18 00 00 00                                mov     edx, 18h
.text:00000001442F3690 48 8B CB                                      mov     rcx, rbx
.text:00000001442F3693 E8 68 5F C9 FD                                call    sub_141F89600   ; Call Procedure
.text:00000001442F3698
.text:00000001442F3698                               loc_1442F3698:                          ; CODE XREF: sub_1442F3420+246↑j
.text:00000001442F3698 44 39 6C 24 54                                cmp     [rsp+54h], r13d ; Compare Two Operands
.text:00000001442F369D 7D 48                                         jge     short loc_1442F36E7 ; Jump if Greater or Equal (SF=OF)
.text:00000001442F369F 80 3D 6A 1C 13 06 03                          cmp     cs:byte_14A425310, 3 ; Compare Two Operands
.text:00000001442F36A6 0F 82 BC 00 00 00                             jb      loc_1442F3768   ; Jump if Below (CF=1)
.text:00000001442F36AC 80 3D 05 AC 5E 06 03                          cmp     cs:byte_14A8DE2B8, 3 ; Compare Two Operands
.text:00000001442F36B3 0F 82 AF 00 00 00                             jb      loc_1442F3768   ; Jump if Below (CF=1)
.text:00000001442F36B9 48 8D 44 24 54                                lea     rax, [rsp+54h]  ; Load Effective Address
.text:00000001442F36BE 4C 8D 0D 73 FA AD 04                          lea     r9, aFwindowsplatfo_8 ; Load Effective Address
.text:00000001442F36C5 48 89 44 24 20                                mov     [rsp+20h], rax
.text:00000001442F36CA 4C 8D 05 4F FB AD 04                          lea     r8, aGetmemorychann_2 ; Load Effective Address
.text:00000001442F36D1 48 8D 15 E0 AB 5E 06                          lea     rdx, byte_14A8DE2B8 ; Load Effective Address
.text:00000001442F36D8 48 8D 4C 24 50                                lea     rcx, [rsp+50h]  ; Load Effective Address
.text:00000001442F36DD E8 EE 20 FF FF                                call    loc_1442E57D0   ; Call Procedure
.text:00000001442F36E2 E9 81 00 00 00                                jmp     loc_1442F3768   ; Jump
.text:00000001442F36E7                               ; ---------------------------------------------------------------------------
.text:00000001442F36E7
.text:00000001442F36E7                               loc_1442F36E7:                          ; CODE XREF: sub_1442F3420+27D↑j
.text:00000001442F36E7 48 8B 4C 24 58                                mov     rcx, [rsp+58h]
.text:00000001442F36EC 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.text:00000001442F36EF 44 89 6C 24 38                                mov     [rsp+38h], r13d
.text:00000001442F36F4 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.text:00000001442F36F7 4C 89 6C 24 30                                mov     [rsp+30h], r13
.text:00000001442F36FC C7 44 24 28 03 00 00 00                       mov     dword ptr [rsp+28h], 3
.text:00000001442F3704 41 8D 51 0A                                   lea     edx, [r9+0Ah]   ; Load Effective Address
.text:00000001442F3708 C7 44 24 20 03 00 00 00                       mov     dword ptr [rsp+20h], 3
.text:00000001442F3710 FF 15 4A E1 62 03                             call    cs:qword_147921860 ; Indirect Call Near Procedure
.text:00000001442F3716 89 44 24 54                                   mov     [rsp+54h], eax
.text:00000001442F371A 85 C0                                         test    eax, eax        ; Logical Compare
.text:00000001442F371C 0F 89 94 00 00 00                             jns     loc_1442F37B6   ; Jump if Not Sign (SF=0)
.text:00000001442F3722 80 3D E7 1B 13 06 03                          cmp     cs:byte_14A425310, 3 ; Compare Two Operands
.text:00000001442F3729 72 32                                         jb      short loc_1442F375D ; Jump if Below (CF=1)
.text:00000001442F372B 80 3D 86 AB 5E 06 03                          cmp     cs:byte_14A8DE2B8, 3 ; Compare Two Operands
.text:00000001442F3732 72 29                                         jb      short loc_1442F375D ; Jump if Below (CF=1)
.text:00000001442F3734 48 8D 44 24 54                                lea     rax, [rsp+54h]  ; Load Effective Address
.text:00000001442F3739 4C 8D 0D F8 F9 AD 04                          lea     r9, aFwindowsplatfo_8 ; Load Effective Address
.text:00000001442F3740 48 89 44 24 20                                mov     [rsp+20h], rax
.text:00000001442F3745 4C 8D 05 14 FB AD 04                          lea     r8, aGetmemorychann_3 ; Load Effective Address
.text:00000001442F374C 48 8D 15 65 AB 5E 06                          lea     rdx, byte_14A8DE2B8 ; Load Effective Address
.text:00000001442F3753 48 8D 4C 24 50                                lea     rcx, [rsp+50h]  ; Load Effective Address
.text:00000001442F3758 E8 D3 1B FF FF                                call    sub_1442E5330   ; Call Procedure
.text:00000001442F375D
.text:00000001442F375D                               loc_1442F375D:                          ; CODE XREF: sub_1442F3420+309↑j
.text:00000001442F375D                                                                       ; sub_1442F3420+312↑j ...
.text:00000001442F375D 48 8B 4C 24 58                                mov     rcx, [rsp+58h]
.text:00000001442F3762 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F3765 FF 50 10                                      call    qword ptr [rax+10h] ; Indirect Call Near Procedure
.text:00000001442F3768
.text:00000001442F3768                               loc_1442F3768:                          ; CODE XREF: sub_1442F3420+286↑j
.text:00000001442F3768                                                                       ; sub_1442F3420+293↑j ...
.text:00000001442F3768 48 8B 4C 24 60                                mov     rcx, [rsp+60h]
.text:00000001442F376D 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F3770
.text:00000001442F3770                               loc_1442F3770:                          ; CODE XREF: sub_140C332B0+6F↑p
.text:00000001442F3770                                                                       ; .text:0000000141185CEA↑p ...
.text:00000001442F3770 FF 50 10                                      call    qword ptr [rax+10h] ; Indirect Call Near Procedure
.text:00000001442F3773 FF 15 47 E1 62 03                             call    cs:qword_1479218C0 ; Indirect Call Near Procedure
.text:00000001442F3779 8B 05 F9 0C 14 06                             mov     eax, cs:dword_14A434478
.text:00000001442F377F
.text:00000001442F377F                               loc_1442F377F:                          ; CODE XREF: sub_1442F3420+874↓j
.text:00000001442F377F 48 8B BC 24 C0 01 00 00                       mov     rdi, [rsp+1C0h]
.text:00000001442F3787 48 8B B4 24 B8 01 00 00                       mov     rsi, [rsp+1B8h]
.text:00000001442F378F 48 8B 9C 24 B0 01 00 00                       mov     rbx, [rsp+1B0h]
.text:00000001442F3797
.text:00000001442F3797                               loc_1442F3797:                          ; CODE XREF: sub_1442F3420+128↑j
.text:00000001442F3797                                                                       ; sub_1442F3420+1AA↑j
.text:00000001442F3797 4C 8B A4 24 90 01 00 00                       mov     r12, [rsp+190h]
.text:00000001442F379F
.text:00000001442F379F                               loc_1442F379F:                          ; CODE XREF: sub_1442F3420+87↑j
.text:00000001442F379F 48 8B 4D 70                                   mov     rcx, [rbp+70h]
.text:00000001442F37A3 48 33 CC                                      xor     rcx, rsp        ; Logical Exclusive OR
.text:00000001442F37A6 E8 D5 17 37 03                                call    loc_147664F80   ; Call Procedure
.text:00000001442F37AB 48 81 C4 98 01 00 00                          add     rsp, 198h       ; Add
.text:00000001442F37B2 41 5D                                         pop     r13
.text:00000001442F37B4 5D                                            pop     rbp
.text:00000001442F37B5 C3                                            retn                    ; Return Near from Procedure
.text:00000001442F37B6                               ; ---------------------------------------------------------------------------
.text:00000001442F37B6
.text:00000001442F37B6                               loc_1442F37B6:                          ; CODE XREF: sub_1442F3420+2FC↑j
.text:00000001442F37B6 B9 18 00 00 00                                mov     ecx, 18h
.text:00000001442F37BB 4C 89 6C 24 78                                mov     [rsp+78h], r13
.text:00000001442F37C0 E8 9B CC D2 FF                                call    sub_144020460   ; Call Procedure
.text:00000001442F37C5 48 8B D8                                      mov     rbx, rax
.text:00000001442F37C8 48 85 C0                                      test    rax, rax        ; Logical Compare
.text:00000001442F37CB 0F 84 C8 04 00 00                             jz      loc_1442F3C99   ; Jump if Zero (ZF=1)
.text:00000001442F37D1 48 8D 0D C8 FA AD 04                          lea     rcx, aSelectFromWin3 ; Load Effective Address
.text:00000001442F37D8 4C 89 68 08                                   mov     [rax+8], r13
.text:00000001442F37DC 44 89 60 10                                   mov     [rax+10h], r12d
.text:00000001442F37E0 E8 2B 71 37 03                                call    sub_14766A910   ; Call Procedure
.text:00000001442F37E5 B9 18 00 00 00                                mov     ecx, 18h
.text:00000001442F37EA 48 89 03                                      mov     [rbx], rax
.text:00000001442F37ED 48 8B F0                                      mov     rsi, rax
.text:00000001442F37F0 E8 6B CC D2 FF                                call    sub_144020460   ; Call Procedure
.text:00000001442F37F5 48 8B F8                                      mov     rdi, rax
.text:00000001442F37F8 48 85 C0                                      test    rax, rax        ; Logical Compare
.text:00000001442F37FB 0F 84 98 04 00 00                             jz      loc_1442F3C99   ; Jump if Zero (ZF=1)
.text:00000001442F3801 48 8D 0D B4 74 F8 03                          lea     rcx, unk_14827ACBC ; Load Effective Address
.text:00000001442F3808 4C 89 68 08                                   mov     [rax+8], r13
.text:00000001442F380C 44 89 60 10                                   mov     [rax+10h], r12d
.text:00000001442F3810 E8 FB 70 37 03                                call    sub_14766A910   ; Call Procedure
.text:00000001442F3815 48 89 07                                      mov     [rdi], rax
.text:00000001442F3818 48 8D 54 24 78                                lea     rdx, [rsp+78h]  ; Load Effective Address
.text:00000001442F381D 48 8B 4C 24 58                                mov     rcx, [rsp+58h]
.text:00000001442F3822 41 B9 30 00 00 00                             mov     r9d, 30h ; '0'
.text:00000001442F3828 48 89 54 24 28                                mov     [rsp+28h], rdx
.text:00000001442F382D 4C 8B C6                                      mov     r8, rsi
.text:00000001442F3830
.text:00000001442F3830                               loc_1442F3830:                          ; CODE XREF: sub_146198380+25↓p
.text:00000001442F3830                                                                       ; sub_146198380+3C↓p ...
.text:00000001442F3830 48 8B D0                                      mov     rdx, rax
.text:00000001442F3833 4C 89 6C 24 20                                mov     [rsp+20h], r13
.text:00000001442F3838 4C 8B 11                                      mov     r10, [rcx]
.text:00000001442F383B 41 FF 92 A0 00 00 00                          call    qword ptr [r10+0A0h] ; Indirect Call Near Procedure
.text:00000001442F3842 89 44 24 54                                   mov     [rsp+54h], eax
.text:00000001442F3846 B8 FF FF FF FF                                mov     eax, 0FFFFFFFFh
.text:00000001442F384B F0 0F C1 47 10                                lock xadd [rdi+10h], eax ; t<-dest; dest<-src+dest; src<-t
.text:00000001442F3850 41 3B C4                                      cmp     eax, r12d       ; Compare Two Operands
.text:00000001442F3853 75 30                                         jnz     short loc_1442F3885 ; Jump if Not Zero (ZF=0)
.text:00000001442F3855 48 8B 0F                                      mov     rcx, [rdi]
.text:00000001442F3858 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.text:00000001442F385B 74 09                                         jz      short loc_1442F3866 ; Jump if Zero (ZF=1)
.text:00000001442F385D FF 15 D5 CE 62 03                             call    cs:qword_147920738 ; Indirect Call Near Procedure
.text:00000001442F3863 4C 89 2F                                      mov     [rdi], r13
.text:00000001442F3866
.text:00000001442F3866                               loc_1442F3866:                          ; CODE XREF: sub_1442F3420+43B↑j
.text:00000001442F3866 48 8B 4F 08                                   mov     rcx, [rdi+8]
.text:00000001442F386A 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.text:00000001442F386D 74 09                                         jz      short loc_1442F3878 ; Jump if Zero (ZF=1)
.text:00000001442F386F E8 8C 5D C9 FD                                call    sub_141F89600   ; Call Procedure
.text:00000001442F3874 4C 89 6F 08                                   mov     [rdi+8], r13
.text:00000001442F3878
.text:00000001442F3878                               loc_1442F3878:                          ; CODE XREF: sub_1442F3420+44D↑j
.text:00000001442F3878 BA 18 00 00 00                                mov     edx, 18h
.text:00000001442F387D 48 8B CF                                      mov     rcx, rdi
.text:00000001442F3880 E8 7B 5D C9 FD                                call    sub_141F89600   ; Call Procedure
.text:00000001442F3885
.text:00000001442F3885                               loc_1442F3885:                          ; CODE XREF: sub_1442F3420+433↑j
.text:00000001442F3885 B8 FF FF FF FF                                mov     eax, 0FFFFFFFFh
.text:00000001442F388A F0 0F C1 43 10                                lock xadd [rbx+10h], eax ; t<-dest; dest<-src+dest; src<-t
.text:00000001442F388F 41 3B C4                                      cmp     eax, r12d       ; Compare Two Operands
.text:00000001442F3892 75 30                                         jnz     short loc_1442F38C4 ; Jump if Not Zero (ZF=0)
.text:00000001442F3894 48 8B 0B                                      mov     rcx, [rbx]
.text:00000001442F3897 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.text:00000001442F389A 74 09                                         jz      short loc_1442F38A5 ; Jump if Zero (ZF=1)
.text:00000001442F389C FF 15 96 CE 62 03                             call    cs:qword_147920738 ; Indirect Call Near Procedure
.text:00000001442F38A2 4C 89 2B                                      mov     [rbx], r13
.text:00000001442F38A5
.text:00000001442F38A5                               loc_1442F38A5:                          ; CODE XREF: sub_1442F3420+47A↑j
.text:00000001442F38A5 48 8B 4B 08                                   mov     rcx, [rbx+8]
.text:00000001442F38A9 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.text:00000001442F38AC 74 09                                         jz      short loc_1442F38B7 ; Jump if Zero (ZF=1)
.text:00000001442F38AE E8 4D 5D C9 FD                                call    sub_141F89600   ; Call Procedure
.text:00000001442F38B3 4C 89 6B 08                                   mov     [rbx+8], r13
.text:00000001442F38B7
.text:00000001442F38B7                               loc_1442F38B7:                          ; CODE XREF: sub_1442F3420+48C↑j
.text:00000001442F38B7 BA 18 00 00 00                                mov     edx, 18h
.text:00000001442F38BC 48 8B CB                                      mov     rcx, rbx
.text:00000001442F38BF E8 3C 5D C9 FD                                call    sub_141F89600   ; Call Procedure
.text:00000001442F38C4
.text:00000001442F38C4                               loc_1442F38C4:                          ; CODE XREF: sub_1442F3420+472↑j
.text:00000001442F38C4 44 39 6C 24 54                                cmp     [rsp+54h], r13d ; Compare Two Operands
.text:00000001442F38C9 7D 48                                         jge     short loc_1442F3913 ; Jump if Greater or Equal (SF=OF)
.text:00000001442F38CB 80 3D 3E 1A 13 06 03                          cmp     cs:byte_14A425310, 3 ; Compare Two Operands
.text:00000001442F38D2 0F 82 85 FE FF FF                             jb      loc_1442F375D   ; Jump if Below (CF=1)
.text:00000001442F38D8 80 3D D9 A9 5E 06 03                          cmp     cs:byte_14A8DE2B8, 3 ; Compare Two Operands
.text:00000001442F38DF 0F 82 78 FE FF FF                             jb      loc_1442F375D   ; Jump if Below (CF=1)
.text:00000001442F38E5 48 8D 44 24 54                                lea     rax, [rsp+54h]  ; Load Effective Address
.text:00000001442F38EA 4C 8D 0D 47 F8 AD 04                          lea     r9, aFwindowsplatfo_8 ; Load Effective Address
.text:00000001442F38F1 48 89 44 24 20                                mov     [rsp+20h], rax
.text:00000001442F38F6 4C 8D 05 CB F9 AD 04                          lea     r8, aGetmemorychann_4 ; Load Effective Address
.text:00000001442F38FD 48 8D 15 B4 A9 5E 06                          lea     rdx, byte_14A8DE2B8 ; Load Effective Address
.text:00000001442F3904 48 8D 4C 24 50                                lea     rcx, [rsp+50h]  ; Load Effective Address
.text:00000001442F3909 E8 72 1C FF FF                                call    sub_1442E5580   ; Call Procedure
.text:00000001442F390E E9 4A FE FF FF                                jmp     loc_1442F375D   ; Jump
.text:00000001442F3913                               ; ---------------------------------------------------------------------------
.text:00000001442F3913
.text:00000001442F3913                               loc_1442F3913:                          ; CODE XREF: sub_1442F3420+4A9↑j
.text:00000001442F3913 48 8B 4C 24 78                                mov     rcx, [rsp+78h]
.text:00000001442F3918 45 8B C5                                      mov     r8d, r13d
.text:00000001442F391B 4C 89 B4 24 88 01 00 00                       mov     [rsp+188h], r14
.text:00000001442F3923 4C 89 BC 24 80 01 00 00                       mov     [rsp+180h], r15
.text:00000001442F392B 4C 89 6D 20                                   mov     [rbp+20h], r13
.text:00000001442F392F 4C 89 6D 28                                   mov     [rbp+28h], r13
.text:00000001442F3933 4C 89 6D 40                                   mov     [rbp+40h], r13
.text:00000001442F3937 44 89 6D 48                                   mov     [rbp+48h], r13d
.text:00000001442F393B C7 45 4C 80 00 00 00                          mov     dword ptr [rbp+4Ch], 80h
.text:00000001442F3942 C7 45 50 FF FF FF FF                          mov     dword ptr [rbp+50h], 0FFFFFFFFh
.text:00000001442F3949 44 89 6D 54                                   mov     [rbp+54h], r13d
.text:00000001442F394D 4C 89 6D 60                                   mov     [rbp+60h], r13
.text:00000001442F3951 44 89 6D 68                                   mov     [rbp+68h], r13d
.text:00000001442F3955 4C 89 6C 24 70                                mov     [rsp+70h], r13
.text:00000001442F395A 44 89 6C 24 68                                mov     [rsp+68h], r13d
.text:00000001442F395F 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.text:00000001442F3962 0F 84 4C 01 00 00                             jz      loc_1442F3AB4   ; Jump if Zero (ZF=1)
.text:00000001442F3968 0F 1F 84 00 00 00 00 00                       nop     dword ptr [rax+rax+00000000h] ; No Operation
.text:00000001442F3970
.text:00000001442F3970                               loc_1442F3970:                          ; CODE XREF: sub_1442F3420+68A↓j
.text:00000001442F3970 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F3973 48 8D 54 24 68                                lea     rdx, [rsp+68h]  ; Load Effective Address
.text:00000001442F3978 48 89 54 24 20                                mov     [rsp+20h], rdx
.text:00000001442F397D 4C 8D 4C 24 70                                lea     r9, [rsp+70h]   ; Load Effective Address
.text:00000001442F3982 BA FF FF FF FF                                mov     edx, 0FFFFFFFFh
.text:00000001442F3987 45 8B C4                                      mov     r8d, r12d
.text:00000001442F398A FF 50 20                                      call    qword ptr [rax+20h] ; Indirect Call Near Procedure
.text:00000001442F398D 44 39 6C 24 68                                cmp     [rsp+68h], r13d ; Compare Two Operands
.text:00000001442F3992 0F 84 18 01 00 00                             jz      loc_1442F3AB0   ; Jump if Zero (ZF=1)
.text:00000001442F3998 48 8D 4D A0                                   lea     rcx, [rbp-60h]  ; Load Effective Address
.text:00000001442F399C FF 15 AE CD 62 03                             call    cs:qword_147920750 ; Indirect Call Near Procedure
.text:00000001442F39A2 48 8B 4C 24 70                                mov     rcx, [rsp+70h]
.text:00000001442F39A7 4C 8D 4D A0                                   lea     r9, [rbp-60h]   ; Load Effective Address
.text:00000001442F39AB 4C 89 6C 24 28                                mov     [rsp+28h], r13
.text:00000001442F39B0 48 8D 15 E9 62 1B 04                          lea     rdx, aCapacity  ; Load Effective Address
.text:00000001442F39B7 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.text:00000001442F39BA 4C 89 6C 24 20                                mov     [rsp+20h], r13
.text:00000001442F39BF 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F39C2 FF 50 20                                      call    qword ptr [rax+20h] ; Indirect Call Near Procedure
.text:00000001442F39C5 48 8B 7D A8                                   mov     rdi, [rbp-58h]
.text:00000001442F39C9 48 8D 4D A0                                   lea     rcx, [rbp-60h]  ; Load Effective Address
.text:00000001442F39CD FF 15 75 CD 62 03                             call    cs:qword_147920748 ; Indirect Call Near Procedure
.text:00000001442F39D3 48 8B 4C 24 70                                mov     rcx, [rsp+70h]
.text:00000001442F39D8 4C 8D 4D A0                                   lea     r9, [rbp-60h]   ; Load Effective Address
.text:00000001442F39DC 4C 89 6C 24 28                                mov     [rsp+28h], r13
.text:00000001442F39E1 48 8D 15 20 F9 AD 04                          lea     rdx, aSpeed     ; Load Effective Address
.text:00000001442F39E8 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.text:00000001442F39EB 4C 89 6C 24 20                                mov     [rsp+20h], r13
.text:00000001442F39F0 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F39F3 FF 50 20                                      call    qword ptr [rax+20h] ; Indirect Call Near Procedure
.text:00000001442F39F6 8B 75 A8                                      mov     esi, [rbp-58h]
.text:00000001442F39F9 48 8D 4D A0                                   lea     rcx, [rbp-60h]  ; Load Effective Address
.text:00000001442F39FD FF 15 45 CD 62 03                             call    cs:qword_147920748 ; Indirect Call Near Procedure
.text:00000001442F3A03 48 33 F7                                      xor     rsi, rdi        ; Logical Exclusive OR
.text:00000001442F3A06 48 8B C6                                      mov     rax, rsi
.text:00000001442F3A09 48 89 75 C8                                   mov     [rbp-38h], rsi
.text:00000001442F3A0D 48 C1 E8 20                                   shr     rax, 20h        ; Shift Logical Right
.text:00000001442F3A11 6B F8 17                                      imul    edi, eax, 17h   ; Signed Multiply
.text:00000001442F3A14 8B 45 28                                      mov     eax, [rbp+28h]
.text:00000001442F3A17 03 FE                                         add     edi, esi        ; Add
.text:00000001442F3A19 3B 45 54                                      cmp     eax, [rbp+54h]  ; Compare Two Operands
.text:00000001442F3A1C 74 68                                         jz      short loc_1442F3A86 ; Jump if Zero (ZF=1)
.text:00000001442F3A1E 48 8D 4D 60                                   lea     rcx, [rbp+60h]  ; Load Effective Address
.text:00000001442F3A22 FF 15 48 29 13 06                             call    cs:qword_14A426370 ; Indirect Call Near Procedure
.text:00000001442F3A28 8B 4D 68                                      mov     ecx, [rbp+68h]
.text:00000001442F3A2B 48 8D 5D 58                                   lea     rbx, [rbp+58h]  ; Load Effective Address
.text:00000001442F3A2F FF C9                                         dec     ecx             ; Decrement by 1
.text:00000001442F3A31 48 63 D1                                      movsxd  rdx, ecx        ; Move with Sign-Extend Doubleword
.text:00000001442F3A34 48 63 CF                                      movsxd  rcx, edi        ; Move with Sign-Extend Doubleword
.text:00000001442F3A37 48 23 D1                                      and     rdx, rcx        ; Logical AND
.text:00000001442F3A3A 48 85 C0                                      test    rax, rax        ; Logical Compare
.text:00000001442F3A3D 48 0F 45 D8                                   cmovnz  rbx, rax        ; Move if Not Zero (ZF=0)
.text:00000001442F3A41 8B 1C 93                                      mov     ebx, [rbx+rdx*4]
.text:00000001442F3A44 83 FB FF                                      cmp     ebx, 0FFFFFFFFh ; Compare Two Operands
.text:00000001442F3A47 74 3D                                         jz      short loc_1442F3A86 ; Jump if Zero (ZF=1)
.text:00000001442F3A49 0F 1F 80 00 00 00 00                          nop     dword ptr [rax+00000000h] ; No Operation
.text:00000001442F3A50
.text:00000001442F3A50                               loc_1442F3A50:                          ; CODE XREF: sub_1442F3420+664↓j
.text:00000001442F3A50 48 8D 4D 20                                   lea     rcx, [rbp+20h]  ; Load Effective Address
.text:00000001442F3A54 FF 15 16 29 13 06                             call    cs:qword_14A426370 ; Indirect Call Near Procedure
.text:00000001442F3A5A 48 63 CB                                      movsxd  rcx, ebx        ; Move with Sign-Extend Doubleword
.text:00000001442F3A5D 48 8D 14 49                                   lea     rdx, [rcx+rcx*2] ; Load Effective Address
.text:00000001442F3A61 48 8D 1C D5 00 00 00 00                       lea     rbx, ds:0[rdx*8] ; Load Effective Address
.text:00000001442F3A69 48 8D 4D 20                                   lea     rcx, [rbp+20h]  ; Load Effective Address
.text:00000001442F3A6D 48 39 34 18                                   cmp     [rax+rbx], rsi  ; Compare Two Operands
.text:00000001442F3A71 0F 84 5B 01 00 00                             jz      loc_1442F3BD2   ; Jump if Zero (ZF=1)
.text:00000001442F3A77 FF 15 F3 28 13 06                             call    cs:qword_14A426370 ; Indirect Call Near Procedure
.text:00000001442F3A7D 8B 5C 03 10                                   mov     ebx, [rbx+rax+10h]
.text:00000001442F3A81 83 FB FF                                      cmp     ebx, 0FFFFFFFFh ; Compare Two Operands
.text:00000001442F3A84 75 CA                                         jnz     short loc_1442F3A50 ; Jump if Not Zero (ZF=0)
.text:00000001442F3A86
.text:00000001442F3A86                               loc_1442F3A86:                          ; CODE XREF: sub_1442F3420+5FC↑j
.text:00000001442F3A86                                                                       ; sub_1442F3420+627↑j ...
.text:00000001442F3A86 4C 8D 45 C8                                   lea     r8, [rbp-38h]   ; Load Effective Address
.text:00000001442F3A8A 8B D7                                         mov     edx, edi
.text:00000001442F3A8C 48 8D 4D 20                                   lea     rcx, [rbp+20h]  ; Load Effective Address
.text:00000001442F3A90 E8 BB 40 FF FF                                call    sub_1442E7B50   ; Call Procedure
.text:00000001442F3A95
.text:00000001442F3A95                               loc_1442F3A95:                          ; CODE XREF: sub_1442F3420+7C5↓j
.text:00000001442F3A95 FE 00                                         inc     byte ptr [rax]  ; Increment by 1
.text:00000001442F3A97 48 8B 4C 24 70                                mov     rcx, [rsp+70h]
.text:00000001442F3A9C 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F3A9F FF 50 10                                      call    qword ptr [rax+10h] ; Indirect Call Near Procedure
.text:00000001442F3AA2 48 8B 4C 24 78                                mov     rcx, [rsp+78h]
.text:00000001442F3AA7 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.text:00000001442F3AAA 0F 85 C0 FE FF FF                             jnz     loc_1442F3970   ; Jump if Not Zero (ZF=0)
.text:00000001442F3AB0
.text:00000001442F3AB0                               loc_1442F3AB0:                          ; CODE XREF: sub_1442F3420+572↑j
.text:00000001442F3AB0 44 8B 45 48                                   mov     r8d, [rbp+48h]
.text:00000001442F3AB4
.text:00000001442F3AB4                               loc_1442F3AB4:                          ; CODE XREF: sub_1442F3420+542↑j
.text:00000001442F3AB4 45 32 FF                                      xor     r15b, r15b      ; Logical Exclusive OR
.text:00000001442F3AB7 44 89 65 84                                   mov     [rbp-7Ch], r12d
.text:00000001442F3ABB 45 32 F6                                      xor     r14b, r14b      ; Logical Exclusive OR
.text:00000001442F3ABE 4C 89 6D 94                                   mov     [rbp-6Ch], r13
.text:00000001442F3AC2 48 8D 45 30                                   lea     rax, [rbp+30h]  ; Load Effective Address
.text:00000001442F3AC6 41 8B DD                                      mov     ebx, r13d
.text:00000001442F3AC9 89 5D 80                                      mov     [rbp-80h], ebx
.text:00000001442F3ACC BE FF FF FF FF                                mov     esi, 0FFFFFFFFh
.text:00000001442F3AD1 48 89 45 88                                   mov     [rbp-78h], rax
.text:00000001442F3AD5 41 8B FD                                      mov     edi, r13d
.text:00000001442F3AD8 89 75 90                                      mov     [rbp-70h], esi
.text:00000001442F3ADB 45 85 C0                                      test    r8d, r8d        ; Logical Compare
.text:00000001442F3ADE 74 72                                         jz      short loc_1442F3B52 ; Jump if Zero (ZF=1)
.text:00000001442F3AE0 48 8D 4D 40                                   lea     rcx, [rbp+40h]  ; Load Effective Address
.text:00000001442F3AE4 FF 15 86 28 13 06                             call    cs:qword_14A426370 ; Indirect Call Near Procedure
.text:00000001442F3AEA 44 8B 45 48                                   mov     r8d, [rbp+48h]
.text:00000001442F3AEE 4C 8D 4D 30                                   lea     r9, [rbp+30h]   ; Load Effective Address
.text:00000001442F3AF2 48 85 C0                                      test    rax, rax        ; Logical Compare
.text:00000001442F3AF5 4C 0F 45 C8                                   cmovnz  r9, rax         ; Move if Not Zero (ZF=0)
.text:00000001442F3AF9 41 8D 40 FF                                   lea     eax, [r8-1]     ; Load Effective Address
.text:00000001442F3AFD 99                                            cdq                     ; EAX -> EDX:EAX (with sign)
.text:00000001442F3AFE 83 E2 1F                                      and     edx, 1Fh        ; Logical AND
.text:00000001442F3B01 41 8B 09                                      mov     ecx, [r9]
.text:00000001442F3B04 03 D0                                         add     edx, eax        ; Add
.text:00000001442F3B06 C1 FA 05                                      sar     edx, 5          ; Shift Arithmetic Right
.text:00000001442F3B09 85 C9                                         test    ecx, ecx        ; Logical Compare
.text:00000001442F3B0B 75 24                                         jnz     short loc_1442F3B31 ; Jump if Not Zero (ZF=0)
.text:00000001442F3B0D 0F 1F 00                                      nop     dword ptr [rax] ; No Operation
.text:00000001442F3B10
.text:00000001442F3B10                               loc_1442F3B10:                          ; CODE XREF: sub_1442F3420+70F↓j
.text:00000001442F3B10 FF C3                                         inc     ebx             ; Increment by 1
.text:00000001442F3B12 83 C7 20                                      add     edi, 20h ; ' '  ; Add
.text:00000001442F3B15 89 5D 80                                      mov     [rbp-80h], ebx
.text:00000001442F3B18 89 7D 98                                      mov     [rbp-68h], edi
.text:00000001442F3B1B 3B DA                                         cmp     ebx, edx        ; Compare Two Operands
.text:00000001442F3B1D 0F 8F C7 00 00 00                             jg      loc_1442F3BEA   ; Jump if Greater (ZF=0 & SF=OF)
.text:00000001442F3B23 48 63 C3                                      movsxd  rax, ebx        ; Move with Sign-Extend Doubleword
.text:00000001442F3B26 89 75 90                                      mov     [rbp-70h], esi
.text:00000001442F3B29 41 8B 0C 81                                   mov     ecx, [r9+rax*4]
.text:00000001442F3B2D 85 C9                                         test    ecx, ecx        ; Logical Compare
.text:00000001442F3B2F 74 DF                                         jz      short loc_1442F3B10 ; Jump if Zero (ZF=1)
.text:00000001442F3B31
.text:00000001442F3B31                               loc_1442F3B31:                          ; CODE XREF: sub_1442F3420+6EB↑j
.text:00000001442F3B31 8B C1                                         mov     eax, ecx
.text:00000001442F3B33 F7 D8                                         neg     eax             ; Two's Complement Negation
.text:00000001442F3B35 23 C8                                         and     ecx, eax        ; Logical AND
.text:00000001442F3B37 89 4D 84                                      mov     [rbp-7Ch], ecx
.text:00000001442F3B3A 48 03 C9                                      add     rcx, rcx        ; Add
.text:00000001442F3B3D 49 0B CC                                      or      rcx, r12        ; Logical Inclusive OR
.text:00000001442F3B40 48 0F BD C9                                   bsr     rcx, rcx        ; Bit Scan Reverse
.text:00000001442F3B44 FF C9                                         dec     ecx             ; Decrement by 1
.text:00000001442F3B46 03 CF                                         add     ecx, edi        ; Add
.text:00000001442F3B48 41 3B C8                                      cmp     ecx, r8d        ; Compare Two Operands
.text:00000001442F3B4B 41 0F 4F C8                                   cmovg   ecx, r8d        ; Move if Greater (ZF=0 & SF=OF)
.text:00000001442F3B4F 89 4D 94                                      mov     [rbp-6Ch], ecx
.text:00000001442F3B52
.text:00000001442F3B52                               loc_1442F3B52:                          ; CODE XREF: sub_1442F3420+6BE↑j
.text:00000001442F3B52                                                                       ; sub_1442F3420+7CE↓j
.text:00000001442F3B52 0F 10 45 80                                   movups  xmm0, xmmword ptr [rbp-80h] ; Move Unaligned Four Packed Single-FP
.text:00000001442F3B56 41 8B C8                                      mov     ecx, r8d
.text:00000001442F3B59 48 8D 45 20                                   lea     rax, [rbp+20h]  ; Load Effective Address
.text:00000001442F3B5D 0F 10 55 90                                   movups  xmm2, xmmword ptr [rbp-70h] ; Move Unaligned Four Packed Single-FP
.text:00000001442F3B61 83 E1 1F                                      and     ecx, 1Fh        ; Logical AND
.text:00000001442F3B64 48 89 45 D0                                   mov     [rbp-30h], rax
.text:00000001442F3B68 D3 E6                                         shl     esi, cl         ; Shift Logical Left
.text:00000001442F3B6A 4C 8D 6D 30                                   lea     r13, [rbp+30h]  ; Load Effective Address
.text:00000001442F3B6E 0F 11 45 D8                                   movups  xmmword ptr [rbp-28h], xmm0 ; Move Unaligned Four Packed Single-FP
.text:00000001442F3B72 89 75 08                                      mov     [rbp+8], esi
.text:00000001442F3B75 0F 10 45 D0                                   movups  xmm0, xmmword ptr [rbp-30h] ; Move Unaligned Four Packed Single-FP
.text:00000001442F3B79 44 89 45 0C                                   mov     [rbp+0Ch], r8d
.text:00000001442F3B7D 48 8B 7D 08                                   mov     rdi, [rbp+8]
.text:00000001442F3B81 0F 11 55 E8                                   movups  xmmword ptr [rbp-18h], xmm2 ; Move Unaligned Four Packed Single-FP
.text:00000001442F3B85 48 C1 EF 20                                   shr     rdi, 20h        ; Shift Logical Right
.text:00000001442F3B89 0F 10 4D E0                                   movups  xmm1, xmmword ptr [rbp-20h] ; Move Unaligned Four Packed Single-FP
.text:00000001442F3B8D 66 0F 15 D2                                   unpckhpd xmm2, xmm2     ; Unpack and Interleave High Packed Double-Precision Floating-Point Values
.text:00000001442F3B91 0F 11 45 A0                                   movups  xmmword ptr [rbp-60h], xmm0 ; Move Unaligned Four Packed Single-FP
.text:00000001442F3B95 0F 11 4D B0                                   movups  xmmword ptr [rbp-50h], xmm1 ; Move Unaligned Four Packed Single-FP
.text:00000001442F3B99 F2 0F 11 55 C0                                movsd   qword ptr [rbp-40h], xmm2 ; Move Scalar Double-Precision Floating-Point Values
.text:00000001442F3B9E 66 90                                         xchg    ax, ax          ; Exchange Register/Memory with Register
.text:00000001442F3BA0
.text:00000001442F3BA0                               loc_1442F3BA0:                          ; CODE XREF: sub_1442F3420+7E8↓j
.text:00000001442F3BA0 48 63 5D BC                                   movsxd  rbx, dword ptr [rbp-44h] ; Move with Sign-Extend Doubleword
.text:00000001442F3BA4 48 8B 4D A0                                   mov     rcx, [rbp-60h]
.text:00000001442F3BA8 3B DF                                         cmp     ebx, edi        ; Compare Two Operands
.text:00000001442F3BAA 75 0F                                         jnz     short loc_1442F3BBB ; Jump if Not Zero (ZF=0)
.text:00000001442F3BAC 4C 39 6D B0                                   cmp     [rbp-50h], r13  ; Compare Two Operands
.text:00000001442F3BB0 75 09                                         jnz     short loc_1442F3BBB ; Jump if Not Zero (ZF=0)
.text:00000001442F3BB2 48 8D 45 20                                   lea     rax, [rbp+20h]  ; Load Effective Address
.text:00000001442F3BB6 48 3B C8                                      cmp     rcx, rax        ; Compare Two Operands
.text:00000001442F3BB9 74 4F                                         jz      short loc_1442F3C0A ; Jump if Zero (ZF=1)
.text:00000001442F3BBB
.text:00000001442F3BBB                               loc_1442F3BBB:                          ; CODE XREF: sub_1442F3420+78A↑j
.text:00000001442F3BBB                                                                       ; sub_1442F3420+790↑j
.text:00000001442F3BBB FF 15 AF 27 13 06                             call    cs:qword_14A426370 ; Indirect Call Near Procedure
.text:00000001442F3BC1 48 8D 14 5B                                   lea     rdx, [rbx+rbx*2] ; Load Effective Address
.text:00000001442F3BC5 44 38 64 D0 08                                cmp     [rax+rdx*8+8], r12b ; Compare Two Operands
.text:00000001442F3BCA 75 27                                         jnz     short loc_1442F3BF3 ; Jump if Not Zero (ZF=0)
.text:00000001442F3BCC 45 0F B6 F4                                   movzx   r14d, r12b      ; Move with Zero-Extend
.text:00000001442F3BD0 EB 25                                         jmp     short loc_1442F3BF7 ; Jump
.text:00000001442F3BD2                               ; ---------------------------------------------------------------------------
.text:00000001442F3BD2
.text:00000001442F3BD2                               loc_1442F3BD2:                          ; CODE XREF: sub_1442F3420+651↑j
.text:00000001442F3BD2 FF 15 98 27 13 06                             call    cs:qword_14A426370 ; Indirect Call Near Procedure
.text:00000001442F3BD8 48 03 C3                                      add     rax, rbx        ; Add
.text:00000001442F3BDB 0F 84 A5 FE FF FF                             jz      loc_1442F3A86   ; Jump if Zero (ZF=1)
.text:00000001442F3BE1 48 83 C0 08                                   add     rax, 8          ; Add
.text:00000001442F3BE5 E9 AB FE FF FF                                jmp     loc_1442F3A95   ; Jump
.text:00000001442F3BEA                               ; ---------------------------------------------------------------------------
.text:00000001442F3BEA
.text:00000001442F3BEA                               loc_1442F3BEA:                          ; CODE XREF: sub_1442F3420+6FD↑j
.text:00000001442F3BEA 44 89 45 94                                   mov     [rbp-6Ch], r8d
.text:00000001442F3BEE E9 5F FF FF FF                                jmp     loc_1442F3B52   ; Jump
.text:00000001442F3BF3                               ; ---------------------------------------------------------------------------
.text:00000001442F3BF3
.text:00000001442F3BF3                               loc_1442F3BF3:                          ; CODE XREF: sub_1442F3420+7AA↑j
.text:00000001442F3BF3 45 0F B6 FC                                   movzx   r15d, r12b      ; Move with Zero-Extend
.text:00000001442F3BF7
.text:00000001442F3BF7                               loc_1442F3BF7:                          ; CODE XREF: sub_1442F3420+7B0↑j
.text:00000001442F3BF7 8B 45 AC                                      mov     eax, [rbp-54h]
.text:00000001442F3BFA 48 8D 4D A8                                   lea     rcx, [rbp-58h]  ; Load Effective Address
.text:00000001442F3BFE F7 D0                                         not     eax             ; One's Complement Negation
.text:00000001442F3C00 21 45 B8                                      and     [rbp-48h], eax  ; Logical AND
.text:00000001442F3C03 E8 08 7E 87 FC                                call    sub_140B6BA10   ; Call Procedure
.text:00000001442F3C08 EB 96                                         jmp     short loc_1442F3BA0 ; Jump
.text:00000001442F3C0A                               ; ---------------------------------------------------------------------------
.text:00000001442F3C0A
.text:00000001442F3C0A                               loc_1442F3C0A:                          ; CODE XREF: sub_1442F3420+799↑j
.text:00000001442F3C0A 45 84 FF                                      test    r15b, r15b      ; Logical Compare
.text:00000001442F3C0D 41 BD 00 00 00 00                             mov     r13d, 0
.text:00000001442F3C13 4C 8B BC 24 80 01 00 00                       mov     r15, [rsp+180h]
.text:00000001442F3C1B 74 0B                                         jz      short loc_1442F3C28 ; Jump if Zero (ZF=1)
.text:00000001442F3C1D 45 84 F6                                      test    r14b, r14b      ; Logical Compare
.text:00000001442F3C20 75 06                                         jnz     short loc_1442F3C28 ; Jump if Not Zero (ZF=0)
.text:00000001442F3C22 41 BC 02 00 00 00                             mov     r12d, 2
.text:00000001442F3C28
.text:00000001442F3C28                               loc_1442F3C28:                          ; CODE XREF: sub_1442F3420+7FB↑j
.text:00000001442F3C28                                                                       ; sub_1442F3420+800↑j
.text:00000001442F3C28 48 8B 4C 24 58                                mov     rcx, [rsp+58h]
.text:00000001442F3C2D 44 89 25 44 08 14 06                          mov     cs:dword_14A434478, r12d
.text:00000001442F3C34 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F3C37 FF 50 10                                      call    qword ptr [rax+10h] ; Indirect Call Near Procedure
.text:00000001442F3C3A 48 8B 4C 24 60                                mov     rcx, [rsp+60h]
.text:00000001442F3C3F 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F3C42 FF 50 10                                      call    qword ptr [rax+10h] ; Indirect Call Near Procedure
.text:00000001442F3C45 48 8B 4C 24 78                                mov     rcx, [rsp+78h]
.text:00000001442F3C4A 48 8B 01                                      mov     rax, [rcx]
.text:00000001442F3C4D FF 50 10                                      call    qword ptr [rax+10h] ; Indirect Call Near Procedure
.text:00000001442F3C50 FF 15 6A DC 62 03                             call    cs:qword_1479218C0 ; Indirect Call Near Procedure
.text:00000001442F3C56 8B 1D 1C 08 14 06                             mov     ebx, cs:dword_14A434478
.text:00000001442F3C5C 48 8D 4D 60                                   lea     rcx, [rbp+60h]  ; Load Effective Address
.text:00000001442F3C60 44 89 6D 68                                   mov     [rbp+68h], r13d
.text:00000001442F3C64 FF 15 06 27 13 06                             call    cs:qword_14A426370 ; Indirect Call Near Procedure
.text:00000001442F3C6A 4C 8B B4 24 88 01 00 00                       mov     r14, [rsp+188h]
.text:00000001442F3C72 48 85 C0                                      test    rax, rax        ; Logical Compare
.text:00000001442F3C75 74 12                                         jz      short loc_1442F3C89 ; Jump if Zero (ZF=1)
.text:00000001442F3C77 48 8D 4D 60                                   lea     rcx, [rbp+60h]  ; Load Effective Address
.text:00000001442F3C7B FF 15 EF 26 13 06                             call    cs:qword_14A426370 ; Indirect Call Near Procedure
.text:00000001442F3C81 48 8B C8                                      mov     rcx, rax
.text:00000001442F3C84 E8 67 C1 EB FF                                call    sub_1441AFDF0   ; Call Procedure
.text:00000001442F3C89
.text:00000001442F3C89                               loc_1442F3C89:                          ; CODE XREF: sub_1442F3420+855↑j
.text:00000001442F3C89 48 8D 4D 20                                   lea     rcx, [rbp+20h]  ; Load Effective Address
.text:00000001442F3C8D E8 BE 3F 8A FC                                call    sub_140B97C50   ; Call Procedure
.text:00000001442F3C92 8B C3                                         mov     eax, ebx
.text:00000001442F3C94 E9 E6 FA FF FF                                jmp     loc_1442F377F   ; Jump
.text:00000001442F3C99                               ; ---------------------------------------------------------------------------
.text:00000001442F3C99
.text:00000001442F3C99                               loc_1442F3C99:                          ; CODE XREF: sub_1442F3420+1DC↑j
.text:00000001442F3C99                                                                       ; sub_1442F3420+1FD↑j ...
.text:00000001442F3C99 B9 0E 00 07 80                                mov     ecx, 8007000Eh
.text:00000001442F3C9E E8 5D 6C 37 03                                call    sub_14766A900   ; Call Procedure
.text:00000001442F3C9E                               sub_1442F3420   endp
.text:00000001442F3C9E
.text:00000001442F3C9E                               ; ---------------------------------------------------------------------------
.text:00000001442F3CA3 CC CC CC CC CC CC CC CC CC CC…                align 10h
.text:00000001442F3CB0
.text:00000001442F3CB0                               ; =============== S U B R O U T I N E =======================================
.text:00000001442F3CB0
.text:00000001442F3CB0
.text:00000001442F3CB0                               sub_1442F3CB0   proc near               ; CODE XREF: sub_1442D3760+7E↑p
.text:00000001442F3CB0                                                                       ; sub_1442DF4B0+63↑p
.text:00000001442F3CB0
.text:00000001442F3CB0                               arg_0           = qword ptr  8
.text:00000001442F3CB0
.text:00000001442F3CB0 48 89 5C 24 08                                mov     [rsp+arg_0], rbx
.text:00000001442F3CB5 57                                            push    rdi
.text:00000001442F3CB6 48 83 EC 20                                   sub     rsp, 20h        ; Integer Subtraction
.text:00000001442F3CBA 48 8B FA                                      mov     rdi, rdx
.text:00000001442F3CBD 48 8B D9                                      mov     rbx, rcx
.text:00000001442F3CC0 E8 7B B7 FF FF                                call    sub_1442EF440   ; Call Procedure
.text:00000001442F3CC5 0F B7 03                                      movzx   eax, word ptr [rbx] ; Move with Zero-Extend
.text:00000001442F3CC8 48 8B 5C 24 30                                mov     rbx, [rsp+30h]
.text:00000001442F3CCD 48 C1 E8 06                                   shr     rax, 6          ; Shift Logical Right
.text:00000001442F3CD1 33 C9                                         xor     ecx, ecx        ; Logical Exclusive OR
.text:00000001442F3CD3 66 89 0C 47                                   mov     [rdi+rax*2], cx
.text:00000001442F3CD7 48 83 C4 20                                   add     rsp, 20h        ; Add
.text:00000001442F3CDB 5F                                            pop     rdi
.text:00000001442F3CDC C3                                            retn                    ; Return Near from Procedure
.text:00000001442F3CDC                               sub_1442F3CB0   endp
.text:00000001442F3CDC
.text:00000001442F3CDC                               ; ---------------------------------------------------------------------------
.text:00000001442F3CDD CC CC CC                                      align 20h
.text:00000001442F3CE0 E9 CB 8A E7 FF                                jmp     sub_14416C7B0   ; Jump
.text:00000001442F3CE0                               ; ---------------------------------------------------------------------------
.text:00000001442F3CE5 CC CC CC CC CC CC CC CC CC CC…                align 10h
.text:00000001442F3CF0
.text:00000001442F3CF0                               ; =============== S U B R O U T I N E =======================================
.text:00000001442F3CF0
.text:00000001442F3CF0
.text:00000001442F3CF0                               ; void *sub_1442F3CF0()
.text:00000001442F3CF0                               sub_1442F3CF0   proc near               ; CODE XREF: sub_1442E7D50+47↑p
.text:00000001442F3CF0                                                                       ; sub_1442E7E80+4C↑p ...
.text:00000001442F3CF0
.text:00000001442F3CF0                               arg_0           = byte ptr  8
.text:00000001442F3CF0
.text:00000001442F3CF0 48 83 EC 28                                   sub     rsp, 28h        ; Integer Subtraction
.text:00000001442F3CF4 80 3D 4E 6B 5F 06 00                          cmp     cs:byte_14A8EA849, 0 ; Compare Two Operands
.text:00000001442F3CFB 74 0C                                         jz      short loc_1442F3D09 ; Jump if Zero (ZF=1)
.text:00000001442F3CFD 48 8D 05 FC 6E 5F 06                          lea     rax, unk_14A8EAC00 ; Load Effective Address
.text:00000001442F3D04 48 83 C4 28                                   add     rsp, 28h        ; Add
.text:00000001442F3D08 C3                                            retn                    ; Return Near from Procedure
.text:00000001442F3D09                               ; ---------------------------------------------------------------------------
.text:00000001442F3D09
.text:00000001442F3D09                               loc_1442F3D09:                          ; CODE XREF: sub_1442F3CF0+B↑j
.text:00000001442F3D09 48 8D 4C 24 30                                lea     rcx, [rsp+30h]  ; Load Effective Address
.text:00000001442F3D0E FF 15 54 C2 62 03                             call    cs:qword_14791FF68 ; Indirect Call Near Procedure
.text:00000001442F3D14 0F B6 44 24 30                                movzx   eax, byte ptr [rsp+30h] ; Move with Zero-Extend
.text:00000001442F3D19 34 61                                         xor     al, 61h         ; Logical Exclusive OR
.text:00000001442F3D1B 0F B6 C8                                      movzx   ecx, al         ; Move with Zero-Extend
.text:00000001442F3D1E D0 E9                                         shr     cl, 1           ; Shift Logical Right
.text:00000001442F3D20 80 E1 08                                      and     cl, 8           ; Logical AND
.text:00000001442F3D23 32 C8                                         xor     cl, al          ; Logical Exclusive OR
.text:00000001442F3D25 0F B6 D1                                      movzx   edx, cl         ; Move with Zero-Extend
.text:00000001442F3D28 80 E2 08                                      and     dl, 8           ; Logical AND
.text:00000001442F3D2B 02 D2                                         add     dl, dl          ; Add
.text:00000001442F3D2D 32 D1                                         xor     dl, cl          ; Logical Exclusive OR
.text:00000001442F3D2F 48 8D 0D CA 6E 5F 06                          lea     rcx, unk_14A8EAC00 ; Load Effective Address
.text:00000001442F3D36 0F B6 C2                                      movzx   eax, dl         ; Move with Zero-Extend
.text:00000001442F3D39 D0 E8                                         shr     al, 1           ; Shift Logical Right
.text:00000001442F3D3B 24 08                                         and     al, 8           ; Logical AND
.text:00000001442F3D3D 32 C2                                         xor     al, dl          ; Logical Exclusive OR
.text:00000001442F3D3F 88 05 03 6B 5F 06                             mov     cs:byte_14A8EA848, al
.text:00000001442F3D45 E8 06 54 FF FF                                call    sub_1442E9150   ; Call Procedure
.text:00000001442F3D4A C6 05 F8 6A 5F 06 01                          mov     cs:byte_14A8EA849, 1
.text:00000001442F3D51 48 83 C4 28                                   add     rsp, 28h        ; Add
.text:00000001442F3D55 C3                                            retn                    ; Return Near from Procedure
.text:00000001442F3D55                               sub_1442F3CF0   endp
.text:00000001442F3D55
.text:00000001442F3D55                               ; ---------------------------------------------------------------------------
.text:00000001442F3D56 CC CC CC CC CC CC CC CC CC CC                 align 20h


#pragma endregion
