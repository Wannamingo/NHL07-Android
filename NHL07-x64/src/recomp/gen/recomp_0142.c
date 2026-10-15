/**
 * nhl_07_recomp - Recompiled code chunk 142
 * Functions: 250 (0x00254330 - 0x0025BFC0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00254330
 * Original: 0x00254330 - 0x0025433C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254330: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_00254340
 * Original: 0x00254340 - 0x0025434C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254340(void)
{

loc_00254340: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254350
 * Original: 0x00254350 - 0x00254354 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254350(void)
{

loc_00254350: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00254360
 * Original: 0x00254360 - 0x00254364 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254360(void)
{

loc_00254360: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    esp += 4; return; /* ret */

}

/**
 * sub_00254370
 * Original: 0x00254370 - 0x00254387 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00254370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254370: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254384; /* jl: less (signed <) */

loc_00254379: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00254384; /* jg: greater (signed >) */

loc_0025437E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00254384: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00254390
 * Original: 0x00254390 - 0x002543AF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254390: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8059D4;
    if (TEST_Z(_fa, _fb)) goto loc_002543A9; /* je: equal / zero */

loc_002543A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002543A6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002543A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002543A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002543C0
 * Original: 0x002543C0 - 0x002543C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002543C0(void)
{

loc_002543C0: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002543D0
 * Original: 0x002543D0 - 0x002543D3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002543D0(void)
{

loc_002543D0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002543E0
 * Original: 0x002543E0 - 0x002543F3 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002543E0(void)
{

loc_002543E0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, 0x7F6ED4);
    PUSH32(esp, 0x002543F0u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_002543F0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00254400
 * Original: 0x00254400 - 0x0025446D (109 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254400: ;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025446A; /* jne: not equal / not zero */

loc_00254407: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00254413u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254410u); } /* indirect call */
    }

loc_00254413: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00254417: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00254423u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254420u); } /* indirect call */
    }

loc_00254423: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00254431u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025442Eu); } /* indirect call */
    }

loc_00254431: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0025443Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025443Cu); } /* indirect call */
    }

loc_0025443F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0025444Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025444Au); } /* indirect call */
    }

loc_0025444D: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x34;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00254461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025445Eu); } /* indirect call */
    }

loc_00254461: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254417; /* jl: less (signed <) */

loc_00254467: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0025446A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254490
 * Original: 0x00254490 - 0x002544B8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254490: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002544A3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002544A3; /* jne: not equal / not zero */

loc_002544AD: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002544D0
 * Original: 0x002544D0 - 0x002544F8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002544D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002544D0: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002544E3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002544E3; /* jne: not equal / not zero */

loc_002544ED: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254510
 * Original: 0x00254510 - 0x0025454D (61 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254510: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    ecx = 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = 2;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = 0xE;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00254560
 * Original: 0x00254560 - 0x00254564 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254560(void)
{

loc_00254560: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00254570
 * Original: 0x00254570 - 0x0025459A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254570: ;
    eax = MEM32(0x8C2438);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254591; /* je: equal / zero */

loc_0025457A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254591; /* je: equal / zero */

loc_0025457F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254591; /* je: equal / zero */

loc_00254584: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254591; /* je: equal / zero */

loc_00254589: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254591; /* je: equal / zero */

loc_0025458E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00254591: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0x844C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x844C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002545B0
 * Original: 0x002545B0 - 0x002545B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002545B0(void)
{

loc_002545B0: ;
    eax = MEM32(ecx + 0x198);
    esp += 4; return; /* ret */

}

/**
 * sub_002545C0
 * Original: 0x002545C0 - 0x002545C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002545C0(void)
{

loc_002545C0: ;
    eax = MEM32(ecx + 0x19C);
    esp += 4; return; /* ret */

}

/**
 * sub_002545D0
 * Original: 0x002545D0 - 0x002545D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002545D0(void)
{

loc_002545D0: ;
    eax = MEM32(ecx + 0x190);
    esp += 4; return; /* ret */

}

/**
 * sub_002545E0
 * Original: 0x002545E0 - 0x002545E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002545E0(void)
{

loc_002545E0: ;
    MEM32(ecx) = 0x8059D8;
    esp += 4; return; /* ret */

}

/**
 * sub_002545F0
 * Original: 0x002545F0 - 0x0025460F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002545F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002545F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8059D8;
    if (TEST_Z(_fa, _fb)) goto loc_00254609; /* je: equal / zero */

loc_00254600: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00254606u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00254606: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00254609: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254620
 * Original: 0x00254620 - 0x0025462E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254620(void)
{

loc_00254620: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0xF8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254640
 * Original: 0x00254640 - 0x00254647 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254640(void)
{

loc_00254640: ;
    MEM32(ecx) = 0x8059E4;
    esp += 4; return; /* ret */

}

/**
 * sub_00254650
 * Original: 0x00254650 - 0x0025466F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254650: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8059E4;
    if (TEST_Z(_fa, _fb)) goto loc_00254669; /* je: equal / zero */

loc_00254660: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00254666u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00254666: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00254669: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254680
 * Original: 0x00254680 - 0x0025468F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254680: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x30D0) = eax;
    MEM32(ecx + 0x30D8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002546A0
 * Original: 0x002546A0 - 0x002546C8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002546A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002546A0: ;
    PUSH32(esp, esi);
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x1C) = ecx;
    esi = eax;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x20) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002546E0
 * Original: 0x002546E0 - 0x002546E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002546E0(void)
{

loc_002546E0: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002546F0
 * Original: 0x002546F0 - 0x00254718 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002546F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002546F0: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00254703: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254703; /* jne: not equal / not zero */

loc_0025470D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254730
 * Original: 0x00254730 - 0x00254758 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254730: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00254743: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254743; /* jne: not equal / not zero */

loc_0025474D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254770
 * Original: 0x00254770 - 0x00254782 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254770(void)
{

loc_00254770: ;
    PUSH32(esp, 0x00254775u); RECOMP_ABI_CALL(0x00036238u, sub_00036238); /* call 0x00036238 */

loc_00254775: ;
    PUSH32(esp, 0x0025477Au); RECOMP_ABI_CALL(0x0003708Eu, sub_0003708E); /* call 0x0003708E */

loc_0025477A: ;
    PUSH32(esp, 0x0025477Fu); RECOMP_ABI_CALL(0x0001781Au, sub_0001781A); /* call 0x0001781A */

loc_0025477F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00254790
 * Original: 0x00254790 - 0x002547AE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254790: ;
    edx = MEM32(ecx + 0x1B8);
    eax = MEM32(ecx + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002547A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002547A1u); } /* indirect call */
    }

loc_002547A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002547AAu); RECOMP_ABI_CALL(0x0001B75Du, sub_0001B75D); /* call 0x0001B75D */

loc_002547AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002547C0
 * Original: 0x002547C0 - 0x002547C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002547C0(void)
{

loc_002547C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002547D0
 * Original: 0x002547D0 - 0x002547E1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002547D0(void)
{

loc_002547D0: ;
    PUSH32(esp, 0x002547D5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_002547D5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4D);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002547E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002547DDu); } /* indirect call */
    }

loc_002547E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002547F0
 * Original: 0x002547F0 - 0x002547FC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002547F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002547F0: ;
    PUSH32(esp, 0x002547F5u); RECOMP_ABI_CALL(0x000240CEu, sub_000240CE); /* call 0x000240CE */

loc_002547F5: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002D16F(); return; /* tail jmp 0x0002D16F */

}

/**
 * sub_00254800
 * Original: 0x00254800 - 0x002548FF (255 bytes, 98 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00254809u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00254809: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x14);
    ebx = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0025481Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254819u); } /* indirect call */
    }

loc_0025481C: ;
    ebp = MEM32(esp + 0x18);
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00254824: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0025482Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025482Cu); } /* indirect call */
    }

loc_0025482F: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025483C; /* jle: less or equal (signed <=) */

loc_00254837: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254849; /* je: equal / zero */

loc_0025483B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0025483C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254824; /* jl: less (signed <) */

loc_00254842: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00254849: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebx = 0xF;
    MEM32(esp + 0x18) = 0xA;
    if (CMP_LE(_fas, _fbs)) goto loc_00254868; /* jle: less or equal (signed <=) */

loc_0025485B: ;
    ebx = 0x19;
    MEM32(esp + 0x18) = 0xF;

loc_00254868: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00254871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025486Eu); } /* indirect call */
    }

loc_00254871: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025487Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254879u); } /* indirect call */
    }

loc_0025487C: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002548BC; /* jle: less or equal (signed <=) */

loc_00254895: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2F;
    PUSH32(esp, 0x002548A4u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002548A4: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002548B0; /* jns: not sign (positive) */

loc_002548AB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002548B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002548E7; /* jle: less or equal (signed <=) */

loc_002548B4: ;
    MEM32(ebx) = 0x2E;
    goto loc_002548E7;

loc_002548BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002548F8; /* jge: greater or equal (signed >=) */

loc_002548C2: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2D;
    PUSH32(esp, 0x002548D1u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002548D1: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002548DD; /* jns: not sign (positive) */

loc_002548D8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002548DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002548E7; /* jle: less or equal (signed <=) */

loc_002548E1: ;
    MEM32(ebx) = 0x2B;

loc_002548E7: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002548F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002548EFu); } /* indirect call */
    }

loc_002548F2: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_002548F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00254940
 * Original: 0x00254940 - 0x00254A4E (270 bytes, 107 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00254949u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00254949: ;
    ebp = eax;
    ebp = ebp & 0x80000001u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00254958; /* jns: not sign (positive) */

loc_00254953: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFFFEu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00254958: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00254961u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025495Eu); } /* indirect call */
    }

loc_00254961: ;
    ebx = MEM32(esp + 0x18);
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00254970: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0025497Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254978u); } /* indirect call */
    }

loc_0025497B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254998; /* jne: not equal / not zero */

loc_00254980: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0025498Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254988u); } /* indirect call */
    }

loc_0025498B: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254998; /* jle: less or equal (signed <=) */

loc_00254993: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002549A5; /* je: equal / zero */

loc_00254997: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00254998: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254970; /* jl: less (signed <) */

loc_0025499E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_002549A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebp = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_002549B4; /* jle: less or equal (signed <=) */

loc_002549AF: ;
    ebp = 0x28;

loc_002549B4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x002549BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002549BAu); } /* indirect call */
    }

loc_002549BD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002549C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002549C5u); } /* indirect call */
    }

loc_002549C8: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254A0B; /* jle: less or equal (signed <=) */

loc_002549E2: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2F;
    PUSH32(esp, 0x002549F2u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002549F2: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002549FE; /* jns: not sign (positive) */

loc_002549F9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002549FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254A36; /* jle: less or equal (signed <=) */

loc_00254A02: ;
    MEM32(ebp) = 0x2E;
    goto loc_00254A36;

loc_00254A0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00254A47; /* jge: greater or equal (signed >=) */

loc_00254A0F: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2D;
    PUSH32(esp, 0x00254A1Fu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00254A1F: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00254A2B; /* jns: not sign (positive) */

loc_00254A26: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00254A2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254A36; /* jle: less or equal (signed <=) */

loc_00254A2F: ;
    MEM32(ebp) = 0x2C;

loc_00254A36: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00254A41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254A3Eu); } /* indirect call */
    }

loc_00254A41: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_00254A47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00254AA0
 * Original: 0x00254AA0 - 0x00254BD4 (308 bytes, 101 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254AA0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x1C4;
    if (CMP_NE(_fa, _fb)) goto loc_00254B3A; /* jne: not equal / not zero */

loc_00254ABB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00254AC0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254B17; /* je: equal / zero */

loc_00254AC4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254AC0; /* jl: less (signed <) */

loc_00254ACD: ;
    edi = MEM32(esi + 0x278);
    ecx = edi + edi * 2;
    ebx = esi + ecx * 4;
    MEM32(ebx + 0x1C4) = edx;
    edx = edi + edi * 2 + 0x72;
    MEM32(esi + edx * 4) = 1;
    PUSH32(esp, 0x00254AEFu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00254AEF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edi + 1;
    ecx = 0xF;
    POP32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1CC) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x278) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00254B17: ;
    ecx = eax + eax * 2 + 0x72;
    edx = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    eax = eax + eax * 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + eax * 4 + 0x1CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + eax * 4 + 0x1CC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00254BCE; /* jge: greater or equal (signed >=) */

loc_00254B31: ;
    POP32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00254B3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00254B40: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254B53; /* je: equal / zero */

loc_00254B44: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254B40; /* jl: less (signed <) */

loc_00254B4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00254B53: ;
    edx = 0xE;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x278) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00254BAF; /* jge: greater or equal (signed >=) */

loc_00254B65: ;
    eax = eax + eax * 2;
    ecx = esi + eax * 4 + 0x1C4;
    PUSH32(esp, ebp);

loc_00254B70: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254BAE; /* je: equal / zero */

loc_00254B74: ;
    eax = MEM32(esi + 0x278);
    eax = eax + eax * 2;
    eax = esi + eax * 4;
    ebx = eax + 0x1D0;
    ebp = MEM32(ebx);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(esi + 0x278);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x278) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00254B70; /* jl: less (signed <) */

loc_00254BAE: ;
    POP32(esp, ebp);

loc_00254BAF: ;
    eax = MEM32(esi + 0x278);
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4;
    edx = eax + eax * 2 + 0x72;
    MEM32(ecx + 0x1C4) = edi;
    MEM32(ecx + 0x1CC) = edi;
    MEM32(esi + edx * 4) = edi;

loc_00254BCE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00254C30
 * Original: 0x00254C30 - 0x00254C6C (60 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254C30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, 1);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x1C4;

loc_00254C40: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254C52; /* je: equal / zero */

loc_00254C44: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254C40; /* jl: less (signed <) */

loc_00254C4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00254C52: ;
    esi = edx + edx * 2 + 0x72;
    esi = MEM32(ecx + esi * 4);
    edx = edx + edx * 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 4 + 0x1CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + edx * 4 + 0x1CC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254C67; /* jl: less (signed <) */

loc_00254C65: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00254C67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254C80
 * Original: 0x00254C80 - 0x00254C87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254C80(void)
{

loc_00254C80: ;
    SET_LO8(eax, MEM8(ecx + 0x1C0));
    esp += 4; return; /* ret */

}

/**
 * sub_00254C90
 * Original: 0x00254C90 - 0x00254CB3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254C90(void)
{

loc_00254C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x58) = 9;
    PUSH32(esp, 0x00254C9Fu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00254C9F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00254CAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254CA7u); } /* indirect call */
    }

loc_00254CAA: ;
    MEM8(esi + 0x1C0) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00254CC0
 * Original: 0x00254CC0 - 0x00254CC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254CC0(void)
{

loc_00254CC0: ;
    eax = MEM32(ecx + 0x1B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00254CD0
 * Original: 0x00254CD0 - 0x00254D10 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254CD0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    ecx = 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = 2;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = 0xE;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x38) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00254D20
 * Original: 0x00254D20 - 0x00254D61 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254D20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00254D43u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_00254D43: ;
    ecx = MEM32(esp);
    PUSH32(esp, 0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00254D55u); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_00254D55: ;
    edx = MEM32(esp + 4);
    MEM32(esi) = edx;
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00254D80
 * Original: 0x00254D80 - 0x00254DC4 (68 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254D80(void)
{

loc_00254D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x7D6);
    ecx = esi + 0x10;
    MEM32(esi) = 0x8059F4;
    MEM32(esi + 4) = 1;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0x7D6;
    PUSH32(esp, 0x00254DAFu); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_00254DAF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x7D7);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00254DC0u); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_00254DC0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00254DE0
 * Original: 0x00254DE0 - 0x00254DE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254DE0(void)
{

loc_00254DE0: ;
    MEM32(ecx) = 0x8059F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00254DF0
 * Original: 0x00254DF0 - 0x00254E0E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00254DF8u); RECOMP_ABI_CALL(0x000153EEu, sub_000153EE); /* call 0x000153EE */

loc_00254DF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254E08; /* je: equal / zero */

loc_00254DFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00254E05u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00254E05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00254E08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254E20
 * Original: 0x00254E20 - 0x00254E2C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254E20(void)
{

loc_00254E20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FEB14);
    esp += 4; return; /* ret */

}

/**
 * sub_00254E30
 * Original: 0x00254E30 - 0x00254E3C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254E30(void)
{

loc_00254E30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FEB50);
    esp += 4; return; /* ret */

}

/**
 * sub_00254E40
 * Original: 0x00254E40 - 0x00254EEB (171 bytes, 63 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254E40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(esp + 0x20);
    eax = 0x4B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00254E5A; /* jle: less or equal (signed <=) */

loc_00254E56: ;
    MEM32(esp + 0x28) = eax;

loc_00254E5A: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x805A40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00254E72u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00254E72: ;
    edi = ZX16(MEM16(esp + 0x24));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254EBD; /* jle: less or equal (signed <=) */

loc_00254E7E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254ED5; /* jle: less or equal (signed <=) */

loc_00254E84: ;
    ebp = MEM32(esp + 0x24);

loc_00254E88: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00254ED5; /* jge: greater or equal (signed >=) */

loc_00254E8E: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0xDEADDEADu);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x805A10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00254EABu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00254EAB: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + esi * 4) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254E88; /* jl: less (signed <) */

loc_00254EBB: ;
    goto loc_00254ED5;

loc_00254EBD: ;
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x24);
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00254ED5: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254EDEu); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_00254EDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00254F20
 * Original: 0x00254F20 - 0x00254F9A (122 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254F20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x4B0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_00254F38; /* jle: less or equal (signed <=) */

loc_00254F33: ;
    edi = 0x4B0;

loc_00254F38: ;
    PUSH32(esp, 0xDEADDEADu);
    eax = esp + 0xC;
    PUSH32(esp, 0x805AA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254F4Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00254F4C: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254F90; /* jne: not equal / not zero */

loc_00254F57: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00254F85; /* jle: less or equal (signed <=) */

loc_00254F5E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);

loc_00254F63: ;
    ecx = MEM32(ebp + esi * 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x805A74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00254F7Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00254F7C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00254F63; /* jl: less (signed <) */

loc_00254F84: ;
    POP32(esp, ebp);

loc_00254F85: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00254F90: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00254FC0
 * Original: 0x00254FC0 - 0x00254FDB (27 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254FC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x74);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1D;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00254FF0
 * Original: 0x00254FF0 - 0x00255064 (116 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254FF0: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00255061; /* ja: above (unsigned >) */

loc_00254FFA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x255064); /* switch: 7 entries, 5 targets */
    if (_jt == 0x00255001u) goto loc_00255001;
    if (_jt == 0x0025500Eu) goto loc_0025500E;
    if (_jt == 0x00255026u) goto loc_00255026;
    if (_jt == 0x00255042u) goto loc_00255042;
    if (_jt == 0x00255061u) goto loc_00255061;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00255001: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_0025500E: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00255026: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00255042: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;

loc_00255061: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002550E0
 * Original: 0x002550E0 - 0x0025513C (92 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002550E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002550E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00255103; /* je: equal / zero */

loc_002550EF: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002550FC; /* je: equal / zero */

loc_002550F2: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00255105; /* jne: not equal / not zero */

loc_002550F5: ;
    eax = 2;
    goto loc_00255105;

loc_002550FC: ;
    eax = 1;
    goto loc_00255105;

loc_00255103: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00255105: ;
    eax = MEM32(ecx + eax * 4 + 0x44);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x00255134u); RECOMP_ABI_CALL(0x0001F3D0u, sub_0001F3D0); /* call 0x0001F3D0 */

loc_00255134: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00255160
 * Original: 0x00255160 - 0x0025516F (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255160(void)
{

loc_00255160: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x44) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00255180
 * Original: 0x00255180 - 0x002551AC (44 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255180: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002551A4; /* je: equal / zero */

loc_00255189: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0025519C; /* je: equal / zero */

loc_0025518C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00255194; /* je: equal / zero */

loc_0025518F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00255194: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_0025519C: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_002551A4: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002551C0
 * Original: 0x002551C0 - 0x002551F5 (53 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002551C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002551C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002551EC; /* je: equal / zero */

loc_002551C9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002551E0; /* je: equal / zero */

loc_002551CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002551D4; /* je: equal / zero */

loc_002551CF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_002551D4: ;
    eax = 2;
    eax = MEM32(ecx + eax * 4 + 0x44);
    esp += 8; return; /* ret 4 */

loc_002551E0: ;
    eax = 1;
    eax = MEM32(ecx + eax * 4 + 0x44);
    esp += 8; return; /* ret 4 */

loc_002551EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ecx + eax * 4 + 0x44);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255210
 * Original: 0x00255210 - 0x00255220 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255210(void)
{

loc_00255210: ;
    eax = ecx;
    MEM32(eax) = 0x805AC0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00255230
 * Original: 0x00255230 - 0x0025524E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255230: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00255238u); RECOMP_ABI_CALL(0x000333E4u, sub_000333E4); /* call 0x000333E4 */

loc_00255238: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255248; /* je: equal / zero */

loc_0025523F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00255245u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00255245: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00255248: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255260
 * Original: 0x00255260 - 0x00255261 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255260(void)
{

loc_00255260: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00255270
 * Original: 0x00255270 - 0x00255271 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255270(void)
{

loc_00255270: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00255280
 * Original: 0x00255280 - 0x00255281 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255280(void)
{

loc_00255280: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00255290
 * Original: 0x00255290 - 0x00255291 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255290(void)
{

loc_00255290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002552A0
 * Original: 0x002552A0 - 0x002552A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002552A0(void)
{

loc_002552A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002552B0
 * Original: 0x002552B0 - 0x002552B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002552B0(void)
{

loc_002552B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002552C0
 * Original: 0x002552C0 - 0x002552C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002552C0(void)
{

loc_002552C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002552D0
 * Original: 0x002552D0 - 0x00255361 (145 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002552D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002552D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x14) = LO8(ebx);
    eax = MEM32(0x8C2248);
    MEM32(esi) = eax;
    ecx = MEM32(0x8C224C);
    MEM32(esi + 4) = ecx;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00255300u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002552FDu); } /* indirect call */
    }

loc_00255300: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    MEM32(esi + 0xC) = 1;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    if (CMP_A(_fa, _fb)) goto loc_00255359; /* ja: above (unsigned >) */

loc_00255316: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x255364); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0025531Du) goto loc_0025531D;
    if (_jt == 0x0025532Cu) goto loc_0025532C;
    if (_jt == 0x0025533Bu) goto loc_0025533B;
    if (_jt == 0x0025534Au) goto loc_0025534A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025531D: ;
    MEM32(esi + 0x18) = 1;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0025532C: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x18) = 2;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0025533B: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x18) = 3;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0025534A: ;
    MEM32(esi + 0x18) = 0xA;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00255359: ;
    MEM32(esi + 0x18) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00255430
 * Original: 0x00255430 - 0x00255433 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255430(void)
{

loc_00255430: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255440
 * Original: 0x00255440 - 0x00255443 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255440(void)
{

loc_00255440: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00255450
 * Original: 0x00255450 - 0x00255454 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255450(void)
{

loc_00255450: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_00255460
 * Original: 0x00255460 - 0x00255464 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255460(void)
{

loc_00255460: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00255470
 * Original: 0x00255470 - 0x00255476 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255470(void)
{

loc_00255470: ;
    eax = MEM32(0x8FA520);
    esp += 4; return; /* ret */

}

/**
 * sub_00255480
 * Original: 0x00255480 - 0x00255489 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255480(void)
{

loc_00255480: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00255490
 * Original: 0x00255490 - 0x00255491 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255490(void)
{

loc_00255490: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002554A0
 * Original: 0x002554A0 - 0x002554C8 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002554A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002554A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002554C4; /* je: equal / zero */

loc_002554A9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002554AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002554ABu); } /* indirect call */
    }

loc_002554AE: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002554BA; /* je: equal / zero */

loc_002554B4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002554BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002554B8u); } /* indirect call */
    }

loc_002554BA: ;
    MEM32(esi) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002554C4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002554E0
 * Original: 0x002554E0 - 0x002554E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002554E0(void)
{

loc_002554E0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002554F0
 * Original: 0x002554F0 - 0x0025550E (30 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002554F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002554F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025550A; /* je: equal / zero */

loc_002554F9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002554FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002554FBu); } /* indirect call */
    }

loc_002554FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025550A; /* je: equal / zero */

loc_00255502: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

loc_0025550A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00255520
 * Original: 0x00255520 - 0x00255556 (54 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255520: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255552; /* je: equal / zero */

loc_00255529: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0025552Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025552Bu); } /* indirect call */
    }

loc_0025552E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255552; /* je: equal / zero */

loc_00255532: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00255539u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255536u); } /* indirect call */
    }

loc_00255539: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255552; /* je: equal / zero */

loc_0025553F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00255546u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255543u); } /* indirect call */
    }

loc_00255546: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255552; /* je: equal / zero */

loc_0025554A: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x60)); return; /* indirect tail jmp */

loc_00255552: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00255570
 * Original: 0x00255570 - 0x002555A6 (54 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255570: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002555A2; /* je: equal / zero */

loc_00255579: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0025557Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025557Bu); } /* indirect call */
    }

loc_0025557E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002555A2; /* je: equal / zero */

loc_00255582: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00255589u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255586u); } /* indirect call */
    }

loc_00255589: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002555A2; /* je: equal / zero */

loc_0025558F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00255596u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255593u); } /* indirect call */
    }

loc_00255596: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002555A2; /* je: equal / zero */

loc_0025559A: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x68)); return; /* indirect tail jmp */

loc_002555A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002555C0
 * Original: 0x002555C0 - 0x002555F6 (54 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002555C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002555C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002555F2; /* je: equal / zero */

loc_002555C9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002555CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002555CBu); } /* indirect call */
    }

loc_002555CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002555F2; /* je: equal / zero */

loc_002555D2: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002555D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002555D6u); } /* indirect call */
    }

loc_002555D9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002555F2; /* je: equal / zero */

loc_002555DF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002555E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002555E3u); } /* indirect call */
    }

loc_002555E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002555F2; /* je: equal / zero */

loc_002555EA: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x70)); return; /* indirect tail jmp */

loc_002555F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00255610
 * Original: 0x00255610 - 0x0025564C (60 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255610: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255621; /* jne: not equal / not zero */

loc_00255618: ;
    eax = MEM32(ecx + 0x1AC);
    esp += 8; return; /* ret 4 */

loc_00255621: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00255643; /* je: equal / zero */

loc_00255626: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0025563A; /* je: equal / zero */

loc_00255629: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00255631; /* je: equal / zero */

loc_0025562C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00255631: ;
    eax = ecx + 0x184;
    esp += 8; return; /* ret 4 */

loc_0025563A: ;
    eax = ecx + 0x170;
    esp += 8; return; /* ret 4 */

loc_00255643: ;
    eax = ecx + 0x15C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255660
 * Original: 0x00255660 - 0x00255666 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255660(void)
{

loc_00255660: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00255670
 * Original: 0x00255670 - 0x00255673 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255670(void)
{

loc_00255670: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00255680
 * Original: 0x00255680 - 0x00255693 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255680(void)
{

loc_00255680: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x7F6ED4);
    PUSH32(esp, 0x00255690u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_00255690: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002556A0
 * Original: 0x002556A0 - 0x002556EA (74 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002556A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002556A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002556E5; /* je: equal / zero */

loc_002556AB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002556B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002556B5u); } /* indirect call */
    }

loc_002556B8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002556C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002556C0u); } /* indirect call */
    }

loc_002556C2: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002556CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002556C8u); } /* indirect call */
    }

loc_002556CB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002556D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002556D3u); } /* indirect call */
    }

loc_002556D5: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx + 0x158;
    PUSH32(esp, 0x002556E3u); RECOMP_ABI_CALL(0x000156A5u, sub_000156A5); /* call 0x000156A5 */

loc_002556E3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002556E5: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255700
 * Original: 0x00255700 - 0x00255728 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255700: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00255713: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255713; /* jne: not equal / not zero */

loc_0025571D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255740
 * Original: 0x00255740 - 0x00255768 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255740: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00255753: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255753; /* jne: not equal / not zero */

loc_0025575D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255780
 * Original: 0x00255780 - 0x002557B9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255780: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0xE;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00255792
 * Original: 0x00255792 - 0x002557B9 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255792(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255792: ;
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0xE;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002557D0
 * Original: 0x002557D0 - 0x0025580C (60 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002557D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002557D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002557E1; /* jne: not equal / not zero */

loc_002557D8: ;
    eax = MEM32(ecx + 0x1AC);
    esp += 8; return; /* ret 4 */

loc_002557E1: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00255803; /* je: equal / zero */

loc_002557E6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002557FA; /* je: equal / zero */

loc_002557E9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002557F1; /* je: equal / zero */

loc_002557EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_002557F1: ;
    eax = ecx + 0x184;
    esp += 8; return; /* ret 4 */

loc_002557FA: ;
    eax = ecx + 0x170;
    esp += 8; return; /* ret 4 */

loc_00255803: ;
    eax = ecx + 0x15C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255820
 * Original: 0x00255820 - 0x00255826 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255820(void)
{

loc_00255820: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00255830
 * Original: 0x00255830 - 0x00255858 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255830: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00255843: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255843; /* jne: not equal / not zero */

loc_0025584D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255870
 * Original: 0x00255870 - 0x00255898 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255870: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00255883: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255883; /* jne: not equal / not zero */

loc_0025588D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002558B0
 * Original: 0x002558B0 - 0x002558C2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002558B0(void)
{

loc_002558B0: ;
    PUSH32(esp, 0x002558B5u); RECOMP_ABI_CALL(0x00036238u, sub_00036238); /* call 0x00036238 */

loc_002558B5: ;
    PUSH32(esp, 0x002558BAu); RECOMP_ABI_CALL(0x0003708Eu, sub_0003708E); /* call 0x0003708E */

loc_002558BA: ;
    PUSH32(esp, 0x002558BFu); RECOMP_ABI_CALL(0x0001781Au, sub_0001781A); /* call 0x0001781A */

loc_002558BF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002558D0
 * Original: 0x002558D0 - 0x002558EE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002558D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002558D0: ;
    edx = MEM32(ecx + 0x1B8);
    eax = MEM32(ecx + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002558E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002558E1u); } /* indirect call */
    }

loc_002558E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002558EAu); RECOMP_ABI_CALL(0x0001B75Du, sub_0001B75D); /* call 0x0001B75D */

loc_002558EA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255900
 * Original: 0x00255900 - 0x00255901 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255900(void)
{

loc_00255900: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00255910
 * Original: 0x00255910 - 0x00255921 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255910(void)
{

loc_00255910: ;
    PUSH32(esp, 0x00255915u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00255915: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4D);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00255920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025591Du); } /* indirect call */
    }

loc_00255920: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00255930
 * Original: 0x00255930 - 0x0025593C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255930: ;
    PUSH32(esp, 0x00255935u); RECOMP_ABI_CALL(0x000240CEu, sub_000240CE); /* call 0x000240CE */

loc_00255935: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002D16F(); return; /* tail jmp 0x0002D16F */

}

/**
 * sub_00255940
 * Original: 0x00255940 - 0x00255A3F (255 bytes, 98 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00255949u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00255949: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x14);
    ebx = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0025595Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255959u); } /* indirect call */
    }

loc_0025595C: ;
    ebp = MEM32(esp + 0x18);
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00255964: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0025596Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025596Cu); } /* indirect call */
    }

loc_0025596F: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025597C; /* jle: less or equal (signed <=) */

loc_00255977: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255989; /* je: equal / zero */

loc_0025597B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0025597C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00255964; /* jl: less (signed <) */

loc_00255982: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00255989: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebx = 0xF;
    MEM32(esp + 0x18) = 0xA;
    if (CMP_LE(_fas, _fbs)) goto loc_002559A8; /* jle: less or equal (signed <=) */

loc_0025599B: ;
    ebx = 0x19;
    MEM32(esp + 0x18) = 0xF;

loc_002559A8: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x002559B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002559AEu); } /* indirect call */
    }

loc_002559B1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002559BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002559B9u); } /* indirect call */
    }

loc_002559BC: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002559FC; /* jle: less or equal (signed <=) */

loc_002559D5: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2F;
    PUSH32(esp, 0x002559E4u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002559E4: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002559F0; /* jns: not sign (positive) */

loc_002559EB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002559F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00255A27; /* jle: less or equal (signed <=) */

loc_002559F4: ;
    MEM32(ebx) = 0x2E;
    goto loc_00255A27;

loc_002559FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00255A38; /* jge: greater or equal (signed >=) */

loc_00255A02: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2D;
    PUSH32(esp, 0x00255A11u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00255A11: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00255A1D; /* jns: not sign (positive) */

loc_00255A18: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00255A1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00255A27; /* jle: less or equal (signed <=) */

loc_00255A21: ;
    MEM32(ebx) = 0x2B;

loc_00255A27: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00255A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255A2Fu); } /* indirect call */
    }

loc_00255A32: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_00255A38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00255A80
 * Original: 0x00255A80 - 0x00255B8E (270 bytes, 107 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255A80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00255A89u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00255A89: ;
    ebp = eax;
    ebp = ebp & 0x80000001u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00255A98; /* jns: not sign (positive) */

loc_00255A93: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFFFEu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00255A98: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00255AA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255A9Eu); } /* indirect call */
    }

loc_00255AA1: ;
    ebx = MEM32(esp + 0x18);
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00255AB0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00255ABBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255AB8u); } /* indirect call */
    }

loc_00255ABB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255AD8; /* jne: not equal / not zero */

loc_00255AC0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00255ACBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255AC8u); } /* indirect call */
    }

loc_00255ACB: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00255AD8; /* jle: less or equal (signed <=) */

loc_00255AD3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255AE5; /* je: equal / zero */

loc_00255AD7: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00255AD8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00255AB0; /* jl: less (signed <) */

loc_00255ADE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00255AE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebp = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00255AF4; /* jle: less or equal (signed <=) */

loc_00255AEF: ;
    ebp = 0x28;

loc_00255AF4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00255AFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255AFAu); } /* indirect call */
    }

loc_00255AFD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00255B08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255B05u); } /* indirect call */
    }

loc_00255B08: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00255B4B; /* jle: less or equal (signed <=) */

loc_00255B22: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2F;
    PUSH32(esp, 0x00255B32u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00255B32: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00255B3E; /* jns: not sign (positive) */

loc_00255B39: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00255B3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00255B76; /* jle: less or equal (signed <=) */

loc_00255B42: ;
    MEM32(ebp) = 0x2E;
    goto loc_00255B76;

loc_00255B4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00255B87; /* jge: greater or equal (signed >=) */

loc_00255B4F: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2D;
    PUSH32(esp, 0x00255B5Fu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00255B5F: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00255B6B; /* jns: not sign (positive) */

loc_00255B66: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00255B6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00255B76; /* jle: less or equal (signed <=) */

loc_00255B6F: ;
    MEM32(ebp) = 0x2C;

loc_00255B76: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00255B81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255B7Eu); } /* indirect call */
    }

loc_00255B81: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_00255B87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00255BE0
 * Original: 0x00255BE0 - 0x00255D14 (308 bytes, 101 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255BE0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x1C4;
    if (CMP_NE(_fa, _fb)) goto loc_00255C7A; /* jne: not equal / not zero */

loc_00255BFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00255C00: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255C57; /* je: equal / zero */

loc_00255C04: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00255C00; /* jl: less (signed <) */

loc_00255C0D: ;
    edi = MEM32(esi + 0x278);
    ecx = edi + edi * 2;
    ebx = esi + ecx * 4;
    MEM32(ebx + 0x1C4) = edx;
    edx = edi + edi * 2 + 0x72;
    MEM32(esi + edx * 4) = 1;
    PUSH32(esp, 0x00255C2Fu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00255C2F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edi + 1;
    ecx = 0xF;
    POP32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1CC) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x278) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00255C57: ;
    ecx = eax + eax * 2 + 0x72;
    edx = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    eax = eax + eax * 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + eax * 4 + 0x1CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + eax * 4 + 0x1CC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00255D0E; /* jge: greater or equal (signed >=) */

loc_00255C71: ;
    POP32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00255C7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00255C80: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255C93; /* je: equal / zero */

loc_00255C84: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00255C80; /* jl: less (signed <) */

loc_00255C8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00255C93: ;
    edx = 0xE;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x278) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00255CEF; /* jge: greater or equal (signed >=) */

loc_00255CA5: ;
    eax = eax + eax * 2;
    ecx = esi + eax * 4 + 0x1C4;
    PUSH32(esp, ebp);

loc_00255CB0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255CEE; /* je: equal / zero */

loc_00255CB4: ;
    eax = MEM32(esi + 0x278);
    eax = eax + eax * 2;
    eax = esi + eax * 4;
    ebx = eax + 0x1D0;
    ebp = MEM32(ebx);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(esi + 0x278);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x278) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00255CB0; /* jl: less (signed <) */

loc_00255CEE: ;
    POP32(esp, ebp);

loc_00255CEF: ;
    eax = MEM32(esi + 0x278);
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4;
    edx = eax + eax * 2 + 0x72;
    MEM32(ecx + 0x1C4) = edi;
    MEM32(ecx + 0x1CC) = edi;
    MEM32(esi + edx * 4) = edi;

loc_00255D0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00255D70
 * Original: 0x00255D70 - 0x00255DAC (60 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255D70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, 1);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x1C4;

loc_00255D80: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255D92; /* je: equal / zero */

loc_00255D84: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00255D80; /* jl: less (signed <) */

loc_00255D8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00255D92: ;
    esi = edx + edx * 2 + 0x72;
    esi = MEM32(ecx + esi * 4);
    edx = edx + edx * 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 4 + 0x1CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + edx * 4 + 0x1CC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00255DA7; /* jl: less (signed <) */

loc_00255DA5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00255DA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255DC0
 * Original: 0x00255DC0 - 0x00255DC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255DC0(void)
{

loc_00255DC0: ;
    SET_LO8(eax, MEM8(ecx + 0x1C0));
    esp += 4; return; /* ret */

}

/**
 * sub_00255DD0
 * Original: 0x00255DD0 - 0x00255DF3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255DD0(void)
{

loc_00255DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x58) = 9;
    PUSH32(esp, 0x00255DDFu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00255DDF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00255DEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255DE7u); } /* indirect call */
    }

loc_00255DEA: ;
    MEM8(esi + 0x1C0) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00255E00
 * Original: 0x00255E00 - 0x00255E07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255E00(void)
{

loc_00255E00: ;
    eax = MEM32(ecx + 0x1B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00255E10
 * Original: 0x00255E10 - 0x00255E4C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255E10: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    ecx = 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0xE;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x38) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00255E60
 * Original: 0x00255E60 - 0x00255E64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255E60(void)
{

loc_00255E60: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00255E70
 * Original: 0x00255E70 - 0x00255E96 (38 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255E70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00255E91; /* jge: greater or equal (signed >=) */

loc_00255E7B: ;
    edi = MEM32(ecx + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2F8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x10);
    ecx = 0xBE;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */

loc_00255E91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00255EA0
 * Original: 0x00255EA0 - 0x00255ED8 (56 bytes, 15 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255EA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x805AC8);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00255EC9u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00255EC9: ;
    _fa = (uint32_t)(MEM16(esp + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x18), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255EF0
 * Original: 0x00255EF0 - 0x00255F2C (60 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255EF0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x7F5F8C);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00255F0Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00255F0F: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255F23; /* je: equal / zero */

loc_00255F1A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00255F23: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255F40
 * Original: 0x00255F40 - 0x00255F7C (60 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255F40: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x805B1C);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00255F5Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00255F5F: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255F73; /* je: equal / zero */

loc_00255F6A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00255F73: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255F90
 * Original: 0x00255F90 - 0x00255FCC (60 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255F90: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x7F5F58);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00255FAFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00255FAF: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255FC3; /* je: equal / zero */

loc_00255FBA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00255FC3: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255FE0
 * Original: 0x00255FE0 - 0x0025601C (60 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255FE0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x805B54);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00255FFFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00255FFF: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256013; /* je: equal / zero */

loc_0025600A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00256013: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256030
 * Original: 0x00256030 - 0x0025605C (44 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256030: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256058; /* je: equal / zero */

loc_0025603B: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00256057; /* jge: greater or equal (signed >=) */

loc_00256045: ;
    ecx = MEM32(ecx + 8);
    eax = edx + edx * 8;
    esi = ecx + eax * 4;
    ecx = 9;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    SET_LO8(eax, 1);

loc_00256057: ;
    POP32(esp, esi);

loc_00256058: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00256070
 * Original: 0x00256070 - 0x002560D1 (97 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256070: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002560B4; /* je: equal / zero */

loc_0025607C: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = esi + -4;
    eax = ecx + ecx * 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + eax * 4;
    if ((_fas < 0)) goto loc_0025609C; /* js: sign (negative) */

loc_0025608C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00256090: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x7F77E0;
    if ((_fa != 0)) goto loc_00256090; /* jne: not equal / not zero */

loc_0025609C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002560AD; /* je: equal / zero */

loc_002560A1: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002560ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002560AAu); } /* indirect call */
    }

loc_002560AD: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002560B4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi) = 0x7F77E0;
    if (TEST_Z(_fa, _fb)) goto loc_002560CB; /* je: equal / zero */

loc_002560BF: ;
    ecx = MEM32(0x8FA540);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002560CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002560C8u); } /* indirect call */
    }

loc_002560CB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002560F0
 * Original: 0x002560F0 - 0x0025617B (139 bytes, 50 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002560F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002560F0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, 0x805B88);
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x0025612Eu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025612E: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256140; /* jne: not equal / not zero */

loc_00256136: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00256140: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 4) = esi;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002561A0
 * Original: 0x002561A0 - 0x002561D8 (56 bytes, 21 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002561A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002561A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x805C7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002561BFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002561BF: ;
    edx = MEM32(esi + 4);
    edi = ZX16(MEM16(esp + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, 0x002561CDu); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_002561CD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002561F0
 * Original: 0x002561F0 - 0x002562B1 (193 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002561F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002561F0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002562AB; /* jle: less or equal (signed <=) */

loc_00256204: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00256210;

    /* nop */

loc_00256210: ;
    PUSH32(esp, 0xDEADDEADu);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, 0x805CB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025624Bu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025624B: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x44);
    MEM32(eax + edi + 4) = ecx;
    edx = MEM32(esi + 8);
    eax = MEM32(esp + 0x48);
    MEM32(edx + edi + 8) = eax;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x4C);
    MEM32(ecx + edi + 0xC) = edx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x50);
    MEM32(eax + edi + 0x10) = ecx;
    edx = MEM32(esi + 8);
    eax = MEM32(esp + 0x54);
    MEM32(edx + edi + 0x14) = eax;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x5C);
    MEM32(ecx + edi + 0x1C) = edx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x68);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi + 0x20) = ecx;
    eax = MEM32(esi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00256210; /* jl: less (signed <) */

loc_002562AA: ;
    POP32(esp, edi);

loc_002562AB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002562F0
 * Original: 0x002562F0 - 0x002562FC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002562F0(void)
{

loc_002562F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FEBE8);
    esp += 4; return; /* ret */

}

/**
 * sub_00256300
 * Original: 0x00256300 - 0x0025630C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256300(void)
{

loc_00256300: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FEC28);
    esp += 4; return; /* ret */

}

/**
 * sub_00256310
 * Original: 0x00256310 - 0x0025631C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256310(void)
{

loc_00256310: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FECC0);
    esp += 4; return; /* ret */

}

/**
 * sub_00256320
 * Original: 0x00256320 - 0x0025632C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256320(void)
{

loc_00256320: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FED48);
    esp += 4; return; /* ret */

}

/**
 * sub_00256330
 * Original: 0x00256330 - 0x0025633C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256330(void)
{

loc_00256330: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FED90);
    esp += 4; return; /* ret */

}

/**
 * sub_00256340
 * Original: 0x00256340 - 0x0025634C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256340(void)
{

loc_00256340: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FEDF8);
    esp += 4; return; /* ret */

}

/**
 * sub_00256350
 * Original: 0x00256350 - 0x0025635C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256350(void)
{

loc_00256350: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FEE50);
    esp += 4; return; /* ret */

}

/**
 * sub_00256360
 * Original: 0x00256360 - 0x0025636C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256360(void)
{

loc_00256360: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FECD4);
    esp += 4; return; /* ret */

}

/**
 * sub_00256370
 * Original: 0x00256370 - 0x0025637C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256370(void)
{

loc_00256370: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7FECE0);
    esp += 4; return; /* ret */

}

/**
 * sub_00256380
 * Original: 0x00256380 - 0x00256389 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256380(void)
{

loc_00256380: ;
    eax = ecx;
    MEM32(eax) = 0x805DA0;
    esp += 4; return; /* ret */

}

/**
 * sub_00256390
 * Original: 0x00256390 - 0x00256397 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256390(void)
{

loc_00256390: ;
    MEM32(ecx) = 0x805DA0;
    esp += 4; return; /* ret */

}

/**
 * sub_002563A0
 * Original: 0x002563A0 - 0x002563A6 (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002563A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002563A0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002563B0
 * Original: 0x002563B0 - 0x002563B5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002563B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002563B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002563C0
 * Original: 0x002563C0 - 0x002563C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002563C0(void)
{

loc_002563C0: ;
    eax = ecx;
    MEM32(eax) = 0x805DA4;
    esp += 4; return; /* ret */

}

/**
 * sub_002563D0
 * Original: 0x002563D0 - 0x002563D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002563D0(void)
{

loc_002563D0: ;
    MEM32(ecx) = 0x805DA4;
    esp += 4; return; /* ret */

}

/**
 * sub_002563E0
 * Original: 0x002563E0 - 0x002563E3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002563E0(void)
{

loc_002563E0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002563F0
 * Original: 0x002563F0 - 0x002563F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002563F0(void)
{

loc_002563F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00256400
 * Original: 0x00256400 - 0x00256560 (352 bytes, 111 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256400: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = edi + 0x30;
    PUSH32(esp, edx);
    eax = edi + 0x98;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    edx = edi + 0x74;
    PUSH32(esp, edx);
    eax = edi + 0x6C;
    PUSH32(esp, eax);
    ecx = edi + 0xD4;
    PUSH32(esp, ecx);
    edx = edi + 0x70;
    PUSH32(esp, edx);
    eax = edi + 0xD8;
    PUSH32(esp, eax);
    ecx = edi + 0x24;
    PUSH32(esp, ecx);
    edx = edi + 0x8C;
    PUSH32(esp, edx);
    eax = edi + 0x2C;
    PUSH32(esp, eax);
    ecx = edi + 0x94;
    PUSH32(esp, ecx);
    edx = edi + 0x28;
    PUSH32(esp, edx);
    eax = edi + 0x90;
    PUSH32(esp, eax);
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    edx = edi + 0x88;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, 0x805DA8);
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00256484u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00256484: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x10) = edx;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = edx;
    MEM32(edi + 0x1C) = edx;
    MEM32(edi + 0x34) = edx;
    MEM32(edi + 0x38) = edx;
    MEM32(edi + 0x3C) = edx;
    MEM32(edi + 0x40) = edx;
    MEM32(edi + 0x44) = edx;
    MEM32(edi + 0x48) = edx;
    MEM32(edi + 0x4C) = edx;
    MEM32(edi + 0x50) = edx;
    MEM32(edi + 0x54) = edx;
    MEM32(edi + 0x58) = edx;
    MEM32(edi + 0x5C) = edx;
    MEM32(edi + 0x60) = edx;
    MEM32(edi + 0x64) = edx;
    MEM32(edi + 0x68) = edx;
    MEM32(edi + 0x78) = edx;
    MEM32(edi + 0x7C) = edx;
    MEM32(edi + 0x80) = edx;
    MEM32(edi + 0x84) = edx;
    MEM32(edi + 0x9C) = edx;
    MEM32(edi + 0xA0) = edx;
    MEM32(edi + 0xA4) = edx;
    MEM32(edi + 0xA8) = edx;
    MEM32(edi + 0xAC) = edx;
    MEM32(edi + 0xB0) = edx;
    MEM32(edi + 0xB4) = edx;
    MEM32(edi + 0xB8) = edx;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), LO8(edx) (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(edi + 9) = LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x20), LO8(edx) (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    MEM32(edi + 0xBC) = edx;
    MEM32(edi + 0xC0) = edx;
    MEM32(edi + 0xC4) = edx;
    MEM32(edi + 0xC8) = edx;
    MEM32(edi + 0xCC) = edx;
    MEM32(edi + 0xD0) = edx;
    MEM32(edi + 4) = esi;
    MEM8(edi + 8) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00256555; /* jne: not equal / not zero */

loc_00256541: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x37;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00256555: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002565C0
 * Original: 0x002565C0 - 0x0025666B (171 bytes, 63 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002565C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002565C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x80609C);
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x002565E5u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002565E5: ;
    edx = ZX16(MEM16(esp + 0x14));
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x002565F6u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_002565F6: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025665C; /* je: equal / zero */

loc_00256600: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256610; /* je: equal / zero */

loc_00256607: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025660Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025660D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00256610: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025661Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0025661F: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025665B; /* jle: less or equal (signed <=) */

loc_0025662E: ;
    edi = edi;

loc_00256630: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    eax = ecx + edi * 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x806028);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00256650u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00256650: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00256630; /* jl: less (signed <) */

loc_0025665B: ;
    POP32(esp, edi);

loc_0025665C: ;
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002566A0
 * Original: 0x002566A0 - 0x002566EE (78 bytes, 34 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002566A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002566A0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002566AD; /* je: equal / zero */

loc_002566A8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_002566AD: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002566BC; /* jne: not equal / not zero */

loc_002566B6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_002566BC: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002566E7; /* jge: greater or equal (signed >=) */

loc_002566C8: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_L(_fas, _fbs)) goto loc_002566E7; /* jl: less (signed <) */

loc_002566D2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002566E7; /* jg: greater (signed >) */

loc_002566D7: ;
    ecx = MEM32(ecx + 8);
    edx = edx + esi * 2;
    edx = MEM32(ecx + edx * 4);
    POP32(esp, esi);
    MEM32(edi) = edx;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_002566E7: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00256710
 * Original: 0x00256710 - 0x00256719 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256710(void)
{

loc_00256710: ;
    eax = ecx;
    MEM32(eax) = 0x8060D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00256720
 * Original: 0x00256720 - 0x00256727 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256720(void)
{

loc_00256720: ;
    MEM32(ecx) = 0x8060D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00256730
 * Original: 0x00256730 - 0x002567B4 (132 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256730: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = ZX8(MEM8(eax + 8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 9));
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x98);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x74);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x6C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xD4);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xD8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x8C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x94);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x90);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, 0x8060D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002567AEu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002567AE: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002567E0
 * Original: 0x002567E0 - 0x0025680C (44 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002567E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002567E0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x806314);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002567FCu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002567FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x10), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256820
 * Original: 0x00256820 - 0x00256896 (118 bytes, 43 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256820: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x805C7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025683Eu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025683E: ;
    esi = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00256847u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_00256847: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00256887; /* jne: not equal / not zero */

loc_0025684F: ;
    eax = MEM32(esp + 0x10);
    edx = ZX16(MEM16(esp));
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, 0x806350);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256884u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00256884: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00256887: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002568C0
 * Original: 0x002568C0 - 0x00256907 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002568C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002568C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x806438);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002568F7u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002568F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x28), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256920
 * Original: 0x00256920 - 0x0025694F (47 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256920: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x806518);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025693Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025693F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x10), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256960
 * Original: 0x00256960 - 0x0025699C (60 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256960: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256971; /* jne: not equal / not zero */

loc_00256968: ;
    eax = MEM32(ecx + 0x1AC);
    esp += 8; return; /* ret 4 */

loc_00256971: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00256993; /* je: equal / zero */

loc_00256976: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0025698A; /* je: equal / zero */

loc_00256979: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00256981; /* je: equal / zero */

loc_0025697C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00256981: ;
    eax = ecx + 0x184;
    esp += 8; return; /* ret 4 */

loc_0025698A: ;
    eax = ecx + 0x170;
    esp += 8; return; /* ret 4 */

loc_00256993: ;
    eax = ecx + 0x15C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002569B0
 * Original: 0x002569B0 - 0x002569B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002569B0(void)
{

loc_002569B0: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002569C0
 * Original: 0x002569C0 - 0x002569C3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002569C0(void)
{

loc_002569C0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002569D0
 * Original: 0x002569D0 - 0x002569E3 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002569D0(void)
{

loc_002569D0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, 0x7F6ED4);
    PUSH32(esp, 0x002569E0u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_002569E0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002569F0
 * Original: 0x002569F0 - 0x00256A3A (74 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002569F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002569F0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256A35; /* je: equal / zero */

loc_002569FB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00256A08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256A05u); } /* indirect call */
    }

loc_00256A08: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00256A12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256A10u); } /* indirect call */
    }

loc_00256A12: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00256A1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256A18u); } /* indirect call */
    }

loc_00256A1B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00256A25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256A23u); } /* indirect call */
    }

loc_00256A25: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx + 0x158;
    PUSH32(esp, 0x00256A33u); RECOMP_ABI_CALL(0x000156A5u, sub_000156A5); /* call 0x000156A5 */

loc_00256A33: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00256A35: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256A50
 * Original: 0x00256A50 - 0x00256ABD (109 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256A50: ;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256ABA; /* jne: not equal / not zero */

loc_00256A57: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00256A63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256A60u); } /* indirect call */
    }

loc_00256A63: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00256A67: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00256A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256A70u); } /* indirect call */
    }

loc_00256A73: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00256A81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256A7Eu); } /* indirect call */
    }

loc_00256A81: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00256A8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256A8Cu); } /* indirect call */
    }

loc_00256A8F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00256A9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256A9Au); } /* indirect call */
    }

loc_00256A9D: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x34;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00256AB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256AAEu); } /* indirect call */
    }

loc_00256AB1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00256A67; /* jl: less (signed <) */

loc_00256AB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00256ABA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256AE0
 * Original: 0x00256AE0 - 0x00256B08 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256AE0: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00256AF3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256AF3; /* jne: not equal / not zero */

loc_00256AFD: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256B20
 * Original: 0x00256B20 - 0x00256B48 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256B20: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00256B33: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256B33; /* jne: not equal / not zero */

loc_00256B3D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256B60
 * Original: 0x00256B60 - 0x00256B9D (61 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256B60: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    ecx = 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = 2;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = 0xE;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00256BB0
 * Original: 0x00256BB0 - 0x00256BEC (60 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256BB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256BC1; /* jne: not equal / not zero */

loc_00256BB8: ;
    eax = MEM32(ecx + 0x1AC);
    esp += 8; return; /* ret 4 */

loc_00256BC1: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00256BE3; /* je: equal / zero */

loc_00256BC6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00256BDA; /* je: equal / zero */

loc_00256BC9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00256BD1; /* je: equal / zero */

loc_00256BCC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00256BD1: ;
    eax = ecx + 0x184;
    esp += 8; return; /* ret 4 */

loc_00256BDA: ;
    eax = ecx + 0x170;
    esp += 8; return; /* ret 4 */

loc_00256BE3: ;
    eax = ecx + 0x15C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256C00
 * Original: 0x00256C00 - 0x00256C06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256C00(void)
{

loc_00256C00: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00256C10
 * Original: 0x00256C10 - 0x00256C38 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256C10: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00256C23: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256C23; /* jne: not equal / not zero */

loc_00256C2D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256C50
 * Original: 0x00256C50 - 0x00256C78 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256C50: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00256C63: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256C63; /* jne: not equal / not zero */

loc_00256C6D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00256C90
 * Original: 0x00256C90 - 0x00256CA2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256C90(void)
{

loc_00256C90: ;
    PUSH32(esp, 0x00256C95u); RECOMP_ABI_CALL(0x00036238u, sub_00036238); /* call 0x00036238 */

loc_00256C95: ;
    PUSH32(esp, 0x00256C9Au); RECOMP_ABI_CALL(0x0003708Eu, sub_0003708E); /* call 0x0003708E */

loc_00256C9A: ;
    PUSH32(esp, 0x00256C9Fu); RECOMP_ABI_CALL(0x0001781Au, sub_0001781A); /* call 0x0001781A */

loc_00256C9F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00256CB0
 * Original: 0x00256CB0 - 0x00256CCE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256CB0: ;
    edx = MEM32(ecx + 0x1B8);
    eax = MEM32(ecx + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00256CC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256CC1u); } /* indirect call */
    }

loc_00256CC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256CCAu); RECOMP_ABI_CALL(0x0001B75Du, sub_0001B75D); /* call 0x0001B75D */

loc_00256CCA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00256CE0
 * Original: 0x00256CE0 - 0x00256CE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256CE0(void)
{

loc_00256CE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00256CF0
 * Original: 0x00256CF0 - 0x00256D01 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256CF0(void)
{

loc_00256CF0: ;
    PUSH32(esp, 0x00256CF5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00256CF5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4D);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00256D00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256CFDu); } /* indirect call */
    }

loc_00256D00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00256D10
 * Original: 0x00256D10 - 0x00256D1C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256D10: ;
    PUSH32(esp, 0x00256D15u); RECOMP_ABI_CALL(0x000240CEu, sub_000240CE); /* call 0x000240CE */

loc_00256D15: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002D16F(); return; /* tail jmp 0x0002D16F */

}

/**
 * sub_00256D20
 * Original: 0x00256D20 - 0x00256E1F (255 bytes, 98 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256D20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00256D29u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00256D29: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x14);
    ebx = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00256D3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256D39u); } /* indirect call */
    }

loc_00256D3C: ;
    ebp = MEM32(esp + 0x18);
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00256D44: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00256D4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256D4Cu); } /* indirect call */
    }

loc_00256D4F: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00256D5C; /* jle: less or equal (signed <=) */

loc_00256D57: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256D69; /* je: equal / zero */

loc_00256D5B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00256D5C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00256D44; /* jl: less (signed <) */

loc_00256D62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00256D69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebx = 0xF;
    MEM32(esp + 0x18) = 0xA;
    if (CMP_LE(_fas, _fbs)) goto loc_00256D88; /* jle: less or equal (signed <=) */

loc_00256D7B: ;
    ebx = 0x19;
    MEM32(esp + 0x18) = 0xF;

loc_00256D88: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00256D91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256D8Eu); } /* indirect call */
    }

loc_00256D91: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00256D9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256D99u); } /* indirect call */
    }

loc_00256D9C: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00256DDC; /* jle: less or equal (signed <=) */

loc_00256DB5: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2F;
    PUSH32(esp, 0x00256DC4u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00256DC4: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00256DD0; /* jns: not sign (positive) */

loc_00256DCB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00256DD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00256E07; /* jle: less or equal (signed <=) */

loc_00256DD4: ;
    MEM32(ebx) = 0x2E;
    goto loc_00256E07;

loc_00256DDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00256E18; /* jge: greater or equal (signed >=) */

loc_00256DE2: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2D;
    PUSH32(esp, 0x00256DF1u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00256DF1: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00256DFD; /* jns: not sign (positive) */

loc_00256DF8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00256DFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00256E07; /* jle: less or equal (signed <=) */

loc_00256E01: ;
    MEM32(ebx) = 0x2B;

loc_00256E07: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00256E12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256E0Fu); } /* indirect call */
    }

loc_00256E12: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_00256E18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00256E60
 * Original: 0x00256E60 - 0x00256F6E (270 bytes, 107 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256E60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00256E69u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00256E69: ;
    ebp = eax;
    ebp = ebp & 0x80000001u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00256E78; /* jns: not sign (positive) */

loc_00256E73: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFFFEu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00256E78: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00256E81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256E7Eu); } /* indirect call */
    }

loc_00256E81: ;
    ebx = MEM32(esp + 0x18);
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00256E90: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00256E9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256E98u); } /* indirect call */
    }

loc_00256E9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256EB8; /* jne: not equal / not zero */

loc_00256EA0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00256EABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256EA8u); } /* indirect call */
    }

loc_00256EAB: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00256EB8; /* jle: less or equal (signed <=) */

loc_00256EB3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256EC5; /* je: equal / zero */

loc_00256EB7: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00256EB8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00256E90; /* jl: less (signed <) */

loc_00256EBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00256EC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebp = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00256ED4; /* jle: less or equal (signed <=) */

loc_00256ECF: ;
    ebp = 0x28;

loc_00256ED4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00256EDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256EDAu); } /* indirect call */
    }

loc_00256EDD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00256EE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256EE5u); } /* indirect call */
    }

loc_00256EE8: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00256F2B; /* jle: less or equal (signed <=) */

loc_00256F02: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2F;
    PUSH32(esp, 0x00256F12u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00256F12: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00256F1E; /* jns: not sign (positive) */

loc_00256F19: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00256F1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00256F56; /* jle: less or equal (signed <=) */

loc_00256F22: ;
    MEM32(ebp) = 0x2E;
    goto loc_00256F56;

loc_00256F2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00256F67; /* jge: greater or equal (signed >=) */

loc_00256F2F: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2D;
    PUSH32(esp, 0x00256F3Fu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00256F3F: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00256F4B; /* jns: not sign (positive) */

loc_00256F46: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00256F4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00256F56; /* jle: less or equal (signed <=) */

loc_00256F4F: ;
    MEM32(ebp) = 0x2C;

loc_00256F56: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00256F61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256F5Eu); } /* indirect call */
    }

loc_00256F61: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_00256F67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00256FC0
 * Original: 0x00256FC0 - 0x002570F4 (308 bytes, 101 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256FC0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x1C4;
    if (CMP_NE(_fa, _fb)) goto loc_0025705A; /* jne: not equal / not zero */

loc_00256FDB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00256FE0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257037; /* je: equal / zero */

loc_00256FE4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00256FE0; /* jl: less (signed <) */

loc_00256FED: ;
    edi = MEM32(esi + 0x278);
    ecx = edi + edi * 2;
    ebx = esi + ecx * 4;
    MEM32(ebx + 0x1C4) = edx;
    edx = edi + edi * 2 + 0x72;
    MEM32(esi + edx * 4) = 1;
    PUSH32(esp, 0x0025700Fu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0025700F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edi + 1;
    ecx = 0xF;
    POP32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1CC) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x278) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00257037: ;
    ecx = eax + eax * 2 + 0x72;
    edx = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    eax = eax + eax * 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + eax * 4 + 0x1CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + eax * 4 + 0x1CC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002570EE; /* jge: greater or equal (signed >=) */

loc_00257051: ;
    POP32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0025705A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00257060: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257073; /* je: equal / zero */

loc_00257064: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00257060; /* jl: less (signed <) */

loc_0025706D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00257073: ;
    edx = 0xE;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x278) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002570CF; /* jge: greater or equal (signed >=) */

loc_00257085: ;
    eax = eax + eax * 2;
    ecx = esi + eax * 4 + 0x1C4;
    PUSH32(esp, ebp);

loc_00257090: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002570CE; /* je: equal / zero */

loc_00257094: ;
    eax = MEM32(esi + 0x278);
    eax = eax + eax * 2;
    eax = esi + eax * 4;
    ebx = eax + 0x1D0;
    ebp = MEM32(ebx);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(esi + 0x278);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x278) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00257090; /* jl: less (signed <) */

loc_002570CE: ;
    POP32(esp, ebp);

loc_002570CF: ;
    eax = MEM32(esi + 0x278);
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4;
    edx = eax + eax * 2 + 0x72;
    MEM32(ecx + 0x1C4) = edi;
    MEM32(ecx + 0x1CC) = edi;
    MEM32(esi + edx * 4) = edi;

loc_002570EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257150
 * Original: 0x00257150 - 0x0025718C (60 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, 1);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x1C4;

loc_00257160: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257172; /* je: equal / zero */

loc_00257164: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00257160; /* jl: less (signed <) */

loc_0025716D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00257172: ;
    esi = edx + edx * 2 + 0x72;
    esi = MEM32(ecx + esi * 4);
    edx = edx + edx * 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 4 + 0x1CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + edx * 4 + 0x1CC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00257187; /* jl: less (signed <) */

loc_00257185: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00257187: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002571A0
 * Original: 0x002571A0 - 0x002571A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002571A0(void)
{

loc_002571A0: ;
    SET_LO8(eax, MEM8(ecx + 0x1C0));
    esp += 4; return; /* ret */

}

/**
 * sub_002571B0
 * Original: 0x002571B0 - 0x002571D3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002571B0(void)
{

loc_002571B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x58) = 9;
    PUSH32(esp, 0x002571BFu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_002571BF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002571CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002571C7u); } /* indirect call */
    }

loc_002571CA: ;
    MEM8(esi + 0x1C0) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002571E0
 * Original: 0x002571E0 - 0x002571E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002571E0(void)
{

loc_002571E0: ;
    eax = MEM32(ecx + 0x1B8);
    esp += 4; return; /* ret */

}

/**
 * sub_002571F0
 * Original: 0x002571F0 - 0x00257230 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002571F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002571F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    ecx = 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = 2;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = 0xE;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x38) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00257240
 * Original: 0x00257240 - 0x00257266 (38 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257240: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00257261; /* jge: greater or equal (signed >=) */

loc_0025724B: ;
    edi = MEM32(ecx + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x12C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x10);
    ecx = 0x4B;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */

loc_00257261: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257270
 * Original: 0x00257270 - 0x002573E6 (374 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257270: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002573D4; /* jle: less or equal (signed <=) */

loc_00257284: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00257290;

    /* nop */

loc_00257290: ;
    PUSH32(esp, 0xDEADDEADu);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0xD0;
    PUSH32(esp, ecx);
    edx = eax + 0x104;
    PUSH32(esp, edx);
    ecx = eax + 0x108;
    PUSH32(esp, ecx);
    edx = eax + 0x100;
    PUSH32(esp, edx);
    ecx = eax + 0xE0;
    PUSH32(esp, ecx);
    edx = eax + 0xC4;
    PUSH32(esp, edx);
    ecx = eax + 0xFC;
    PUSH32(esp, ecx);
    edx = eax + 0x114;
    PUSH32(esp, edx);
    ecx = eax + 0x110;
    PUSH32(esp, ecx);
    edx = eax + 0x10C;
    PUSH32(esp, edx);
    ecx = eax + 0xC8;
    PUSH32(esp, ecx);
    edx = eax + 0xBC;
    PUSH32(esp, edx);
    ecx = eax + 0xC0;
    PUSH32(esp, ecx);
    edx = eax + 0xD4;
    PUSH32(esp, edx);
    ecx = eax + 0xF8;
    PUSH32(esp, ecx);
    edx = eax + 0xF4;
    PUSH32(esp, edx);
    ecx = eax + 0xF0;
    PUSH32(esp, ecx);
    edx = eax + 0xEC;
    PUSH32(esp, edx);
    ecx = eax + 0xE8;
    PUSH32(esp, ecx);
    edx = eax + 0xE4;
    PUSH32(esp, edx);
    ecx = eax + 0x24;
    PUSH32(esp, ecx);
    edx = eax + 0x20;
    PUSH32(esp, edx);
    ecx = eax + 0x1C;
    PUSH32(esp, ecx);
    edx = eax + 0x18;
    PUSH32(esp, edx);
    ecx = eax + 0x14;
    PUSH32(esp, ecx);
    edx = eax + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = eax + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = eax + 0x30;
    PUSH32(esp, edx);
    ecx = eax + 0x34;
    PUSH32(esp, ecx);
    edx = eax + 0x2C;
    PUSH32(esp, edx);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    ecx = eax + 0x28;
    PUSH32(esp, ecx);
    edx = eax + 0x10;
    PUSH32(esp, edx);
    ecx = eax + 0xDC;
    PUSH32(esp, ecx);
    edx = eax + 0xD8;
    PUSH32(esp, edx);
    ecx = eax + 0xB8;
    PUSH32(esp, ecx);
    edx = eax + 0xB4;
    PUSH32(esp, edx);
    ecx = eax + 0xB0;
    PUSH32(esp, ecx);
    edx = eax + 0xAC;
    PUSH32(esp, edx);
    ecx = eax + 0xA8;
    PUSH32(esp, ecx);
    edx = eax + 0xA4;
    PUSH32(esp, edx);
    ecx = eax + 0x72;
    PUSH32(esp, ecx);
    edx = eax + 0x40;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esp + 0xD0;
    PUSH32(esp, 0x806550);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002573BBu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002573BB: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x12C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00257290; /* jl: less (signed <) */

loc_002573D3: ;
    POP32(esp, ebx);

loc_002573D4: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002573DDu); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_002573DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00257450
 * Original: 0x00257450 - 0x0025759A (330 bytes, 107 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257450: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x41444D47);
    PUSH32(esp, 0x0025745Du); RECOMP_ABI_CALL(0x0001CF7Cu, sub_0001CF7C); /* call 0x0001CF7C */

loc_0025745D: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xDEADDEADu);
    edx = MEM32(ecx + 0xD0);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x104);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x108);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x100);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xE0);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xC4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xFC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x114);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x110);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x10C);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xC8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xBC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xC0);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xD4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xF8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xF4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xF0);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xEC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xE8);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(ecx + 0xE4));
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xDC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xD8);
    MEM32(ecx + 0x3C) = eax;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xB8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xB4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xB0);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xAC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xA8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xA4);
    PUSH32(esp, edx);
    edx = ecx + 0x72;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0xC4;
    PUSH32(esp, 0x806B50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00257586u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00257586: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002575F0
 * Original: 0x002575F0 - 0x00257731 (321 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002575F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002575F0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0xD0);
    PUSH32(esp, edx);
    ecx = MEM32(eax + 0x104);
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0x108);
    PUSH32(esp, edx);
    ecx = MEM32(eax + 0x100);
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0xE0);
    PUSH32(esp, edx);
    ecx = MEM32(eax + 0xC4);
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0xFC);
    PUSH32(esp, edx);
    ecx = MEM32(eax + 0x114);
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0x110);
    PUSH32(esp, edx);
    ecx = MEM32(eax + 0x10C);
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0xC8);
    PUSH32(esp, edx);
    ecx = MEM32(eax + 0xBC);
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0xC0);
    PUSH32(esp, edx);
    ecx = MEM32(eax + 0xD4);
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0xF8);
    PUSH32(esp, edx);
    ecx = MEM32(eax + 0xF4);
    edx = MEM32(eax + 0xF0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xEC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xE8);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0xE4));
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xDC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xD8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xB8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xB4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xB0);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xAC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax + 0x72;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0xC0;
    PUSH32(esp, 0x8070B0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025771Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025771C: ;
    _fa = (uint32_t)(MEM16(esp + 0xC8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0xC8), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00257790
 * Original: 0x00257790 - 0x00257793 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257790(void)
{

loc_00257790: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002577A0
 * Original: 0x002577A0 - 0x002577A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002577A0(void)
{

loc_002577A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002577B0
 * Original: 0x002577B0 - 0x00257993 (483 bytes, 153 insns)
 * Category: game_vtable
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002577B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002577B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002577C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002577BDu); } /* indirect call */
    }

loc_002577C0: ;
    ebx = MEM32(esp + 0x44);
    ebp = MEM32(esp + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    esi = eax;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002577D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002577D2u); } /* indirect call */
    }

loc_002577D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, ebx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002577E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002577DFu); } /* indirect call */
    }

loc_002577E2: ;
    SET_LO8(ecx, MEM8(esp + 0x50));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002577EF; /* jne: not equal / not zero */

loc_002577EA: ;
    eax = 1;

loc_002577EF: ;
    esi = MEM32(esp + 0x54);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 5;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = 4;
    MEM32(esp + 0x18) = 3;
    MEM32(esp + 0x1C) = 2;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x24) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + esi * 4 + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + esi * 4 + 0x10) (32-bit) */
    ecx = edi + 6;
    if (CMP_L(_fas, _fbs)) goto loc_00257834; /* jl: less (signed <) */

loc_0025782B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257989; /* je: equal / zero */

loc_00257833: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00257834: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257989; /* je: equal / zero */

loc_0025783C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ebp = MEM32(esp + 0x4C);
    if (CMP_A(_fa, _fb)) goto loc_0025789B; /* ja: above (unsigned >) */

loc_00257845: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x257994); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0025784Cu) goto loc_0025784C;
    if (_jt == 0x0025785Cu) goto loc_0025785C;
    if (_jt == 0x00257871u) goto loc_00257871;
    if (_jt == 0x00257887u) goto loc_00257887;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025784C: ;
    MEM32(ebp + 4) = ebx;
    PUSH32(esp, 0x00257854u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257854: ;
    edx = eax;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0025789B;

loc_0025785C: ;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, 0x00257864u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257864: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 7;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025789B;

loc_00257871: ;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, 0x00257879u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257879: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x28;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025789B;

loc_00257887: ;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, 0x0025788Fu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0025788F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x46;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025789B: ;
    ebx = MEM32(esp + 0x48);
    MEM32(esp + 0x10) = 0x64;
    MEM32(esp + 0x14) = 0x5F;
    MEM32(esp + 0x18) = 0x5A;
    MEM32(esp + 0x1C) = 0x55;
    MEM32(esp + 0x20) = 0x50;
    MEM32(esp + 0x24) = 0x4B;
    MEM32(esp + 0x28) = 0x46;
    MEM32(esp + 0x2C) = 0x41;
    MEM32(esp + 0x30) = 0x3C;
    MEM32(esp + 0x34) = 0x32;
    ecx = MEM32(esp + esi * 4 + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + ebx;
    MEM32(ebp + 8) = edi;
    eax = MEM32(0x8FA520);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x50) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00257932; /* je: equal / zero */

loc_0025791C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00257921u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025791Eu); } /* indirect call */
    }

loc_00257921: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257932; /* je: equal / zero */

loc_00257925: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00257930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025792Du); } /* indirect call */
    }

loc_00257930: ;
    goto loc_00257934;

loc_00257932: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00257934: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0025793Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257938u); } /* indirect call */
    }

loc_0025793B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257989; /* jne: not equal / not zero */

loc_00257940: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x17 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00257985; /* jg: greater (signed >) */

loc_00257945: ;
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025794Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025794Bu); } /* indirect call */
    }

loc_0025794E: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0025795Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257959u); } /* indirect call */
    }

loc_0025795B: ;
    esi = eax;
    PUSH32(esp, 0x00257962u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00257962: ;
    ecx = eax;
    PUSH32(esp, 0x00257969u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00257969: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    PUSH32(esp, ecx);
    ecx = esp;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = ebx;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00257980u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025797Du); } /* indirect call */
    }

loc_00257980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00257989; /* jle: less or equal (signed <=) */

loc_00257985: ;
    MEM8(ebp + 0xC) = 1;

loc_00257989: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00257A30
 * Original: 0x00257A30 - 0x00257B42 (274 bytes, 94 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257A30: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257B3C; /* je: equal / zero */

loc_00257A3F: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00257B3C; /* jl: less (signed <) */

loc_00257A4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00257B3C; /* jg: greater (signed >) */

loc_00257A57: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00257A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257A61u); } /* indirect call */
    }

loc_00257A64: ;
    PUSH32(esp, 0xB);
    esi = eax;
    PUSH32(esp, 0x00257A6Du); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_00257A6D: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, 0xC);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x00257A7Bu); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_00257A7B: ;
    ecx = SX16(LO16(eax));
    PUSH32(esp, 0xD);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x00257A89u); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_00257A89: ;
    edx = SX16(LO16(eax));
    PUSH32(esp, 0xE);
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x00257A97u); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_00257A97: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, 0xF);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x00257AA5u); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_00257AA5: ;
    edi = MEM32(esp + 0x38);
    ebx = MEM32(esp + 0x34);
    edx = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    ebp = SX16(LO16(eax));
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00257ABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257ABBu); } /* indirect call */
    }

loc_00257ABE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00257ACDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257ACAu); } /* indirect call */
    }

loc_00257ACD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257AEC; /* je: equal / zero */

loc_00257AD1: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257AEC; /* jne: not equal / not zero */

loc_00257AD8: ;
    PUSH32(esp, 0x00257ADDu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257ADD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x64;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esp + 0x1C);
    goto loc_00257B0A;

loc_00257AEC: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257AF8; /* jne: not equal / not zero */

loc_00257AF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257B38; /* je: equal / zero */

loc_00257AF8: ;
    PUSH32(esp, 0x00257AFDu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257AFD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x64;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esp + 0x10);

loc_00257B0A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257B38; /* je: equal / zero */

loc_00257B13: ;
    esi = MEM32(esp + 0x2C);
    MEM32(esi + 4) = 6;
    PUSH32(esp, 0x00257B23u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257B23: ;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edx;

loc_00257B38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00257B3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00257B90
 * Original: 0x00257B90 - 0x00257C47 (183 bytes, 41 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257B90: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257C40; /* jne: not equal / not zero */

loc_00257BA3: ;
    PUSH32(esp, 0x00257BA8u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257BA8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257C40; /* jne: not equal / not zero */

loc_00257BB9: ;
    MEM32(esi + 4) = 1;
    MEM32(esp + 4) = 0x64;
    MEM32(esp + 8) = 0x5F;
    MEM32(esp + 0xC) = 0x5A;
    MEM32(esp + 0x10) = 0x55;
    MEM32(esp + 0x14) = 0x50;
    MEM32(esp + 0x18) = 0x4B;
    MEM32(esp + 0x1C) = 0x46;
    MEM32(esp + 0x20) = 0x41;
    MEM32(esp + 0x24) = 0x3C;
    MEM32(esp + 0x28) = 0x32;
    PUSH32(esp, 0x00257C15u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257C15: ;
    edx = MEM32(esp + 0x44);
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + edx * 4 + 4));
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0x3C);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;

loc_00257C40: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00257C80
 * Original: 0x00257C80 - 0x00257F82 (770 bytes, 244 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257C80: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00257C8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257C8Cu); } /* indirect call */
    }

loc_00257C8F: ;
    ecx = MEM32(esp + 0x70);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257CAC; /* je: equal / zero */

loc_00257C9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00257CA8; /* jle: less or equal (signed <=) */

loc_00257CA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00257CAC; /* jle: less or equal (signed <=) */

loc_00257CA8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00257CAE;

loc_00257CAC: ;
    SET_LO8(eax, 1);

loc_00257CAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x60) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00257F7B; /* je: equal / zero */

loc_00257CBB: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00257CC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257CC2u); } /* indirect call */
    }

loc_00257CC5: ;
    esi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00257CCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257CCBu); } /* indirect call */
    }

loc_00257CCE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00257CD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257CD4u); } /* indirect call */
    }

loc_00257CD6: ;
    edi = 7;
    edx = 5;
    ebp = 3;
    ebx = eax;
    eax = 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = edi;
    ecx = 4;
    MEM32(esp + 0x30) = edi;
    edi = MEM32(esp + 0x78);
    MEM32(esp + 0x54) = ebp;
    MEM32(esp + 0x60) = ebp;
    MEM32(esp + 0x38) = ebp;
    ebp = MEM32(esp + 0x74);
    PUSH32(esp, edi);
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x70) = 1;
    MEM32(esp + 0x34) = 0xA;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x44) = 8;
    MEM32(esp + 0x48) = 6;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00257D53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257D50u); } /* indirect call */
    }

loc_00257D53: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x80) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00257D65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257D62u); } /* indirect call */
    }

loc_00257D65: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00257D74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257D71u); } /* indirect call */
    }

loc_00257D74: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00257D83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257D80u); } /* indirect call */
    }

loc_00257D83: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00257D92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257D8Fu); } /* indirect call */
    }

loc_00257D92: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00257DA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257D9Eu); } /* indirect call */
    }

loc_00257DA1: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00257DB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257DAFu); } /* indirect call */
    }

loc_00257DB2: ;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00257DED; /* jne: not equal / not zero */

loc_00257DBE: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + ebx + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x70));
    eax = MEM32(esp + ebx + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    esi = ecx + -2;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + ebx + 0x58));
    ecx = MEM32(esp + ebx + 0x48);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x74));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00257E13;

loc_00257DED: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + ebx + 0x38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x70));
    esi = edx + eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + ebx + 0x28));
    edx = MEM32(esp + ebx + 0x48);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x74));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00257E13: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00257E1F; /* jle: less or equal (signed <=) */

loc_00257E18: ;
    esi = 0x50;
    goto loc_00257E23;

loc_00257E1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00257E3A; /* jle: less or equal (signed <=) */

loc_00257E23: ;
    PUSH32(esp, 0x00257E28u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257E28: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00257E3A; /* jae: above or equal (unsigned >=) */

loc_00257E35: ;
    MEM8(esp + 0x6C) = 1;

loc_00257E3A: ;
    ecx = MEM32(esp + 0x14);
    edx = 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = 8;
    PUSH32(esp, edx);
    esi = 4;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = 7;
    MEM32(esp + 0x64) = 1;
    MEM32(esp + 0x68) = edx;
    MEM32(esp + 0x6C) = 3;
    MEM32(esp + 0x70) = esi;
    MEM32(esp + 0x44) = 5;
    MEM32(esp + 0x48) = 6;
    MEM32(esp + 0x50) = 0xA;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00257E9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00257E9Au); } /* indirect call */
    }

loc_00257E9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00257F34; /* jl: less (signed <) */

loc_00257EA6: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257EC2; /* jne: not equal / not zero */

loc_00257EAC: ;
    edi = MEM32(esp + ebx + 0x58);
    ecx = MEM32(esp + ebx + 0x48);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x24));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x74));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00257EDD;

loc_00257EC2: ;
    edi = MEM32(esp + ebx + 0x48);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x74));
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x10);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00257EDD; /* jne: not equal / not zero */

loc_00257ED9: ;
    _fb = (uint32_t)(MEM32(esp + ebx + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + ebx + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00257EDD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00257EE9; /* jle: less or equal (signed <=) */

loc_00257EE2: ;
    edi = 0x50;
    goto loc_00257EED;

loc_00257EE9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00257F34; /* jle: less or equal (signed <=) */

loc_00257EED: ;
    PUSH32(esp, 0x00257EF2u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257EF2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00257F34; /* jae: above or equal (unsigned >=) */

loc_00257EFF: ;
    edi = MEM32(esp + 0x7C);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257F48; /* je: equal / zero */

loc_00257F0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257F78; /* je: equal / zero */

loc_00257F10: ;
    MEM32(edi + 4) = 3;
    PUSH32(esp, 0x00257F1Cu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257F1C: ;
    edx = MEM32(esp + 0x78);
    POP32(esp, esi);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    eax = eax + edx + 2;
    POP32(esp, ebx);
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00257F34: ;
    SET_LO8(eax, MEM8(esp + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257F78; /* je: equal / zero */

loc_00257F3C: ;
    edi = MEM32(esp + 0x7C);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257F59; /* jne: not equal / not zero */

loc_00257F48: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00257F59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257F78; /* je: equal / zero */

loc_00257F5E: ;
    MEM32(edi + 4) = 2;
    PUSH32(esp, 0x00257F6Au); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00257F6A: ;
    ecx = MEM32(esp + 0x78);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + ecx + 2;
    MEM32(edi + 8) = eax;

loc_00257F78: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00257F7B: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00258050
 * Original: 0x00258050 - 0x00258057 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258050(void)
{

loc_00258050: ;
    eax = MEM32(ecx + 0x19C);
    esp += 4; return; /* ret */

}

/**
 * sub_00258060
 * Original: 0x00258060 - 0x00258064 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258060(void)
{

loc_00258060: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00258070
 * Original: 0x00258070 - 0x00258071 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258070(void)
{

loc_00258070: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00258080
 * Original: 0x00258080 - 0x002580BA (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258080(void)
{

loc_00258080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00258088u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00258088: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x93);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00258096u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00258093u); } /* indirect call */
    }

loc_00258096: ;
    PUSH32(esp, 0x0025809Bu); RECOMP_ABI_CALL(0x00029EB1u, sub_00029EB1); /* call 0x00029EB1 */

loc_0025809B: ;
    PUSH32(esp, 0x002580A0u); RECOMP_ABI_CALL(0x000216D5u, sub_000216D5); /* call 0x000216D5 */

loc_002580A0: ;
    PUSH32(esp, 0x002580A5u); RECOMP_ABI_CALL(0x00035590u, sub_00035590); /* call 0x00035590 */

loc_002580A5: ;
    ecx = eax;
    PUSH32(esp, 0x002580ACu); RECOMP_ABI_CALL(0x00028E21u, sub_00028E21); /* call 0x00028E21 */

loc_002580AC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x002580B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002580B0u); } /* indirect call */
    }

loc_002580B6: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002580D0
 * Original: 0x002580D0 - 0x002580F8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002580D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002580D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 1;
    /* nop */

loc_002580E0: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002580EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002580E5u); } /* indirect call */
    }

loc_002580EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002580F5; /* jne: not equal / not zero */

loc_002580EF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002580E0; /* jle: less or equal (signed <=) */

loc_002580F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00258110
 * Original: 0x00258110 - 0x0025811E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258110: ;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025811D; /* jne: not equal / not zero */

loc_00258116: ;
    MEM32(ecx + 0x58) = 4;

loc_0025811D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00258130
 * Original: 0x00258130 - 0x0025813E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258130: ;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025813D; /* jne: not equal / not zero */

loc_00258136: ;
    MEM32(ecx + 0x58) = 6;

loc_0025813D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00258150
 * Original: 0x00258150 - 0x0025818C (60 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258150: ;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258175; /* je: equal / zero */

loc_00258157: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00258189; /* jle: less or equal (signed <=) */

loc_00258159: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00258189; /* jg: greater (signed >) */

loc_0025815E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 1;
    MEM32(ecx) = 1;
    esp += 12; return; /* ret 8 */

loc_00258175: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(edx) = 0;
    MEM32(eax) = 0;

loc_00258189: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002581A0
 * Original: 0x002581A0 - 0x002581A3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002581A0(void)
{

loc_002581A0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002581B0
 * Original: 0x002581B0 - 0x002581D8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002581B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002581B0: ;
    ecx = MEM32(esp + 4);
    eax = 0x7FEEC4;
    /* nop */

loc_002581C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002581D3; /* je: equal / zero */

loc_002581C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FEF0C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FEF0C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002581C0; /* jl: less (signed <) */

loc_002581CE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_002581D3: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002581F0
 * Original: 0x002581F0 - 0x00258347 (343 bytes, 118 insns)
 * Category: game_vtable
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002581F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002581F0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_0025821F; /* jne: not equal / not zero */

loc_00258210: ;
    ecx = edi;
    PUSH32(esp, 0x00258217u); RECOMP_ABI_CALL(0x0001C559u, sub_0001C559); /* call 0x0001C559 */

loc_00258217: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025833D; /* je: equal / zero */

loc_0025821F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = 1;
    if (CMP_A(_fa, _fb)) goto loc_0025827D; /* ja: above (unsigned >) */

loc_00258236: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x258348); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0025823Du) goto loc_0025823D;
    if (_jt == 0x00258240u) goto loc_00258240;
    if (_jt == 0x00258244u) goto loc_00258244;
    if (_jt == 0x00258270u) goto loc_00258270;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025823D: ;
    PUSH32(esp, eax);
    goto loc_00258272;

loc_00258240: ;
    PUSH32(esp, 1);
    goto loc_00258272;

loc_00258244: ;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x0025824Du); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025824D: ;
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025827D; /* je: equal / zero */

loc_00258259: ;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x00258262u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258262: ;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = 2;
    goto loc_0025827D;

loc_00258270: ;
    PUSH32(esp, 4);

loc_00258272: ;
    ecx = edi;
    PUSH32(esp, 0x00258279u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258279: ;
    MEM32(esp + 0x10) = eax;

loc_0025827D: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x38) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00258331; /* jle: less or equal (signed <=) */

loc_00258291: ;
    eax = MEM32(esp + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x34) = edx;

loc_002582A0: ;
    eax = MEM32(esp + 0x38);
    edi = MEM32(esp + eax * 4 + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002582B0: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002582BFu); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_002582BF: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002582E6; /* je: equal / zero */

loc_002582C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002582DE; /* jle: less or equal (signed <=) */

loc_002582CA: ;
    /* nop */

loc_002582D0: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002582E6; /* je: equal / zero */

loc_002582D9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002582D0; /* jl: less (signed <) */

loc_002582DE: ;
    eax = MEM32(esp + 0x28);
    MEM32(eax + ebx * 4) = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002582E6: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002582F5u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_002582F5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258316; /* je: equal / zero */

loc_002582FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025830E; /* jle: less or equal (signed <=) */

loc_00258300: ;
    edx = MEM32(esp + 0x30);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258316; /* je: equal / zero */

loc_00258309: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258300; /* jl: less (signed <) */

loc_0025830E: ;
    eax = MEM32(esp + 0x30);
    MEM32(eax + ebp * 4) = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00258316: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002582B0; /* jl: less (signed <) */

loc_0025831C: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x38) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002582A0; /* jl: less (signed <) */

loc_00258331: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x2C);
    MEM32(ecx) = ebx;
    MEM32(edx) = ebp;

loc_0025833D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_002583C0
 * Original: 0x002583C0 - 0x00258481 (193 bytes, 85 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002583C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002583C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 3);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x002583E2u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_002583E2: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002583F4u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_002583F4: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002583FEu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002583FE: ;
    edx = SX16(LO16(eax));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025840Du); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_0025840D: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258417u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258417: ;
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258426u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258426: ;
    PUSH32(esp, 9);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00258430u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258430: ;
    ecx = SX16(LO16(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0025843Fu); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_0025843F: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258449u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258449: ;
    ebp = MEM32(esp + 0x20);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x3C);
    edx = SX16(LO16(eax));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258460u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258460: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0025846Au); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_0025846A: ;
    eax = SX16(LO16(eax));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0025847Au); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_0025847A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002584C0
 * Original: 0x002584C0 - 0x002586B9 (505 bytes, 192 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002584C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002584C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x002584D2u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_002584D2: ;
    edi = eax;
    eax = MEM32(esp + 0x28);
    SET_LO8(edx, MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002584FB; /* je: equal / zero */

loc_002584E2: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002584FB; /* je: equal / zero */

loc_002584E9: ;
    SET_LO8(ecx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002584FB; /* je: equal / zero */

loc_002584F0: ;
    SET_LO8(ecx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002584FB; /* je: equal / zero */

loc_002584F7: ;
    SET_LO8(ecx, 1);
    goto loc_002584FD;

loc_002584FB: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_002584FD: ;
    esi = MEM32(esp + 0x2C);
    SET_LO8(ebx, MEM8(esi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258520; /* je: equal / zero */

loc_00258507: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258520; /* je: equal / zero */

loc_0025850E: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258520; /* je: equal / zero */

loc_00258515: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258520; /* je: equal / zero */

loc_0025851C: ;
    SET_LO8(eax, 1);
    goto loc_00258522;

loc_00258520: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00258522: ;
    _fa = (uint32_t)(MEM8(esp + 0x3C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x3C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258592; /* je: equal / zero */

loc_00258529: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258596; /* je: equal / zero */

loc_0025852D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258592; /* je: equal / zero */

loc_00258531: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025856B; /* jle: less or equal (signed <=) */

loc_00258539: ;
    edi = MEM32(esp + 0x44);
    ebp = MEM32(esp + 0x40);

loc_00258541: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025854Bu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025854B: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x00258556u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_00258556: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_G(_fas, _fbs)) ebx = esi; /* cmovg */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258541; /* jl: less (signed <) */

loc_00258565: ;
    ebp = MEM32(esp + 0x30);
    edi = eax;

loc_0025856B: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025857E; /* jle: less or equal (signed <=) */

loc_00258573: ;
    PUSH32(esp, 0x00258578u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00258578: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    esi = edx;

loc_0025857E: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00258588u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258588: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_00258592: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025860E; /* jne: not equal / not zero */

loc_00258596: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002585A7; /* jne: not equal / not zero */

loc_0025859E: ;
    MEM32(esp + 0x14) = esi;
    ebp = 1;

loc_002585A7: ;
    eax = MEM32(esp + 0x28);
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002585BB; /* jne: not equal / not zero */

loc_002585B2: ;
    MEM32(esp + ebp * 4 + 0x14) = 1;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002585BB: ;
    SET_LO8(ecx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002585CB; /* jne: not equal / not zero */

loc_002585C2: ;
    MEM32(esp + ebp * 4 + 0x14) = 2;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002585CB: ;
    SET_LO8(ecx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002585DB; /* jne: not equal / not zero */

loc_002585D2: ;
    MEM32(esp + ebp * 4 + 0x14) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002585DB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258604; /* jle: less or equal (signed <=) */

loc_002585E4: ;
    ebx = MEM32(esp + 0x38);
    goto loc_002585F0;

    /* nop */

loc_002585F0: ;
    eax = MEM32(esp + esi * 4 + 0x14);
    ecx = MEM32(ebx + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) edi = eax; /* cmovge */
    if (CMP_GE(_fas, _fbs)) edx = ecx; /* cmovge */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002585F0; /* jl: less (signed <) */

loc_00258604: ;
    eax = MEM32(esp + 0x28);
    MEM8(edi + eax) = 1;
    goto loc_00258680;

loc_0025860E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025869E; /* jne: not equal / not zero */

loc_00258616: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258627; /* jne: not equal / not zero */

loc_0025861E: ;
    MEM32(esp + 0x14) = edx;
    ebp = 1;

loc_00258627: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258637; /* jne: not equal / not zero */

loc_0025862E: ;
    MEM32(esp + ebp * 4 + 0x14) = 1;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00258637: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258647; /* jne: not equal / not zero */

loc_0025863E: ;
    MEM32(esp + ebp * 4 + 0x14) = 2;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00258647: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258657; /* jne: not equal / not zero */

loc_0025864E: ;
    MEM32(esp + ebp * 4 + 0x14) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00258657: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258678; /* jle: less or equal (signed <=) */

loc_00258660: ;
    ebx = MEM32(esp + 0x34);

loc_00258664: ;
    eax = MEM32(esp + esi * 4 + 0x14);
    ecx = MEM32(ebx + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) edi = eax; /* cmovge */
    if (CMP_GE(_fas, _fbs)) edx = ecx; /* cmovge */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258664; /* jl: less (signed <) */

loc_00258678: ;
    ecx = MEM32(esp + 0x2C);
    MEM8(edi + ecx) = 1;

loc_00258680: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025868A; /* jne: not equal / not zero */

loc_00258685: ;
    edi = 4;

loc_0025868A: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00258694u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258694: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_0025869E: ;
    PUSH32(esp, 0x002586A3u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_002586A3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ecx = ebp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002586AFu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_002586AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00258740
 * Original: 0x00258740 - 0x00258E69 (1833 bytes, 648 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258740: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    esi = ecx;
    ecx = MEM32(esp + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00258775u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_00258775: ;
    edi = MEM32(esp + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00258787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00258784u); } /* indirect call */
    }

loc_00258787: ;
    edx = MEM32(edi);
    esi = eax;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x24) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0025879Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00258798u); } /* indirect call */
    }

loc_0025879B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = ZX8(LO8(ecx));
    SET_LO8(ecx, LO8(edx));
    SET_HI8(ecx, LO8(ecx));
    MEM32(esp + 0x20) = eax;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO16(edx, LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = edx;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ZX8(LO8(edx));
    edx = MEM32(esp + 0x60);
    SET_LO8(ecx, LO8(eax));
    SET_HI8(ecx, LO8(ecx));
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO16(eax, LO16(ecx));
    ecx = MEM32(esp + 0x5C);
    MEM32(esp + 0x50) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002587E0;

    /* nop */

loc_002587E0: ;
    _fa = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002587EB; /* jne: not equal / not zero */

loc_002587E6: ;
    MEM8(esp + eax + 0x18) = 1;

loc_002587EB: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002587F5; /* jne: not equal / not zero */

loc_002587F0: ;
    MEM8(esp + eax + 0x50) = 1;

loc_002587F5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002587E0; /* jl: less (signed <) */

loc_002587FE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00258800: ;
    ecx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00258811u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025880Eu); } /* indirect call */
    }

loc_00258811: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258953; /* je: equal / zero */

loc_0025881A: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00258829u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00258826u); } /* indirect call */
    }

loc_00258829: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x16);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025883Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00258839u); } /* indirect call */
    }

loc_0025883C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x17);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025884Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025884Cu); } /* indirect call */
    }

loc_0025884F: ;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258897; /* jle: less or equal (signed <=) */

loc_0025885B: ;
    ecx = eax;
    MEM32(esp + 0x24) = ecx;

loc_00258861: ;
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00258885u); RECOMP_ABI_CALL(0x0002B397u, sub_0002B397); /* call 0x0002B397 */

loc_00258885: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00258891u); RECOMP_ABI_CALL(0x000111CCu, sub_000111CC); /* call 0x000111CC */

loc_00258891: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00258861; /* jne: not equal / not zero */

loc_00258897: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002588E6; /* jle: less or equal (signed <=) */

loc_0025889F: ;
    ecx = eax;
    MEM32(esp + 0x28) = ecx;
    goto loc_002588B0;

    /* nop */
    edi = edi;

loc_002588B0: ;
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x002588D4u); RECOMP_ABI_CALL(0x0002B397u, sub_0002B397); /* call 0x0002B397 */

loc_002588D4: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x002588E0u); RECOMP_ABI_CALL(0x000111CCu, sub_000111CC); /* call 0x000111CC */

loc_002588E0: ;
    MEM32(esp + 0x28) = MEM32(esp + 0x28) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002588B0; /* jne: not equal / not zero */

loc_002588E6: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258953; /* jle: less or equal (signed <=) */

loc_002588EE: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00258912u); RECOMP_ABI_CALL(0x0002B397u, sub_0002B397); /* call 0x0002B397 */

loc_00258912: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x00258922u); RECOMP_ABI_CALL(0x000111CCu, sub_000111CC); /* call 0x000111CC */

loc_00258922: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00258931u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_00258931: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x17);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00258942u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025893Fu); } /* indirect call */
    }

loc_00258942: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00258953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00258950u); } /* indirect call */
    }

loc_00258953: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258800; /* jl: less (signed <) */

loc_0025895D: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x50) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00258A6A; /* jle: less or equal (signed <=) */

loc_0025896D: ;
    eax = MEM32(esp + 0x48);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002589C5; /* jle: less or equal (signed <=) */

loc_00258977: ;
    goto loc_00258980;

    /* nop */

loc_00258980: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025898Au); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025898A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    edi = esi * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_00258999; /* jle: less or equal (signed <=) */

loc_00258996: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00258999: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002589A7u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002589A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002589BC; /* jle: less or equal (signed <=) */

loc_002589AB: ;
    edx = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x50);
    eax = MEM32(edi + edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x50) = ecx;

loc_002589BC: ;
    eax = MEM32(esp + 0x48);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258980; /* jl: less (signed <) */

loc_002589C5: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258A6A; /* jle: less or equal (signed <=) */

loc_002589D1: ;
    eax = MEM32(esp + 0x48);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258A5E; /* jle: less or equal (signed <=) */

loc_002589DF: ;
    /* nop */

loc_002589E0: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002589EAu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_002589EA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x28) = esi;
    edi = esi * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_00258A08; /* jle: less or equal (signed <=) */

loc_002589FE: ;
    ecx = esi + -1;
    MEM32(esp + 0x28) = ecx;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00258A08: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258A18u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258A18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258A26; /* jne: not equal / not zero */

loc_00258A1C: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00258A31; /* jg: greater (signed >) */

loc_00258A26: ;
    eax = MEM32(esp + 0x48);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002589E0; /* jl: less (signed <) */

loc_00258A2F: ;
    goto loc_00258A5E;

loc_00258A31: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00258A38u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00258A38: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x12;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = ebx;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258A4Fu); RECOMP_ABI_CALL(0x000111CCu, sub_000111CC); /* call 0x000111CC */

loc_00258A4F: ;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x50) = MEM32(esp + 0x50) - edx;
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00258A5E: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002589D1; /* jg: greater (signed >) */

loc_00258A6A: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x50) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00258B66; /* jle: less or equal (signed <=) */

loc_00258A7A: ;
    eax = MEM32(esp + 0x48);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258ABF; /* jle: less or equal (signed <=) */

loc_00258A84: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00258A8Eu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258A8E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    edi = esi * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_00258A9D; /* jle: less or equal (signed <=) */

loc_00258A9A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00258A9D: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x00258AA7u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258AA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258AB6; /* jle: less or equal (signed <=) */

loc_00258AAB: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(edi + eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x50) = MEM32(esp + 0x50) - ecx;
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00258AB6: ;
    eax = MEM32(esp + 0x48);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258A84; /* jl: less (signed <) */

loc_00258ABF: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258B66; /* jle: less or equal (signed <=) */

loc_00258ACB: ;
    goto loc_00258AD0;

    /* nop */

loc_00258AD0: ;
    eax = MEM32(esp + 0x48);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258B5A; /* jle: less or equal (signed <=) */

loc_00258ADE: ;
    edi = edi;

loc_00258AE0: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00258AEAu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258AEA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x28) = esi;
    edi = esi * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_00258B08; /* jle: less or equal (signed <=) */

loc_00258AFE: ;
    edx = esi + -1;
    MEM32(esp + 0x28) = edx;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00258B08: ;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00258B14u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258B14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258B22; /* jne: not equal / not zero */

loc_00258B18: ;
    eax = MEM32(esp + 0x5C);
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00258B2D; /* jg: greater (signed >) */

loc_00258B22: ;
    eax = MEM32(esp + 0x48);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258AE0; /* jl: less (signed <) */

loc_00258B2B: ;
    goto loc_00258B5A;

loc_00258B2D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00258B34u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00258B34: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x12;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = ebx;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258B4Bu); RECOMP_ABI_CALL(0x000111CCu, sub_000111CC); /* call 0x000111CC */

loc_00258B4B: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x50) = MEM32(esp + 0x50) - edx;
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00258B5A: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00258AD0; /* jg: greater (signed >) */

loc_00258B66: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x48) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00258CE4; /* jle: less or equal (signed <=) */

loc_00258B7A: ;
    ecx = MEM32(esp + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00258B9Bu); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_00258B9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x14);
    if (CMP_LE(_fas, _fbs)) goto loc_00258BF3; /* jle: less or equal (signed <=) */

loc_00258BA3: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00258BADu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258BAD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    ebx = esi * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_00258BBC; /* jle: less or equal (signed <=) */

loc_00258BB9: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00258BBC: ;
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00258BC6u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258BC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258BE1; /* jle: less or equal (signed <=) */

loc_00258BCA: ;
    ecx = MEM32(esp + 0x60);
    _fa = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258BE1; /* jle: less or equal (signed <=) */

loc_00258BD4: ;
    eax = MEM32(esp + 0x48);
    MEM32(esp + eax * 4 + 0x30) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x48) = eax;

loc_00258BE1: ;
    ecx = MEM32(esp + 0x4C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00258BEBu); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_00258BEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258BA3; /* jl: less (signed <) */

loc_00258BEF: ;
    ebx = MEM32(esp + 0x1C);

loc_00258BF3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258CE8; /* jle: less or equal (signed <=) */

loc_00258BFB: ;
    edx = MEM32(esp + 0x48);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = ebx;

loc_00258C08: ;
    PUSH32(esp, 0x00258C0Du); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00258C0D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x48));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x48)); }
    ebx = MEM32(esp + edx * 4 + 0x30);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ebx);
    eax = esp + edx * 4 + 0x34;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00258C2Du); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258C2D: ;
    esi = eax;
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258C39u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258C39: ;
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258C48u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258C48: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00258C52u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258C52: ;
    ecx = SX16(LO16(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00258C61u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258C61: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258C6Bu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258C6B: ;
    edx = SX16(LO16(eax));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258C7Au); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258C7A: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00258C84u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258C84: ;
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00258C93u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258C93: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258C99; /* jle: less or equal (signed <=) */

loc_00258C98: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00258C99: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258CA3u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258CA3: ;
    ecx = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + ebx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258CD8; /* jne: not equal / not zero */

loc_00258CAC: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00258CCA; /* jge: greater or equal (signed >=) */

loc_00258CB8: ;
    edi = MEM32(esp + 0x28);
    ecx = edx;
    esi = esp + eax * 4 + 0x34;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    edi = MEM32(esp + 0x14);

loc_00258CCA: ;
    ecx = MEM32(esp + 0x48);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x50) = edx;

loc_00258CD8: ;
    MEM32(esp + 0x54) = MEM32(esp + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00258C08; /* jne: not equal / not zero */

loc_00258CE2: ;
    goto loc_00258CE8;

loc_00258CE4: ;
    edi = MEM32(esp + 0x14);

loc_00258CE8: ;
    ebx = MEM32(esp + 0x20);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258E5F; /* jle: less or equal (signed <=) */

loc_00258CF6: ;
    ecx = MEM32(esp + 0x4C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x48) = esi;
    PUSH32(esp, 0x00258D19u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_00258D19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258D70; /* jle: less or equal (signed <=) */

loc_00258D1D: ;
    /* nop */

loc_00258D20: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00258D2Au); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258D2A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    ebx = esi * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_00258D39; /* jle: less or equal (signed <=) */

loc_00258D36: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00258D39: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x00258D43u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258D43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258D5E; /* jle: less or equal (signed <=) */

loc_00258D47: ;
    eax = MEM32(esp + 0x5C);
    _fa = (uint32_t)(MEM32(ebx + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + eax), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258D5E; /* jle: less or equal (signed <=) */

loc_00258D51: ;
    eax = MEM32(esp + 0x48);
    MEM32(esp + eax * 4 + 0x30) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x48) = eax;

loc_00258D5E: ;
    ecx = MEM32(esp + 0x4C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00258D68u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_00258D68: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258D20; /* jl: less (signed <) */

loc_00258D6C: ;
    ebx = MEM32(esp + 0x20);

loc_00258D70: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258E5F; /* jle: less or equal (signed <=) */

loc_00258D78: ;
    ecx = MEM32(esp + 0x48);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x50) = ebx;

loc_00258D85: ;
    PUSH32(esp, 0x00258D8Au); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00258D8A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x48));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x48)); }
    ebx = MEM32(esp + edx * 4 + 0x30);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ebx);
    eax = esp + edx * 4 + 0x34;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00258DAAu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00258DAA: ;
    esi = eax;
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00258DB6u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258DB6: ;
    edx = SX16(LO16(eax));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00258DC5u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258DC5: ;
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258DCFu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258DCF: ;
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258DDEu); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258DDE: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00258DE8u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258DE8: ;
    ecx = SX16(LO16(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00258DF7u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258DF7: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258E01u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258E01: ;
    edx = SX16(LO16(eax));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00258E10u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00258E10: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258E16; /* jle: less or equal (signed <=) */

loc_00258E15: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00258E16: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00258E20u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00258E20: ;
    ecx = MEM32(esp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + ebx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258E55; /* jne: not equal / not zero */

loc_00258E29: ;
    eax = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00258E47; /* jge: greater or equal (signed >=) */

loc_00258E35: ;
    edi = MEM32(esp + 0x2C);
    ecx = edx;
    esi = esp + eax * 4 + 0x34;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    edi = MEM32(esp + 0x14);

loc_00258E47: ;
    ecx = MEM32(esp + 0x48);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x60) = edx;

loc_00258E55: ;
    MEM32(esp + 0x50) = MEM32(esp + 0x50) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00258D85; /* jne: not equal / not zero */

loc_00258E5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00259040
 * Original: 0x00259040 - 0x002592D6 (662 bytes, 242 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259040: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00259050: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ebx;

loc_00259056: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    ebp = MEM32(esp + 0x30);
    if (CMP_NE(_fa, _fb)) goto loc_0025906F; /* jne: not equal / not zero */

loc_0025905F: ;
    ecx = ebp;
    PUSH32(esp, 0x00259066u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_00259066: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002592B4; /* jl: less (signed <) */

loc_0025906F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0025907F; /* jle: less or equal (signed <=) */

loc_00259078: ;
    eax = ebx + 1;
    MEM32(esp + 0x20) = eax;

loc_0025907F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002590AD; /* je: equal / zero */

loc_00259081: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025908Du); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025908D: ;
    esi = eax;
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00259099u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259099: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002590A7u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002590A7: ;
    MEM32(esp + 0x14) = eax;
    goto loc_00259101;

loc_002590AD: ;
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x002590B6u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_002590B6: ;
    esi = eax;
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002590C2u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002590C2: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002590D0u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002590D0: ;
    PUSH32(esp, 3);
    ecx = ebp;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002590DDu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_002590DD: ;
    esi = eax;
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002590E9u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002590E9: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002590FDu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002590FD: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00259101: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025910F; /* jne: not equal / not zero */

loc_00259105: ;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x24) = edx;
    goto loc_00259117;

loc_0025910F: ;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x24) = eax;

loc_00259117: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ebx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + ebx * 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002592B4; /* jle: less or equal (signed <=) */

loc_0025912E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = ecx;

loc_00259137: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00259145u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00259145: ;
    ecx = MEM32(esp + 0x18);
    esi = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = MEM32(esp + 0x20);
    MEM8(esp + 0x13) = (CMP_G(_fas, _fbs)) ? 1 : 0; /* setg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025919C; /* jne: not equal / not zero */

loc_0025915F: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0025916Au); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025916A: ;
    ecx = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00259215; /* je: equal / zero */

loc_0025917C: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00259184u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259184: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00259190u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259190: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    ebx = MEM32(esp + 0x1C);
    if (CMP_L(_fas, _fbs)) goto loc_0025919C; /* jl: less (signed <) */

loc_00259198: ;
    esi = MEM32(esp + 0x28);

loc_0025919C: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259235; /* je: equal / zero */

loc_002591A8: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002591B2u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002591B2: ;
    ecx = SX16(LO16(eax));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002591C1u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_002591C1: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x002591CBu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002591CB: ;
    edx = SX16(LO16(eax));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x002591DAu); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_002591DA: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002591E4u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002591E4: ;
    eax = SX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002591F3u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_002591F3: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x002591FDu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_002591FD: ;
    ecx = SX16(LO16(eax));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0025920Cu); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_0025920C: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0025929D;

loc_00259215: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025921Du); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_0025921D: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00259229u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259229: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    ebx = MEM32(esp + 0x1C);
    if (CMP_L(_fas, _fbs)) goto loc_00259235; /* jl: less (signed <) */

loc_00259231: ;
    esi = MEM32(esp + 0x28);

loc_00259235: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025923Fu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_0025923F: ;
    edx = SX16(LO16(eax));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025924Eu); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_0025924E: ;
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00259258u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259258: ;
    eax = SX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00259267u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259267: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00259271u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259271: ;
    ecx = SX16(LO16(eax));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00259280u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259280: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0025928Au); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_0025928A: ;
    edx = SX16(LO16(eax));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00259299u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259299: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0025929D: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + ebx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + ebx * 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00259137; /* jg: greater (signed >) */

loc_002592B4: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00259056; /* jl: less (signed <) */

loc_002592C2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259050; /* jl: less (signed <) */

loc_002592CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00259380
 * Original: 0x00259380 - 0x0025966B (747 bytes, 300 insns)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259380: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x64);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x14;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 0x10) = ebp;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002593A4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x12 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002593D1; /* jge: greater or equal (signed >=) */

loc_002593A9: ;
    ecx = MEM32(esp + 0x8C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002593D1; /* jle: less or equal (signed <=) */

loc_002593B6: ;
    goto loc_002593C0;

    /* nop */
    /* nop */

loc_002593C0: ;
    edx = MEM32(esp + 0x88);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + eax * 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259403; /* je: equal / zero */

loc_002593CC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002593C0; /* jl: less (signed <) */

loc_002593D1: ;
    ecx = MEM32(esp + 0x74);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002593DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002593DBu); } /* indirect call */
    }

loc_002593DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002593F0; /* jne: not equal / not zero */

loc_002593E9: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002593EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002593EBu); } /* indirect call */
    }

loc_002593EE: ;
    goto loc_002593F5;

loc_002593F0: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002593F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002593F2u); } /* indirect call */
    }

loc_002593F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259403; /* je: equal / zero */

loc_002593FE: ;
    MEM32(esp + ebp * 4 + 0x14) = edi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00259403: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002593A4; /* jl: less (signed <) */

loc_00259409: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002594B3; /* jne: not equal / not zero */

loc_00259415: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00259420;

    /* nop */

loc_00259420: ;
    edx = MEM32(esp + 0x8C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00259441; /* jle: less or equal (signed <=) */

loc_0025942D: ;
    /* nop */

loc_00259430: ;
    edi = MEM32(esp + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + eax * 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259446; /* je: equal / zero */

loc_0025943C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259430; /* jl: less (signed <) */

loc_00259441: ;
    MEM32(esp + ebp * 4 + 0x14) = ecx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00259446: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259420; /* jl: less (signed <) */

loc_0025944C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259460; /* jne: not equal / not zero */

loc_00259450: ;
    MEM32(esp + 0x10) = 1;
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(esp + 0x10);

loc_00259460: ;
    PUSH32(esp, 0x00259465u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00259465: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    MEM32(esp + 0x14) = 1;
    edi = MEM32(esp + edx * 4 + 0x18);
    edx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00259484u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259481u); } /* indirect call */
    }

loc_00259484: ;
    edx = MEM32(ebx);
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00259494u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259491u); } /* indirect call */
    }

loc_00259494: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025949Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025949Cu); } /* indirect call */
    }

loc_0025949F: ;
    edx = MEM32(ebx);
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002594AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002594ACu); } /* indirect call */
    }

loc_002594AF: ;
    ebp = MEM32(esp + 0x10);

loc_002594B3: ;
    PUSH32(esp, 0x002594B8u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_002594B8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    ecx = MEM32(esp + 0x90);
    MEM32(esp + 0x70) = edx;
    PUSH32(esp, 0x002594CCu); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_002594CC: ;
    MEM32(esp + 0x88) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x8C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0025953E; /* jle: less or equal (signed <=) */

loc_002594E0: ;
    ecx = MEM32(esp + 0x88);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00259525; /* jle: less or equal (signed <=) */

loc_002594ED: ;
    ebp = MEM32(esp + eax * 4 + 0x14);

loc_002594F1: ;
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002594FEu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_002594FE: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00259509u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_00259509: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00259533; /* jg: greater (signed >) */

loc_0025950E: ;
    eax = MEM32(esp + 0x88);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002594F1; /* jl: less (signed <) */

loc_0025951A: ;
    eax = MEM32(esp + 0x8C);
    ebp = MEM32(esp + 0x10);

loc_00259525: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x8C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002594E0; /* jl: less (signed <) */

loc_00259531: ;
    goto loc_0025953E;

loc_00259533: ;
    ecx = MEM32(esp + 0x8C);
    MEM32(esp + 0x70) = ecx;

loc_0025953E: ;
    edx = MEM32(esp + 0x70);
    edi = MEM32(esp + edx * 4 + 0x14);
    ecx = MEM32(esp + 0x74);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00259553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259550u); } /* indirect call */
    }

loc_00259553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    ebp = MEM32(esp + 0x6C);
    ecx = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00259591; /* jne: not equal / not zero */

loc_0025955E: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259567u); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_00259567: ;
    ecx = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259574u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_00259574: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0025957Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025957Cu); } /* indirect call */
    }

loc_0025957F: ;
    edx = MEM32(ebx);
    eax = SX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0025958Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025958Cu); } /* indirect call */
    }

loc_0025958F: ;
    goto loc_002595F5;

loc_00259591: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025959Au); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025959A: ;
    ecx = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002595A7u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_002595A7: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002595B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002595AFu); } /* indirect call */
    }

loc_002595B2: ;
    edx = MEM32(ebx);
    eax = SX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002595C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002595BFu); } /* indirect call */
    }

loc_002595C2: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x002595CDu); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_002595CD: ;
    ecx = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002595DAu); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_002595DA: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002595E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002595E2u); } /* indirect call */
    }

loc_002595E5: ;
    edx = MEM32(ebx);
    eax = SX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002595F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002595F2u); } /* indirect call */
    }

loc_002595F5: ;
    ebx = MEM32(esp + 0x80);
    eax = MEM32(esp + 0x78);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0025961C; /* jne: not equal / not zero */

loc_0025960D: ;
    ecx = MEM32(esp + 0x7C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259647; /* jne: not equal / not zero */

loc_00259616: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x11);
    goto loc_0025963E;

loc_0025961C: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00259647; /* jle: less or equal (signed <=) */

loc_0025961E: ;
    _fa = (uint32_t)(MEM32(esp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x7C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259631; /* jne: not equal / not zero */

loc_00259624: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00259631u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_00259631: ;
    eax = MEM32(esp + 0x7C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259647; /* jne: not equal / not zero */

loc_0025963A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);

loc_0025963E: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259647u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_00259647: ;
    SET_LO8(eax, MEM8(esp + 0x84));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025965F; /* je: equal / zero */

loc_00259652: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0025965Fu); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025965F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_00259730
 * Original: 0x00259730 - 0x0025998E (606 bytes, 203 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259730: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x6C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00259750: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259782; /* jge: greater or equal (signed >=) */

loc_00259755: ;
    edx = MEM32(esp + 0x90);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00259782; /* jle: less or equal (signed <=) */

loc_00259764: ;
    edx = MEM32(esp + 0x8C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + eax * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259772; /* jne: not equal / not zero */

loc_00259770: ;
    SET_LO8(ecx, 1);

loc_00259772: ;
    edx = MEM32(esp + 0x90);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259764; /* jl: less (signed <) */

loc_0025977E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002597D0; /* jne: not equal / not zero */

loc_00259782: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x84) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002597D0; /* je: equal / zero */

loc_0025978B: ;
    ecx = MEM32(esp + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025979Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259798u); } /* indirect call */
    }

loc_0025979B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_002597AF; /* jne: not equal / not zero */

loc_002597A8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002597ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002597AAu); } /* indirect call */
    }

loc_002597AD: ;
    goto loc_002597B4;

loc_002597AF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002597B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002597B1u); } /* indirect call */
    }

loc_002597B4: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002597D0; /* jle: less or equal (signed <=) */

loc_002597BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002597CB; /* jle: less or equal (signed <=) */

loc_002597C0: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x20), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002597D0; /* je: equal / zero */

loc_002597C6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002597C0; /* jl: less (signed <) */

loc_002597CB: ;
    MEM32(esp + edi * 4 + 0x20) = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002597D0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259750; /* jl: less (signed <) */

loc_002597DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00259968; /* jle: less or equal (signed <=) */

loc_002597EA: ;
    esi = MEM32(esp + 0x88);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259802; /* jge: greater or equal (signed >=) */

loc_002597F5: ;
    PUSH32(esp, 0x002597FAu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_002597FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00259968; /* jbe: below or equal (unsigned <=) */

loc_00259802: ;
    eax = MEM32(esp + 0x14);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x8C) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00259828; /* jle: less or equal (signed <=) */

loc_00259818: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00259828; /* jle: less or equal (signed <=) */

loc_0025981D: ;
    MEM32(esp + 0x8C) = 2;

loc_00259828: ;
    eax = MEM32(esp + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x74) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00259954; /* jle: less or equal (signed <=) */

loc_00259847: ;
    ecx = edi + -1;
    MEM32(esp + 0x90) = ecx;
    goto loc_00259857;

loc_00259853: ;
    edi = MEM32(esp + 0x10);

loc_00259857: ;
    PUSH32(esp, 0x0025985Cu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0025985C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ecx = MEM32(esp + 0x80);
    edi = edx;
    ebx = MEM32(esp + edi * 4 + 0x20);
    edx = MEM32(esp + 0x74);
    eax = esp + edi * 4 + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    MEM32(esp + edx * 4 + 0x24) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00259886u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259883u); } /* indirect call */
    }

loc_00259886: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    esi = MEM32(esp + 0x7C);
    edx = MEM32(esi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_002598D3; /* jne: not equal / not zero */

loc_00259897: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0025989Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259897u); } /* indirect call */
    }

loc_0025989A: ;
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x94) = eax;
    PUSH32(esp, 0x002598AEu); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_002598AE: ;
    ecx = MEM32(esp + 0x78);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002598BDu); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_002598BD: ;
    ecx = MEM32(esp + 0x88);
    eax = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002598D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002598CEu); } /* indirect call */
    }

loc_002598D1: ;
    goto loc_0025990D;

loc_002598D3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002598D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002598D3u); } /* indirect call */
    }

loc_002598D6: ;
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x94) = eax;
    PUSH32(esp, 0x002598EAu); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_002598EA: ;
    ecx = MEM32(esp + 0x78);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002598F9u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_002598F9: ;
    ecx = MEM32(esp + 0x88);
    eax = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025990Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025990Au); } /* indirect call */
    }

loc_0025990D: ;
    ecx = MEM32(esp + 0x90);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259924; /* jge: greater or equal (signed >=) */

loc_00259918: ;
    esi = esp + edi * 4 + 0x24;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + 0x14);
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */

loc_00259924: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x90);
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x8C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x90) = esi;
    MEM32(esp + 0x74) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00259853; /* jl: less (signed <) */

loc_00259954: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_00259975;

loc_00259968: ;
    edx = MEM32(esp + 0x84);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);

loc_00259975: ;
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00259982u); RECOMP_ABI_CALL(0x0002C477u, sub_0002C477); /* call 0x0002C477 */

loc_00259982: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00259A30
 * Original: 0x00259A30 - 0x00259ADC (172 bytes, 72 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259A30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    edi = eax;

loc_00259A52: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00259A62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259A5Fu); } /* indirect call */
    }

loc_00259A62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259A85; /* jne: not equal / not zero */

loc_00259A67: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00259A72u); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_00259A72: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259A85; /* jne: not equal / not zero */

loc_00259A78: ;
    eax = MEM32(esp + 0x10);
    MEM32(esp + eax * 4 + 0x14) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;

loc_00259A85: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259A52; /* jl: less (signed <) */

loc_00259A8B: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 1 (32-bit) */
    esi = MEM32(esp + 0x14);
    if (CMP_LE(_fas, _fbs)) goto loc_00259AA2; /* jle: less or equal (signed <=) */

loc_00259A96: ;
    PUSH32(esp, 0x00259A9Bu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00259A9B: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esp + eax * 4 + 0x14);

loc_00259AA2: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 4 (32-bit) */
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00259ABA; /* jne: not equal / not zero */

loc_00259AAB: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00259AB4u); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_00259AB4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    goto loc_00259AC7;

loc_00259ABA: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00259AC3u); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_00259AC3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 4);

loc_00259AC7: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00259AD0u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_00259AD0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00259B10
 * Original: 0x00259B10 - 0x00259C35 (293 bytes, 119 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259B10: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259B30u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259B30: ;
    edi = MEM32(esp + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00259B46; /* je: equal / zero */

loc_00259B3A: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259B44u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259B44: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00259B46: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259B5F; /* jge: greater or equal (signed >=) */

loc_00259B50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_00259B5F: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259B6Bu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259B6B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00259B7D; /* je: equal / zero */

loc_00259B71: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259B7Bu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259B7B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00259B7D: ;
    ecx = MEM32(esp + 0x44);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259B99; /* jge: greater or equal (signed >=) */

loc_00259B87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_00259B99: ;
    PUSH32(esp, 0x18);
    ecx = esp + 0x14;
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00259BA7u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00259BA7: ;
    esi = MEM32(esp + 0x3C);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x12);
    PUSH32(esp, ebp);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00259BBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259BB7u); } /* indirect call */
    }

loc_00259BBA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00259BCD; /* jle: less or equal (signed <=) */

loc_00259BC0: ;
    MEM32(esp + 0x10) = 2;
    edi = 1;

loc_00259BCD: ;
    eax = MEM32(esi);
    PUSH32(esp, 0xF);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00259BD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259BD4u); } /* indirect call */
    }

loc_00259BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x38) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00259BE8; /* jle: less or equal (signed <=) */

loc_00259BDF: ;
    MEM32(esp + edi * 4 + 0x10) = 3;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00259BE8: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00259BF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259BF6u); } /* indirect call */
    }

loc_00259BF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00259C06; /* jle: less or equal (signed <=) */

loc_00259BFD: ;
    MEM32(esp + edi * 4 + 0x10) = 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00259C06: ;
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00259C1F; /* jle: less or equal (signed <=) */

loc_00259C16: ;
    MEM32(esp + edi * 4 + 0x10) = 5;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00259C1F: ;
    PUSH32(esp, 0x00259C24u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00259C24: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = MEM32(esp + edx * 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00259C80
 * Original: 0x00259C80 - 0x00259EC4 (580 bytes, 237 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259C80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = 0x16;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x34);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_A(_fa, _fb)) goto loc_00259E49; /* ja: above (unsigned >) */

loc_00259CB0: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x259EC4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00259CB7u) goto loc_00259CB7;
    if (_jt == 0x00259CF7u) goto loc_00259CF7;
    if (_jt == 0x00259D37u) goto loc_00259D37;
    if (_jt == 0x00259D9Bu) goto loc_00259D9B;
    if (_jt == 0x00259DFCu) goto loc_00259DFC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00259CB7: ;
    edi = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00259CC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259CC5u); } /* indirect call */
    }

loc_00259CC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259EBA; /* je: equal / zero */

loc_00259CD1: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00259CE0u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_00259CE0: ;
    ecx = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259CEDu); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_00259CED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_00259CF7: ;
    edi = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00259D08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259D05u); } /* indirect call */
    }

loc_00259D08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259EBA; /* je: equal / zero */

loc_00259D11: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00259D20u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_00259D20: ;
    ecx = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259D2Du); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_00259D2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_00259D37: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0x18) = 0x15;
    PUSH32(esp, 0x00259D49u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259D49: ;
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259D58u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259D58: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00259D6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259D68u); } /* indirect call */
    }

loc_00259D6B: ;
    edx = MEM32(esp + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00259D79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259D76u); } /* indirect call */
    }

loc_00259D79: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00259D88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259D85u); } /* indirect call */
    }

loc_00259D88: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00259D96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259D93u); } /* indirect call */
    }

loc_00259D96: ;
    goto loc_00259E49;

loc_00259D9B: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0x18) = 0x10;
    PUSH32(esp, 0x00259DADu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259DAD: ;
    ecx = SX16(LO16(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259DBCu); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259DBC: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00259DCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259DCCu); } /* indirect call */
    }

loc_00259DCF: ;
    edx = MEM32(esp + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00259DDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259DDAu); } /* indirect call */
    }

loc_00259DDD: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00259DECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259DE9u); } /* indirect call */
    }

loc_00259DEC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00259DFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259DF7u); } /* indirect call */
    }

loc_00259DFA: ;
    goto loc_00259E49;

loc_00259DFC: ;
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x1C) = 6;
    MEM32(esp + 0x20) = 7;
    PUSH32(esp, 0x00259E1Bu); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_00259E1B: ;
    ecx = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00259E28u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_00259E28: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 9);
    PUSH32(esp, ebx);
    ecx = ebp;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00259E3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259E38u); } /* indirect call */
    }

loc_00259E3B: ;
    edx = MEM32(esp + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00259E49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259E46u); } /* indirect call */
    }

loc_00259E49: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259E53u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259E53: ;
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259E62u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259E62: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00259E6Cu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259E6C: ;
    ecx = SX16(LO16(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00259E7Bu); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259E7B: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259EBA; /* je: equal / zero */

loc_00259E84: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259E91u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259E91: ;
    ecx = MEM32(esp + 0x10);
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259EA3u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259EA3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00259EACu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259EAC: ;
    edx = SX16(LO16(eax));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00259EBAu); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259EBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00259F70
 * Original: 0x00259F70 - 0x0025A02D (189 bytes, 77 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259F70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00259F79u); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_00259F79: ;
    edi = eax;
    ecx = edi;
    MEM32(esp + 4) = edi;
    PUSH32(esp, 0x00259F86u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_00259F86: ;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025A026; /* jle: less or equal (signed <=) */

loc_00259F96: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 0x24) = eax;
    goto loc_00259FB0;

loc_00259FA7: ;
    edi = MEM32(esp + 0x10);
    goto loc_00259FB0;

    /* nop */

loc_00259FB0: ;
    PUSH32(esp, 0x00259FB5u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00259FB5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x14)); }
    ecx = edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00259FC3u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_00259FC3: ;
    ebp = MEM32(esp + 0x20);
    edi = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259FD2u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_00259FD2: ;
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00259FE0u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_00259FE0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A01D; /* jne: not equal / not zero */

loc_00259FE5: ;
    edx = MEM32(ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    ebp = ecx;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00259FF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259FF5u); } /* indirect call */
    }

loc_00259FF8: ;
    edx = MEM32(ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x15);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0025A004u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A001u); } /* indirect call */
    }

loc_0025A004: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0025A00Eu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_0025A00E: ;
    eax = SX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0025A01Du); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_0025A01D: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00259FA7; /* jne: not equal / not zero */

loc_0025A023: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0025A026: ;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025A060
 * Original: 0x0025A060 - 0x0025A401 (929 bytes, 333 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025A060: ;
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xBC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025A06Fu); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_0025A06F: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x10) = edi;
    goto loc_0025A080;

    /* nop */

loc_0025A080: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0025A090;

    /* nop */

loc_0025A090: ;
    ecx = MEM32(esp + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025A0A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A09Du); } /* indirect call */
    }

loc_0025A0A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A0B7; /* jne: not equal / not zero */

loc_0025A0A5: ;
    eax = MEM32(esp + 0x1C);
    ecx = eax + edi * 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + ecx * 4 + 0x2C) = esi;
    MEM32(esp + 0x1C) = eax;
    goto loc_0025A0C2;

loc_0025A0B7: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + edx * 4 + 0x3C) = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025A0C2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A090; /* jl: less (signed <) */

loc_0025A0C8: ;
    ecx = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0025A080; /* jl: less (signed <) */

loc_0025A0D9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0025A0E0;

    /* nop */

loc_0025A0E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = eax;

loc_0025A0E6: ;
    ebx = MEM32(esp + 0xD0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025A11E; /* jle: less or equal (signed <=) */

loc_0025A0F4: ;
    eax = eax + edi * 2;
    ecx = MEM32(esp + eax * 4 + 0x2C);
    MEM32(esp + 0x24) = ecx;
    /* nop */

loc_0025A100: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0025A108u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025A108: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0025A115u); RECOMP_ABI_CALL(0x0002EDF8u, sub_0002EDF8); /* call 0x0002EDF8 */

loc_0025A115: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A100; /* jl: less (signed <) */

loc_0025A11A: ;
    eax = MEM32(esp + 0x1C);

loc_0025A11E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0025A0E6; /* jl: less (signed <) */

loc_0025A128: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0025A130: ;
    eax = MEM32(esp + 0xD0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025A175; /* jle: less or equal (signed <=) */

loc_0025A13E: ;
    edi = edi;

loc_0025A140: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0025A148u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025A148: ;
    ecx = MEM32(esp + 0xD4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ebp = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025A15Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A157u); } /* indirect call */
    }

loc_0025A15A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0025A164u); RECOMP_ABI_CALL(0x0001AF47u, sub_0001AF47); /* call 0x0001AF47 */

loc_0025A164: ;
    eax = MEM32(esp + 0xD0);
    ebp = MEM32(esp + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A140; /* jl: less (signed <) */

loc_0025A175: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A130; /* jl: less (signed <) */

loc_0025A17B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A0E0; /* jl: less (signed <) */

loc_0025A185: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x0025A18Eu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025A18E: ;
    ecx = MEM32(esp + 0xD0);
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0025A1A1u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025A1A1: ;
    edi = esp + 0x2C;
    edx = esp + 0x3C;
    MEM32(esp + 0x20) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x24) = edx;
    goto loc_0025A1C0;

loc_0025A1B9: ;
    edi = MEM32(esp + 0x1C);
    /* nop */

loc_0025A1C0: ;
    eax = MEM32(edi);
    ebx = MEM32(esp + 0xD8);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0025A1E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A1DDu); } /* indirect call */
    }

loc_0025A1E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A1FB; /* je: equal / zero */

loc_0025A1E4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025A1F7u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025A1F7: ;
    PUSH32(esp, 0);
    goto loc_0025A218;

loc_0025A1FB: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = 1;
    PUSH32(esp, 0x0025A216u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025A216: ;
    PUSH32(esp, 1);

loc_0025A218: ;
    edi = MEM32(edi + 4);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025A228u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025A228: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0025A237u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A234u); } /* indirect call */
    }

loc_0025A237: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A297; /* jne: not equal / not zero */

loc_0025A23B: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0025A246u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A243u); } /* indirect call */
    }

loc_0025A246: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A297; /* jne: not equal / not zero */

loc_0025A24A: ;
    ecx = ebp;
    PUSH32(esp, 0x0025A251u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025A251: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0025A346; /* jle: less or equal (signed <=) */

loc_0025A25F: ;
    eax = MEM32(esp + 0x14);
    ecx = eax + esi * 2;
    edx = MEM32(esp + ecx * 4 + 0x2C);
    MEM32(esp + 0x18) = edx;
    edi = edi;

loc_0025A270: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0025A278u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025A278: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0025A289u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025A289: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A270; /* jl: less (signed <) */

loc_0025A292: ;
    goto loc_0025A346;

loc_0025A297: ;
    ecx = ebp;
    PUSH32(esp, 0x0025A29Eu); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025A29E: ;
    edx = MEM32(esp + 0x14);
    edi = eax;
    ecx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0025A2C1; /* jne: not equal / not zero */

loc_0025A2B7: ;
    eax = ecx;
    MEM32(esp + 0x10) = 0;

loc_0025A2C1: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = eax + esi * 2;
    eax = MEM32(esp + edx * 4 + 0x30);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0025A2DAu); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025A2DA: ;
    PUSH32(esp, 0x0025A2DFu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0025A2DF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A30E; /* jl: less (signed <) */

loc_0025A2EB: ;
    goto loc_0025A2F0;

    /* nop */

loc_0025A2F0: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0025A2F8u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025A2F8: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0025A309u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025A309: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025A2F0; /* jle: less or equal (signed <=) */

loc_0025A30E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    edi = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_0025A33F; /* jge: greater or equal (signed >=) */

loc_0025A316: ;
    edx = MEM32(esp + 0x10);
    eax = edx + esi * 2;
    ebx = MEM32(esp + eax * 4 + 0x2C);

loc_0025A321: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0025A329u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025A329: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0025A336u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025A336: ;
    eax = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A321; /* jl: less (signed <) */

loc_0025A33F: ;
    ebx = MEM32(esp + 0xD8);

loc_0025A346: ;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = 0x12;

loc_0025A356: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(edx);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0025A367u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A364u); } /* indirect call */
    }

loc_0025A367: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x15);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025A375u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025A375: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0025A356; /* jne: not equal / not zero */

loc_0025A38B: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = 2;
    goto loc_0025A3A0;

    /* nop */

loc_0025A3A0: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0025A3B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A3AEu); } /* indirect call */
    }

loc_0025A3B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A3C4; /* je: equal / zero */

loc_0025A3B5: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025A3C4u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025A3C4: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0025A3A0; /* jne: not equal / not zero */

loc_0025A3DA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0025A1B9; /* jl: less (signed <) */

loc_0025A3F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xBC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025A4F0
 * Original: 0x0025A4F0 - 0x0025A813 (803 bytes, 270 insns)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025A4F0: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x24;
    edi = esp + 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025A510: ;
    eax = MEM32(esp + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    edi = MEM32(esp + 0xCC);
    if (CMP_EQ(_fa, _fb)) goto loc_0025A529; /* je: equal / zero */

loc_0025A522: ;
    edi = MEM32(esp + 0xD4);

loc_0025A529: ;
    ebp = MEM32(esp + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) ebp = MEM32(esp + 0xD8); /* cmovne */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x10) = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    goto loc_0025A550;

    /* nop */

loc_0025A550: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025A570; /* jge: greater or equal (signed >=) */

loc_0025A555: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025A570; /* jle: less or equal (signed <=) */

loc_0025A55D: ;
    /* nop */

loc_0025A560: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + eax * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A567; /* jne: not equal / not zero */

loc_0025A565: ;
    SET_LO8(ecx, 1);

loc_0025A567: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A560; /* jl: less (signed <) */

loc_0025A56C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A5DF; /* jne: not equal / not zero */

loc_0025A570: ;
    ecx = MEM32(esp + 0xB4);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0025A584u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A581u); } /* indirect call */
    }

loc_0025A584: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A5DF; /* je: equal / zero */

loc_0025A589: ;
    eax = MEM32(esp + 0xB0);
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A59F; /* jne: not equal / not zero */

loc_0025A596: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0xBC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A5DF; /* je: equal / zero */

loc_0025A59F: ;
    PUSH32(esp, 0x0025A5A4u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0025A5A4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x12;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebx + edx;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x1C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A5D8; /* je: equal / zero */

loc_0025A5B9: ;
    /* nop */

loc_0025A5C0: ;
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x12;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = ebx + edx;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x1C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A5C0; /* jne: not equal / not zero */

loc_0025A5D4: ;
    edi = MEM32(esp + 0x10);

loc_0025A5D8: ;
    ecx = ebx + edx;
    MEM32(esp + ecx * 4 + 0x1C) = esi;

loc_0025A5DF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A550; /* jl: less (signed <) */

loc_0025A5E9: ;
    ecx = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x12;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x24 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0025A510; /* jl: less (signed <) */

loc_0025A5FE: ;
    esi = MEM32(esp + 0xBC);
    ecx = MEM32(esp + 0xB4);
    ebx = MEM32(esp + 0xC4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0025A61Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A619u); } /* indirect call */
    }

loc_0025A61C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    ebp = MEM32(esp + 0xB8);
    if (CMP_EQ(_fa, _fb)) goto loc_0025A647; /* je: equal / zero */

loc_0025A628: ;
    edi = MEM32(esp + 0xB0);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0025A63Au); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025A63A: ;
    ecx = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025A647u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025A647: ;
    _fa = (uint32_t)(MEM32(esp + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC8), 1 (32-bit) */
    edi = 4;
    if (CMP_NE(_fa, _fb)) goto loc_0025A65B; /* jne: not equal / not zero */

loc_0025A656: ;
    edi = 3;

loc_0025A65B: ;
    esi = MEM32(esp + 0xC0);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A6A3; /* je: equal / zero */

loc_0025A669: ;
    ecx = MEM32(esp + 0xB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025A679u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A676u); } /* indirect call */
    }

loc_0025A679: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    ebx = MEM32(esp + 0xB0);
    if (CMP_EQ(_fa, _fb)) goto loc_0025A69E; /* je: equal / zero */

loc_0025A685: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0025A690u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025A690: ;
    ecx = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025A69Du); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025A69D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0025A69E: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0025A6AA;

loc_0025A6A3: ;
    ebx = MEM32(esp + 0xB0);

loc_0025A6AA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025A756; /* jle: less or equal (signed <=) */

loc_0025A6B2: ;
    ecx = ebx + ebx * 8;
    esi = ebx + ebx * 8;
    eax = esp + ecx * 8 + 0x20;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = edi;
    goto loc_0025A6D3;

loc_0025A6CC: ;
    esi = MEM32(esp + 0x14);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0025A6D3: ;
    eax = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0025A6E0: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A71F; /* jne: not equal / not zero */

loc_0025A6E5: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A70A; /* jne: not equal / not zero */

loc_0025A6E9: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A70D; /* jne: not equal / not zero */

loc_0025A6EE: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A712; /* jne: not equal / not zero */

loc_0025A6F3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A717; /* jne: not equal / not zero */

loc_0025A6F8: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A71C; /* jne: not equal / not zero */

loc_0025A6FD: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A6E0; /* jl: less (signed <) */

loc_0025A708: ;
    goto loc_0025A71F;

loc_0025A70A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0025A71F;

loc_0025A70D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025A71F;

loc_0025A712: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025A71F;

loc_0025A717: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025A71F;

loc_0025A71C: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025A71F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + esi * 4 + 0x1C);
    esi = esp + esi * 4 + 0x1C;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0025A734u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025A734: ;
    ecx = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025A741u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025A741: ;
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0025A6CC; /* jne: not equal / not zero */

loc_0025A756: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x10) = 5;
    ebx = ecx;
    edx = ebx + ebx * 8;
    eax = esp + edx * 8 + 0x20;
    ebp = ebx + ebx * 8;
    MEM32(esp + 0x14) = eax;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_0025A777: ;
    eax = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0025A780: ;
    esi = MEM32(eax + -4);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A7C4; /* jne: not equal / not zero */

loc_0025A78A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A7AF; /* jne: not equal / not zero */

loc_0025A78E: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A7B2; /* jne: not equal / not zero */

loc_0025A793: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A7B7; /* jne: not equal / not zero */

loc_0025A798: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A7BC; /* jne: not equal / not zero */

loc_0025A79D: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A7C1; /* jne: not equal / not zero */

loc_0025A7A2: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A780; /* jl: less (signed <) */

loc_0025A7AD: ;
    goto loc_0025A7C4;

loc_0025A7AF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0025A7C4;

loc_0025A7B2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025A7C4;

loc_0025A7B7: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025A7C4;

loc_0025A7BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025A7C4;

loc_0025A7C1: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025A7C4: ;
    esi = ecx + ebp;
    edi = MEM32(esp + esi * 4 + 0x1C);
    ecx = MEM32(esp + 0xB8);
    esi = esp + esi * 4 + 0x1C;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025A7DFu); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025A7DF: ;
    ecx = MEM32(esp + 0xB8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025A7F1u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025A7F1: ;
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0025A777; /* jne: not equal / not zero */

loc_0025A806: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_0025A8E0
 * Original: 0x0025A8E0 - 0x0025AAFB (539 bytes, 194 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025A8E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0025A8FFu); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025A8FF: ;
    MEM32(esp + 0x28) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025A905: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025A912u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A90Fu); } /* indirect call */
    }

loc_0025A912: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AAB6; /* je: equal / zero */

loc_0025A91B: ;
    ebp = MEM32(esp + 0x2C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025A92Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A928u); } /* indirect call */
    }

loc_0025A92B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025A9FB; /* je: equal / zero */

loc_0025A939: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), ecx (32-bit) */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0025A9A4; /* jle: less or equal (signed <=) */

loc_0025A94F: ;
    /* nop */

loc_0025A950: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A95Eu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025A95E: ;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025A962: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0025A96Du); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025A96D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A97A; /* je: equal / zero */

loc_0025A972: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = ecx;

loc_0025A97A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0025A984u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025A984: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AACA; /* jne: not equal / not zero */

loc_0025A98D: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x17 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A962; /* jl: less (signed <) */

loc_0025A993: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025A9A0; /* jle: less or equal (signed <=) */

loc_0025A99B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;

loc_0025A9A0: ;
    ebp = MEM32(esp + 0x2C);

loc_0025A9A4: ;
    PUSH32(esp, 0x0025A9A9u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0025A9A9: ;
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) edx = eax; /* cmovne */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025A9CDu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025A9CD: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x12);
    ebx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0025A9DFu); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025A9DF: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0025A9EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025A9ECu); } /* indirect call */
    }

loc_0025A9EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0025A9FBu); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025A9FB: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025AA0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025AA08u); } /* indirect call */
    }

loc_0025AA0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025AAB6; /* jle: less or equal (signed <=) */

loc_0025AA13: ;
    ecx = MEM32(esp + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0025AA7C; /* jle: less or equal (signed <=) */

loc_0025AA2D: ;
    /* nop */

loc_0025AA30: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025AA3Eu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025AA3E: ;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025AA42: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0025AA4Du); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025AA4D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AA5A; /* je: equal / zero */

loc_0025AA52: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;

loc_0025AA5A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0025AA64u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025AA64: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AAE4; /* jne: not equal / not zero */

loc_0025AA69: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x17 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025AA42; /* jl: less (signed <) */

loc_0025AA6F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025AA7C; /* jle: less or equal (signed <=) */

loc_0025AA77: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;

loc_0025AA7C: ;
    PUSH32(esp, 0x0025AA81u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0025AA81: ;
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) edx = eax; /* cmovne */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025AAA5u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025AAA5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0025AAB2u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025AAB2: ;
    ebx = MEM32(esp + 0x14);

loc_0025AAB6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A905; /* jl: less (signed <) */

loc_0025AAC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0025AACA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0025A950; /* jl: less (signed <) */

loc_0025AADF: ;
    goto loc_0025A9A0;

loc_0025AAE4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0025AA30; /* jl: less (signed <) */

loc_0025AAF9: ;
    goto loc_0025AA7C;

}

/**
 * sub_0025AB90
 * Original: 0x0025AB90 - 0x0025AC82 (242 bytes, 92 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025AB90: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025AB9Cu); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_0025AB9C: ;
    esi = eax;
    ecx = esi;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0025ABA9u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025ABA9: ;
    ebp = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0025AC78; /* jle: less or equal (signed <=) */

loc_0025ABBB: ;
    goto loc_0025ABC0;

    /* nop */

loc_0025ABC0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025ABC8u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025ABC8: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0025ABDBu); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_0025ABDB: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025ABE6; /* jne: not equal / not zero */

loc_0025ABE1: ;
    MEM32(esp + ebx * 4 + 0x1C) = edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025ABE6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025ABC0; /* jl: less (signed <) */

loc_0025ABEB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0025AC78; /* jle: less or equal (signed <=) */

loc_0025ABF7: ;
    ebp = MEM32(esp + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0025AC78; /* jle: less or equal (signed <=) */

loc_0025AC05: ;
    edi = MEM32(esp + 0x44);
    goto loc_0025AC10;

loc_0025AC0B: ;
    esi = MEM32(esp + 0x18);
    /* nop */

loc_0025AC10: ;
    PUSH32(esp, 0x0025AC15u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0025AC15: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x10)); }
    ecx = esi;
    eax = MEM32(esp + edx * 4 + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025AC27u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025AC27: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    esi = eax;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025AC3Fu); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_0025AC3F: ;
    edx = ebx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    ecx = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0025AC4C; /* jle: less or equal (signed <=) */

loc_0025AC48: ;
    ecx = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0025AC4C: ;
    edx = SX16(LO16(ecx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025AC6Au); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025AC6A: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0025AC0B; /* jl: less (signed <) */

loc_0025AC78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0025ACC0
 * Original: 0x0025ACC0 - 0x0025AD57 (151 bytes, 63 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ACC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025ACC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025ACCAu); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_0025ACCA: ;
    ebp = eax;
    ecx = ebp;
    PUSH32(esp, 0x0025ACD3u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025ACD3: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0025AD0A; /* jle: less or equal (signed <=) */

loc_0025ACE5: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0025ACEDu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025ACED: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0025ACF8u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025ACF8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AD06; /* jne: not equal / not zero */

loc_0025ACFE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025ACE5; /* jl: less (signed <) */

loc_0025AD04: ;
    goto loc_0025AD0A;

loc_0025AD06: ;
    MEM32(esp + 0x10) = esi;

loc_0025AD0A: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025AD4F; /* jle: less or equal (signed <=) */

loc_0025AD12: ;
    MEM32(esp + 0x1C) = eax;

loc_0025AD16: ;
    PUSH32(esp, 0x0025AD1Bu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0025AD1B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x10)); }
    ecx = ebp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025AD29u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025AD29: ;
    esi = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0025AD39u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025AD39: ;
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0025AD49u); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025AD49: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025AD16; /* jne: not equal / not zero */

loc_0025AD4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025AD80
 * Original: 0x0025AD80 - 0x0025AEDA (346 bytes, 126 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025AD80: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025AD89u); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_0025AD89: ;
    esi = eax;
    ecx = esi;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x0025AD96u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025AD96: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = ecx;
    ecx = esi;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0025ADBEu); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025ADBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025AED3; /* jle: less or equal (signed <=) */

loc_0025ADC6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, ebp);

loc_0025ADD1: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025ADDDu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025ADDD: ;
    ebp = eax;
    SET_LO8(eax, MEM8(esp + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025ADFC; /* je: equal / zero */

loc_0025ADE7: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0025ADF2u); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_0025ADF2: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM8(esp + 0x38) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0025AE01; /* je: equal / zero */

loc_0025ADFC: ;
    MEM8(esp + 0x38) = 1;

loc_0025AE01: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0025AE0Eu); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_0025AE0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AE2B; /* je: equal / zero */

loc_0025AE12: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AE2B; /* je: equal / zero */

loc_0025AE1A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + eax * 4 + 0x1C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_0025AE2B: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AE43; /* jne: not equal / not zero */

loc_0025AE33: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0025AE3Eu); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025AE3E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AE5D; /* jne: not equal / not zero */

loc_0025AE43: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0025AE53u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025AE53: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025ADD1; /* jl: less (signed <) */

loc_0025AE5D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AED0; /* je: equal / zero */

loc_0025AE65: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025AED0; /* jle: less or equal (signed <=) */

loc_0025AE6D: ;
    ebp = MEM32(esp + 0x3C);
    MEM32(esp + 0x38) = eax;
    goto loc_0025AE80;

loc_0025AE77: ;
    esi = MEM32(esp + 0x18);
    goto loc_0025AE80;

    /* nop */

loc_0025AE80: ;
    PUSH32(esp, 0x0025AE85u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0025AE85: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x14)); }
    ecx = esi;
    edx = MEM32(esp + edx * 4 + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025AE97u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025AE97: ;
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0025AEB9; /* je: equal / zero */

loc_0025AEA6: ;
    PUSH32(esp, 0x0025AEABu); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_0025AEAB: ;
    ecx = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025AEB7u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025AEB7: ;
    goto loc_0025AECA;

loc_0025AEB9: ;
    PUSH32(esp, 0x0025AEBEu); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025AEBE: ;
    ecx = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025AECAu); RECOMP_ABI_CALL(0x00027E7Cu, sub_00027E7C); /* call 0x00027E7C */

loc_0025AECA: ;
    MEM32(esp + 0x38) = MEM32(esp + 0x38) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025AE77; /* jne: not equal / not zero */

loc_0025AED0: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0025AED3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0025AF30
 * Original: 0x0025AF30 - 0x0025B027 (247 bytes, 94 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025AF30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025AF3Au); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_0025AF3A: ;
    esi = eax;
    ecx = esi;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0025AF47u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025AF47: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0025B01F; /* jle: less or equal (signed <=) */

loc_0025AF5F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025AF6Du); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025AF6D: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(esp + 0x24) = ebp;
    goto loc_0025AF95;

loc_0025AF77: ;
    esi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025AF87u); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025AF87: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(esp + 0x24) = ebp;
    goto loc_0025AF95;

loc_0025AF91: ;
    ebx = MEM32(esp + 0x10);

loc_0025AF95: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025AF9Eu); RECOMP_ABI_CALL(0x00025EB5u, sub_00025EB5); /* call 0x00025EB5 */

loc_0025AF9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AFBA; /* je: equal / zero */

loc_0025AFA2: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AFFA; /* je: equal / zero */

loc_0025AFAA: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025AFB8u); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_0025AFB8: ;
    goto loc_0025AFC8;

loc_0025AFBA: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025AFC8u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025AFC8: ;
    ebp = SX16(LO16(eax));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025AFFA; /* jle: less or equal (signed <=) */

loc_0025AFCF: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0025AFFA; /* jg: greater (signed >) */

loc_0025AFD9: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025AFE6u); RECOMP_ABI_CALL(0x00033E5Cu, sub_00033E5C); /* call 0x00033E5C */

loc_0025AFE6: ;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025AFF6u); RECOMP_ABI_CALL(0x00033EF2u, sub_00033EF2); /* call 0x00033EF2 */

loc_0025AFF6: ;
    MEM32(esp + 0x10) = ebx;

loc_0025AFFA: ;
    ebp = MEM32(esp + 0x24);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x14 (32-bit) */
    MEM32(esp + 0x24) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0025AF91; /* jl: less (signed <) */

loc_0025B008: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0025AF77; /* jl: less (signed <) */

loc_0025B01D: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0025B01F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0025B070
 * Original: 0x0025B070 - 0x0025B137 (199 bytes, 75 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B070: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025B07Au); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_0025B07A: ;
    esi = eax;
    ecx = esi;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0025B087u); RECOMP_ABI_CALL(0x00012167u, sub_00012167); /* call 0x00012167 */

loc_0025B087: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0025B12F; /* jle: less or equal (signed <=) */

loc_0025B09B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_0025B0A3;

loc_0025B09F: ;
    esi = MEM32(esp + 0x18);

loc_0025B0A3: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025B0ABu); RECOMP_ABI_CALL(0x0002BBA8u, sub_0002BBA8); /* call 0x0002BBA8 */

loc_0025B0AB: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;

loc_0025B0B3: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025B0C5u); RECOMP_ABI_CALL(0x00024943u, sub_00024943); /* call 0x00024943 */

loc_0025B0C5: ;
    esi = SX16(LO16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B104; /* je: equal / zero */

loc_0025B0CC: ;
    eax = MEM32(esp + 0x38);
    ebx = esi + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0025B104; /* jg: greater (signed >) */

loc_0025B0D7: ;
    ebp = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025B0EDu); RECOMP_ABI_CALL(0x00032A52u, sub_00032A52); /* call 0x00032A52 */

loc_0025B0ED: ;
    edx = MEM32(esp + 0x28);
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025B102u); RECOMP_ABI_CALL(0x000144EEu, sub_000144EE); /* call 0x000144EE */

loc_0025B102: ;
    ebp = ebx;

loc_0025B104: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x38) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B118; /* je: equal / zero */

loc_0025B10A: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0025B0B3; /* jl: less (signed <) */

loc_0025B118: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0025B09F; /* jl: less (signed <) */

loc_0025B12D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0025B12F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0025B170
 * Original: 0x0025B170 - 0x0025B20E (158 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B170: ;
    edx = ecx;
    eax = MEM32(edx + 0x30D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0025B1E5; /* jne: not equal / not zero */

loc_0025B17F: ;
    eax = 0x24;

loc_0025B184: ;
    ecx = MEM32(edx + 0x30CC);
    esi = ecx + eax;
    edi = esi + -36;
    ecx = 9;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = MEM32(edx + 0x30CC);
    edi = ecx + eax;
    esi = edi + 0x24;
    ecx = 9;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = MEM32(edx + 0x30CC);
    esi = eax + ecx + 0x48;
    edi = eax + ecx + 0x24;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x900) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x900 (32-bit) */
    ecx = 9;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    if (CMP_L(_fas, _fbs)) goto loc_0025B184; /* jl: less (signed <) */

loc_0025B1C9: ;
    edi = MEM32(edx + 0x30CC);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x8DC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x8DC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 9;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0025B1E5: ;
    ecx = MEM32(edx + 0x30CC);
    esi = MEM32(esp + 0xC);
    eax = eax + eax * 8;
    edi = ecx + eax * 4;
    ecx = 9;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    eax = MEM32(edx + 0x30D0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x30D0) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025B240
 * Original: 0x0025B240 - 0x0025B294 (84 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B240: ;
    edx = MEM32(ecx + 0x30D0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B28A; /* jle: less or equal (signed <=) */

loc_0025B24F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0025B260;

    /* nop */

loc_0025B260: ;
    ebx = MEM32(ecx + 0x30CC);
    ebx = ZX8(MEM8(edx + ebx + 0x20));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B27A; /* jne: not equal / not zero */

loc_0025B26F: ;
    ebx = MEM32(ecx + 0x30D4);
    MEM16(ebx + esi * 2) = LO16(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025B27A: ;
    ebx = MEM32(ecx + 0x30D0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025B260; /* jl: less (signed <) */

loc_0025B288: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0025B28A: ;
    MEM32(ecx + 0x30D8) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025B2B0
 * Original: 0x0025B2B0 - 0x0025B3C0 (272 bytes, 93 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B2B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0025B3BD; /* ja: above (unsigned >) */

loc_0025B2BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x25B3C0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0025B2C8u) goto loc_0025B2C8;
    if (_jt == 0x0025B308u) goto loc_0025B308;
    if (_jt == 0x0025B319u) goto loc_0025B319;
    if (_jt == 0x0025B362u) goto loc_0025B362;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025B2C8: ;
    edx = MEM32(ecx + 0x30D0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B2F5; /* jle: less or equal (signed <=) */

loc_0025B2D4: ;
    goto loc_0025B2E0;

    /* nop */
    /* nop */

loc_0025B2E0: ;
    edx = MEM32(ecx + 0x30D4);
    MEM16(edx + eax * 2) = LO16(eax);
    edx = MEM32(ecx + 0x30D0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025B2E0; /* jl: less (signed <) */

loc_0025B2F5: ;
    eax = MEM32(ecx + 0x30D0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x30D8) = eax;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_0025B308: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025B312u); RECOMP_ABI_CALL(0x0002A5D2u, sub_0002A5D2); /* call 0x0002A5D2 */

loc_0025B312: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_0025B319: ;
    edx = MEM32(ecx + 0x30D0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B355; /* jle: less or equal (signed <=) */

loc_0025B327: ;
    edi = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0025B330: ;
    ebx = MEM32(ecx + 0x30CC);
    _fa = (uint32_t)(MEM32(ebx + edx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + edx + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B347; /* jne: not equal / not zero */

loc_0025B33C: ;
    ebx = MEM32(ecx + 0x30D4);
    MEM16(ebx + esi * 2) = LO16(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025B347: ;
    ebx = MEM32(ecx + 0x30D0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025B330; /* jl: less (signed <) */

loc_0025B355: ;
    POP32(esp, edi);
    MEM32(ecx + 0x30D8) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_0025B362: ;
    eax = MEM32(ecx + 0x30D0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B3B3; /* jle: less or equal (signed <=) */

loc_0025B370: ;
    ebx = MEM32(esp + 0x24);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0025B380;

    /* nop */
    /* nop */

loc_0025B380: ;
    eax = MEM32(ecx + 0x30CC);
    ebp = (uint32_t)(int32_t)SMEM16(eax + esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B39A; /* je: equal / zero */

loc_0025B392: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B3A5; /* jne: not equal / not zero */

loc_0025B39A: ;
    eax = MEM32(ecx + 0x30D4);
    MEM16(eax + edi * 2) = LO16(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025B3A5: ;
    eax = MEM32(ecx + 0x30D0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025B380; /* jl: less (signed <) */

loc_0025B3B3: ;
    MEM32(ecx + 0x30D8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0025B3BD: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0025B420
 * Original: 0x0025B420 - 0x0025B427 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B420(void)
{

loc_0025B420: ;
    eax = MEM32(ecx + 0x30D8);
    esp += 4; return; /* ret */

}

/**
 * sub_0025B430
 * Original: 0x0025B430 - 0x0025B44D (29 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B430(void)
{

loc_0025B430: ;
    eax = MEM32(ecx + 0x30D4);
    edx = MEM32(esp + 4);
    eax = ZX16(MEM16(eax + edx * 2));
    ecx = MEM32(ecx + 0x30CC);
    eax = eax + eax * 8;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025B460
 * Original: 0x0025B460 - 0x0025B4F6 (150 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B460: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B4F3; /* je: equal / zero */

loc_0025B46C: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edx;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B4F2; /* jle: less or equal (signed <=) */

loc_0025B486: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx + 0xD4;
    PUSH32(esp, ebp);

loc_0025B493: ;
    ebp = MEM32(edi);
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B4AC; /* je: equal / zero */

loc_0025B49A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1A0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025B493; /* jl: less (signed <) */

loc_0025B4A5: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0025B4AC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1A0);
    esi = MEM32(eax + ecx + 0xD8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esi + ecx * 4);
    MEM32(edx) = esi;
    esi = MEM32(eax + 0xDC);
    esi = MEM32(esi + ecx * 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 0xE0);
    esi = MEM32(esi + ecx * 4);
    MEM32(edx + 8) = esi;
    eax = MEM32(eax + 0xE4);
    ecx = MEM32(eax + ecx * 4);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0xC) = 0;
    POP32(esp, ebx);

loc_0025B4F2: ;
    POP32(esp, esi);

loc_0025B4F3: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025B520
 * Original: 0x0025B520 - 0x0025B562 (66 bytes, 24 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B520: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x80760C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025B53Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025B53F: ;
    edx = MEM32(esi + 4);
    edi = ZX16(MEM16(esp + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025B54Du); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_0025B54D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    eax = 0x40;
    if (CMP_G(_fas, _fbs)) goto loc_0025B55C; /* jg: greater (signed >) */

loc_0025B55A: ;
    eax = edi;

loc_0025B55C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025B580
 * Original: 0x0025B580 - 0x0025B586 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B580(void)
{

loc_0025B580: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0025B590
 * Original: 0x0025B590 - 0x0025B5B8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B590: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0025B5A3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B5A3; /* jne: not equal / not zero */

loc_0025B5AD: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025B5D0
 * Original: 0x0025B5D0 - 0x0025B5F8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B5D0: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0025B5E3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B5E3; /* jne: not equal / not zero */

loc_0025B5ED: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025B610
 * Original: 0x0025B610 - 0x0025B622 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B610(void)
{

loc_0025B610: ;
    PUSH32(esp, 0x0025B615u); RECOMP_ABI_CALL(0x00036238u, sub_00036238); /* call 0x00036238 */

loc_0025B615: ;
    PUSH32(esp, 0x0025B61Au); RECOMP_ABI_CALL(0x0003708Eu, sub_0003708E); /* call 0x0003708E */

loc_0025B61A: ;
    PUSH32(esp, 0x0025B61Fu); RECOMP_ABI_CALL(0x0001781Au, sub_0001781A); /* call 0x0001781A */

loc_0025B61F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0025B630
 * Original: 0x0025B630 - 0x0025B64E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B630: ;
    edx = MEM32(ecx + 0x1C0);
    eax = MEM32(ecx + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0025B644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B641u); } /* indirect call */
    }

loc_0025B644: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025B64Au); RECOMP_ABI_CALL(0x0001B75Du, sub_0001B75D); /* call 0x0001B75D */

loc_0025B64A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025B660
 * Original: 0x0025B660 - 0x0025B661 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B660(void)
{

loc_0025B660: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025B670
 * Original: 0x0025B670 - 0x0025B68F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B670: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x0025B67Bu); RECOMP_ABI_CALL(0x00020875u, sub_00020875); /* call 0x00020875 */

loc_0025B67B: ;
    ecx = esp;
    PUSH32(esp, 0x0025B683u); RECOMP_ABI_CALL(0x0002259Eu, sub_0002259E); /* call 0x0002259E */

loc_0025B683: ;
    ecx = esp;
    PUSH32(esp, 0x0025B68Bu); RECOMP_ABI_CALL(0x0001AEEDu, sub_0001AEED); /* call 0x0001AEED */

loc_0025B68B: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025B6A0
 * Original: 0x0025B6A0 - 0x0025B6B1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B6A0(void)
{

loc_0025B6A0: ;
    PUSH32(esp, 0x0025B6A5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0025B6A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x48);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0025B6B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B6ADu); } /* indirect call */
    }

loc_0025B6B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025B6C0
 * Original: 0x0025B6C0 - 0x0025B6D1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B6C0(void)
{

loc_0025B6C0: ;
    PUSH32(esp, 0x0025B6C5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0025B6C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4D);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0025B6D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B6CDu); } /* indirect call */
    }

loc_0025B6D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025B6E0
 * Original: 0x0025B6E0 - 0x0025B717 (55 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B6E0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = edx;
    esi = 0x7F9BC8;
    ecx = 0x13;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0025B6FD; /* jne: not equal / not zero */

loc_0025B6FB: ;
    SET_LO8(eax, 1);

loc_0025B6FD: ;
    edi = edx;
    esi = 0x7F9BB0;
    ecx = 0x13;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((_flags == 0)) goto loc_0025B714; /* jne: not equal / not zero */

loc_0025B712: ;
    SET_LO8(eax, 1);

loc_0025B714: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025B730
 * Original: 0x0025B730 - 0x0025B7B7 (135 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B730: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = edx;
    esi = 0x7F9B98;
    ecx = 0x13;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0025B74D; /* jne: not equal / not zero */

loc_0025B74B: ;
    SET_LO8(eax, 1);

loc_0025B74D: ;
    edi = edx;
    esi = 0x7F9B84;
    ecx = 0x11;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0025B761; /* jne: not equal / not zero */

loc_0025B75F: ;
    SET_LO8(eax, 1);

loc_0025B761: ;
    edi = edx;
    esi = 0x7F9B70;
    ecx = 0x11;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0025B775; /* jne: not equal / not zero */

loc_0025B773: ;
    SET_LO8(eax, 1);

loc_0025B775: ;
    edi = edx;
    esi = 0x7F9B58;
    ecx = 0x13;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0025B789; /* jne: not equal / not zero */

loc_0025B787: ;
    SET_LO8(eax, 1);

loc_0025B789: ;
    edi = edx;
    esi = 0x7F9B40;
    ecx = 0x12;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0025B79D; /* jne: not equal / not zero */

loc_0025B79B: ;
    SET_LO8(eax, 1);

loc_0025B79D: ;
    edi = edx;
    esi = 0x7F9B28;
    ecx = 0x13;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((_flags == 0)) goto loc_0025B7B4; /* jne: not equal / not zero */

loc_0025B7B2: ;
    SET_LO8(eax, 1);

loc_0025B7B4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025B7E0
 * Original: 0x0025B7E0 - 0x0025B7EC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B7E0: ;
    PUSH32(esp, 0x0025B7E5u); RECOMP_ABI_CALL(0x000240CEu, sub_000240CE); /* call 0x000240CE */

loc_0025B7E5: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002D16F(); return; /* tail jmp 0x0002D16F */

}

/**
 * sub_0025B7F0
 * Original: 0x0025B7F0 - 0x0025B8EF (255 bytes, 98 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B7F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025B7F9u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0025B7F9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x14);
    ebx = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0025B80Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B809u); } /* indirect call */
    }

loc_0025B80C: ;
    ebp = MEM32(esp + 0x18);
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025B814: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0025B81Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B81Cu); } /* indirect call */
    }

loc_0025B81F: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B82C; /* jle: less or equal (signed <=) */

loc_0025B827: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B839; /* je: equal / zero */

loc_0025B82B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0025B82C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025B814; /* jl: less (signed <) */

loc_0025B832: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0025B839: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebx = 0xF;
    MEM32(esp + 0x18) = 0xA;
    if (CMP_LE(_fas, _fbs)) goto loc_0025B858; /* jle: less or equal (signed <=) */

loc_0025B84B: ;
    ebx = 0x19;
    MEM32(esp + 0x18) = 0xF;

loc_0025B858: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0025B861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B85Eu); } /* indirect call */
    }

loc_0025B861: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0025B86Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B869u); } /* indirect call */
    }

loc_0025B86C: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B8AC; /* jle: less or equal (signed <=) */

loc_0025B885: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2F;
    PUSH32(esp, 0x0025B894u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0025B894: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0025B8A0; /* jns: not sign (positive) */

loc_0025B89B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025B8A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B8D7; /* jle: less or equal (signed <=) */

loc_0025B8A4: ;
    MEM32(ebx) = 0x2E;
    goto loc_0025B8D7;

loc_0025B8AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025B8E8; /* jge: greater or equal (signed >=) */

loc_0025B8B2: ;
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = 0x2D;
    PUSH32(esp, 0x0025B8C1u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0025B8C1: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0025B8CD; /* jns: not sign (positive) */

loc_0025B8C8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025B8CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B8D7; /* jle: less or equal (signed <=) */

loc_0025B8D1: ;
    MEM32(ebx) = 0x2B;

loc_0025B8D7: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025B8E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B8DFu); } /* indirect call */
    }

loc_0025B8E2: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_0025B8E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025B930
 * Original: 0x0025B930 - 0x0025BA3E (270 bytes, 107 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025B939u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0025B939: ;
    ebp = eax;
    ebp = ebp & 0x80000001u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0025B948; /* jns: not sign (positive) */

loc_0025B943: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFFFEu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025B948: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025B951u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B94Eu); } /* indirect call */
    }

loc_0025B951: ;
    ebx = MEM32(esp + 0x18);
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0025B960: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0025B96Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B968u); } /* indirect call */
    }

loc_0025B96B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025B988; /* jne: not equal / not zero */

loc_0025B970: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0025B97Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B978u); } /* indirect call */
    }

loc_0025B97B: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B988; /* jle: less or equal (signed <=) */

loc_0025B983: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B995; /* je: equal / zero */

loc_0025B987: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0025B988: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025B960; /* jl: less (signed <) */

loc_0025B98E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0025B995: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    ebp = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_0025B9A4; /* jle: less or equal (signed <=) */

loc_0025B99F: ;
    ebp = 0x28;

loc_0025B9A4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0025B9ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B9AAu); } /* indirect call */
    }

loc_0025B9AD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0025B9B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025B9B5u); } /* indirect call */
    }

loc_0025B9B8: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025B9FB; /* jle: less or equal (signed <=) */

loc_0025B9D2: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2F;
    PUSH32(esp, 0x0025B9E2u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0025B9E2: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0025B9EE; /* jns: not sign (positive) */

loc_0025B9E9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025B9EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025BA26; /* jle: less or equal (signed <=) */

loc_0025B9F2: ;
    MEM32(ebp) = 0x2E;
    goto loc_0025BA26;

loc_0025B9FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025BA37; /* jge: greater or equal (signed >=) */

loc_0025B9FF: ;
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = 0x2D;
    PUSH32(esp, 0x0025BA0Fu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0025BA0F: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0025BA1B; /* jns: not sign (positive) */

loc_0025BA16: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025BA1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025BA26; /* jle: less or equal (signed <=) */

loc_0025BA1F: ;
    MEM32(ebp) = 0x2C;

loc_0025BA26: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0025BA31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025BA2Eu); } /* indirect call */
    }

loc_0025BA31: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_0025BA37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025BA90
 * Original: 0x0025BA90 - 0x0025BBBA (298 bytes, 96 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025BA90: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x1CC;
    if (CMP_NE(_fa, _fb)) goto loc_0025BB24; /* jne: not equal / not zero */

loc_0025BAA6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025BAA8: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BAFE; /* je: equal / zero */

loc_0025BAAC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025BAA8; /* jl: less (signed <) */

loc_0025BAB5: ;
    edi = MEM32(esi + 0x280);
    ecx = edi + edi * 2;
    eax = esi + ecx * 4;
    MEM32(eax + 0x1CC) = edx;
    MEM32(eax + 0x1D0) = 1;
    PUSH32(esp, 0x0025BAD6u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0025BAD6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edi + edi * 2 + 0x75;
    ecx = 0xF;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + eax * 4) = edx;
    eax = edi + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    MEM32(esi + 0x280) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0025BAFE: ;
    ecx = eax + eax * 2;
    edx = MEM32(esi + ecx * 4 + 0x1D0);
    ecx = esi + ecx * 4 + 0x1D0;
    eax = eax + eax * 2 + 0x75;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + eax * 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025BBB5; /* jge: greater or equal (signed >=) */

loc_0025BB1C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0025BB24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025BB26: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BB38; /* je: equal / zero */

loc_0025BB2A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025BB26; /* jl: less (signed <) */

loc_0025BB33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0025BB38: ;
    edx = 0xE;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x280) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0025BB96; /* jge: greater or equal (signed >=) */

loc_0025BB4A: ;
    eax = eax + eax * 2;
    PUSH32(esp, ebx);
    ecx = esi + eax * 4 + 0x1CC;
    PUSH32(esp, ebp);

loc_0025BB56: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BB94; /* je: equal / zero */

loc_0025BB5A: ;
    eax = MEM32(esi + 0x280);
    eax = eax + eax * 2;
    eax = esi + eax * 4;
    ebx = eax + 0x1D8;
    ebp = MEM32(ebx);
    _fb = (uint32_t)(0x1CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1CC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(esi + 0x280);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0x280) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0025BB56; /* jl: less (signed <) */

loc_0025BB94: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0025BB96: ;
    eax = MEM32(esi + 0x280);
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4;
    edx = eax + eax * 2 + 0x75;
    MEM32(ecx + 0x1CC) = edi;
    MEM32(esi + edx * 4) = edi;
    MEM32(ecx + 0x1D0) = edi;

loc_0025BBB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025BC10
 * Original: 0x0025BC10 - 0x0025BC4E (62 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025BC10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, 1);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x1CC;

loc_0025BC20: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BC32; /* je: equal / zero */

loc_0025BC24: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025BC20; /* jl: less (signed <) */

loc_0025BC2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0025BC32: ;
    esi = edx + edx * 2 + 0x75;
    edi = MEM32(ecx + esi * 4);
    edx = edx + edx * 2;
    edx = MEM32(ecx + edx * 4 + 0x1D0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025BC49; /* jl: less (signed <) */

loc_0025BC47: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0025BC49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BC60
 * Original: 0x0025BC60 - 0x0025BC67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BC60(void)
{

loc_0025BC60: ;
    SET_LO8(eax, MEM8(ecx + 0x1C8));
    esp += 4; return; /* ret */

}

/**
 * sub_0025BC70
 * Original: 0x0025BC70 - 0x0025BC93 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BC70(void)
{

loc_0025BC70: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x58) = 9;
    PUSH32(esp, 0x0025BC7Fu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0025BC7F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0025BC8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025BC87u); } /* indirect call */
    }

loc_0025BC8A: ;
    MEM8(esi + 0x1C8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025BCA0
 * Original: 0x0025BCA0 - 0x0025BCA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BCA0(void)
{

loc_0025BCA0: ;
    eax = MEM32(ecx + 0x1C0);
    esp += 4; return; /* ret */

}

/**
 * sub_0025BCB0
 * Original: 0x0025BCB0 - 0x0025BCF7 (71 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BCB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025BCB0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    edx = 1;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 2;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x1E;
    MEM32(eax + 0x30) = 4;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x38) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0025BD10
 * Original: 0x0025BD10 - 0x0025BD16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BD10(void)
{

loc_0025BD10: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0025BD20
 * Original: 0x0025BD20 - 0x0025BD48 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025BD20: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0025BD33: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025BD33; /* jne: not equal / not zero */

loc_0025BD3D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BD60
 * Original: 0x0025BD60 - 0x0025BD88 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025BD60: ;
    eax = MEM32(esp + 4);
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0025BD73: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025BD73; /* jne: not equal / not zero */

loc_0025BD7D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BDA0
 * Original: 0x0025BDA0 - 0x0025BDB1 (17 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BDA0(void)
{

loc_0025BDA0: ;
    MEM32(ecx + 0x18) = 4;
    MEM32(ecx + 0x1C) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025BDC0
 * Original: 0x0025BDC0 - 0x0025BDC3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BDC0(void)
{

loc_0025BDC0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025BDD0
 * Original: 0x0025BDD0 - 0x0025BDE3 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BDD0(void)
{

loc_0025BDD0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x7F6ED4);
    PUSH32(esp, 0x0025BDE0u); RECOMP_ABI_CALL(0x00018530u, sub_00018530); /* call 0x00018530 */

loc_0025BDE0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025BDF0
 * Original: 0x0025BDF0 - 0x0025BE64 (116 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025BDF0: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0025BE61; /* ja: above (unsigned >) */

loc_0025BDFA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x25BE64); /* switch: 7 entries, 5 targets */
    if (_jt == 0x0025BE01u) goto loc_0025BE01;
    if (_jt == 0x0025BE0Eu) goto loc_0025BE0E;
    if (_jt == 0x0025BE26u) goto loc_0025BE26;
    if (_jt == 0x0025BE42u) goto loc_0025BE42;
    if (_jt == 0x0025BE61u) goto loc_0025BE61;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025BE01: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_0025BE0E: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_0025BE26: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_0025BE42: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;

loc_0025BE61: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025BEB0
 * Original: 0x0025BEB0 - 0x0025BEE6 (54 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0025BEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025BEB0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0025BEE1; /* ja: above (unsigned >) */

loc_0025BEBA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x25BEE8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0025BEC1u) goto loc_0025BEC1;
    if (_jt == 0x0025BEC9u) goto loc_0025BEC9;
    if (_jt == 0x0025BED1u) goto loc_0025BED1;
    if (_jt == 0x0025BED9u) goto loc_0025BED9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025BEC1: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_0025BEC9: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_0025BED1: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_0025BED9: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_0025BEE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BEE6
 * Original: 0x0025BEE6 - 0x0025BF26 (64 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0025BEE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025BEE6: ;
    edi = edi;
    MEM32(esi + -1094123483) = (uint32_t)(((int32_t)(int32_t)(MEM32(esi + -1094123483))) >> ((0x25) & 31u));
    _fa = (uint32_t)(MEM32(esi + -1094123483)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = 0xBED90025u;
    eax = eax & 0xCCCCCC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0025BF3E(); return; } /* ja: above (unsigned >) */

loc_0025BF1A: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x25BF44)); return; /* indirect tail jmp */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BF21
 * Original: 0x0025BF21 - 0x0025BF26 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BF21(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025BF21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BF26
 * Original: 0x0025BF26 - 0x0025BF2E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BF26(void)
{

loc_0025BF26: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BF2E
 * Original: 0x0025BF2E - 0x0025BF36 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BF2E(void)
{

loc_0025BF2E: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BF36
 * Original: 0x0025BF36 - 0x0025BF3E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BF36(void)
{

loc_0025BF36: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BF70
 * Original: 0x0025BF70 - 0x0025BFB0 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025BF70: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = 3;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    edx = 1;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x10;
    MEM32(eax + 0x30) = 4;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0025BFC0
 * Original: 0x0025BFC0 - 0x0025BFC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BFC0(void)
{

loc_0025BFC0: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}
