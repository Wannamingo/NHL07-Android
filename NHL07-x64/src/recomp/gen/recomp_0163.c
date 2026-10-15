/**
 * nhl_07_recomp - Recompiled code chunk 163
 * Functions: 250 (0x003275E0 - 0x0032D4B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003275E0
 * Original: 0x003275E0 - 0x00327839 (601 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003275E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003275E0: ;
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8F0040);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00327600; /* je: equal / zero */

loc_003275F7: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    goto loc_00327602;

loc_00327600: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00327602: ;
    eax = MEM32(0x8F0044);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327614; /* je: equal / zero */

loc_0032760B: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    goto loc_00327616;

loc_00327614: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00327616: ;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ebp = ebx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_0032762D; /* jge: greater or equal (signed >=) */

loc_00327623: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = edi;
    ebx = esi;
    goto loc_0032763A;

loc_0032762D: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0032763A; /* jle: less or equal (signed <=) */

loc_0032762F: ;
    ebp = 1;
    MEM32(esp + 0x18) = esi;
    ebx = edi;

loc_0032763A: ;
    MEM8(esp + 0x13) = 0;
    PUSH32(esp, 0x00327644u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00327644: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003277F7; /* jne: not equal / not zero */

loc_0032764C: ;
    PUSH32(esp, 0x00327651u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_00327651: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003277F7; /* jne: not equal / not zero */

loc_00327659: ;
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00327671; /* jne: not equal / not zero */

loc_00327665: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x32);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032775F; /* je: equal / zero */

loc_00327671: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032770D; /* je: equal / zero */

loc_00327679: ;
    PUSH32(esp, 0x0032767Eu); RECOMP_ABI_CALL(0x00012306u, sub_00012306); /* call 0x00012306 */

loc_0032767E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032770D; /* je: equal / zero */

loc_00327686: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00327706; /* jne: not equal / not zero */

loc_0032768D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003276FA; /* jne: not equal / not zero */

loc_00327692: ;
    eax = 0x828A80;

loc_00327697: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003276A4u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_003276A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003276ADu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003276AD: ;
    ecx = eax;
    PUSH32(esp, 0x003276B4u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_003276B4: ;
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x8F5B4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003276D2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003276D2: ;
    ecx = MEM32(0x8FC758);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x828A70);
    PUSH32(esp, 0x003276EAu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003276EA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00327724; /* jne: not equal / not zero */

loc_003276EE: ;
    PUSH32(esp, 0x7DE67C);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    goto loc_0032772E;

loc_003276FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032775B; /* jne: not equal / not zero */

loc_003276FF: ;
    eax = 0x828A60;
    goto loc_00327697;

loc_00327706: ;
    eax = 0x828A50;
    goto loc_00327697;

loc_0032770D: ;
    ecx = MEM32(0x8FC758);
    PUSH32(esp, 0x828A3C);
    PUSH32(esp, 0x0032771Du); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_0032771D: ;
    MEM8(esp + 0x13) = 1;
    goto loc_0032775B;

loc_00327724: ;
    PUSH32(esp, 0x7DE674);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);

loc_0032772E: ;
    PUSH32(esp, 0x00327733u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327733: ;
    ecx = MEM32(0x8FC758);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x828A20);
    PUSH32(esp, 0x0032774Bu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_0032774B: ;
    ecx = MEM32(0x8FC758);
    PUSH32(esp, 0x828A0C);
    PUSH32(esp, 0x0032775Bu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_0032775B: ;
    eax = MEM32(esp + 0x14);

loc_0032775F: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM16(eax + 0x30) = LO16(edi);
    MEM16(eax + 0x32) = LO16(esi);
    if (CMP_NE(_fa, _fb)) goto loc_003277E1; /* jne: not equal / not zero */

loc_0032776F: ;
    PUSH32(esp, 0x00327774u); RECOMP_ABI_CALL(0x00012306u, sub_00012306); /* call 0x00012306 */

loc_00327774: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(esp + 0x14);
    esi = eax;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0x26)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(ebx + 0x26) (16-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00327794; /* jne: not equal / not zero */

loc_0032778A: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0x28)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ebx + 0x28) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032782E; /* je: equal / zero */

loc_00327794: ;
    edx = SX16(LO16(edi));
    eax = SX16(LO16(esi));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x003277A6u); RECOMP_ABI_CALL(0x00035D10u, sub_00035D10); /* call 0x00035D10 */

loc_003277A6: ;
    ecx = MEM32(0x8FC758);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x8289FC);
    PUSH32(esp, 0x003277BEu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003277BE: ;
    ecx = MEM32(0x8FC758);
    PUSH32(esp, 0x8289E8);
    PUSH32(esp, 0x003277CEu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003277CE: ;
    MEM16(ebx + 0x28) = LO16(edi);
    POP32(esp, edi);
    MEM16(ebx + 0x26) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003277E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM16(eax + 0x26) = LO16(ecx);
    MEM16(eax + 0x28) = LO16(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003277F7: ;
    ecx = MEM32(0x8FC758);
    PUSH32(esp, 0x828A3C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00327818u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327818: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xB4;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032782Bu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_0032782B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032782E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003278D0
 * Original: 0x003278D0 - 0x00327955 (133 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003278D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003278D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00327905u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00327905: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x1C) = ecx;
    ecx = esi + 0x38;
    MEM32(esi) = 0x828A8C;
    PUSH32(esp, 0x0032791Fu); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_0032791F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esi + 0x48) = LO8(ebx);
    MEM8(esi + 0x49) = LO8(ebx);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x907DE8);
    ecx = esi + 0x38;
    MEM16(esi + 0x20) = LO16(eax);
    MEM16(esi + 0x22) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    PUSH32(esp, 0x0032794Du); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0032794D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00327980
 * Original: 0x00327980 - 0x003279B5 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00327980: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x38;
    MEM32(esi) = 0x828A8C;
    PUSH32(esp, 0x00327991u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00327991: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x0032799Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032799F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003279AF; /* je: equal / zero */

loc_003279A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003279ACu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003279AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003279AF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003279D0
 * Original: 0x003279D0 - 0x00327C16 (582 bytes, 163 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003279D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003279D0: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x8F0650);
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0x8FC658);
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x28) = ebx;
    MEM32(ebp + 0x40) = eax;
    PUSH32(esp, 0x00327A00u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327A00: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00327A0Fu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00327A0F: ;
    esi = MEM32(esp + 0x148);
    PUSH32(esp, 0x7E11B4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327A2Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327A2E: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327A3Du); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00327A3D: ;
    eax = MEM32(ebp + 0x40);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00327B2C; /* jle: less or equal (signed <=) */

loc_00327A4D: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00327A57: ;
    ebp = edi + edi;
    PUSH32(esp, ebp);
    eax = esp + 0x24;
    PUSH32(esp, 0x827C70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327A6Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327A6A: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00327A7Eu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00327A7E: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327A93u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327A93: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327AA2u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00327AA2: ;
    ecx = MEM32(ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    edx = esp + 0x50;
    PUSH32(esp, 0x827C70);
    PUSH32(esp, edx);
    MEM32(esp + 0x50) = ecx;
    PUSH32(esp, 0x00327AB9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327AB9: ;
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00327ACDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327ACD: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00327ADFu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00327ADF: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327AF4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327AF4: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327B03u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00327B03: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    MEM32(eax) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x40);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00327A57; /* jl: less (signed <) */

loc_00327B26: ;
    ebx = MEM32(esp + 0x1C);
    ebp = ecx;

loc_00327B2C: ;
    PUSH32(esp, 0x907DE8);
    ecx = ebp + 0x38;
    PUSH32(esp, 0x00327B39u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00327B39: ;
    eax = MEM32(ebx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00327B71; /* jne: not equal / not zero */

loc_00327B43: ;
    PUSH32(esp, 0x828AE0);
    PUSH32(esp, esi);
    edx = esp + 0x38;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00327B58u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327B58: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327B68u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00327B68: ;
    MEM32(ebp + 0x44) = 0;
    goto loc_00327B9D;

loc_00327B71: ;
    PUSH32(esp, 0x828AD4);
    PUSH32(esp, esi);
    ecx = esp + 0x38;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00327B86u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327B86: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00327B96u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00327B96: ;
    MEM32(ebp + 0x44) = 1;

loc_00327B9D: ;
    ecx = MEM32(esp + 0x154);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x00327BAEu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00327BAE: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x828AC4);
    PUSH32(esp, 0x00327BBDu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00327BBD: ;
    PUSH32(esp, 0x828AB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327BD2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327BD2: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327BE1u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00327BE1: ;
    PUSH32(esp, 0x828AA0);
    PUSH32(esp, esi);
    eax = esp + 0x58;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327BF6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327BF6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x68;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00327C06u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00327C06: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00327CB0
 * Original: 0x00327CB0 - 0x00327DBC (268 bytes, 81 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327CB0: ;
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x8F0650);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00327DB2; /* jle: less or equal (signed <=) */

loc_00327CD6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x12C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ebx = 1;
    edi = ecx + 0x28;
    MEM32(esp + 0x10) = edx;
    /* nop */

loc_00327CF0: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327D5B; /* je: equal / zero */

loc_00327CFA: ;
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, 0x827C70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327D0Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327D0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00327D1Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327D1A: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00327D29u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00327D29: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = ebp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327D41u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327D41: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00327D50u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00327D50: ;
    ecx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = esi;
    SET_LO8(eax, 1);

loc_00327D5B: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = esi;
    esi = MEM32(ecx + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00327CF0; /* jl: less (signed <) */

loc_00327D80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327DAF; /* je: equal / zero */

loc_00327D84: ;
    PUSH32(esp, 0x828AEC);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x4C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    eax = esp + 0x34;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327D9Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327D9C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00327DACu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00327DAC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00327DAF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00327DB2: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00327E00
 * Original: 0x00327E00 - 0x00327F58 (344 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327E00: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    eax = MEM32(edi + 0x48);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00327E34; /* je: equal / zero */

loc_00327E1E: ;
    PUSH32(esp, 6);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327E2Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327E2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = ebx;

loc_00327E34: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327E4D; /* je: equal / zero */

loc_00327E3B: ;
    ecx = edi;
    PUSH32(esp, 0x00327E42u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00327E42: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327F30; /* je: equal / zero */

loc_00327E4A: ;
    MEM8(esi + 0xD) = LO8(ebx);

loc_00327E4D: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327E9F; /* je: equal / zero */

loc_00327E54: ;
    PUSH32(esp, 0x907DE8);
    ecx = esi + 0x24;
    PUSH32(esp, 0x00327E61u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00327E61: ;
    PUSH32(esp, 0x828B0C);
    ecx = edi + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    MEM32(esi + 0x2C) = 4;
    MEM8(esi + 0x20) = 0;
    PUSH32(esp, 0x00327E84u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327E84: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327E94u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00327E94: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00327E9Fu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00327E9F: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327F3C; /* je: equal / zero */

loc_00327EAA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    ebp = esi + 0x24;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00327EBBu); RECOMP_ABI_CALL(0x0002D5B6u, sub_0002D5B6); /* call 0x0002D5B6 */

loc_00327EBB: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00327EC3u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00327EC3: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00327ECCu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00327ECC: ;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00327EDAu); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00327EDA: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00327EE2u); RECOMP_ABI_CALL(0x00020280u, sub_00020280); /* call 0x00020280 */

loc_00327EE2: ;
    ecx = esp + 0x10;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00327EEDu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00327EED: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327F2F; /* je: equal / zero */

loc_00327EF1: ;
    PUSH32(esp, 0x828AFC);
    ecx = edi;
    PUSH32(esp, 0x00327EFDu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00327EFD: ;
    edx = MEM32(esi + 0x2C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    PUSH32(esp, eax);
    ecx = 0x8B2228;
    MEM32(esi + 0x2C) = edx;
    PUSH32(esp, 0x00327F11u); RECOMP_ABI_CALL(0x000123A1u, sub_000123A1); /* call 0x000123A1 */

loc_00327F11: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00327F23; /* jne: not equal / not zero */

loc_00327F18: ;
    ecx = MEM32(0x8F0650);
    PUSH32(esp, 0x00327F23u); RECOMP_ABI_CALL(0x000125E5u, sub_000125E5); /* call 0x000125E5 */

loc_00327F23: ;
    PUSH32(esp, 0x907DE8);
    ecx = ebp;
    PUSH32(esp, 0x00327F2Fu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00327F2F: ;
    POP32(esp, ebp);

loc_00327F30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00327F3C: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327F30; /* je: equal / zero */

loc_00327F43: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00327F4Cu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00327F4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00327FB0
 * Original: 0x00327FB0 - 0x0032810A (346 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00327FB0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), 2 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00327FE1; /* je: equal / zero */

loc_00327FC7: ;
    PUSH32(esp, 7);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327FD7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327FD7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = 2;

loc_00327FE1: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032800B; /* je: equal / zero */

loc_00327FE8: ;
    ecx = edi;
    PUSH32(esp, 0x00327FEFu); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00327FEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003280FF; /* je: equal / zero */

loc_00327FF7: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00328000u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00328000: ;
    MEM32(esi + 0x20) = 0;
    MEM8(esi + 0xD) = 0;

loc_0032800B: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00328023; /* jne: not equal / not zero */

loc_00328012: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00328019u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_00328019: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00328023; /* jne: not equal / not zero */

loc_00328020: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00328023: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003280FF; /* jne: not equal / not zero */

loc_0032802D: ;
    MEM32(esi + 0x20) = 2;
    esi = MEM32(0x8F0650);
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003280AB; /* je: equal / zero */

loc_00328046: ;
    PUSH32(esp, 0x828B80);
    PUSH32(esp, 0x827CE8);
    PUSH32(esp, 0x00328055u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00328055: ;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x828B68);
    PUSH32(esp, 0x00328069u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00328069: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00328072u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00328072: ;
    ecx = eax;
    PUSH32(esp, 0x00328079u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00328079: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003280A4; /* je: equal / zero */

loc_0032807D: ;
    eax = MEM32(esi + 0x9C);
    edx = MEM32(eax);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x0032809Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032809A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC658);
    goto loc_003280BF;

loc_003280A4: ;
    PUSH32(esp, 0x7E0960);
    goto loc_003280BF;

loc_003280AB: ;
    PUSH32(esp, 0x828B48);
    PUSH32(esp, 0x827CE8);
    PUSH32(esp, 0x003280BAu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003280BA: ;
    PUSH32(esp, 0x828B30);

loc_003280BF: ;
    ecx = edi;
    PUSH32(esp, 0x827CE0);
    PUSH32(esp, 0x003280CBu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003280CB: ;
    PUSH32(esp, 0x828B20);
    edx = edi + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003280E3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003280E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003280F3u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_003280F3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x003280FFu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003280FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00328160
 * Original: 0x00328160 - 0x00328187 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328160: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00328171u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00328171: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00328181; /* je: equal / zero */

loc_00328178: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032817Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032817E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00328181: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00328190
 * Original: 0x00328190 - 0x003282F3 (355 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328190: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003281A3u); RECOMP_ABI_CALL(0x0001DF5Du, sub_0001DF5D); /* call 0x0001DF5D */

loc_003281A3: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, 0x7E0298);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003281B7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003281B7: ;
    eax = esp + 0x38;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003281C6u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_003281C6: ;
    esi = MEM32(esp + 0xC4);
    PUSH32(esp, 0x7E02C0);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003281E5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003281E5: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003281F4u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_003281F4: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8F5B2C);
    PUSH32(esp, 0x00328203u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00328203: ;
    PUSH32(esp, 0x827CB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00328218u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00328218: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032822Au); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_0032822A: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00328236u); RECOMP_ABI_CALL(0x0001DF5Du, sub_0001DF5D); /* call 0x0001DF5D */

loc_00328236: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, 0x7E0298);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032824Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032824A: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00328259u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00328259: ;
    PUSH32(esp, 0x7E0288);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032826Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032826E: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032827Du); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_0032827D: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8F62A4);
    PUSH32(esp, 0x0032828Cu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_0032828C: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x827CE8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003282A4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003282A4: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003282B3u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_003282B3: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8F6A74);
    PUSH32(esp, 0x003282C2u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_003282C2: ;
    PUSH32(esp, 0x827CE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003282D7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003282D7: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003282E6u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_003282E6: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00328350
 * Original: 0x00328350 - 0x00328375 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00328358u); RECOMP_ABI_CALL(0x000234D5u, sub_000234D5); /* call 0x000234D5 */

loc_00328358: ;
    ecx = esi;
    PUSH32(esp, 0x0032835Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032835F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032836F; /* je: equal / zero */

loc_00328366: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032836Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032836C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032836F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00328380
 * Original: 0x00328380 - 0x00328467 (231 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328380: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0xF4);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328464; /* je: equal / zero */

loc_00328398: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_003283A0;

    /* nop */

loc_003283A0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    esi = ecx + eax;
    if (CMP_A(_fa, _fb)) goto loc_00328443; /* ja: above (unsigned >) */

loc_003283AC: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x328468); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003283B3u) goto loc_003283B3;
    if (_jt == 0x003283D7u) goto loc_003283D7;
    if (_jt == 0x003283FBu) goto loc_003283FB;
    if (_jt == 0x0032841Fu) goto loc_0032841F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003283B3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x003283BCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003283BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003283D0; /* je: equal / zero */

loc_003283C3: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003283CBu); RECOMP_ABI_CALL(0x00032584u, sub_00032584); /* call 0x00032584 */

loc_003283CB: ;
    MEM32(ebx + 0xC) = eax;
    goto loc_0032844B;

loc_003283D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0xC) = eax;
    goto loc_0032844B;

loc_003283D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x003283E0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003283E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003283F4; /* je: equal / zero */

loc_003283E7: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003283EFu); RECOMP_ABI_CALL(0x0001BFA0u, sub_0001BFA0); /* call 0x0001BFA0 */

loc_003283EF: ;
    MEM32(ebx + 0x10) = eax;
    goto loc_0032844B;

loc_003283F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x10) = eax;
    goto loc_0032844B;

loc_003283FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00328404u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00328404: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328418; /* je: equal / zero */

loc_0032840B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00328413u); RECOMP_ABI_CALL(0x00033295u, sub_00033295); /* call 0x00033295 */

loc_00328413: ;
    MEM32(ebx + 0x14) = eax;
    goto loc_0032844B;

loc_00328418: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x14) = eax;
    goto loc_0032844B;

loc_0032841F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00328428u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00328428: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032843C; /* je: equal / zero */

loc_0032842F: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00328437u); RECOMP_ABI_CALL(0x000226EDu, sub_000226ED); /* call 0x000226ED */

loc_00328437: ;
    MEM32(ebx + 0x18) = eax;
    goto loc_0032844B;

loc_0032843C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x18) = eax;
    goto loc_0032844B;

loc_00328443: ;
    MEM32(ebx + edi * 4 + 0xC) = 0;

loc_0032844B: ;
    ecx = MEM32(ebx + 0xF4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + edi * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM32(ecx + eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax + 0x10), 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003283A0; /* jne: not equal / not zero */

loc_00328463: ;
    POP32(esp, esi);

loc_00328464: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003284C0
 * Original: 0x003284C0 - 0x003285A0 (224 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003284C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003284C0: ;
    SET_LO8(eax, MEM8(0x896176));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003284D3; /* je: equal / zero */

loc_003284CF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003284F8;

loc_003284D3: ;
    SET_LO8(eax, MEM8(esi + 0x46));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003284E1; /* jle: less or equal (signed <=) */

loc_003284DA: ;
    edi = 1;
    goto loc_003284EE;

loc_003284E1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx;

loc_003284EE: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003284F8; /* jne: not equal / not zero */

loc_003284F5: ;
    edi = edi | 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003284F8: ;
    PUSH32(esp, 0x003284FDu); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_003284FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032856B; /* jne: not equal / not zero */

loc_00328501: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032856B; /* je: equal / zero */

loc_0032850A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032856B; /* je: equal / zero */

loc_0032850E: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328525; /* je: equal / zero */

loc_00328515: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = edx;
    goto loc_00328528;

loc_00328525: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00328528: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032853F; /* je: equal / zero */

loc_0032852F: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    POP32(esp, ebx);
    goto loc_00328542;

loc_0032853F: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00328542: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x896160));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    PUSH32(esp, edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x3F);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00328568u); RECOMP_ABI_CALL(0x000328A4u, sub_000328A4); /* call 0x000328A4 */

loc_00328568: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032856B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003285A0
 * Original: 0x003285A0 - 0x003286D0 (304 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003285A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003285A0: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xC);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00328635; /* ja: above (unsigned >) */

loc_003285B4: ;
    eax = ZX8(MEM8(eax + 0x328658));
    { uint32_t _jt = MEM32(eax * 4 + 0x328638); /* switch: 8 entries, 8 targets */
    if (_jt == 0x003285C2u) goto loc_003285C2;
    if (_jt == 0x003285D5u) goto loc_003285D5;
    if (_jt == 0x003285E2u) goto loc_003285E2;
    if (_jt == 0x00328602u) goto loc_00328602;
    if (_jt == 0x0032860Fu) goto loc_0032860F;
    if (_jt == 0x0032861Cu) goto loc_0032861C;
    if (_jt == 0x00328629u) goto loc_00328629;
    if (_jt == 0x00328635u) goto loc_00328635;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003285C2: ;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00328635; /* jl: less (signed <) */

loc_003285C8: ;
    MEM32(esp + 4) = 5;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_003285D5: ;
    ecx = ZX8(MEM8(ecx + 0x1D));
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00017982(); return; /* tail jmp 0x00017982 */

loc_003285E2: ;
    _fa = (uint32_t)(MEM8(ecx + 0x1F)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x1F), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003285F5; /* jne: not equal / not zero */

loc_003285E8: ;
    MEM32(esp + 4) = 6;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_003285F5: ;
    MEM32(esp + 4) = 7;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_00328602: ;
    MEM32(esp + 4) = 8;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_0032860F: ;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_0032861C: ;
    MEM32(esp + 4) = 0xD;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_00328629: ;
    edx = MEM32(ecx + 0x1C);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_00328635: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003286D0
 * Original: 0x003286D0 - 0x00328700 (48 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003286D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003286D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x24));
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003286E7u); RECOMP_ABI_CALL(0x00015B46u, sub_00015B46); /* call 0x00015B46 */

loc_003286E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00328700
 * Original: 0x00328700 - 0x0032885B (347 bytes, 102 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328700: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328779; /* je: equal / zero */

loc_0032870F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328779; /* je: equal / zero */

loc_00328713: ;
    SET_LO8(eax, MEM8(esp + 0x108));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00328737; /* jne: not equal / not zero */

loc_0032871E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032872Du); RECOMP_ABI_CALL(0x0001D765u, sub_0001D765); /* call 0x0001D765 */

loc_0032872D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00328737: ;
    ecx = MEM32(esp + 0x10C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    MEM8(esp) = 0;
    if (CMP_A(_fa, _fb)) goto loc_0032875B; /* ja: above (unsigned >) */

loc_0032874B: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x32885C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00328752u) goto loc_00328752;
    if (_jt == 0x00328780u) goto loc_00328780;
    if (_jt == 0x0032878Cu) goto loc_0032878C;
    if (_jt == 0x00328793u) goto loc_00328793;
    if (_jt == 0x0032879Au) goto loc_0032879A;
    if (_jt == 0x003287A1u) goto loc_003287A1;
    if (_jt == 0x003287A8u) goto loc_003287A8;
    if (_jt == 0x003287AFu) goto loc_003287AF;
    if (_jt == 0x003287B6u) goto loc_003287B6;
    if (_jt == 0x003287BDu) goto loc_003287BD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00328752: ;
    eax = 0x828CBC;
    MEM8(esp) = 1;

loc_0032875B: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00328776u); RECOMP_ABI_CALL(0x0001D765u, sub_0001D765); /* call 0x0001D765 */

loc_00328776: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00328779: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00328780: ;
    eax = 0x828C94;
    edx = 1;
    goto loc_0032875B;

loc_0032878C: ;
    eax = 0x828C74;
    goto loc_0032875B;

loc_00328793: ;
    eax = 0x828C4C;
    goto loc_0032875B;

loc_0032879A: ;
    eax = 0x828C2C;
    goto loc_0032875B;

loc_003287A1: ;
    eax = 0x828C08;
    goto loc_0032875B;

loc_003287A8: ;
    eax = 0x828BE4;
    goto loc_0032875B;

loc_003287AF: ;
    eax = 0x828BBC;
    goto loc_0032875B;

loc_003287B6: ;
    eax = 0x828B9C;
    goto loc_0032875B;

loc_003287BD: ;
    PUSH32(esp, 0x80);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7F0D54);
    PUSH32(esp, 0x003287D4u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_003287D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003287DDu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003287DD: ;
    ecx = eax;
    PUSH32(esp, 0x003287E4u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_003287E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032882E; /* je: equal / zero */

loc_003287E8: ;
    ecx = MEM32(esp + 0x114);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00328803u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00328803: ;
    ecx = MEM32(esp + 0x11C);
    eax = MEM32(esp + 0x114);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00328824u); RECOMP_ABI_CALL(0x0001D765u, sub_0001D765); /* call 0x0001D765 */

loc_00328824: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032882E: ;
    ecx = MEM32(esp + 0x110);
    eax = MEM32(esp + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x00328851u); RECOMP_ABI_CALL(0x0001D765u, sub_0001D765); /* call 0x0001D765 */

loc_00328851: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003288F0
 * Original: 0x003288F0 - 0x00328931 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003288F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003288F0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328930; /* je: equal / zero */

loc_003288F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328930; /* je: equal / zero */

loc_003288FD: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032892F; /* je: equal / zero */

loc_00328908: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032892F; /* je: equal / zero */

loc_0032890F: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00328919u); RECOMP_ABI_CALL(0x000184D6u, sub_000184D6); /* call 0x000184D6 */

loc_00328919: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x00328924u); RECOMP_ABI_CALL(0x00014331u, sub_00014331); /* call 0x00014331 */

loc_00328924: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0032892Fu); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_0032892F: ;
    POP32(esp, esi);

loc_00328930: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00328950
 * Original: 0x00328950 - 0x003289A1 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328950: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003289A0; /* je: equal / zero */

loc_00328959: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003289A0; /* je: equal / zero */

loc_0032895D: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8960F1);
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003289A0; /* jge: greater or equal (signed >=) */

loc_0032896C: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032899F; /* je: equal / zero */

loc_00328977: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032899F; /* je: equal / zero */

loc_0032897E: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00328989u); RECOMP_ABI_CALL(0x000254B5u, sub_000254B5); /* call 0x000254B5 */

loc_00328989: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x00328994u); RECOMP_ABI_CALL(0x00014331u, sub_00014331); /* call 0x00014331 */

loc_00328994: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0032899Fu); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_0032899F: ;
    POP32(esp, esi);

loc_003289A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003289C0
 * Original: 0x003289C0 - 0x00328A13 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003289C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003289C0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A12; /* je: equal / zero */

loc_003289C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A12; /* je: equal / zero */

loc_003289CD: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A12; /* je: equal / zero */

loc_003289D6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A12; /* je: equal / zero */

loc_003289DF: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A11; /* je: equal / zero */

loc_003289EA: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A11; /* je: equal / zero */

loc_003289F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003289F8u); RECOMP_ABI_CALL(0x0001E278u, sub_0001E278); /* call 0x0001E278 */

loc_003289F8: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x00328A03u); RECOMP_ABI_CALL(0x00014331u, sub_00014331); /* call 0x00014331 */

loc_00328A03: ;
    PUSH32(esp, 0x40200000);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00328A11u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00328A11: ;
    POP32(esp, esi);

loc_00328A12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00328A30
 * Original: 0x00328A30 - 0x00328A80 (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328A30: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A7F; /* je: equal / zero */

loc_00328A39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A7F; /* je: equal / zero */

loc_00328A3D: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A7F; /* je: equal / zero */

loc_00328A46: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A7F; /* je: equal / zero */

loc_00328A4F: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A7E; /* je: equal / zero */

loc_00328A5A: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A7E; /* je: equal / zero */

loc_00328A61: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00328A68u); RECOMP_ABI_CALL(0x00025B4Au, sub_00025B4A); /* call 0x00025B4A */

loc_00328A68: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x00328A73u); RECOMP_ABI_CALL(0x00014331u, sub_00014331); /* call 0x00014331 */

loc_00328A73: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00328A7Eu); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00328A7E: ;
    POP32(esp, esi);

loc_00328A7F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00328AA0
 * Original: 0x00328AA0 - 0x00328BD0 (304 bytes, 84 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328AA0: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x118);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328BAC; /* je: equal / zero */

loc_00328ABC: ;
    ecx = ebp;
    PUSH32(esp, 0x00328AC3u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00328AC3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328BC5; /* je: equal / zero */

loc_00328ACB: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00328AD8u); RECOMP_ABI_CALL(0x0001DF5Du, sub_0001DF5D); /* call 0x0001DF5D */

loc_00328AD8: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E02D0);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00328AECu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00328AEC: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00328AFBu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00328AFB: ;
    PUSH32(esp, 0x7E02C0);
    esi = ebp + 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00328B13u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00328B13: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00328B22u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00328B22: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00328B2Eu); RECOMP_ABI_CALL(0x0001DF5Du, sub_0001DF5D); /* call 0x0001DF5D */

loc_00328B2E: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E02D0);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00328B42u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00328B42: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00328B54u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00328B54: ;
    PUSH32(esp, 0x7E0288);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00328B69u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00328B69: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00328B78u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00328B78: ;
    PUSH32(esp, 0x828CDC);
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00328B8Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00328B8D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00328B9Du); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00328B9D: ;
    MEM8(edi + 0xD) = 0;
    SET_LO8(eax, MEM8(edi + 0xD));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00328BC5; /* jne: not equal / not zero */

loc_00328BAC: ;
    SET_LO8(eax, MEM8(edi + 0x3E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328BC5; /* je: equal / zero */

loc_00328BB6: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00328BBEu); RECOMP_ABI_CALL(0x0002721Au, sub_0002721A); /* call 0x0002721A */

loc_00328BBE: ;
    MEM8(edi + 0x3E4) = 0;

loc_00328BC5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00328C20
 * Original: 0x00328C20 - 0x00328C86 (102 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328C20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00328C55u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00328C55: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x1C) = ecx;
    ecx = esi;
    MEM32(esi) = 0x828CE8;
    MEM32(esi + 0x350) = 0xFFFFFFFFu;
    MEM32(esi + 0x354) = ebx;
    PUSH32(esp, 0x00328C7Eu); RECOMP_ABI_CALL(0x00013373u, sub_00013373); /* call 0x00013373 */

loc_00328C7E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00328CA0
 * Original: 0x00328CA0 - 0x00328CC7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328CA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00328CB1u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00328CB1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00328CC1; /* je: equal / zero */

loc_00328CB8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00328CBEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00328CBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00328CC1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00328CD0
 * Original: 0x00328CD0 - 0x00328D7E (174 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328CD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00328D73; /* ja: above (unsigned >) */

loc_00328CE1: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x328D80); /* switch: 7 entries, 6 targets */
    if (_jt == 0x00328CE8u) goto loc_00328CE8;
    if (_jt == 0x00328D01u) goto loc_00328D01;
    if (_jt == 0x00328D1Au) goto loc_00328D1A;
    if (_jt == 0x00328D33u) goto loc_00328D33;
    if (_jt == 0x00328D4Cu) goto loc_00328D4C;
    if (_jt == 0x00328D65u) goto loc_00328D65;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00328CE8: ;
    ecx = esi;
    PUSH32(esp, 0x00328CEFu); RECOMP_ABI_CALL(0x0002639Cu, sub_0002639C); /* call 0x0002639C */

loc_00328CEF: ;
    MEM32(esi + 0x744) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00328D01: ;
    ecx = esi;
    PUSH32(esp, 0x00328D08u); RECOMP_ABI_CALL(0x0001508Du, sub_0001508D); /* call 0x0001508D */

loc_00328D08: ;
    MEM32(esi + 0x744) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00328D1A: ;
    ecx = esi;
    PUSH32(esp, 0x00328D21u); RECOMP_ABI_CALL(0x0002F208u, sub_0002F208); /* call 0x0002F208 */

loc_00328D21: ;
    MEM32(esi + 0x744) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00328D33: ;
    ecx = esi;
    PUSH32(esp, 0x00328D3Au); RECOMP_ABI_CALL(0x0001CDA1u, sub_0001CDA1); /* call 0x0001CDA1 */

loc_00328D3A: ;
    MEM32(esi + 0x744) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00328D4C: ;
    ecx = esi;
    PUSH32(esp, 0x00328D53u); RECOMP_ABI_CALL(0x00023737u, sub_00023737); /* call 0x00023737 */

loc_00328D53: ;
    MEM32(esi + 0x744) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00328D65: ;
    ecx = esi;
    PUSH32(esp, 0x00328D6Cu); RECOMP_ABI_CALL(0x00022AD5u, sub_00022AD5); /* call 0x00022AD5 */

loc_00328D6C: ;
    MEM32(esi + 0x20) = 0;

loc_00328D73: ;
    MEM32(esi + 0x744) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00328D7E
 * Original: 0x00328D7E - 0x00328DD0 (82 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328D7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328D7E: ;
    edi = edi;
    PUSH32(esp, 0x00328D85u); RECOMP_ABI_CALL(0x0132C011u, sub_0132C011); /* call 0x0132C011 */

loc_00328D85: ;
    esi = edx;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = edx;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = edx;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + ecx * 4 + 0x32) = MEM8(ebp + ecx * 4 + 0x32) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + ecx * 4 + 0x32)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + ecx * 4 + 0x32) = MEM8(ebp + ecx * 4 + 0x32) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + ecx * 4 + 0x32)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + -115) = MEM8(ebp + -115) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebp + -115)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00328DD0
 * Original: 0x00328DD0 - 0x00328E23 (83 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    if ((_fa == 0)) goto loc_00328E0C; /* je: equal / zero */

loc_00328DDF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00328DF5; /* je: equal / zero */

loc_00328DE2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00328E18; /* jne: not equal / not zero */

loc_00328DE5: ;
    PUSH32(esp, 0x00328DEAu); RECOMP_ABI_CALL(0x0002CD4Bu, sub_0002CD4B); /* call 0x0002CD4B */

loc_00328DEA: ;
    MEM32(esi + 0x600) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00328DF5: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00328E01u); RECOMP_ABI_CALL(0x0001662Cu, sub_0001662C); /* call 0x0001662C */

loc_00328E01: ;
    MEM32(esi + 0x600) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00328E0C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00328E18u); RECOMP_ABI_CALL(0x00013EDBu, sub_00013EDB); /* call 0x00013EDB */

loc_00328E18: ;
    MEM32(esi + 0x600) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00328E40
 * Original: 0x00328E40 - 0x00328E99 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328E40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00328E52; /* jne: not equal / not zero */

loc_00328E4D: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00328E52: ;
    eax = MEM32(esi + 0x600);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00328E94; /* jne: not equal / not zero */

loc_00328E5B: ;
    SET_LO8(eax, MEM8(esi + 0x605));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00328E69; /* jne: not equal / not zero */

loc_00328E65: ;
    PUSH32(esp, 0);
    goto loc_00328E6F;

loc_00328E69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00328E80; /* jne: not equal / not zero */

loc_00328E6D: ;
    PUSH32(esp, 1);

loc_00328E6F: ;
    ecx = esi;
    PUSH32(esp, 0x00328E76u); RECOMP_ABI_CALL(0x00013EDBu, sub_00013EDB); /* call 0x00013EDB */

loc_00328E76: ;
    MEM32(esi + 0x600) = 0;

loc_00328E80: ;
    ecx = MEM32(0x8FC758);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 8);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00328E94u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00328E94: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00328EB0
 * Original: 0x00328EB0 - 0x00328FA1 (241 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00328EB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00328F9C; /* je: equal / zero */

loc_00328EC0: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328EE0; /* je: equal / zero */

loc_00328EC6: ;
    PUSH32(esp, 0xA);
    eax = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00328ED6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00328ED6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = 5;

loc_00328EE0: ;
    SET_LO8(eax, MEM8(edi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328F03; /* je: equal / zero */

loc_00328EE7: ;
    ecx = esi;
    PUSH32(esp, 0x00328EEEu); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00328EEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328F9C; /* je: equal / zero */

loc_00328EF6: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00328EFFu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00328EFF: ;
    MEM8(edi + 0xD) = 0;

loc_00328F03: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00328F0Du); RECOMP_ABI_CALL(0x00033042u, sub_00033042); /* call 0x00033042 */

loc_00328F0D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00328F17u); RECOMP_ABI_CALL(0x00033042u, sub_00033042); /* call 0x00033042 */

loc_00328F17: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, MEM8(0x8F6A27));
    if (CMP_NE(_fa, _fb)) goto loc_00328F2B; /* jne: not equal / not zero */

loc_00328F27: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00328F48;

loc_00328F2B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328F3A; /* je: equal / zero */

loc_00328F30: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328F3A; /* je: equal / zero */

loc_00328F35: ;
    eax = MEM32(ecx + 0x30);
    goto loc_00328F3D;

loc_00328F3A: ;
    eax = MEM32(ecx + 0x18);

loc_00328F3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00328F45; /* jne: not equal / not zero */

loc_00328F41: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00328F48;

loc_00328F45: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_00328F48: ;
    _fa = (uint32_t)(MEM8(edi + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x34), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328F9C; /* je: equal / zero */

loc_00328F4D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00328F55; /* jne: not equal / not zero */

loc_00328F51: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00328F72;

loc_00328F55: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328F64; /* je: equal / zero */

loc_00328F5A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328F64; /* je: equal / zero */

loc_00328F5F: ;
    eax = MEM32(ecx + 0x30);
    goto loc_00328F67;

loc_00328F64: ;
    eax = MEM32(ecx + 0x18);

loc_00328F67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00328F6F; /* jne: not equal / not zero */

loc_00328F6B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00328F72;

loc_00328F6F: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_00328F72: ;
    MEM8(edi + 0x34) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x7E94C8;
    if (CMP_NE(_fa, _fb)) goto loc_00328F83; /* jne: not equal / not zero */

loc_00328F7E: ;
    eax = 0x7E94C4;

loc_00328F83: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82805C);
    ecx = esi;
    PUSH32(esp, 0x00328F90u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00328F90: ;
    PUSH32(esp, 0x828044);
    ecx = esi;
    PUSH32(esp, 0x00328F9Cu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00328F9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00328FE0
 * Original: 0x00328FE0 - 0x00329470 (1168 bytes, 333 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328FE0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x11C);
    eax = MEM32(edi + 0x48);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ecx;
    MEM8(esp + 0xF) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00329019; /* je: equal / zero */

loc_00329003: ;
    PUSH32(esp, 6);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00329013u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329013: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = ebx;

loc_00329019: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003290AE; /* je: equal / zero */

loc_00329024: ;
    ecx = edi;
    PUSH32(esp, 0x0032902Bu); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_0032902B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329464; /* je: equal / zero */

loc_00329033: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0032903Bu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_0032903B: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0xD) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_003290AE; /* jne: not equal / not zero */

loc_00329046: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00329050;

    /* nop */

loc_00329050: ;
    SET_LO8(ecx, MEM8(eax + 0x8F5B4C));
    MEM8(eax + 0x8FC658) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329050; /* jne: not equal / not zero */

loc_00329061: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x828E0C);
    ecx = edi;
    PUSH32(esp, 0x00329072u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00329072: ;
    PUSH32(esp, 0x828DF8);
    ecx = edi;
    PUSH32(esp, 0x0032907Eu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_0032907E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00329080: ;
    SET_LO8(ecx, MEM8(eax + 0x8F62C4));
    MEM8(eax + 0x8FC658) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329080; /* jne: not equal / not zero */

loc_00329091: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x828DE8);
    ecx = edi;
    PUSH32(esp, 0x003290A2u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003290A2: ;
    PUSH32(esp, 0x828DD4);
    ecx = edi;
    PUSH32(esp, 0x003290AEu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003290AE: ;
    PUSH32(esp, 0x003290B3u); RECOMP_ABI_CALL(0x000229D6u, sub_000229D6); /* call 0x000229D6 */

loc_003290B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003290D5; /* je: equal / zero */

loc_003290B7: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329100; /* je: equal / zero */

loc_003290BE: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x003290C7u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003290C7: ;
    PUSH32(esp, 0x828DC0);
    ecx = edi;
    PUSH32(esp, 0x003290D3u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003290D3: ;
    goto loc_00329100;

loc_003290D5: ;
    eax = MEM32(0x904BE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003290E7; /* je: equal / zero */

loc_003290E0: ;
    PUSH32(esp, 0x828DAC);
    goto loc_003290EC;

loc_003290E7: ;
    PUSH32(esp, 0x828DC0);

loc_003290EC: ;
    PUSH32(esp, 0x003290F1u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003290F1: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329100; /* jne: not equal / not zero */

loc_003290F8: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00329100u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00329100: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00329106u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00329106: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032916D; /* je: equal / zero */

loc_0032910A: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x00329119u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00329119: ;
    PUSH32(esp, 0x828DA0);
    ebx = edi + 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00329131u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329131: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00329140u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00329140: ;
    PUSH32(esp, 0x828D90);
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00329155u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329155: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00329165u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00329165: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003292F3;

loc_0032916D: ;
    SET_LO8(eax, MEM8(0x8FCA4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329292; /* jne: not equal / not zero */

loc_0032917A: ;
    PUSH32(esp, 0x0032917Fu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0032917F: ;
    ecx = eax;
    PUSH32(esp, 0x00329186u); RECOMP_ABI_CALL(0x00026996u, sub_00026996); /* call 0x00026996 */

loc_00329186: ;
    ecx = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = edx;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ebp = _sv >> _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003291B1u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_003291B1: ;
    ecx = eax;
    PUSH32(esp, 0x003291B8u); RECOMP_ABI_CALL(0x00026996u, sub_00026996); /* call 0x00026996 */

loc_003291B8: ;
    ecx = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebp), 0 (16-bit) */
    ebx = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00329230; /* jle: less or equal (signed <=) */

loc_003291DA: ;
    _fa = (uint32_t)(MEM16(esi + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x20), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003291EA; /* jne: not equal / not zero */

loc_003291E0: ;
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x22), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003292F3; /* je: equal / zero */

loc_003291EA: ;
    edx = SX16(LO16(ebx));
    eax = LO16(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8FC658);
    MEM16(esi + 0x20) = LO16(ebp);
    MEM16(esi + 0x22) = LO16(ebx);
    PUSH32(esp, 0x00329204u); RECOMP_ABI_CALL(0x00035D10u, sub_00035D10); /* call 0x00035D10 */

loc_00329204: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00329207: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x828DA0);
    ecx = edi;
    PUSH32(esp, 0x00329218u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00329218: ;
    PUSH32(esp, 0x828D90);
    ecx = edi;
    PUSH32(esp, 0x00329224u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00329224: ;
    SET_LO8(ecx, MEM8(esi + 0x34));
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_003292F3;

loc_00329230: ;
    PUSH32(esp, 0x00329235u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00329235: ;
    ecx = eax;
    PUSH32(esp, 0x0032923Cu); RECOMP_ABI_CALL(0x00026996u, sub_00026996); /* call 0x00026996 */

loc_0032923C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x22), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329254; /* jne: not equal / not zero */

loc_0032924A: ;
    _fa = (uint32_t)(MEM16(esi + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x24), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003292F3; /* je: equal / zero */

loc_00329254: ;
    MEM16(esi + 0x24) = LO16(edx);
    PUSH32(esp, 0);
    edx = SX16(LO16(edx));
    eax = SX16(LO16(ebx));
    PUSH32(esp, 1);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7CC); /* mulss */
    PUSH32(esp, ecx);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x8FC658);
    MEM16(esi + 0x22) = LO16(ebx);
    PUSH32(esp, 0x0032928Au); RECOMP_ABI_CALL(0x0001271Bu, sub_0001271B); /* call 0x0001271B */

loc_0032928A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00329207;

loc_00329292: ;
    eax = MEM32(0x8FCA48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003292B7; /* je: equal / zero */

loc_0032929B: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x828D88);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x003292B2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003292B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003292CF;

loc_003292B7: ;
    eax = MEM32(0x828D80);
    SET_LO16(ecx, MEM16(0x828D84));
    MEM32(0x8FC658) = eax;
    MEM16(0x8FC65C) = LO16(ecx);

loc_003292CF: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x828DA0);
    ecx = edi;
    PUSH32(esp, 0x003292E0u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003292E0: ;
    PUSH32(esp, 0x828D90);
    ecx = edi;
    PUSH32(esp, 0x003292ECu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003292EC: ;
    SET_LO8(edx, MEM8(esi + 0x34));
    MEM8(esp + 0x13) = LO8(edx);

loc_003292F3: ;
    ecx = esi;
    PUSH32(esp, 0x003292FAu); RECOMP_ABI_CALL(0x0002C8EBu, sub_0002C8EB); /* call 0x0002C8EB */

loc_003292FA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00329403; /* jne: not equal / not zero */

loc_00329307: ;
    SET_LO16(eax, MEM16(0x896166));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x2A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x2A) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329358; /* je: equal / zero */

loc_00329313: ;
    MEM16(esi + 0x2A) = LO16(eax);
    SET_LO16(eax, MEM16(0x896166));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00329330; /* jge: greater or equal (signed >=) */

loc_00329323: ;
    eax = SX16(LO16(eax));
    ecx = MEM32(eax * 4 + 0x8C4500);
    PUSH32(esp, ecx);
    goto loc_00329335;

loc_00329330: ;
    PUSH32(esp, 0x7E0F24);

loc_00329335: ;
    ecx = edi;
    PUSH32(esp, 0x828D70);
    PUSH32(esp, 0x00329341u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00329341: ;
    PUSH32(esp, 0x828D60);
    ecx = edi;
    PUSH32(esp, 0x0032934Du); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_0032934D: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329403; /* jne: not equal / not zero */

loc_00329358: ;
    SET_LO16(eax, MEM16(0x8F6B76));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x2C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x2C) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003293A6; /* je: equal / zero */

loc_00329364: ;
    MEM16(esi + 0x2C) = LO16(eax);
    edx = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x0032937Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032937F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x828D4C);
    ecx = edi;
    PUSH32(esp, 0x00329393u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00329393: ;
    PUSH32(esp, 0x828D38);
    ecx = edi;
    PUSH32(esp, 0x0032939Fu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_0032939F: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329403; /* jne: not equal / not zero */

loc_003293A6: ;
    SET_LO16(eax, MEM16(0x8F6BD2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x2E)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x2E) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003293F4; /* je: equal / zero */

loc_003293B2: ;
    MEM16(esi + 0x2E) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x003293CDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003293CD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x828D24);
    ecx = edi;
    PUSH32(esp, 0x003293E1u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003293E1: ;
    PUSH32(esp, 0x828D10);
    ecx = edi;
    PUSH32(esp, 0x003293EDu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003293ED: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329403; /* jne: not equal / not zero */

loc_003293F4: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329403; /* jne: not equal / not zero */

loc_003293FB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00329403u); RECOMP_ABI_CALL(0x0001859Eu, sub_0001859E); /* call 0x0001859E */

loc_00329403: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329460; /* je: equal / zero */

loc_0032940A: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    ebx = esi + 0x40;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0032941Au); RECOMP_ABI_CALL(0x0002D5B6u, sub_0002D5B6); /* call 0x0002D5B6 */

loc_0032941A: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00329422u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00329422: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0032942Bu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032942B: ;
    PUSH32(esp, 0x40400000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00329439u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00329439: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00329441u); RECOMP_ABI_CALL(0x00020280u, sub_00020280); /* call 0x00020280 */

loc_00329441: ;
    ecx = esp + 0x10;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0032944Cu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032944C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329460; /* je: equal / zero */

loc_00329450: ;
    PUSH32(esp, 0x828CFC);
    ecx = edi;
    PUSH32(esp, 0x0032945Cu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_0032945C: ;
    MEM8(esi + 0x3C) = 0;

loc_00329460: ;
    MEM8(esi + 0x34) = 1;

loc_00329464: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003295A0
 * Original: 0x003295A0 - 0x00329707 (359 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003295A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003295A0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x114);
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003295D2; /* je: equal / zero */

loc_003295B8: ;
    PUSH32(esp, 5);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003295C8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003295C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = 0;

loc_003295D2: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003295F4; /* je: equal / zero */

loc_003295D9: ;
    ecx = edi;
    PUSH32(esp, 0x003295E0u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_003295E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003296FC; /* je: equal / zero */

loc_003295E8: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003295F0u); RECOMP_ABI_CALL(0x00036B75u, sub_00036B75); /* call 0x00036B75 */

loc_003295F0: ;
    MEM8(esi + 0xD) = 0;

loc_003295F4: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003296A4; /* je: equal / zero */

loc_00329600: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0032960Au); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_0032960A: ;
    PUSH32(esp, 0x828E1C);
    ecx = edi + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00329622u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329622: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00329632u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00329632: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40400000);
    ecx = esp + 0x14;
    ebp = esi + 0x38;
    PUSH32(esp, 0x00329646u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00329646: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0032964Eu); RECOMP_ABI_CALL(0x000240BFu, sub_000240BF); /* call 0x000240BF */

loc_0032964E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00329657u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00329657: ;
    PUSH32(esp, 0x40C00000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00329665u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00329665: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0032966Du); RECOMP_ABI_CALL(0x0002CC47u, sub_0002CC47); /* call 0x0002CC47 */

loc_0032966D: ;
    ecx = esp + 0x10;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00329678u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00329678: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032969B; /* je: equal / zero */

loc_0032967C: ;
    PUSH32(esp, 0x40C00000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0032968Au); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_0032968A: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00329692u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00329692: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0032969Bu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032969B: ;
    MEM8(esi + 0x48) = 0;
    MEM8(esi + 0x49) = 0;
    POP32(esp, ebp);

loc_003296A4: ;
    ebx = esi + 0x38;
    PUSH32(esp, 0x907DE8);
    ecx = ebx;
    PUSH32(esp, 0x003296B3u); RECOMP_ABI_CALL(0x0002CC47u, sub_0002CC47); /* call 0x0002CC47 */

loc_003296B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003296E5; /* je: equal / zero */

loc_003296B7: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003296C7; /* jne: not equal / not zero */

loc_003296BE: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x003296C7u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003296C7: ;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003296D4u); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_003296D4: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003296DCu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003296DC: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003296E5u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003296E5: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003296F4; /* jne: not equal / not zero */

loc_003296EC: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003296F4u); RECOMP_ABI_CALL(0x0001108Cu, sub_0001108C); /* call 0x0001108C */

loc_003296F4: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003296FCu); RECOMP_ABI_CALL(0x0001D436u, sub_0001D436); /* call 0x0001D436 */

loc_003296FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00329760
 * Original: 0x00329760 - 0x0032983E (222 bytes, 70 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00329760: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x110);
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), 0xB (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00329792; /* je: equal / zero */

loc_00329778: ;
    PUSH32(esp, 0x10);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00329788u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329788: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = 0xB;

loc_00329792: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003297BA; /* je: equal / zero */

loc_0032979B: ;
    ecx = edi;
    PUSH32(esp, 0x003297A2u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_003297A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329832; /* je: equal / zero */

loc_003297AA: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM8(esi + 0xD) = LO8(ebx);
    PUSH32(esp, 0x003297B5u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003297B5: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xD), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003297DA; /* jne: not equal / not zero */

loc_003297BA: ;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x20), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003297DA; /* je: equal / zero */

loc_003297BF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003297C7u); RECOMP_ABI_CALL(0x000216B7u, sub_000216B7); /* call 0x000216B7 */

loc_003297C7: ;
    PUSH32(esp, 0x828E34);
    ecx = edi;
    PUSH32(esp, 0x003297D3u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003297D3: ;
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x21) = 1;

loc_003297DA: ;
    _fa = (uint32_t)(MEM8(esi + 0x21)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x21), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329832; /* je: equal / zero */

loc_003297DF: ;
    PUSH32(esp, 0x828E24);
    ecx = edi + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    MEM8(0x8FC658) = LO8(ebx);
    PUSH32(esp, 0x003297FDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003297FD: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032980Cu); RECOMP_ABI_CALL(0x00508450u, sub_00508450); /* call 0x00508450 */

loc_0032980C: ;
    SET_LO8(eax, MEM8(0x8FC658));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329832; /* jne: not equal / not zero */

loc_00329818: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00329821u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00329821: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0xB);
    ecx = edi;
    PUSH32(esp, 0x0032982Fu); RECOMP_ABI_CALL(0x0001E30Eu, sub_0001E30E); /* call 0x0001E30E */

loc_0032982F: ;
    MEM8(esi + 0x21) = LO8(ebx);

loc_00329832: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00329880
 * Original: 0x00329880 - 0x003298AE (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00329880: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003298A2; /* je: equal / zero */

loc_0032988D: ;
    PUSH32(esp, 0x00329892u); RECOMP_ABI_CALL(0x000234D5u, sub_000234D5); /* call 0x000234D5 */

loc_00329892: ;
    ecx = esi;
    PUSH32(esp, 0x00329899u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00329899: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032989Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032989F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003298A2: ;
    MEM32(0x8FC758) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003298C0
 * Original: 0x003298C0 - 0x00329B65 (677 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003298C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003298C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xF4);
    eax = MEM32(ecx + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329B61; /* je: equal / zero */

loc_003298DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    edi = edi;

loc_003298E0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xE (32-bit) */
    esi = ecx + eax;
    if (CMP_A(_fa, _fb)) goto loc_00329B43; /* ja: above (unsigned >) */

loc_003298EC: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x329B68); /* switch: 15 entries, 15 targets */
    if (_jt == 0x003298F3u) goto loc_003298F3;
    if (_jt == 0x0032991Cu) goto loc_0032991C;
    if (_jt == 0x00329948u) goto loc_00329948;
    if (_jt == 0x00329971u) goto loc_00329971;
    if (_jt == 0x0032999Du) goto loc_0032999D;
    if (_jt == 0x003299C6u) goto loc_003299C6;
    if (_jt == 0x003299EFu) goto loc_003299EF;
    if (_jt == 0x00329A1Bu) goto loc_00329A1B;
    if (_jt == 0x00329A47u) goto loc_00329A47;
    if (_jt == 0x00329A73u) goto loc_00329A73;
    if (_jt == 0x00329A9Cu) goto loc_00329A9C;
    if (_jt == 0x00329AC5u) goto loc_00329AC5;
    if (_jt == 0x00329AE8u) goto loc_00329AE8;
    if (_jt == 0x00329B0Eu) goto loc_00329B0E;
    if (_jt == 0x00329B13u) goto loc_00329B13;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003298F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x003298FBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003298FB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329912; /* je: equal / zero */

loc_00329902: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0032990Au); RECOMP_ABI_CALL(0x0002FC21u, sub_0002FC21); /* call 0x0002FC21 */

loc_0032990A: ;
    MEM32(edi + 0x10) = eax;
    goto loc_00329B47;

loc_00329912: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x10) = eax;
    goto loc_00329B47;

loc_0032991C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x164);
    PUSH32(esp, 0x00329927u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00329927: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032993E; /* je: equal / zero */

loc_0032992E: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00329936u); RECOMP_ABI_CALL(0x00036224u, sub_00036224); /* call 0x00036224 */

loc_00329936: ;
    MEM32(edi + 0xC) = eax;
    goto loc_00329B47;

loc_0032993E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xC) = eax;
    goto loc_00329B47;

loc_00329948: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00329950u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00329950: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329967; /* je: equal / zero */

loc_00329957: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0032995Fu); RECOMP_ABI_CALL(0x0001302Bu, sub_0001302B); /* call 0x0001302B */

loc_0032995F: ;
    MEM32(edi + 0x14) = eax;
    goto loc_00329B47;

loc_00329967: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x14) = eax;
    goto loc_00329B47;

loc_00329971: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0032997Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0032997C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329993; /* je: equal / zero */

loc_00329983: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0032998Bu); RECOMP_ABI_CALL(0x000285FCu, sub_000285FC); /* call 0x000285FC */

loc_0032998B: ;
    MEM32(edi + 0x18) = eax;
    goto loc_00329B47;

loc_00329993: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x18) = eax;
    goto loc_00329B47;

loc_0032999D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x003299A5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003299A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003299BC; /* je: equal / zero */

loc_003299AC: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003299B4u); RECOMP_ABI_CALL(0x0001F385u, sub_0001F385); /* call 0x0001F385 */

loc_003299B4: ;
    MEM32(edi + 0x1C) = eax;
    goto loc_00329B47;

loc_003299BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x1C) = eax;
    goto loc_00329B47;

loc_003299C6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x003299CEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003299CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003299E5; /* je: equal / zero */

loc_003299D5: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003299DDu); RECOMP_ABI_CALL(0x0001D1D9u, sub_0001D1D9); /* call 0x0001D1D9 */

loc_003299DD: ;
    MEM32(edi + 0x20) = eax;
    goto loc_00329B47;

loc_003299E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x20) = eax;
    goto loc_00329B47;

loc_003299EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x003299FAu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003299FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329A11; /* je: equal / zero */

loc_00329A01: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00329A09u); RECOMP_ABI_CALL(0x00034767u, sub_00034767); /* call 0x00034767 */

loc_00329A09: ;
    MEM32(edi + 0x24) = eax;
    goto loc_00329B47;

loc_00329A11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x24) = eax;
    goto loc_00329B47;

loc_00329A1B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x750);
    PUSH32(esp, 0x00329A26u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00329A26: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329A3D; /* je: equal / zero */

loc_00329A2D: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00329A35u); RECOMP_ABI_CALL(0x00021E23u, sub_00021E23); /* call 0x00021E23 */

loc_00329A35: ;
    MEM32(edi + 0x28) = eax;
    goto loc_00329B47;

loc_00329A3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x28) = eax;
    goto loc_00329B47;

loc_00329A47: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x608);
    PUSH32(esp, 0x00329A52u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00329A52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329A69; /* je: equal / zero */

loc_00329A59: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00329A61u); RECOMP_ABI_CALL(0x00025C44u, sub_00025C44); /* call 0x00025C44 */

loc_00329A61: ;
    MEM32(edi + 0x2C) = eax;
    goto loc_00329B47;

loc_00329A69: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x2C) = eax;
    goto loc_00329B47;

loc_00329A73: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00329A7Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00329A7B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329A92; /* je: equal / zero */

loc_00329A82: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00329A8Au); RECOMP_ABI_CALL(0x000226EDu, sub_000226ED); /* call 0x000226ED */

loc_00329A8A: ;
    MEM32(edi + 0x30) = eax;
    goto loc_00329B47;

loc_00329A92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x30) = eax;
    goto loc_00329B47;

loc_00329A9C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00329AA4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00329AA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329ABB; /* je: equal / zero */

loc_00329AAB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00329AB3u); RECOMP_ABI_CALL(0x00036E4Au, sub_00036E4A); /* call 0x00036E4A */

loc_00329AB3: ;
    MEM32(edi + 0x34) = eax;
    goto loc_00329B47;

loc_00329ABB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x34) = eax;
    goto loc_00329B47;

loc_00329AC5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00329ACDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00329ACD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329AE1; /* je: equal / zero */

loc_00329AD4: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00329ADCu); RECOMP_ABI_CALL(0x00017545u, sub_00017545); /* call 0x00017545 */

loc_00329ADC: ;
    MEM32(edi + 0x38) = eax;
    goto loc_00329B47;

loc_00329AE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x38) = eax;
    goto loc_00329B47;

loc_00329AE8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x00329AF3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00329AF3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329B07; /* je: equal / zero */

loc_00329AFA: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00329B02u); RECOMP_ABI_CALL(0x00013850u, sub_00013850); /* call 0x00013850 */

loc_00329B02: ;
    MEM32(edi + 0x3C) = eax;
    goto loc_00329B47;

loc_00329B07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x3C) = eax;
    goto loc_00329B47;

loc_00329B0E: ;
    MEM32(edi + 0x40) = ebx;
    goto loc_00329B47;

loc_00329B13: ;
    _fa = (uint32_t)(MEM8(edi + 0xF9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xF9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329B3E; /* je: equal / zero */

loc_00329B1B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00329B23u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00329B23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329B37; /* je: equal / zero */

loc_00329B2A: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00329B32u); RECOMP_ABI_CALL(0x0001A704u, sub_0001A704); /* call 0x0001A704 */

loc_00329B32: ;
    MEM32(edi + 0x44) = eax;
    goto loc_00329B47;

loc_00329B37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x44) = eax;
    goto loc_00329B47;

loc_00329B3E: ;
    MEM32(edi + 0x44) = ebx;
    goto loc_00329B47;

loc_00329B43: ;
    MEM32(edi + ebp * 4 + 0xC) = ebx;

loc_00329B47: ;
    ecx = MEM32(edi + 0xF4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebp + ebp * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM32(ecx + eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax + 0x10), 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003298E0; /* jne: not equal / not zero */

loc_00329B60: ;
    POP32(esp, esi);

loc_00329B61: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00329C60
 * Original: 0x00329C60 - 0x00329DFC (412 bytes, 129 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00329C60: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x100) = 0xFFFFFFFFu;
    MEM32(esi + 0xFC) = ebx;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00329DC4; /* je: equal / zero */

loc_00329C8A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329DC4; /* je: equal / zero */

loc_00329C92: ;
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xB), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329CAE; /* je: equal / zero */

loc_00329C9A: ;
    PUSH32(esp, 0x907DE8);
    ecx = edi + 0x10;
    PUSH32(esp, 0x00329CA7u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00329CA7: ;
    MEM8(edi + 0xC) = 1;
    MEM32(edi + 0x20) = ebx;

loc_00329CAE: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329CC9; /* je: equal / zero */

loc_00329CB3: ;
    PUSH32(esp, 5);
    eax = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00329CC3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329CC3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ebx;

loc_00329CC9: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00329CD1u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00329CD1: ;
    eax = MEM32(esi + 0x48);
    edi = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329CF3; /* je: equal / zero */

loc_00329CDD: ;
    PUSH32(esp, 9);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00329CEDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329CED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = edi;

loc_00329CF3: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00329CFBu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00329CFB: ;
    PUSH32(esp, 0x828E50);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00329D13u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329D13: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00329D20u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00329D20: ;
    edi = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329D3B; /* je: equal / zero */

loc_00329D2A: ;
    PUSH32(esp, 0x907DE8);
    ecx = edi + 0x10;
    PUSH32(esp, 0x00329D37u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00329D37: ;
    MEM8(edi + 0xC) = 1;

loc_00329D3B: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329D53; /* je: equal / zero */

loc_00329D42: ;
    ecx = edi;
    PUSH32(esp, 0x00329D49u); RECOMP_ABI_CALL(0x0002CD4Bu, sub_0002CD4B); /* call 0x0002CD4B */

loc_00329D49: ;
    MEM32(edi + 0x600) = 2;

loc_00329D53: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329D6B; /* je: equal / zero */

loc_00329D5A: ;
    PUSH32(esp, 0x907DE8);
    ecx = edi + 0x10;
    PUSH32(esp, 0x00329D67u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00329D67: ;
    MEM8(edi + 0xC) = 1;

loc_00329D6B: ;
    esi = MEM32(esi + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329D83; /* je: equal / zero */

loc_00329D72: ;
    PUSH32(esp, 0x907DE8);
    ecx = esi + 0x10;
    PUSH32(esp, 0x00329D7Fu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00329D7F: ;
    MEM8(esi + 0xC) = 1;

loc_00329D83: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329DF2; /* je: equal / zero */

loc_00329D8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329DF2; /* je: equal / zero */

loc_00329D90: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329DF2; /* je: equal / zero */

loc_00329D99: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329DF2; /* je: equal / zero */

loc_00329DA0: ;
    PUSH32(esp, 0x907DE8);
    ecx = eax + 0x40;
    MEM32(eax + 0x38) = 0xD;
    MEM8(eax + 0x48) = LO8(ebx);
    MEM8(eax + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x00329DBAu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00329DBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00329DC4: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 2 (32-bit) */
    edi = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00329DE7; /* je: equal / zero */

loc_00329DCD: ;
    PUSH32(esp, 7);
    edx = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00329DDDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329DDD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = 2;

loc_00329DE7: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00329DEFu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00329DEF: ;
    MEM32(edi + 0x20) = ebx;

loc_00329DF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00329E70
 * Original: 0x00329E70 - 0x00329F1D (173 bytes, 55 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00329E70: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329E99; /* je: equal / zero */

loc_00329E7F: ;
    PUSH32(esp, 9);
    eax = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00329E8Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329E8F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = 4;

loc_00329E99: ;
    PUSH32(esp, 0x828E50);
    ecx = esi + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00329EB1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00329EB1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00329EC1u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00329EC1: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329EF2; /* je: equal / zero */

loc_00329ECD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329EF2; /* je: equal / zero */

loc_00329ED1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00329ED8u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_00329ED8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329EF2; /* jne: not equal / not zero */

loc_00329EE0: ;
    PUSH32(esp, 0x00329EE5u); RECOMP_ABI_CALL(0x0001C1D5u, sub_0001C1D5); /* call 0x0001C1D5 */

loc_00329EE5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329EF2; /* jne: not equal / not zero */

loc_00329EE9: ;
    PUSH32(esp, 0x00329EEEu); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_00329EEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329EFD; /* je: equal / zero */

loc_00329EF2: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x00329EFDu); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_00329EFD: ;
    esi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329F15; /* je: equal / zero */

loc_00329F04: ;
    ecx = esi;
    PUSH32(esp, 0x00329F0Bu); RECOMP_ABI_CALL(0x0002CD4Bu, sub_0002CD4B); /* call 0x0002CD4B */

loc_00329F0B: ;
    MEM32(esi + 0x600) = 2;

loc_00329F15: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00329F50
 * Original: 0x00329F50 - 0x00329FA3 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00329F50: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329FA1; /* je: equal / zero */

loc_00329F5B: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329FA1; /* je: equal / zero */

loc_00329F62: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00329F72u); RECOMP_ABI_CALL(0x00037539u, sub_00037539); /* call 0x00037539 */

loc_00329F72: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00329F96; /* je: equal / zero */

loc_00329F77: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x00329F82u); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_00329F82: ;
    MEM32(esi + 0x100) = 7;
    MEM32(esi + 0xFC) = 0xC;

loc_00329F96: ;
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00329FA1u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00329FA1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00329FC0
 * Original: 0x00329FC0 - 0x0032A010 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00329FC0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A00E; /* je: equal / zero */

loc_00329FCB: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A00E; /* je: equal / zero */

loc_00329FD2: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00329FE1u); RECOMP_ABI_CALL(0x000286F1u, sub_000286F1); /* call 0x000286F1 */

loc_00329FE1: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x00329FECu); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_00329FEC: ;
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 8);
    ecx = esi;
    MEM32(esi + 0x100) = 8;
    MEM32(esi + 0xFC) = 0xC;
    PUSH32(esp, 0x0032A00Eu); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_0032A00E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032A030
 * Original: 0x0032A030 - 0x0032A10B (219 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A030: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0032A039u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_0032A039: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xEC) = eax;
    MEM32(esi + 0xF0) = eax;
    MEM32(esi + 8) = eax;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0xFC) = eax;
    MEM32(esi + 0x100) = edi;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 3);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x0032A090u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0032A090: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0xF9) = LO8(ecx);
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A0BE; /* je: equal / zero */

loc_0032A0A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A0BE; /* je: equal / zero */

loc_0032A0AB: ;
    ecx = esi;
    MEM32(esi + 0xF4) = 0x827790;
    PUSH32(esp, 0x0032A0BCu); RECOMP_ABI_CALL(0x000355D1u, sub_000355D1); /* call 0x000355D1 */

loc_0032A0BC: ;
    goto loc_0032A0CF;

loc_0032A0BE: ;
    ecx = esi;
    MEM32(esi + 0xF4) = 0x8278D0;
    PUSH32(esp, 0x0032A0CFu); RECOMP_ABI_CALL(0x0003470Du, sub_0003470D); /* call 0x0003470D */

loc_0032A0CF: ;
    MEM32(esi + 0xCC) = edi;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xD4) = edi;
    MEM32(esi + 0xD8) = edi;
    MEM32(esi + 0xDC) = edi;
    MEM32(esi + 0xE0) = edi;
    MEM32(esi + 0xE4) = edi;
    MEM32(esi + 0xE8) = edi;
    POP32(esp, edi);
    MEM8(esi + 0xF8) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032A150
 * Original: 0x0032A150 - 0x0032A16D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A150: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A16C; /* je: equal / zero */

loc_0032A159: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A16C; /* je: equal / zero */

loc_0032A15D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032A169u); RECOMP_ABI_CALL(0x00036175u, sub_00036175); /* call 0x00036175 */

loc_0032A169: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032A16C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A180
 * Original: 0x0032A180 - 0x0032A19D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A180: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A19C; /* je: equal / zero */

loc_0032A189: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A19C; /* je: equal / zero */

loc_0032A18D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0032A199u); RECOMP_ABI_CALL(0x00036175u, sub_00036175); /* call 0x00036175 */

loc_0032A199: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032A19C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A1B0
 * Original: 0x0032A1B0 - 0x0032A22F (127 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A1B0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A22E; /* je: equal / zero */

loc_0032A1B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A22E; /* je: equal / zero */

loc_0032A1BD: ;
    SET_LO8(eax, MEM8(0x8F6A24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A1D7; /* je: equal / zero */

loc_0032A1C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A1D7; /* je: equal / zero */

loc_0032A1CA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0032A1D3u); RECOMP_ABI_CALL(0x000128A6u, sub_000128A6); /* call 0x000128A6 */

loc_0032A1D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A1D7: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A22D; /* je: equal / zero */

loc_0032A1E2: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A22C; /* je: equal / zero */

loc_0032A1EA: ;
    ecx = edi;
    PUSH32(esp, 0x0032A1F1u); RECOMP_ABI_CALL(0x00023737u, sub_00023737); /* call 0x00023737 */

loc_0032A1F1: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0xC);
    ecx = esi;
    MEM32(edi + 0x20) = 1;
    MEM32(edi + 0x744) = 4;
    PUSH32(esp, 0x0032A20Du); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_0032A20D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    ecx = esi;
    MEM32(esi + 0x100) = 7;
    MEM32(esi + 0xFC) = 0xC;
    PUSH32(esp, 0x0032A22Cu); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_0032A22C: ;
    POP32(esp, edi);

loc_0032A22D: ;
    POP32(esp, esi);

loc_0032A22E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A250
 * Original: 0x0032A250 - 0x0032A2B5 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A250: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A2B4; /* je: equal / zero */

loc_0032A259: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A2B4; /* je: equal / zero */

loc_0032A25D: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A2B3; /* je: equal / zero */

loc_0032A268: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A2B2; /* je: equal / zero */

loc_0032A270: ;
    ecx = edi;
    PUSH32(esp, 0x0032A277u); RECOMP_ABI_CALL(0x0001CDA1u, sub_0001CDA1); /* call 0x0001CDA1 */

loc_0032A277: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0xC);
    ecx = esi;
    MEM32(edi + 0x20) = 1;
    MEM32(edi + 0x744) = 3;
    PUSH32(esp, 0x0032A293u); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_0032A293: ;
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    ecx = esi;
    MEM32(esi + 0x100) = 7;
    MEM32(esi + 0xFC) = 0xC;
    PUSH32(esp, 0x0032A2B2u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_0032A2B2: ;
    POP32(esp, edi);

loc_0032A2B3: ;
    POP32(esp, esi);

loc_0032A2B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A2D0
 * Original: 0x0032A2D0 - 0x0032A317 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A2D0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A316; /* je: equal / zero */

loc_0032A2D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A316; /* je: equal / zero */

loc_0032A2DD: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0032A315; /* je: equal / zero */

loc_0032A2E9: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A314; /* je: equal / zero */

loc_0032A2F1: ;
    ecx = esi;
    PUSH32(esp, 0x0032A2F8u); RECOMP_ABI_CALL(0x0002639Cu, sub_0002639C); /* call 0x0002639C */

loc_0032A2F8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    ecx = edi;
    MEM32(esi + 0x20) = 1;
    MEM32(esi + 0x744) = 0;
    PUSH32(esp, 0x0032A314u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_0032A314: ;
    POP32(esp, esi);

loc_0032A315: ;
    POP32(esp, edi);

loc_0032A316: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A330
 * Original: 0x0032A330 - 0x0032A568 (568 bytes, 166 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032A330: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032A33Cu); RECOMP_ABI_CALL(0x000361CAu, sub_000361CA); /* call 0x000361CA */

loc_0032A33C: ;
    eax = MEM32(0x8FC764);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0032A55A; /* ja: above (unsigned >) */

loc_0032A34A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x32A568); /* switch: 18 entries, 14 targets */
    if (_jt == 0x0032A351u) goto loc_0032A351;
    if (_jt == 0x0032A388u) goto loc_0032A388;
    if (_jt == 0x0032A3C6u) goto loc_0032A3C6;
    if (_jt == 0x0032A3E1u) goto loc_0032A3E1;
    if (_jt == 0x0032A458u) goto loc_0032A458;
    if (_jt == 0x0032A4B1u) goto loc_0032A4B1;
    if (_jt == 0x0032A4C0u) goto loc_0032A4C0;
    if (_jt == 0x0032A4C9u) goto loc_0032A4C9;
    if (_jt == 0x0032A4D2u) goto loc_0032A4D2;
    if (_jt == 0x0032A4DBu) goto loc_0032A4DB;
    if (_jt == 0x0032A4E4u) goto loc_0032A4E4;
    if (_jt == 0x0032A4FFu) goto loc_0032A4FF;
    if (_jt == 0x0032A516u) goto loc_0032A516;
    if (_jt == 0x0032A541u) goto loc_0032A541;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0032A351: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032A35C; /* jne: not equal / not zero */

loc_0032A355: ;
    eax = 2;
    goto loc_0032A366;

loc_0032A35C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;

loc_0032A366: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032A376u); RECOMP_ABI_CALL(0x000328A4u, sub_000328A4); /* call 0x000328A4 */

loc_0032A376: ;
    eax = MEM32(0x8FC764);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8FC764) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A388: ;
    edx = MEM32(0x8FCA44);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0032A39Du); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_0032A39D: ;
    eax = MEM32(0x8FCA44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x8FCA44) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0032A564; /* jne: not equal / not zero */

loc_0032A3BC: ;
    MEM32(0x8FC764) = MEM32(0x8FC764) + 1;
    _fa = (uint32_t)(MEM32(0x8FC764)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A3C6: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032A3CFu); RECOMP_ABI_CALL(0x0002FC12u, sub_0002FC12); /* call 0x0002FC12 */

loc_0032A3CF: ;
    eax = MEM32(0x8FC764);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8FC764) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A3E1: ;
    edx = MEM32(0x8FCA40);
    SET_LO8(eax, MEM8(edx * 4 + 0x8C4510));
    SET_LO8(ecx, MEM8(0x8FCA3C));
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(esp + 0xB) = LO8(eax);
    MEM8(esp + 0xA) = LO8(ecx);
    MEM8(esp + 8) = 0;
    MEM8(esp + 9) = 0;
    MEM16(esp + 0xC) = 1;
    PUSH32(esp, 0x0032A418u); RECOMP_ABI_CALL(0x00012B2Bu, sub_00012B2B); /* call 0x00012B2B */

loc_0032A418: ;
    eax = MEM32(0x8FCA40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x80000003u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0032A42D; /* jns: not sign (positive) */

loc_0032A428: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0032A42D: ;
    MEM32(0x8FCA40) = eax;
    eax = MEM32(0x8FCA3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x18;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x8FCA3C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0032A564; /* jne: not equal / not zero */

loc_0032A44E: ;
    MEM32(0x8FC764) = MEM32(0x8FC764) + 1;
    _fa = (uint32_t)(MEM32(0x8FC764)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A458: ;
    SET_LO8(ecx, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A4F5; /* je: equal / zero */

loc_0032A467: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A4F5; /* je: equal / zero */

loc_0032A470: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A4A6; /* je: equal / zero */

loc_0032A47B: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A4A6; /* je: equal / zero */

loc_0032A482: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032A48Bu); RECOMP_ABI_CALL(0x00025B4Au, sub_00025B4A); /* call 0x00025B4A */

loc_0032A48B: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x0032A496u); RECOMP_ABI_CALL(0x00014331u, sub_00014331); /* call 0x00014331 */

loc_0032A496: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0032A4A1u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_0032A4A1: ;
    eax = MEM32(0x8FC764);

loc_0032A4A6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x8FC764) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A4B1: ;
    PUSH32(esp, 0x0032A4B6u); RECOMP_ABI_CALL(0x0001C6A8u, sub_0001C6A8); /* call 0x0001C6A8 */

loc_0032A4B6: ;
    MEM32(0x8FC764) = MEM32(0x8FC764) + 1;
    _fa = (uint32_t)(MEM32(0x8FC764)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A4C0: ;
    MEM8(0x8F6A24) = 1;
    goto loc_0032A4EB;

loc_0032A4C9: ;
    MEM8(0x8F6A24) = 2;
    goto loc_0032A4EB;

loc_0032A4D2: ;
    MEM8(0x8F6A24) = 3;
    goto loc_0032A4EB;

loc_0032A4DB: ;
    MEM8(0x8F6A24) = 4;
    goto loc_0032A4EB;

loc_0032A4E4: ;
    MEM8(0x8F6A24) = 5;

loc_0032A4EB: ;
    PUSH32(esp, 0x0032A4F0u); RECOMP_ABI_CALL(0x00034A9Bu, sub_00034A9B); /* call 0x00034A9B */

loc_0032A4F0: ;
    eax = MEM32(0x8FC764);

loc_0032A4F5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8FC764) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A4FF: ;
    MEM8(0x8F6A24) = 6;
    PUSH32(esp, 0x0032A50Bu); RECOMP_ABI_CALL(0x00034A9Bu, sub_00034A9B); /* call 0x00034A9B */

loc_0032A50B: ;
    eax = MEM32(0x8FC764);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8FC764) = eax;

loc_0032A516: ;
    SET_LO8(ecx, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A537; /* je: equal / zero */

loc_0032A521: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A537; /* je: equal / zero */

loc_0032A526: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0032A52Fu); RECOMP_ABI_CALL(0x00036175u, sub_00036175); /* call 0x00036175 */

loc_0032A52F: ;
    eax = MEM32(0x8FC764);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032A537: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8FC764) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A541: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032A548u); RECOMP_ABI_CALL(0x00018B3Eu, sub_00018B3E); /* call 0x00018B3E */

loc_0032A548: ;
    eax = MEM32(0x8FC764);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8FC764) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A55A: ;
    MEM32(0x8FC764) = 0;

loc_0032A564: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032A650
 * Original: 0x0032A650 - 0x0032A6BF (111 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A650: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x104);
    PUSH32(esp, 0x0032A65Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0032A65C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A698; /* je: equal / zero */

loc_0032A663: ;
    ecx = eax;
    PUSH32(esp, 0x0032A66Au); RECOMP_ABI_CALL(0x0001C185u, sub_0001C185); /* call 0x0001C185 */

loc_0032A66A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x8FC758) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0032A6BE; /* je: equal / zero */

loc_0032A673: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x218);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0032A6B1; /* je: equal / zero */

loc_0032A684: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0032A6A3; /* je: equal / zero */

loc_0032A687: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032A6B1; /* jne: not equal / not zero */

loc_0032A68A: ;
    edx = 2;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0032A697u); RECOMP_ABI_CALL(0x000361CAu, sub_000361CA); /* call 0x000361CA */

loc_0032A697: ;
    esp += 4; return; /* ret */

loc_0032A698: ;
    MEM32(0x8FC758) = 0;
    esp += 4; return; /* ret */

loc_0032A6A3: ;
    edx = 8;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0032A6B0u); RECOMP_ABI_CALL(0x000361CAu, sub_000361CA); /* call 0x000361CA */

loc_0032A6B0: ;
    esp += 4; return; /* ret */

loc_0032A6B1: ;
    edx = 1;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0032A6BEu); RECOMP_ABI_CALL(0x000361CAu, sub_000361CA); /* call 0x000361CA */

loc_0032A6BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A6E0
 * Original: 0x0032A6E0 - 0x0032A810 (304 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032A6E0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x0032A6F0u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0032A6F0: ;
    PUSH32(esp, 0x0032A6F5u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0032A6F5: ;
    ecx = eax;
    PUSH32(esp, 0x0032A6FCu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_0032A6FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A71D; /* je: equal / zero */

loc_0032A700: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x218);
    eax = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A71D; /* je: equal / zero */

loc_0032A715: ;
    MEM32(0x912778) = MEM32(0x912778) | eax;
    _fa = (uint32_t)(MEM32(0x912778)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0032A724;

loc_0032A71D: ;
    MEM32(0x912778) = MEM32(0x912778) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(0x912778)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032A724: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032A809; /* jne: not equal / not zero */

loc_0032A731: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0032A73Bu); RECOMP_ABI_CALL(0x00014CD7u, sub_00014CD7); /* call 0x00014CD7 */

loc_0032A73B: ;
    eax = MEM32(0x8FC760);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A753; /* je: equal / zero */

loc_0032A746: ;
    ecx = ebp;
    PUSH32(esp, 0x0032A74Du); RECOMP_ABI_CALL(0x0002B7EDu, sub_0002B7ED); /* call 0x0002B7ED */

loc_0032A74D: ;
    MEM32(0x8FC760) = ebx;

loc_0032A753: ;
    edx = ebp + 0xC;
    MEM32(esp + 0x10) = edx;
    /* nop */

loc_0032A760: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A7F1; /* je: equal / zero */

loc_0032A76E: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032A7F1; /* je: equal / zero */

loc_0032A776: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A7F1; /* je: equal / zero */

loc_0032A77D: ;
    edi = esi + 0x10;
    PUSH32(esp, 0x907DE8);
    ecx = edi;
    PUSH32(esp, 0x0032A78Cu); RECOMP_ABI_CALL(0x0002CC47u, sub_0002CC47); /* call 0x0002CC47 */

loc_0032A78C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A7A3; /* je: equal / zero */

loc_0032A790: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0032A798u); RECOMP_ABI_CALL(0x000368FFu, sub_000368FF); /* call 0x000368FF */

loc_0032A798: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A7A3; /* je: equal / zero */

loc_0032A79C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0032A7A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032A7A1u); } /* indirect call */
    }

loc_0032A7A3: ;
    PUSH32(esp, 0x907DE8);
    ecx = edi;
    PUSH32(esp, 0x0032A7AFu); RECOMP_ABI_CALL(0x0002D624u, sub_0002D624); /* call 0x0002D624 */

loc_0032A7AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A7C8; /* je: equal / zero */

loc_0032A7B3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0032A7BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032A7B7u); } /* indirect call */
    }

loc_0032A7BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A7F1; /* je: equal / zero */

loc_0032A7BE: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0032A7C6u); RECOMP_ABI_CALL(0x0002F776u, sub_0002F776); /* call 0x0002F776 */

loc_0032A7C6: ;
    goto loc_0032A7F1;

loc_0032A7C8: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A7F1; /* je: equal / zero */

loc_0032A7CF: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0032A7E0u); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_0032A7E0: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0032A7E8u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0032A7E8: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0032A7F1u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032A7F1: ;
    ecx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0032A760; /* jl: less (signed <) */

loc_0032A806: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0032A809: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032A860
 * Original: 0x0032A860 - 0x0032AAB4 (596 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032A860: ;
    ecx = MEM32(esp + 4);
    eax = ecx + 0x20;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0032A8E9; /* ja: above (unsigned >) */

loc_0032A86F: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x32A948); /* switch: 15 entries, 15 targets */
    if (_jt == 0x0032A876u) goto loc_0032A876;
    if (_jt == 0x0032A890u) goto loc_0032A890;
    if (_jt == 0x0032A8ADu) goto loc_0032A8AD;
    if (_jt == 0x0032A8BCu) goto loc_0032A8BC;
    if (_jt == 0x0032A8CBu) goto loc_0032A8CB;
    if (_jt == 0x0032A8D0u) goto loc_0032A8D0;
    if (_jt == 0x0032A8D5u) goto loc_0032A8D5;
    if (_jt == 0x0032A8DAu) goto loc_0032A8DA;
    if (_jt == 0x0032A8EAu) goto loc_0032A8EA;
    if (_jt == 0x0032A8F5u) goto loc_0032A8F5;
    if (_jt == 0x0032A900u) goto loc_0032A900;
    if (_jt == 0x0032A910u) goto loc_0032A910;
    if (_jt == 0x0032A915u) goto loc_0032A915;
    if (_jt == 0x0032A923u) goto loc_0032A923;
    if (_jt == 0x0032A932u) goto loc_0032A932;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0032A876: ;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(eax + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    eax = SX8(LO8(edx));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032A88Cu); RECOMP_ABI_CALL(0x00018D82u, sub_00018D82); /* call 0x00018D82 */

loc_0032A88C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A890: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A8E9; /* je: equal / zero */

loc_0032A89A: ;
    PUSH32(esp, 0x0032A89Fu); RECOMP_ABI_CALL(0x0002A41Fu, sub_0002A41F); /* call 0x0002A41F */

loc_0032A89F: ;
    ecx = MEM32(0x8FC758);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0032A8ACu); RECOMP_ABI_CALL(0x00030FF9u, sub_00030FF9); /* call 0x00030FF9 */

loc_0032A8AC: ;
    esp += 4; return; /* ret */

loc_0032A8AD: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A8E9; /* je: equal / zero */

loc_0032A8B7: ;
    g_seh_ebp = ebp; sub_0002A41F(); return; /* tail jmp 0x0002A41F */

loc_0032A8BC: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A8E9; /* je: equal / zero */

loc_0032A8C6: ;
    g_seh_ebp = ebp; sub_0002BBEE(); return; /* tail jmp 0x0002BBEE */

loc_0032A8CB: ;
    g_seh_ebp = ebp; sub_00021A86(); return; /* tail jmp 0x00021A86 */

loc_0032A8D0: ;
    g_seh_ebp = ebp; sub_00034A9B(); return; /* tail jmp 0x00034A9B */

loc_0032A8D5: ;
    g_seh_ebp = ebp; sub_0001C6A8(); return; /* tail jmp 0x0001C6A8 */

loc_0032A8DA: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032A8E6u); RECOMP_ABI_CALL(0x00026CB1u, sub_00026CB1); /* call 0x00026CB1 */

loc_0032A8E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032A8E9: ;
    esp += 4; return; /* ret */

loc_0032A8EA: ;
    eax = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000288CC(); return; /* tail jmp 0x000288CC */

loc_0032A8F5: ;
    eax = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002FC12(); return; /* tail jmp 0x0002FC12 */

loc_0032A900: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032A90Cu); RECOMP_ABI_CALL(0x00036AE4u, sub_00036AE4); /* call 0x00036AE4 */

loc_0032A90C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A910: ;
    g_seh_ebp = ebp; sub_000374C6(); return; /* tail jmp 0x000374C6 */

loc_0032A915: ;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032A91Fu); RECOMP_ABI_CALL(0x00012B2Bu, sub_00012B2B); /* call 0x00012B2B */

loc_0032A91F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A923: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A92D; /* je: equal / zero */

loc_0032A928: ;
    PUSH32(esp, 0x0032A92Du); RECOMP_ABI_CALL(0x0001C257u, sub_0001C257); /* call 0x0001C257 */

loc_0032A92D: ;
    g_seh_ebp = ebp; sub_0001F123(); return; /* tail jmp 0x0001F123 */

loc_0032A932: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esp + 4) = LO8(ecx);
    edx = MEM32(esp + 4);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_000241C3(); return; /* tail jmp 0x000241C3 */

    /* nop */
    if (_flags /* jbe: below or equal (unsigned <=) */) (void)0; /* goto loc_0032A8F2 - dead code, label not in function */

loc_0032A94A: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* nop */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x32 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -1140837720)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + -1140837720) = MEM8(ebp + -1140837720) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -1140837720)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x32 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x32 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x32 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + LO8(edx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x32 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x32 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x32 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(edx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x32 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9100032u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xA9100032u (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x230032A9) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9320032u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xA9320032u (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0032A9F2; /* je: equal / zero */

loc_0032A9DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032A9F2; /* je: equal / zero */

loc_0032A9E2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x143F9);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0032A9F2u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032A9F2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x2A);
    ecx = esi;
    PUSH32(esp, 0x0032AA02u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA02: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x2B);
    ecx = esi;
    PUSH32(esp, 0x0032AA12u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA12: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x28);
    ecx = esi;
    PUSH32(esp, 0x0032AA22u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA22: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x29);
    ecx = esi;
    PUSH32(esp, 0x0032AA32u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA32: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x1D);
    ecx = esi;
    PUSH32(esp, 0x0032AA42u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA42: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x20);
    ecx = esi;
    PUSH32(esp, 0x0032AA52u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA52: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x1C);
    ecx = esi;
    PUSH32(esp, 0x0032AA62u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA62: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x4F);
    ecx = esi;
    PUSH32(esp, 0x0032AA72u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA72: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1EEC1);
    PUSH32(esp, 0x50);
    ecx = esi;
    PUSH32(esp, 0x0032AA82u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA82: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x290A1);
    PUSH32(esp, 0x51);
    ecx = esi;
    PUSH32(esp, 0x0032AA92u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA92: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x13DFF);
    PUSH32(esp, 0x57);
    ecx = esi;
    PUSH32(esp, 0x0032AAA2u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AAA2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2B14E);
    PUSH32(esp, 0x58);
    ecx = esi;
    PUSH32(esp, 0x0032AAB2u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AAB2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032A9D0
 * Original: 0x0032A9D0 - 0x0032AAB4 (228 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A9D0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0032A9F2; /* je: equal / zero */

loc_0032A9DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A9F2; /* je: equal / zero */

loc_0032A9E2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x143F9);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0032A9F2u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032A9F2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x2A);
    ecx = esi;
    PUSH32(esp, 0x0032AA02u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA02: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x2B);
    ecx = esi;
    PUSH32(esp, 0x0032AA12u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA12: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x28);
    ecx = esi;
    PUSH32(esp, 0x0032AA22u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA22: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x29);
    ecx = esi;
    PUSH32(esp, 0x0032AA32u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA32: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x1D);
    ecx = esi;
    PUSH32(esp, 0x0032AA42u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA42: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x20);
    ecx = esi;
    PUSH32(esp, 0x0032AA52u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA52: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x1C);
    ecx = esi;
    PUSH32(esp, 0x0032AA62u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA62: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x16A00);
    PUSH32(esp, 0x4F);
    ecx = esi;
    PUSH32(esp, 0x0032AA72u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA72: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1EEC1);
    PUSH32(esp, 0x50);
    ecx = esi;
    PUSH32(esp, 0x0032AA82u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA82: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x290A1);
    PUSH32(esp, 0x51);
    ecx = esi;
    PUSH32(esp, 0x0032AA92u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AA92: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x13DFF);
    PUSH32(esp, 0x57);
    ecx = esi;
    PUSH32(esp, 0x0032AAA2u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AAA2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2B14E);
    PUSH32(esp, 0x58);
    ecx = esi;
    PUSH32(esp, 0x0032AAB2u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_0032AAB2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032AAF0
 * Original: 0x0032AAF0 - 0x0032AAFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AAF0(void)
{

loc_0032AAF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x46) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032AB00
 * Original: 0x0032AB00 - 0x0032ABC9 (201 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032AB00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x828E8C);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0032AB13u); RECOMP_ABI_CALL(0x000377EBu, sub_000377EB); /* call 0x000377EB */

loc_0032AB13: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x828E78;
    MEM32(esi + 0xB4) = edi;
    MEM32(esi + 0xB8) = edi;
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC0) = edi;
    MEM32(esi + 0xC4) = edi;
    MEM32(esi + 0xC8) = 0x1E;
    MEM32(esi + 0xCC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0032AB57u); RECOMP_ABI_CALL(0x0059E895u, sub_0059E895); /* call 0x0059E895 */

loc_0032AB57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esi + 0xD0) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0032AB6F; /* jge: greater or equal (signed >=) */

loc_0032AB69: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0032AB6F: ;
    ecx = MEM32(esi + 0xC8);
    fp_push((double)SMEM32(esi + 0xC8)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0032AB85; /* jge: greater or equal (signed >=) */

loc_0032AB7F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0032AB85: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, edi);
    PUSH32(esp, 0x78);
    MEMF(esi + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0032AB95u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0032AB95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032ABAC; /* je: equal / zero */

loc_0032AB9C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x828E8C);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0032ABAAu); RECOMP_ABI_CALL(0x000365E9u, sub_000365E9); /* call 0x000365E9 */

loc_0032ABAA: ;
    goto loc_0032ABAE;

loc_0032ABAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032ABAE: ;
    MEM32(esi + 0xB4) = eax;
    SET_LO8(ecx, 1);
    MEM8(eax + 0x44) = LO8(ecx);
    edx = MEM32(esi + 0xB4);
    POP32(esp, edi);
    eax = esi;
    MEM8(edx + 0x46) = LO8(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032AC00
 * Original: 0x0032AC00 - 0x0032AC2B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032AC00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x828E78;
    if (CMP_EQ(_fa, _fb)) goto loc_0032AC23; /* je: equal / zero */

loc_0032AC13: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032AC19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032AC17u); } /* indirect call */
    }

loc_0032AC19: ;
    MEM32(esi + 0xB4) = 0;

loc_0032AC23: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00021932(); return; /* tail jmp 0x00021932 */

}

/**
 * sub_0032AC40
 * Original: 0x0032AC40 - 0x0032ACF7 (183 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032AC40: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x8FCA4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032ACF3; /* je: equal / zero */

loc_0032AC4E: ;
    PUSH32(esp, esi);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    esi = MEM32(ecx + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032AC67; /* jae: above or equal (unsigned >=) */

loc_0032AC5B: ;
    edx = MEM32(ecx + 0xCC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032AC6B;

loc_0032AC67: ;
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0032AC6B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(ecx + 0xC4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0032AC83; /* jge: greater or equal (signed >=) */

loc_0032AC7D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0032AC83: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    eax = MEM32(ecx + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xBC)); /* fadd dword ptr [ecx + 0xbc] */
    MEMF(esp) = (float)fp_top(); /* fst */
    MEMF(ecx + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0032ACD3; /* jne: not equal / not zero */

loc_0032ACA3: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xD4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0xC0) = eax;
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xB8) = 1;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0032ACD3: ;
    edx = MEM32(ecx + 0xC8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032ACE9; /* jae: above or equal (unsigned >=) */

loc_0032ACDE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xB8) = eax;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0032ACE9: ;
    MEM32(ecx + 0xB8) = 0;

loc_0032ACF3: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032AD30
 * Original: 0x0032AD30 - 0x0032AD65 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032AD30: ;
    eax = MEM32(0x8FCA48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032AD64; /* jne: not equal / not zero */

loc_0032AD39: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD8);
    PUSH32(esp, 0x0032AD44u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0032AD44: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032AD5D; /* je: equal / zero */

loc_0032AD4B: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0032AD57u); RECOMP_ABI_CALL(0x0002B5C7u, sub_0002B5C7); /* call 0x0002B5C7 */

loc_0032AD57: ;
    MEM32(0x8FCA48) = eax;
    esp += 4; return; /* ret */

loc_0032AD5D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FCA48) = eax;

loc_0032AD64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032AD80
 * Original: 0x0032AD80 - 0x0032AD9B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032AD80: ;
    ecx = MEM32(0x8FCA48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032AD9A; /* je: equal / zero */

loc_0032AD8A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032AD90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032AD8Eu); } /* indirect call */
    }

loc_0032AD90: ;
    MEM32(0x8FCA48) = 0;

loc_0032AD9A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032ADB0
 * Original: 0x0032ADB0 - 0x0032ADF0 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032ADB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032ADB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x828E78;
    if (CMP_EQ(_fa, _fb)) goto loc_0032ADD3; /* je: equal / zero */

loc_0032ADC3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032ADC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032ADC7u); } /* indirect call */
    }

loc_0032ADC9: ;
    MEM32(esi + 0xB4) = 0;

loc_0032ADD3: ;
    ecx = esi;
    PUSH32(esp, 0x0032ADDAu); RECOMP_ABI_CALL(0x00021932u, sub_00021932); /* call 0x00021932 */

loc_0032ADDA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032ADEA; /* je: equal / zero */

loc_0032ADE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032ADE7u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032ADE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032ADEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032AE00
 * Original: 0x0032AE00 - 0x0032AE3D (61 bytes, 21 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032AE00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x829324);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0032AE15u); RECOMP_ABI_CALL(0x000235CFu, sub_000235CF); /* call 0x000235CF */

loc_0032AE15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x829318;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x20) = LO8(eax);
    MEM32(0x8FCA50) = eax;
    PUSH32(esp, 0x0032AE33u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0032AE33: ;
    MEM32(esi + 0x28) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032AE50
 * Original: 0x0032AE50 - 0x0032AE65 (21 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032AE50: ;
    MEM32(ecx) = 0x829318;
    MEM32(0x8FCA50) = 0;
    g_seh_ebp = ebp; sub_0001B4CE(); return; /* tail jmp 0x0001B4CE */

}

/**
 * sub_0032AE70
 * Original: 0x0032AE70 - 0x0032AE94 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AE70(void)
{

loc_0032AE70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032AE80u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_0032AE80: ;
    ecx = eax;
    PUSH32(esp, 0x0032AE87u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0032AE87: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(0x8FCA50) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032AEA0
 * Original: 0x0032AEA0 - 0x0032AEFA (90 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032AEA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032AEAFu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0032AEAF: ;
    ecx = eax;
    PUSH32(esp, 0x0032AEB6u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0032AEB6: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032AEF6; /* je: equal / zero */

loc_0032AEBD: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032AEC6u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_0032AEC6: ;
    ecx = eax;
    PUSH32(esp, 0x0032AECDu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0032AECD: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(0x8FCA50) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032AEE2u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0032AEE2: ;
    ecx = eax;
    PUSH32(esp, 0x0032AEE9u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_0032AEE9: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032AEF6u); RECOMP_ABI_CALL(0x00035027u, sub_00035027); /* call 0x00035027 */

loc_0032AEF6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032AF10
 * Original: 0x0032AF10 - 0x0032AF3E (46 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032AF10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829318;
    MEM32(0x8FCA50) = 0;
    PUSH32(esp, 0x0032AF28u); RECOMP_ABI_CALL(0x0001B4CEu, sub_0001B4CE); /* call 0x0001B4CE */

loc_0032AF28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032AF38; /* je: equal / zero */

loc_0032AF2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032AF35u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032AF35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032AF38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032AF50
 * Original: 0x0032AF50 - 0x0032AF60 (16 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032AF50: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx)));
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032AF70
 * Original: 0x0032AF70 - 0x0032AF99 (41 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032AF70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0;
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032AF8B; /* je: equal / zero */

loc_0032AF83: ;
    MEM32(esi) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0032AF8B: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0032AF93u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0032AF93: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032AFB0
 * Original: 0x0032AFB0 - 0x0032AFB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AFB0(void)
{

loc_0032AFB0: ;
    SET_LO8(eax, MEM8(ecx + 3));
    esp += 4; return; /* ret */

}

/**
 * sub_0032AFC0
 * Original: 0x0032AFC0 - 0x0032AFC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AFC0(void)
{

loc_0032AFC0: ;
    SET_LO8(eax, MEM8(ecx + 2));
    esp += 4; return; /* ret */

}

/**
 * sub_0032AFD0
 * Original: 0x0032AFD0 - 0x0032AFD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AFD0(void)
{

loc_0032AFD0: ;
    SET_LO8(eax, MEM8(ecx + 1));
    esp += 4; return; /* ret */

}

/**
 * sub_0032AFE0
 * Original: 0x0032AFE0 - 0x0032AFE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AFE0(void)
{

loc_0032AFE0: ;
    SET_LO8(eax, MEM8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0032AFF0
 * Original: 0x0032AFF0 - 0x0032AFFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AFF0(void)
{

loc_0032AFF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 3) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B000
 * Original: 0x0032B000 - 0x0032B00A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B000(void)
{

loc_0032B000: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 2) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B010
 * Original: 0x0032B010 - 0x0032B01A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B010(void)
{

loc_0032B010: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 1) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B020
 * Original: 0x0032B020 - 0x0032B029 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B020(void)
{

loc_0032B020: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B030
 * Original: 0x0032B030 - 0x0032B035 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032B030: ;
    g_seh_ebp = ebp; sub_005A2986(); return; /* tail jmp 0x005A2986 */

}

/**
 * sub_0032B040
 * Original: 0x0032B040 - 0x0032B085 (69 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B040: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0032B04Bu); RECOMP_ABI_CALL(0x005A2986u, sub_005A2986); /* call 0x005A2986 */

loc_0032B04B: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032B07C; /* jl: less (signed <) */

loc_0032B053: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0032B07C; /* jge: greater or equal (signed >=) */

loc_0032B057: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0032B06Eu); RECOMP_ABI_CALL(0x005A29FFu, sub_005A29FF); /* call 0x005A29FF */

loc_0032B06E: ;
    ecx = MEM32(esp + 0x10);
    eax = ecx + esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0032B07C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B0A0
 * Original: 0x0032B0A0 - 0x0032B12E (142 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032B0A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0032B0AEu); RECOMP_ABI_CALL(0x005A2986u, sub_005A2986); /* call 0x005A2986 */

loc_0032B0AE: ;
    ebx = eax;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0032B112; /* jle: less or equal (signed <=) */

loc_0032B0B6: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0032B0CDu); RECOMP_ABI_CALL(0x005A29FFu, sub_005A29FF); /* call 0x005A29FF */

loc_0032B0CD: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032B112; /* je: equal / zero */

loc_0032B0D5: ;
    esi = MEM32(esp + 0x20);
    /* nop */

loc_0032B0E0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032B104; /* jne: not equal / not zero */

loc_0032B0E8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032B100; /* je: equal / zero */

loc_0032B0EC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032B104; /* jne: not equal / not zero */

loc_0032B0F6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0032B0E0; /* jne: not equal / not zero */

loc_0032B100: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0032B109;

loc_0032B104: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0032B109: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032B11E; /* je: equal / zero */

loc_0032B10D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0032B0B6; /* jl: less (signed <) */

loc_0032B112: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0032B11E: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B160
 * Original: 0x0032B160 - 0x0032B161 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B160(void)
{

loc_0032B160: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B170
 * Original: 0x0032B170 - 0x0032B178 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B170: ;
    eax = MEM32(ecx);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B180
 * Original: 0x0032B180 - 0x0032B18E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B180: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B1A0
 * Original: 0x0032B1A0 - 0x0032B1A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B1A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B1A0: ;
    eax = MEM32(ecx);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B1B0
 * Original: 0x0032B1B0 - 0x0032B1B9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B1B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B1B0: ;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B1C0
 * Original: 0x0032B1C0 - 0x0032B1C9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B1C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B1C0: ;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x16) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B1D0
 * Original: 0x0032B1D0 - 0x0032B1D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B1D0(void)
{

loc_0032B1D0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B1E0
 * Original: 0x0032B1E0 - 0x0032B1E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B1E0(void)
{

loc_0032B1E0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B1F0
 * Original: 0x0032B1F0 - 0x0032B1F6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B1F0: ;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 4; return; /* ret */

}

/**
 * sub_0032B200
 * Original: 0x0032B200 - 0x0032B20E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032B200: ;
    eax = MEM32(ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B220
 * Original: 0x0032B220 - 0x0032B224 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B220(void)
{

loc_0032B220: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B230
 * Original: 0x0032B230 - 0x0032B23D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B230: ;
    PUSH32(esp, 0x0032B235u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032B235: ;
    eax = MEM32(eax);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B240
 * Original: 0x0032B240 - 0x0032B24E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B240: ;
    PUSH32(esp, 0x0032B245u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032B245: ;
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B260
 * Original: 0x0032B260 - 0x0032B26E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B260: ;
    PUSH32(esp, 0x0032B265u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032B265: ;
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x16) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B280
 * Original: 0x0032B280 - 0x0032B289 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B280(void)
{

loc_0032B280: ;
    PUSH32(esp, 0x0032B285u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032B285: ;
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B290
 * Original: 0x0032B290 - 0x0032B299 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B290(void)
{

loc_0032B290: ;
    PUSH32(esp, 0x0032B295u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032B295: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B2A0
 * Original: 0x0032B2A0 - 0x0032B2AB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B2A0: ;
    PUSH32(esp, 0x0032B2A5u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032B2A5: ;
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 4; return; /* ret */

}

/**
 * sub_0032B2B0
 * Original: 0x0032B2B0 - 0x0032B2C3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B2B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032B2B0: ;
    PUSH32(esp, 0x0032B2B5u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032B2B5: ;
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B2D0
 * Original: 0x0032B2D0 - 0x0032B2D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B2D0(void)
{

loc_0032B2D0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B2E0
 * Original: 0x0032B2E0 - 0x0032B2E5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B2E0(void)
{

loc_0032B2E0: ;
    eax = ZX16(MEM16(ecx + 0xA));
    esp += 4; return; /* ret */

}

/**
 * sub_0032B2F0
 * Original: 0x0032B2F0 - 0x0032B2FB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B2F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032B2F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032B300
 * Original: 0x0032B300 - 0x0032B349 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032B300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x30, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B360
 * Original: 0x0032B360 - 0x0032B3CD (109 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B360(void)
{

loc_0032B360: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax) = ecx;
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B3F0
 * Original: 0x0032B3F0 - 0x0032B45B (107 bytes, 28 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0032B3F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032B3F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032B480
 * Original: 0x0032B480 - 0x0032B495 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B480(void)
{

loc_0032B480: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032B494u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032B492u); } /* indirect call */
    }

loc_0032B494: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B4A0
 * Original: 0x0032B4A0 - 0x0032B4AB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B4A0: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B4B0
 * Original: 0x0032B4B0 - 0x0032B4B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B4B0(void)
{

loc_0032B4B0: ;
    eax = 0x8F4B794;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B4C0
 * Original: 0x0032B4C0 - 0x0032B4C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B4C0(void)
{

loc_0032B4C0: ;
    eax = 0x10F4A963;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B4D0
 * Original: 0x0032B4D0 - 0x0032B4D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B4D0(void)
{

loc_0032B4D0: ;
    eax = 0xCF4BB78;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B4E0
 * Original: 0x0032B4E0 - 0x0032B4E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B4E0(void)
{

loc_0032B4E0: ;
    eax = 0x6CF4AF5A;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B4F0
 * Original: 0x0032B4F0 - 0x0032B4F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B4F0(void)
{

loc_0032B4F0: ;
    eax = 0x10F4A161;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B500
 * Original: 0x0032B500 - 0x0032B50C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B500: ;
    edx = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B510
 * Original: 0x0032B510 - 0x0032B51C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B510: ;
    edx = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B520
 * Original: 0x0032B520 - 0x0032B524 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B520(void)
{

loc_0032B520: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B530
 * Original: 0x0032B530 - 0x0032B533 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B530(void)
{

loc_0032B530: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B540
 * Original: 0x0032B540 - 0x0032B543 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B540(void)
{

loc_0032B540: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B550
 * Original: 0x0032B550 - 0x0032B553 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B550: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B560
 * Original: 0x0032B560 - 0x0032B591 (49 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B560: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032B57A; /* je: equal / zero */

loc_0032B567: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_0032B57A: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    MEM32(edx) = 0;
    MEM32(eax) = 0xFFFFFEE1u;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032B5A0
 * Original: 0x0032B5A0 - 0x0032B5A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B5A0(void)
{

loc_0032B5A0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B5B0
 * Original: 0x0032B5B0 - 0x0032B5B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B5B0(void)
{

loc_0032B5B0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B5C0
 * Original: 0x0032B5C0 - 0x0032B5D7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B5C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032B5D3u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0032B5D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B5E0
 * Original: 0x0032B5E0 - 0x0032B5F2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032B5E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032B5F1; /* je: equal / zero */

loc_0032B5E8: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00574573(); return; /* tail jmp 0x00574573 */

loc_0032B5F1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B600
 * Original: 0x0032B600 - 0x0032B61B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B600(void)
{

loc_0032B600: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x9093C0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0032B61Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032B617u); } /* indirect call */
    }

loc_0032B61A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B630
 * Original: 0x0032B630 - 0x0032B639 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B630(void)
{

loc_0032B630: ;
    eax = ecx;
    MEM32(eax) = 0x829E54;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B640
 * Original: 0x0032B640 - 0x0032B647 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B640(void)
{

loc_0032B640: ;
    MEM32(ecx) = 0x829E54;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B650
 * Original: 0x0032B650 - 0x0032B672 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B650: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829E54;
    if (TEST_Z(_fa, _fb)) goto loc_0032B66C; /* je: equal / zero */

loc_0032B660: ;
    ecx = MEM32(0x9093C0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032B66Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032B669u); } /* indirect call */
    }

loc_0032B66C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B680
 * Original: 0x0032B680 - 0x0032B684 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B680(void)
{

loc_0032B680: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B690
 * Original: 0x0032B690 - 0x0032B694 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B690(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032B690: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032B6A0
 * Original: 0x0032B6A0 - 0x0032B6A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B6A0(void)
{

loc_0032B6A0: ;
    MEM32(ecx) = 0x829E64;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B6B0
 * Original: 0x0032B6B0 - 0x0032B6B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B6B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B6B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B6C0
 * Original: 0x0032B6C0 - 0x0032B6C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B6C0(void)
{

loc_0032B6C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B6D0
 * Original: 0x0032B6D0 - 0x0032B6F2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B6D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829E64;
    if (TEST_Z(_fa, _fb)) goto loc_0032B6EC; /* je: equal / zero */

loc_0032B6E0: ;
    ecx = MEM32(0x909334);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032B6ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032B6E9u); } /* indirect call */
    }

loc_0032B6EC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B700
 * Original: 0x0032B700 - 0x0032B75D (93 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B700(void)
{

loc_0032B700: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032B780
 * Original: 0x0032B780 - 0x0032B7E7 (103 bytes, 26 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0032B780(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032B780: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = sin(fp_top()); /* fsin */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ecx) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032B800
 * Original: 0x0032B800 - 0x0032B80D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B800(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032B800: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    SMEM32(esp) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032B810
 * Original: 0x0032B810 - 0x0032B814 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B810(void)
{

loc_0032B810: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B820
 * Original: 0x0032B820 - 0x0032B82D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B820: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x9018A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x9018A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B830
 * Original: 0x0032B830 - 0x0032B84B (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B830(void)
{

loc_0032B830: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0032B848u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032B845u); } /* indirect call */
    }

loc_0032B848: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B860
 * Original: 0x0032B860 - 0x0032B87B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B860(void)
{

loc_0032B860: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x909328);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0032B87Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032B877u); } /* indirect call */
    }

loc_0032B87A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B890
 * Original: 0x0032B890 - 0x0032B8A7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B890: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    ecx = ecx & 0xF4F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x460;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B8B0
 * Original: 0x0032B8B0 - 0x0032B8BB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B8B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B8C0
 * Original: 0x0032B8C0 - 0x0032B8CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B8C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B8C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B8D0
 * Original: 0x0032B8D0 - 0x0032B8DC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B8D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B8E0
 * Original: 0x0032B8E0 - 0x0032B8F3 (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B8E0: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx) = MEM16(ecx) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B900
 * Original: 0x0032B900 - 0x0032B91B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B900: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx) = MEM16(ecx) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B930
 * Original: 0x0032B930 - 0x0032B945 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B930: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x38));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx + 0x38) = MEM16(ecx + 0x38) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B950
 * Original: 0x0032B950 - 0x0032B970 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032B950: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esp + 4));
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, MEM8(ecx + 0x38));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM16(ecx + 0x38) = MEM16(ecx + 0x38) ^ LO16(edx);
    _fa = (uint32_t)(MEM16(ecx + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B980
 * Original: 0x0032B980 - 0x0032B986 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B980: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B990
 * Original: 0x0032B990 - 0x0032B99A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B990(void)
{

loc_0032B990: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B9A0
 * Original: 0x0032B9A0 - 0x0032B9A9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B9A0(void)
{

loc_0032B9A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032B9B0
 * Original: 0x0032B9B0 - 0x0032B9B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B9B0(void)
{

loc_0032B9B0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B9C0
 * Original: 0x0032B9C0 - 0x0032B9C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B9C0(void)
{

loc_0032B9C0: ;
    eax = ecx + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B9D0
 * Original: 0x0032B9D0 - 0x0032B9DE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B9D0: ;
    SET_LO8(edx, MEM8(ecx + 0x140));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B9F0
 * Original: 0x0032B9F0 - 0x0032B9FE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B9F0: ;
    SET_LO8(edx, MEM8(ecx + 0x141));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0032BA10
 * Original: 0x0032BA10 - 0x0032BA1E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BA10: ;
    SET_LO8(edx, MEM8(ecx + 0x142));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0032BA30
 * Original: 0x0032BA30 - 0x0032BA3E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BA30: ;
    SET_LO8(edx, MEM8(ecx + 0x143));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0032BA50
 * Original: 0x0032BA50 - 0x0032BA57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BA50(void)
{

loc_0032BA50: ;
    eax = ecx + 0xC0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BA60
 * Original: 0x0032BA60 - 0x0032BA67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BA60(void)
{

loc_0032BA60: ;
    eax = ecx + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BA70
 * Original: 0x0032BA70 - 0x0032BA74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BA70(void)
{

loc_0032BA70: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BA80
 * Original: 0x0032BA80 - 0x0032BA84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BA80(void)
{

loc_0032BA80: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BA90
 * Original: 0x0032BA90 - 0x0032BA94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BA90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032BA90: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032BAA0
 * Original: 0x0032BAA0 - 0x0032BAA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BAA0(void)
{

loc_0032BAA0: ;
    eax = MEM32(ecx + 0xC0);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BAB0
 * Original: 0x0032BAB0 - 0x0032BAB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BAB0(void)
{

loc_0032BAB0: ;
    eax = MEM32(ecx + 0xA8);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BAC0
 * Original: 0x0032BAC0 - 0x0032BAC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BAC0(void)
{

loc_0032BAC0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BAD0
 * Original: 0x0032BAD0 - 0x0032BADA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BAD0(void)
{

loc_0032BAD0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BAE0
 * Original: 0x0032BAE0 - 0x0032BAE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BAE0(void)
{

loc_0032BAE0: ;
    SET_LO8(eax, MEM8(ecx + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_0032BAF0
 * Original: 0x0032BAF0 - 0x0032BB00 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BAF0(void)
{

loc_0032BAF0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BB10
 * Original: 0x0032BB10 - 0x0032BB1D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BB10(void)
{

loc_0032BB10: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x44);
    eax = MEM32(edx + eax * 4 + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BB20
 * Original: 0x0032BB20 - 0x0032BB26 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BB20: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0032BB30
 * Original: 0x0032BB30 - 0x0032BB49 (25 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BB30: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032BB50
 * Original: 0x0032BB50 - 0x0032BB54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BB50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032BB50: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032BB60
 * Original: 0x0032BB60 - 0x0032BB7A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BB60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BB80
 * Original: 0x0032BB80 - 0x0032BB9A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BB80: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BBA0
 * Original: 0x0032BBA0 - 0x0032BBAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BBA0(void)
{

loc_0032BBA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x90) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BBB0
 * Original: 0x0032BBB0 - 0x0032BBB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BBB0(void)
{

loc_0032BBB0: ;
    eax = MEM32(ecx + 0x90);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BBC0
 * Original: 0x0032BBC0 - 0x0032BBC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BBC0(void)
{

loc_0032BBC0: ;
    eax = MEM32(ecx + 0x94);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BBD0
 * Original: 0x0032BBD0 - 0x0032BBD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BBD0(void)
{

loc_0032BBD0: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BBE0
 * Original: 0x0032BBE0 - 0x0032BBE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BBE0(void)
{

loc_0032BBE0: ;
    eax = MEM32(0x8FCAA0);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BBF0
 * Original: 0x0032BBF0 - 0x0032BC01 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BBF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BBF0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BC10
 * Original: 0x0032BC10 - 0x0032BC18 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BC10: ;
    eax = MEM32(ecx + 0x408);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0032BC20
 * Original: 0x0032BC20 - 0x0032BC29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BC20(void)
{

loc_0032BC20: ;
    eax = ecx;
    MEM32(eax) = 0x829EA0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BC30
 * Original: 0x0032BC30 - 0x0032BC35 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BC30(void)
{

loc_0032BC30: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BC40
 * Original: 0x0032BC40 - 0x0032BC49 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BC40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032BC40: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032BC50
 * Original: 0x0032BC50 - 0x0032BC57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BC50(void)
{

loc_0032BC50: ;
    MEM32(ecx) = 0x829E54;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BC60
 * Original: 0x0032BC60 - 0x0032BC82 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BC60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829E54;
    if (TEST_Z(_fa, _fb)) goto loc_0032BC7C; /* je: equal / zero */

loc_0032BC70: ;
    ecx = MEM32(0x9093C0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032BC7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BC79u); } /* indirect call */
    }

loc_0032BC7C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BC90
 * Original: 0x0032BC90 - 0x0032BCAE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BC90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0032BC98u); RECOMP_ABI_CALL(0x000329C1u, sub_000329C1); /* call 0x000329C1 */

loc_0032BC98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032BCA8; /* je: equal / zero */

loc_0032BC9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032BCA5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032BCA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032BCA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BCC0
 * Original: 0x0032BCC0 - 0x0032BD2B (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032BCC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0032BCCBu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0032BCCB: ;
    ebp = eax;
    esi = ebx + 0x20;
    edi = 2;

loc_0032BCD5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032BCF0; /* je: equal / zero */

loc_0032BCDB: ;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0032BCEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BCE7u); } /* indirect call */
    }

loc_0032BCEA: ;
    MEM32(esi) = 0;

loc_0032BCF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032BCD5; /* jne: not equal / not zero */

loc_0032BCF6: ;
    esi = ebx + 0x10;
    edi = 2;
    edi = edi;

loc_0032BD00: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032BD20; /* je: equal / zero */

loc_0032BD06: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0032BD0Eu); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0032BD0E: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032BD1A; /* je: equal / zero */

loc_0032BD14: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032BD1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BD18u); } /* indirect call */
    }

loc_0032BD1A: ;
    MEM32(esi) = 0;

loc_0032BD20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032BD00; /* jne: not equal / not zero */

loc_0032BD26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BD50
 * Original: 0x0032BD50 - 0x0032BD6A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BD50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BD70
 * Original: 0x0032BD70 - 0x0032BE0B (155 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032BD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032BD70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    edx = MEM32(esp + 0x14);
    edi = esi + 0x70;
    eax = edi;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    ebx = esi + 0x80;
    eax = esi + 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032BDDDu); RECOMP_ABI_CALL(0x005A0E12u, sub_005A0E12); /* call 0x005A0E12 */

loc_0032BDDD: ;
    fp_push((double)SMEM32(esi + 0x3C)); /* fild */
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x99));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0032BE04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BE01u); } /* indirect call */
    }

loc_0032BE04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032BE40
 * Original: 0x0032BE40 - 0x0032BE52 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BE40(void)
{

loc_0032BE40: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx + 0xF8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032BE51u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0032BE51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BE60
 * Original: 0x0032BE60 - 0x0032BE70 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BE60: ;
    ecx = MEM32(ecx + 0xF8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032BE6F; /* je: equal / zero */

loc_0032BE6C: ;
    eax = MEM32(ecx + 0x28);

loc_0032BE6F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BE80
 * Original: 0x0032BE80 - 0x0032BEF5 (117 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BE80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032BEE1; /* jle: less or equal (signed <=) */

loc_0032BE8E: ;
    ecx = MEM32(0x9094C8);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x829EB0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0032BEADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BEAAu); } /* indirect call */
    }

loc_0032BEAD: ;
    ecx = MEM32(esi + 0x10);
    edi = eax;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032BEC0u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0032BEC0: ;
    ecx = MEM32(0x9094C8);
    eax = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0032BED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BECFu); } /* indirect call */
    }

loc_0032BED2: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);

loc_0032BEE1: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 8);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BF20
 * Original: 0x0032BF20 - 0x0032BF24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BF20(void)
{

loc_0032BF20: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BF30
 * Original: 0x0032BF30 - 0x0032BF4B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BF30(void)
{

loc_0032BF30: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0032BF4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BF47u); } /* indirect call */
    }

loc_0032BF4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BF60
 * Original: 0x0032BF60 - 0x0032BF69 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BF60(void)
{

loc_0032BF60: ;
    eax = ecx;
    MEM32(eax) = 0x829EDC;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BF70
 * Original: 0x0032BF70 - 0x0032BF77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BF70(void)
{

loc_0032BF70: ;
    MEM32(ecx) = 0x829EDC;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BF80
 * Original: 0x0032BF80 - 0x0032BF9F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BF80: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829EDC;
    if (TEST_Z(_fa, _fb)) goto loc_0032BF99; /* je: equal / zero */

loc_0032BF90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032BF96u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032BF96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032BF99: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032BFB0
 * Original: 0x0032BFB0 - 0x0032BFB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BFB0(void)
{

loc_0032BFB0: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BFC0
 * Original: 0x0032BFC0 - 0x0032BFC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BFC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032BFC0: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032BFD0
 * Original: 0x0032BFD0 - 0x0032C0B9 (233 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032BFD0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (TEST_Z(_fa, _fb)) goto loc_0032BFEB; /* je: equal / zero */

loc_0032BFDC: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 8); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_0032BFEB: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(0x8FCABC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B43F0)); /* fadd dword ptr [0x7b43f0] */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = edx + edx + 1;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(eax + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x8FCAC0);
    eax = MEM32(edx + eax);
    esi = MEM32(0x8FCABC);
    MEM32(ecx + esi + 0x30) = eax;
    eax = MEM32(0x8FCAC0);
    eax = MEM32(edx + eax + 4);
    esi = MEM32(0x8FCABC);
    MEM32(ecx + esi + 0x34) = eax;
    eax = MEM32(0x8FCAC0);
    edx = MEM32(edx + eax + 8);
    eax = MEM32(0x8FCABC);
    MEM32(ecx + eax + 0x38) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032C100
 * Original: 0x0032C100 - 0x0032C454 (852 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032C100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0032C100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FCAC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0032C44F; /* je: equal / zero */

loc_0032C117: ;
    ecx = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x28) = esi;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    esi = MEM32(esp + 0x1C);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x2C) = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032C1E5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032C1DD: ;
    edx = 1;
    xmm0 = xmm1; /* movaps */

loc_0032C1E5: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(esp + 0x18);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x28) = esi;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    esi = MEM32(esp + 0x1C);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x2C) = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032C278; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032C270: ;
    edx = 2;
    xmm0 = xmm1; /* movaps */

loc_0032C278: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(esp + 0x18);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x28) = esi;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    esi = MEM32(esp + 0x1C);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x2C) = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032C30B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032C303: ;
    edx = 3;
    xmm0 = xmm1; /* movaps */

loc_0032C30B: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(esp + 0x18);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x28) = esi;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    esi = MEM32(esp + 0x1C);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x2C) = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032C39E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032C396: ;
    edx = 4;
    xmm0 = xmm1; /* movaps */

loc_0032C39E: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x28) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(esp + 0x2C) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032C431; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0032C42C: ;
    edx = 5;

loc_0032C431: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;

loc_0032C44F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C530
 * Original: 0x0032C530 - 0x0032C535 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032C530: ;
    g_seh_ebp = ebp; sub_000273A0(); return; /* tail jmp 0x000273A0 */

}

/**
 * sub_0032C540
 * Original: 0x0032C540 - 0x0032C545 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032C540: ;
    g_seh_ebp = ebp; sub_0001C950(); return; /* tail jmp 0x0001C950 */

}

/**
 * sub_0032C550
 * Original: 0x0032C550 - 0x0032C554 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C550(void)
{

loc_0032C550: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C560
 * Original: 0x0032C560 - 0x0032C56D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032C560: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0032C570
 * Original: 0x0032C570 - 0x0032C574 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032C570: ;
    MEM8(ecx) = MEM8(ecx) | 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032C580
 * Original: 0x0032C580 - 0x0032C584 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032C580: ;
    MEM8(ecx) = MEM8(ecx) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032C590
 * Original: 0x0032C590 - 0x0032C596 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C590(void)
{

loc_0032C590: ;
    eax = MEM32(0x8FCAC4);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C5A0
 * Original: 0x0032C5A0 - 0x0032C5C9 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C5A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032C5A0: ;
    ecx = MEM32(esp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0032C5E0
 * Original: 0x0032C5E0 - 0x0032C5F8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0032C5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032C5E0: ;
    eax = MEM32(esp + 4);
    ecx = eax + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032C5F5; /* jne: not equal / not zero */

loc_0032C5EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032C5F5; /* je: equal / zero */

loc_0032C5EF: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0032C5F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032C600
 * Original: 0x0032C600 - 0x0032C654 (84 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032C600: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = ecx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032C670
 * Original: 0x0032C670 - 0x0032C77E (270 bytes, 94 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032C670: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    MEM32(esp + 0x18) = ecx;
    ecx = edi;
    PUSH32(esp, 0x0032C685u); RECOMP_ABI_CALL(0x00576297u, sub_00576297); /* call 0x00576297 */

loc_0032C685: ;
    ebp = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0032C775; /* jbe: below or equal (unsigned <=) */

loc_0032C691: ;
    PUSH32(esp, ebx);

loc_0032C692: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0032C69Au); RECOMP_ABI_CALL(0x0057629Bu, sub_0057629B); /* call 0x0057629B */

loc_0032C69A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    ecx = esp + 0x3C;
    ebx = eax;
    PUSH32(esp, 0x0032C6ACu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0032C6AC: ;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    ecx = esp + 0x34;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x0032C6BDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0032C6BD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032C6E3; /* je: equal / zero */

loc_0032C6C1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032C6D0u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0032C6D0: ;
    ecx = eax;
    PUSH32(esp, 0x0032C6D7u); RECOMP_ABI_CALL(0x0055D2C8u, sub_0055D2C8); /* call 0x0055D2C8 */

loc_0032C6D7: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    goto loc_0032C75C;

loc_0032C6E3: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0032C6EBu); RECOMP_ABI_CALL(0x0057629Bu, sub_0057629B); /* call 0x0057629B */

loc_0032C6EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    ecx = esp + 0x1C;
    ebx = eax;
    PUSH32(esp, 0x0032C6FDu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0032C6FD: ;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    ecx = esp + 0x14;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x0032C70Eu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0032C70E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0032C722; /* je: equal / zero */

loc_0032C714: ;
    edx = MEM32(0x8FCAD0);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    goto loc_0032C75E;

loc_0032C722: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032C728u); RECOMP_ABI_CALL(0x0057629Bu, sub_0057629B); /* call 0x0057629B */

loc_0032C728: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    ecx = esp + 0x20;
    ebx = eax;
    PUSH32(esp, 0x0032C73Au); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0032C73A: ;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    ecx = esp + 0x18;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x0032C74Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0032C74B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032C76B; /* je: equal / zero */

loc_0032C74F: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);

loc_0032C75C: ;
    ecx = edi;

loc_0032C75E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032C764u); RECOMP_ABI_CALL(0x0057629Bu, sub_0057629B); /* call 0x0057629B */

loc_0032C764: ;
    ecx = eax;
    PUSH32(esp, 0x0032C76Bu); RECOMP_ABI_CALL(0x00575FACu, sub_00575FAC); /* call 0x00575FAC */

loc_0032C76B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0032C692; /* jb: below (unsigned <) */

loc_0032C774: ;
    POP32(esp, ebx);

loc_0032C775: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032C7D0
 * Original: 0x0032C7D0 - 0x0032C7D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C7D0(void)
{

loc_0032C7D0: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C7E0
 * Original: 0x0032C7E0 - 0x0032C7E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C7E0(void)
{

loc_0032C7E0: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C7F0
 * Original: 0x0032C7F0 - 0x0032C7F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C7F0(void)
{

loc_0032C7F0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0032C800
 * Original: 0x0032C800 - 0x0032C804 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C800(void)
{

loc_0032C800: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0032C810
 * Original: 0x0032C810 - 0x0032C814 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C810(void)
{

loc_0032C810: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0032C820
 * Original: 0x0032C820 - 0x0032C824 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C820(void)
{

loc_0032C820: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C830
 * Original: 0x0032C830 - 0x0032C834 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C830(void)
{

loc_0032C830: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C840
 * Original: 0x0032C840 - 0x0032C844 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C840(void)
{

loc_0032C840: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C850
 * Original: 0x0032C850 - 0x0032C867 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C850(void)
{

loc_0032C850: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0032C870
 * Original: 0x0032C870 - 0x0032C901 (145 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0032C870: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x829F08;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032C8A4u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0032C8A4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x829F04); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD64); /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x829354)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032C8EB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032C8DE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */

loc_0032C8EB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C930
 * Original: 0x0032C930 - 0x0032C9CB (155 bytes, 43 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0032C930(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032C930: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7AA83C)); /* movss */
    eax = ecx;
    ecx = MEM32(edx);
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 0x64) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 0x68) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    ecx = eax + 0x70;
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(ecx) = esi;
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_0032C977; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032C96A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA838)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032C97A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032C977: ;
    xmm0 = xmm1; /* movaps */

loc_0032C97A: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x78) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x829354); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032C9C8; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x829354)) */

loc_0032C9BC: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0032C9C6u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0032C9C6: ;
    fp_pop(); /* fstp st(0) */

loc_0032C9C8: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032CA00
 * Original: 0x0032CA00 - 0x0032CA14 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CA00: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x829F18;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032CA20
 * Original: 0x0032CA20 - 0x0032CA67 (71 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CA20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x829F18;
    if (CMP_EQ(_fa, _fb)) goto loc_0032CA65; /* je: equal / zero */

loc_0032CA30: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032CA58; /* jle: less or equal (signed <=) */

loc_0032CA3A: ;
    /* nop */

loc_0032CA40: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032CA50; /* je: equal / zero */

loc_0032CA4A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0032CA50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032CA4Eu); } /* indirect call */
    }

loc_0032CA50: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032CA40; /* jl: less (signed <) */

loc_0032CA58: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032CA61u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032CA61: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0032CA65: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032CA80
 * Original: 0x0032CA80 - 0x0032CAA6 (38 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CA80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032CAA3; /* jle: less or equal (signed <=) */

loc_0032CA8D: ;
    /* nop */

loc_0032CA90: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0032CA9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032CA98u); } /* indirect call */
    }

loc_0032CA9B: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032CA90; /* jl: less (signed <) */

loc_0032CAA3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032CAB0
 * Original: 0x0032CAB0 - 0x0032CACD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CAB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM32(eax) = 0x829F2C;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CAE0
 * Original: 0x0032CAE0 - 0x0032CB08 (40 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032CAE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x829F2C;
    if (CMP_EQ(_fa, _fb)) goto loc_0032CAF9; /* je: equal / zero */

loc_0032CAF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032CAF6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032CAF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032CAF9: ;
    MEM32(esi + 0x18) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00028DF4(); return; /* tail jmp 0x00028DF4 */

}

/**
 * sub_0032CB20
 * Original: 0x0032CB20 - 0x0032CB29 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CB20(void)
{

loc_0032CB20: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CB30
 * Original: 0x0032CB30 - 0x0032CB31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CB30(void)
{

loc_0032CB30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CB40
 * Original: 0x0032CB40 - 0x0032CB41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CB40(void)
{

loc_0032CB40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CB50
 * Original: 0x0032CB50 - 0x0032CB61 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CB50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CB50: ;
    eax = MEM32(ecx);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 4) = edx;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032CB70
 * Original: 0x0032CB70 - 0x0032CB97 (39 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CB70: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032CB94; /* jle: less or equal (signed <=) */

loc_0032CB7C: ;
    PUSH32(esp, edi);
    edi = ebx + 4;

loc_0032CB80: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0032CB89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032CB86u); } /* indirect call */
    }

loc_0032CB89: ;
    eax = MEM32(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032CB80; /* jl: less (signed <) */

loc_0032CB93: ;
    POP32(esp, edi);

loc_0032CB94: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032CBA0
 * Original: 0x0032CBA0 - 0x0032CBC5 (37 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CBA0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032CBC2; /* jle: less or equal (signed <=) */

loc_0032CBAC: ;
    PUSH32(esp, edi);
    edi = ebx + 4;

loc_0032CBB0: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0032CBB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032CBB4u); } /* indirect call */
    }

loc_0032CBB7: ;
    eax = MEM32(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032CBB0; /* jl: less (signed <) */

loc_0032CBC1: ;
    POP32(esp, edi);

loc_0032CBC2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032CBD0
 * Original: 0x0032CBD0 - 0x0032CBE4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CBD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CBD0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM32(eax) = 0x829F40;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CBF0
 * Original: 0x0032CBF0 - 0x0032CBFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032CBF0: ;
    MEM32(ecx) = 0x829F40;
    g_seh_ebp = ebp; sub_00028DF4(); return; /* tail jmp 0x00028DF4 */

}

/**
 * sub_0032CC00
 * Original: 0x0032CC00 - 0x0032CD54 (340 bytes, 65 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032CC00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0032CD53; /* ja: above (unsigned >) */

loc_0032CC0D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x32CD54); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0032CC14u) goto loc_0032CC14;
    if (_jt == 0x0032CC3Cu) goto loc_0032CC3C;
    if (_jt == 0x0032CC6Cu) goto loc_0032CC6C;
    if (_jt == 0x0032CC9Cu) goto loc_0032CC9C;
    if (_jt == 0x0032CCCCu) goto loc_0032CCCC;
    if (_jt == 0x0032CCF4u) goto loc_0032CCF4;
    if (_jt == 0x0032CD24u) goto loc_0032CD24;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0032CC14: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AD370)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD408)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0032CC3C: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AD410)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B9D60)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD344)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0032CC6C: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0032CC9C: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B9D60)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0032CCCC: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0032CCF4: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD408)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B9D60)); /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0032CD24: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_0032CD53: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CDE0
 * Original: 0x0032CDE0 - 0x0032CE81 (161 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CDE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(esi);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = edx;
    ecx = edx;
    edx = MEM32(eax);
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    MEM32(esi) = edx;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 4) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 4));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 4) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 4));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 4) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 4));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 4) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 4));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 0x10);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = MEM32(esi + 8);
    MEM8(esi + 4) = LO8(edx);
    ecx = ecx ^ MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(esi + 8);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edx;
    ecx = edx;
    edx = MEM32(eax + 8);
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0xC;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0x0032CE78u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032CE78: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032CEB0
 * Original: 0x0032CEB0 - 0x0032CEC0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CEB0(void)
{

loc_0032CEB0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CED0
 * Original: 0x0032CED0 - 0x0032CED1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CED0(void)
{

loc_0032CED0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CEE0
 * Original: 0x0032CEE0 - 0x0032CEF1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CEE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032CF00
 * Original: 0x0032CF00 - 0x0032D038 (312 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032CF00: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x38));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF4F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x460;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 0x38) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 0x3A));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF4F0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x460;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 0x3A) = LO16(edx);
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0x39) = MEM8(eax + 0x39) & 0xFC;
    _fa = (uint32_t)(MEM8(eax + 0x39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0xC0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0xD0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0xE0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0xF0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x100, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0x110, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0x120, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x130, xmm0); /* movaps */
    MEM8(eax + 0x140) = LO8(ecx);
    MEM8(eax + 0x141) = LO8(ecx);
    SET_LO8(ecx, 1);
    MEM8(eax + 0x142) = LO8(ecx);
    MEM8(eax + 0x143) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D090
 * Original: 0x0032D090 - 0x0032D091 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D090(void)
{

loc_0032D090: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032D0A0
 * Original: 0x0032D0A0 - 0x0032D0DB (59 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D0A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ebx = edi + 8;
    PUSH32(esp, ebx);
    ecx = esi + 8;
    PUSH32(esp, 0x0032D0B5u); RECOMP_ABI_CALL(0x0002AD0Cu, sub_0002AD0C); /* call 0x0002AD0C */

loc_0032D0B5: ;
    eax = MEM32(edi);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(ebx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x28) = ecx;
    MEM8(esi + 0x38) = MEM8(esi + 0x38) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(edi + 4);
    MEM32(esi + 0x30) = edx;
    eax = MEM32(edi + 0x28);
    POP32(esp, edi);
    MEM32(esi + 0x34) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032D0F0
 * Original: 0x0032D0F0 - 0x0032D138 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D0F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x38));
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = eax & 0xFFFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x38) = LO16(eax);
    MEM8(ecx + 0x38) = MEM8(ecx + 0x38) & 0xCF;
    _fa = (uint32_t)(MEM8(ecx + 0x38)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx + 0x140) = LO8(eax);
    MEM8(ecx + 0x141) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0xC));
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0xC) = LO8(eax);
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0032D150
 * Original: 0x0032D150 - 0x0032D17A (42 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D150: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032D15C; /* jl: less (signed <) */

loc_0032D155: ;
    eax = 1;
    goto loc_0032D160;

loc_0032D15C: ;
    SET_LO8(eax, MEM8(esp + 8));

loc_0032D160: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032D171; /* je: equal / zero */

loc_0032D168: ;
    MEM8(ecx + 0x140) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_0032D171: ;
    MEM8(ecx + 0x141) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032D190
 * Original: 0x0032D190 - 0x0032D1BD (45 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D190: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032D198u); RECOMP_ABI_CALL(0x00026298u, sub_00026298); /* call 0x00026298 */

loc_0032D198: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = eax;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0032D1D0
 * Original: 0x0032D1D0 - 0x0032D1E6 (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D1D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D1D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esp + 4));
    SET_LO16(eax, LO16(eax) ^ MEM16(ecx + 0x38));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = eax & 0x300;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx + 0x38) = MEM16(ecx + 0x38) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032D1F0
 * Original: 0x0032D1F0 - 0x0032D21F (47 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D1F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 2);
    esi = edi + 0x38;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0032D206u); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_0032D206: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032D219; /* jne: not equal / not zero */

loc_0032D20C: ;
    PUSH32(esp, 0x40);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0032D219u); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_0032D219: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032D230
 * Original: 0x0032D230 - 0x0032D25B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0032D244u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0032D244: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032D258; /* jne: not equal / not zero */

loc_0032D24A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0032D258u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0032D258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D270
 * Original: 0x0032D270 - 0x0032D3B7 (327 bytes, 92 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032D270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(ecx, MEM8(0x8FE084));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0032D2B0; /* jne: not equal / not zero */

loc_0032D28D: ;
    esi = MEM32(0x8FE084);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x8FE080);
    eax = eax & 0xF4F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x460;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8FE084) = esi;
    MEM16(0x8FE080) = LO16(eax);

loc_0032D2B0: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x8FE080);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032D2C1u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0032D2C1: ;
    eax = MEM32(0x8FE080);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032D2D9; /* jne: not equal / not zero */

loc_0032D2CB: ;
    PUSH32(esp, 0x40);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032D2D9u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0032D2D9: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 2);
    esi = ebx + 0x3A;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032D2E9u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0032D2E9: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032D3AE; /* jne: not equal / not zero */

loc_0032D2F3: ;
    PUSH32(esp, 0x40);
    edx = ebx + 0x80;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032D303u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0032D303: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032D3AE; /* jne: not equal / not zero */

loc_0032D30D: ;
    eax = MEM32(0x8FE080);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032D3AE; /* jne: not equal / not zero */

loc_0032D31B: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm2 = XMM_MEM(ebx + 0x80); /* movaps */
    eax = ebx + 0x80;
    xmm0.f[0] = xmm1.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    XMM_STORE(eax, xmm2); /* movaps */
    xmm2 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    XMM_STORE(eax + 0x10, xmm2); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    XMM_STORE(eax + 0x20, xmm2); /* movaps */
    xmm2 = XMM_MEM(eax + 0x30); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    XMM_STORE(eax + 0x30, xmm2); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x18, xmm1); /* movaps */
    xmm1 = XMM_MEM(esp + 0x28); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x28, xmm1); /* movaps */
    xmm1 = XMM_MEM(esp + 0x38); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x38, xmm1); /* movaps */
    xmm1 = XMM_MEM(esp + 0x48); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x48, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032D3ABu); RECOMP_ABI_CALL(0x0001D95Eu, sub_0001D95E); /* call 0x0001D95E */

loc_0032D3AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032D3AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0032D410
 * Original: 0x0032D410 - 0x0032D447 (55 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D410: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = eax & 0xF4F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    ecx = esp + 8;
    eax = eax | 0x460;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM16(esp + 0xC) = LO16(eax);
    PUSH32(esp, 0x0032D436u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0032D436: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032D442; /* jne: not equal / not zero */

loc_0032D43F: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 0x40;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032D442: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032D460
 * Original: 0x0032D460 - 0x0032D469 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D460(void)
{

loc_0032D460: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032D470
 * Original: 0x0032D470 - 0x0032D471 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D470(void)
{

loc_0032D470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032D480
 * Original: 0x0032D480 - 0x0032D48A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D480: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0032D490
 * Original: 0x0032D490 - 0x0032D499 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D490(void)
{

loc_0032D490: ;
    eax = ecx;
    MEM32(eax) = 0x829F54;
    esp += 4; return; /* ret */

}

/**
 * sub_0032D4A0
 * Original: 0x0032D4A0 - 0x0032D4A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D4A0(void)
{

loc_0032D4A0: ;
    MEM32(ecx) = 0x829F54;
    esp += 4; return; /* ret */

}

/**
 * sub_0032D4B0
 * Original: 0x0032D4B0 - 0x0032D4CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D4B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829F54;
    if (TEST_Z(_fa, _fb)) goto loc_0032D4C9; /* je: equal / zero */

loc_0032D4C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032D4C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032D4C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032D4C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
