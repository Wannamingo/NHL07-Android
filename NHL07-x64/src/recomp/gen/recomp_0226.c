/**
 * nhl_07_recomp - Recompiled code chunk 226
 * Functions: 250 (0x004E30B4 - 0x004E7343)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004E30B4
 * Original: 0x004E30B4 - 0x004E30D0 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E30B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E30B4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E30BCu); RECOMP_ABI_CALL(0x004E215Cu, sub_004E215C); /* call 0x004E215C */

loc_004E30BC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E30CA; /* je: equal / zero */

loc_004E30C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E30C9u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E30C9: ;
    POP32(esp, ecx);

loc_004E30CA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E30D0
 * Original: 0x004E30D0 - 0x004E30EC (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E30D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E30D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E30D8u); RECOMP_ABI_CALL(0x004E2180u, sub_004E2180); /* call 0x004E2180 */

loc_004E30D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E30E6; /* je: equal / zero */

loc_004E30DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E30E5u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E30E5: ;
    POP32(esp, ecx);

loc_004E30E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E30EC
 * Original: 0x004E30EC - 0x004E310C (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E30EC(void)
{

loc_004E30EC: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CD04;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004E3108u); RECOMP_ABI_CALL(0x004E4B7Cu, sub_004E4B7C); /* call 0x004E4B7C */

loc_004E3108: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E310C
 * Original: 0x004E310C - 0x004E3130 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E310C(void)
{

loc_004E310C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CD04;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004E3128u); RECOMP_ABI_CALL(0x004E4BAEu, sub_004E4BAE); /* call 0x004E4BAE */

loc_004E3128: ;
    MEM32(esi) = 0x863F20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E3130
 * Original: 0x004E3130 - 0x004E314C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E3138u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004E3138: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E3146; /* je: equal / zero */

loc_004E313F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E3145u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004E3145: ;
    POP32(esp, ecx);

loc_004E3146: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E314C
 * Original: 0x004E314C - 0x004E3154 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E314C(void)
{

loc_004E314C: ;
    MEM32(ecx + 0xC) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_004E3154
 * Original: 0x004E3154 - 0x004E318A (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3154(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3154: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3186; /* je: equal / zero */

loc_004E3161: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E317C; /* je: equal / zero */

loc_004E3166: ;
    if (CMP_LE(_fas, _fbs)) goto loc_004E316D; /* jle: less or equal (signed <=) */

loc_004E3168: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004E3186; /* jle: less or equal (signed <=) */

loc_004E316D: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004E3175u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E3175: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004E317C: ;
    ecx = esi + -8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E3184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3181u); } /* indirect call */
    }

loc_004E3184: ;
    goto loc_004E316D;

loc_004E3186: ;
    SET_LO8(ebx, 1);
    goto loc_004E3175;

}

/**
 * sub_004E318A
 * Original: 0x004E318A - 0x004E31B4 (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E318A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E318A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0xC) = 4;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E31A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E319Eu); } /* indirect call */
    }

loc_004E31A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E31B2; /* je: equal / zero */

loc_004E31A5: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E31B2; /* je: equal / zero */

loc_004E31AB: ;
    MEM32(esi + 0xC) = 3;

loc_004E31B2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E31B4
 * Original: 0x004E31B4 - 0x004E31EA (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E31B4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E31B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004E31BDu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E31BD: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004E31C7u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004E31C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86CD24;
    MEM32(edi) = 0x86CD14;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    ecx = esi;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x004E31E5u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E31E5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E31EA
 * Original: 0x004E31EA - 0x004E31F2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E31EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E31EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E32C1(); return; /* tail jmp 0x004E32C1 */

}

/**
 * sub_004E31F2
 * Original: 0x004E31F2 - 0x004E3221 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E31F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E31F2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x86CD24;
    MEM32(edi) = 0x86CD14;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3211; /* je: equal / zero */

loc_004E320C: ;
    PUSH32(esp, 0x004E3211u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E3211: ;
    ecx = edi;
    PUSH32(esp, 0x004E3218u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004E3218: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E3221
 * Original: 0x004E3221 - 0x004E3287 (102 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3221(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3221: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4E318A);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E3247u); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004E3247: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edi = esi + 0x14;
    MEM32(esi + 0x10) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    MEM32(esi + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004E3282; /* jne: not equal / not zero */

loc_004E3261: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E327Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3277u); } /* indirect call */
    }

loc_004E327A: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004E3282u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004E3282: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E3287
 * Original: 0x004E3287 - 0x004E32BD (54 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3287(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3287: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E32A8; /* jne: not equal / not zero */

loc_004E3290: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, MEM32(esi + 8));
    eax = MEM32(eax + 0x28);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004E32A6u); RECOMP_ABI_CALL(0x005E2EF0u, sub_005E2EF0); /* call 0x005E2EF0 */

loc_004E32A6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004E32A8: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E32B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E32AFu); } /* indirect call */
    }

loc_004E32B2: ;
    ecx = esi;
    PUSH32(esp, 0x004E32B9u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E32B9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E32BD
 * Original: 0x004E32BD - 0x004E32C1 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E32BD(void)
{

loc_004E32BD: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004E32C1
 * Original: 0x004E32C1 - 0x004E32DD (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E32C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E32C1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E32C9u); RECOMP_ABI_CALL(0x004E31F2u, sub_004E31F2); /* call 0x004E31F2 */

loc_004E32C9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E32D7; /* je: equal / zero */

loc_004E32D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E32D6u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E32D6: ;
    POP32(esp, ecx);

loc_004E32D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E32DD
 * Original: 0x004E32DD - 0x004E3303 (38 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E32DD(void)
{

loc_004E32DD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E32E5u); RECOMP_ABI_CALL(0x004E6E8Eu, sub_004E6E8E); /* call 0x004E6E8E */

loc_004E32E5: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0x86CD34;
    MEM8(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E330E
 * Original: 0x004E330E - 0x004E3324 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E330E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E330E: ;
    eax = ecx;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E3323; /* jne: not equal / not zero */

loc_004E3316: ;
    ecx = MEM32(eax + 0x10);
    MEM8(eax + 8) = 1;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004E3323u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3320u); } /* indirect call */
    }

loc_004E3323: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004E3324
 * Original: 0x004E3324 - 0x004E3327 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3324(void)
{

loc_004E3324: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3327
 * Original: 0x004E3327 - 0x004E3349 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3327(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3327: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CD34;
    PUSH32(esp, 0x004E3335u); RECOMP_ABI_CALL(0x004E6EA0u, sub_004E6EA0); /* call 0x004E6EA0 */

loc_004E3335: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E3343; /* je: equal / zero */

loc_004E333C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E3342u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E3342: ;
    POP32(esp, ecx);

loc_004E3343: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3379
 * Original: 0x004E3379 - 0x004E337F (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3379(void)
{

loc_004E3379: ;
    eax = MEM32(0x90E7E4);
    esp += 4; return; /* ret */

}

/**
 * sub_004E337F
 * Original: 0x004E337F - 0x004E33BA (59 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E337F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E337F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = edi;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x004E3397u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E3397: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004E33A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E33A2u); } /* indirect call */
    }

loc_004E33A4: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004E33AFu); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004E33AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E33BA
 * Original: 0x004E33BA - 0x004E33D9 (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E33BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E33BA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E33D6; /* jne: not equal / not zero */

loc_004E33C4: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    MEM32(esi + edx * 4) = eax;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 5) = MEM8(eax + 5) | 1;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, esi);

loc_004E33D6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E33D9
 * Original: 0x004E33D9 - 0x004E3427 (78 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E33D9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E33D9: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E3424; /* jbe: below or equal (unsigned <=) */

loc_004E33E2: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, ebx);

loc_004E33EA: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E33FD; /* je: equal / zero */

loc_004E33F2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E33EA; /* jb: below (unsigned <) */

loc_004E33FB: ;
    goto loc_004E3421;

loc_004E33FD: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(esi + eax);
    MEM8(edx + 5) = MEM8(edx + 5) & 0xFE;
    _fa = (uint32_t)(MEM8(edx + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(ecx + 8);
    esi = MEM32(ecx + 4);
    esi = MEM32(edx + esi * 4);
    MEM32(edx + eax) = esi;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(ecx + eax * 4) = MEM32(ecx + eax * 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004E3421: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);

loc_004E3424: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3427
 * Original: 0x004E3427 - 0x004E3454 (45 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3427(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3427: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E344D; /* jbe: below or equal (unsigned <=) */

loc_004E3432: ;
    eax = MEM32(esi + 8);
    eax = eax + edi * 4;
    ecx = MEM32(eax);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3447; /* je: equal / zero */

loc_004E3441: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E3447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3445u); } /* indirect call */
    }

loc_004E3447: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3432; /* jb: below (unsigned <) */

loc_004E344D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E3454
 * Original: 0x004E3454 - 0x004E3484 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3454(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3454: ;
    PUSH32(esp, 0x004E3459u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E3459: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004E3467u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3465u); } /* indirect call */
    }

loc_004E3467: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E347C; /* je: equal / zero */

loc_004E346B: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax;
    PUSH32(esp, 0x004E3476u); RECOMP_ABI_CALL(0x004E337Fu, sub_004E337F); /* call 0x004E337F */

loc_004E3476: ;
    MEM32(0x90E7E4) = eax;
    esp += 4; return; /* ret */

loc_004E347C: ;
    MEM32(0x90E7E4) = MEM32(0x90E7E4) & 0;
    _fa = (uint32_t)(MEM32(0x90E7E4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004E3484
 * Original: 0x004E3484 - 0x004E349D (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3484(void)
{

loc_004E3484: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E348Cu); RECOMP_ABI_CALL(0x004E3427u, sub_004E3427); /* call 0x004E3427 */

loc_004E348C: ;
    PUSH32(esp, 0x004E3491u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E3491: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E349Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3498u); } /* indirect call */
    }

loc_004E349B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E349D
 * Original: 0x004E349D - 0x004E34BF (34 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E349D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E349D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E34A5u); RECOMP_ABI_CALL(0x004E3484u, sub_004E3484); /* call 0x004E3484 */

loc_004E34A5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E34B9; /* je: equal / zero */

loc_004E34AC: ;
    PUSH32(esp, 0x004E34B1u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E34B1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E34B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E34B6u); } /* indirect call */
    }

loc_004E34B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E34BF
 * Original: 0x004E34BF - 0x004E34D8 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E34BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E34BF: ;
    ecx = MEM32(0x90E7E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E34D0; /* je: equal / zero */

loc_004E34C9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004E34D0u); RECOMP_ABI_CALL(0x004E349Du, sub_004E349D); /* call 0x004E349D */

loc_004E34D0: ;
    MEM32(0x90E7E4) = MEM32(0x90E7E4) & 0;
    _fa = (uint32_t)(MEM32(0x90E7E4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004E34E4
 * Original: 0x004E34E4 - 0x004E350C (40 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E34E4(void)
{

loc_004E34E4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E34ECu); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E34EC: ;
    PUSH32(esp, 0);
    MEM32(esi) = 0x86CD3C;
    PUSH32(esp, 0x004E34F9u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E34F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004E3506u); RECOMP_ABI_CALL(0x004DE3F4u, sub_004DE3F4); /* call 0x004DE3F4 */

loc_004E3506: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E350C
 * Original: 0x004E350C - 0x004E354B (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E350C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E350C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi) = 0x86CD3C;
    if (CMP_LE(_fas, _fbs)) goto loc_004E3539; /* jle: less or equal (signed <=) */

loc_004E3520: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x10;

loc_004E3524: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x004E352Cu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E352C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E3533u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3530u); } /* indirect call */
    }

loc_004E3533: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004E3524; /* jl: less (signed <) */

loc_004E3538: ;
    POP32(esp, ebp);

loc_004E3539: ;
    ecx = esi + 8;
    PUSH32(esp, 0x004E3541u); RECOMP_ABI_CALL(0x004E16E4u, sub_004E16E4); /* call 0x004E16E4 */

loc_004E3541: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E354B
 * Original: 0x004E354B - 0x004E3573 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E354B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E354B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 0x10;
    ecx = edi;
    PUSH32(esp, 0x004E355Du); RECOMP_ABI_CALL(0x004DB9B4u, sub_004DB9B4); /* call 0x004DB9B4 */

loc_004E355D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004E356E; /* jae: above or equal (unsigned >=) */

loc_004E3562: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004E356Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E356A: ;
    MEM8(eax + 8) = 1;

loc_004E356E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3573
 * Original: 0x004E3573 - 0x004E35DF (108 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3573(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3573: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_004E358A; /* jbe: below or equal (unsigned <=) */

loc_004E357F: ;
    PUSH32(esp, 0x004E3584u); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_004E3584: ;
    esi = eax;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E358A: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3598; /* je: equal / zero */

loc_004E3591: ;
    PUSH32(esp, 0x004E3596u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E3596: ;
    goto loc_004E359D;

loc_004E3598: ;
    PUSH32(esp, 0x004E359Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E359D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004E35A9u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E35A9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E35BE; /* je: equal / zero */

loc_004E35B0: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E35BCu); RECOMP_ABI_CALL(0x004E32DDu, sub_004E32DD); /* call 0x004E32DD */

loc_004E35BC: ;
    goto loc_004E35C0;

loc_004E35BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E35C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E35C6u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E35C6: ;
    ecx = eax;
    PUSH32(esp, 0x004E35CDu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E35CD: ;
    esi = eax;
    PUSH32(esp, esi);
    ecx = edi + 0x10;
    PUSH32(esp, 0x004E35D8u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E35D8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E35DF
 * Original: 0x004E35DF - 0x004E3649 (106 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E35DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E35DF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E3646; /* jbe: below or equal (unsigned <=) */

loc_004E35E8: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edi);

loc_004E35F2: ;
    ecx = MEM32(esp + 0x10);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E35FDu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E35FD: ;
    esi = eax;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E3635; /* jne: not equal / not zero */

loc_004E3605: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E360Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E360Bu); } /* indirect call */
    }

loc_004E360E: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3635; /* je: equal / zero */

loc_004E3614: ;
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3631; /* je: equal / zero */

loc_004E361B: ;
    PUSH32(esp, 0x004E3620u); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_004E3620: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004E3631; /* jg: greater (signed >) */

loc_004E3626: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E362Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E362Cu); } /* indirect call */
    }

loc_004E362F: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004E3631: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E363F; /* jne: not equal / not zero */

loc_004E3635: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E363Fu); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_004E363F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E35F2; /* ja: above (unsigned >) */

loc_004E3643: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004E3646: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E3649
 * Original: 0x004E3649 - 0x004E3665 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3649(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3649: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E3651u); RECOMP_ABI_CALL(0x004E350Cu, sub_004E350C); /* call 0x004E350C */

loc_004E3651: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E365F; /* je: equal / zero */

loc_004E3658: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E365Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E365E: ;
    POP32(esp, ecx);

loc_004E365F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3665
 * Original: 0x004E3665 - 0x004E367F (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3665(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3665: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004E367Bu); RECOMP_ABI_CALL(0x005CCF46u, sub_005CCF46); /* call 0x005CCF46 */

loc_004E367B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004E367F
 * Original: 0x004E367F - 0x004E36A2 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E367F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E367F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = esi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E3697u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_004E3697: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + esi + -1) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E36A2
 * Original: 0x004E36A2 - 0x004E36B4 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E36A2(void)
{

loc_004E36A2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E36AAu); RECOMP_ABI_CALL(0x004BB397u, sub_004BB397); /* call 0x004BB397 */

loc_004E36AA: ;
    MEM32(esi) = 0x86CD48;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E36B4
 * Original: 0x004E36B4 - 0x004E36BF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E36B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E36B4: ;
    MEM32(ecx) = 0x86CD48;
    g_seh_ebp = ebp; sub_004BB3A9(); return; /* tail jmp 0x004BB3A9 */

}

/**
 * sub_004E36BF
 * Original: 0x004E36BF - 0x004E36E1 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E36BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E36BF: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CD48;
    PUSH32(esp, 0x004E36CDu); RECOMP_ABI_CALL(0x004BB3A9u, sub_004BB3A9); /* call 0x004BB3A9 */

loc_004E36CD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E36DB; /* je: equal / zero */

loc_004E36D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E36DAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E36DA: ;
    POP32(esp, ecx);

loc_004E36DB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E36E1
 * Original: 0x004E36E1 - 0x004E36EA (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E36E1(void)
{

loc_004E36E1: ;
    eax = ecx;
    MEM32(eax) = 0x86CD50;
    esp += 4; return; /* ret */

}

/**
 * sub_004E36EA
 * Original: 0x004E36EA - 0x004E36F1 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E36EA(void)
{

loc_004E36EA: ;
    MEM32(ecx) = 0x86CD50;
    esp += 4; return; /* ret */

}

/**
 * sub_004E36F1
 * Original: 0x004E36F1 - 0x004E370E (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E36F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E36F1: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CD50;
    if (TEST_Z(_fa, _fb)) goto loc_004E3708; /* je: equal / zero */

loc_004E3701: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E3707u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004E3707: ;
    POP32(esp, ecx);

loc_004E3708: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E370E
 * Original: 0x004E370E - 0x004E3717 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E370E(void)
{

loc_004E370E: ;
    eax = ecx;
    MEM32(eax) = 0x86CD70;
    esp += 4; return; /* ret */

}

/**
 * sub_004E3717
 * Original: 0x004E3717 - 0x004E371E (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3717(void)
{

loc_004E3717: ;
    MEM32(ecx) = 0x86CD70;
    esp += 4; return; /* ret */

}

/**
 * sub_004E371E
 * Original: 0x004E371E - 0x004E3747 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E371E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E371E: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CD70;
    if (TEST_Z(_fa, _fb)) goto loc_004E3735; /* je: equal / zero */

loc_004E372E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E3734u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004E3734: ;
    POP32(esp, ecx);

loc_004E3735: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004E3747
 * Original: 0x004E3747 - 0x004E37A5 (94 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3747(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3747: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E375Au); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004E375A: ;
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E376Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3767u); } /* indirect call */
    }

loc_004E376A: ;
    PUSH32(esp, eax);
    eax = edi + 0x4E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E3774u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E3774: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004E3780u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E377Du); } /* indirect call */
    }

loc_004E3780: ;
    PUSH32(esp, eax);
    eax = edi + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E378Au); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E378A: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004E3794u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3791u); } /* indirect call */
    }

loc_004E3794: ;
    MEM32(edi) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x004E379Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E379Au); } /* indirect call */
    }

loc_004E379D: ;
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E37A5
 * Original: 0x004E37A5 - 0x004E3803 (94 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E37A5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E37A5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E37B8u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004E37B8: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E37C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E37C5u); } /* indirect call */
    }

loc_004E37C8: ;
    PUSH32(esp, eax);
    eax = esi + 0x4E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E37D2u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E37D2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    ecx = edi;
    PUSH32(esp, 0x004E37DEu); RECOMP_ABI_CALL(0x004ACDE6u, sub_004ACDE6); /* call 0x004ACDE6 */

loc_004E37DE: ;
    PUSH32(esp, eax);
    eax = esi + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E37E8u); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004E37E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x004E37F2u); RECOMP_ABI_CALL(0x004ACDFAu, sub_004ACDFA); /* call 0x004ACDFA */

loc_004E37F2: ;
    ecx = edi;
    MEM32(esi) = eax;
    PUSH32(esp, 0x004E37FBu); RECOMP_ABI_CALL(0x004ACE0Cu, sub_004ACE0C); /* call 0x004ACE0C */

loc_004E37FB: ;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E3806
 * Original: 0x004E3806 - 0x004E3809 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3806(void)
{

loc_004E3806: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3809
 * Original: 0x004E3809 - 0x004E383E (53 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3809(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3809: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E3811u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E3811: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E3818u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3815u); } /* indirect call */
    }

loc_004E3818: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004E381Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E381Cu); } /* indirect call */
    }

loc_004E381F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E383A; /* jne: not equal / not zero */

loc_004E3825: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E382Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E382Cu); } /* indirect call */
    }

loc_004E382F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E383A; /* je: equal / zero */

loc_004E3833: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E383Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3837u); } /* indirect call */
    }

loc_004E383A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E383E
 * Original: 0x004E383E - 0x004E3858 (26 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E383E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E383E: ;
    PUSH32(esp, esi);
    esi = ecx + -8;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E3849u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3846u); } /* indirect call */
    }

loc_004E3849: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3854; /* je: equal / zero */

loc_004E384D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E3854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3851u); } /* indirect call */
    }

loc_004E3854: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E3858
 * Original: 0x004E3858 - 0x004E385B (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3858(void)
{

loc_004E3858: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E385B
 * Original: 0x004E385B - 0x004E385E (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E385B(void)
{

loc_004E385B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E385E
 * Original: 0x004E385E - 0x004E387B (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E385E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E385E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x74797065);
    PUSH32(esp, MEM32(ecx + 0x7C));
    PUSH32(esp, 0x004E386Fu); RECOMP_ABI_CALL(0x005EB3C0u, sub_005EB3C0); /* call 0x005EB3C0 */

loc_004E386F: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004E387B
 * Original: 0x004E387B - 0x004E3926 (171 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E387B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E387B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx + 0x7C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E388Au); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E388A: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E7AC);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3898u); RECOMP_ABI_CALL(0x004DC1D4u, sub_004DC1D4); /* call 0x004DC1D4 */

loc_004E3898: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ebp + -1) = (CMP_G(_fas, _fbs)) ? 1 : 0; /* setg */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E391E; /* jbe: below or equal (unsigned <=) */

loc_004E38AB: ;
    PUSH32(esp, esi);
    esi = edi + 0xBC;
    PUSH32(esp, ebx);

loc_004E38B3: ;
    PUSH32(esp, MEM32(ebp + -12));
    eax = esi + -102;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E38BFu); RECOMP_ABI_CALL(0x004DBEFCu, sub_004DBEFC); /* call 0x004DBEFC */

loc_004E38BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004E3906; /* jne: not equal / not zero */

loc_004E38C5: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    ecx = ZX16(MEM16(esi + -36));
    ebx = ZX16(MEM16(esi + -28));
    if (CMP_EQ(_fa, _fb)) goto loc_004E38E0; /* je: equal / zero */

loc_004E38D6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E38E0; /* je: equal / zero */

loc_004E38DC: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_004E38E2;

loc_004E38E0: ;
    SET_LO8(edx, 1);

loc_004E38E2: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E38F2; /* je: equal / zero */

loc_004E38E8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E38F2; /* je: equal / zero */

loc_004E38EE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_004E38F4;

loc_004E38F2: ;
    SET_LO8(eax, 1);

loc_004E38F4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E38FD; /* je: equal / zero */

loc_004E38F8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E3918; /* jne: not equal / not zero */

loc_004E38FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3906; /* je: equal / zero */

loc_004E3901: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E3918; /* jne: not equal / not zero */

loc_004E3906: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E38B3; /* jb: below (unsigned <) */

loc_004E3916: ;
    goto loc_004E391C;

loc_004E3918: ;
    MEM8(ebp + -1) = 0;

loc_004E391C: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_004E391E: ;
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3926
 * Original: 0x004E3926 - 0x004E39D9 (179 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E3926(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3926: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx + 0x7C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3935u); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E3935: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E7AC);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3943u); RECOMP_ABI_CALL(0x004DC1D4u, sub_004DC1D4); /* call 0x004DC1D4 */

loc_004E3943: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ebp + -1) = (CMP_G(_fas, _fbs)) ? 1 : 0; /* setg */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E39D3; /* jbe: below or equal (unsigned <=) */

loc_004E3956: ;
    PUSH32(esp, esi);
    esi = edi + 0xBC;
    PUSH32(esp, ebx);

loc_004E395E: ;
    PUSH32(esp, MEM32(ebp + -12));
    eax = esi + -102;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E396Au); RECOMP_ABI_CALL(0x004DBEFCu, sub_004DBEFC); /* call 0x004DBEFC */

loc_004E396A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004E39BB; /* jne: not equal / not zero */

loc_004E3970: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    ecx = ZX16(MEM16(esi + -36));
    ebx = ZX16(MEM16(esi + -28));
    if (CMP_EQ(_fa, _fb)) goto loc_004E398B; /* je: equal / zero */

loc_004E3981: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E398B; /* je: equal / zero */

loc_004E3987: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_004E398D;

loc_004E398B: ;
    SET_LO8(edx, 1);

loc_004E398D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E399D; /* je: equal / zero */

loc_004E3993: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E399D; /* je: equal / zero */

loc_004E3999: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_004E399F;

loc_004E399D: ;
    SET_LO8(eax, 1);

loc_004E399F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E39AD; /* je: equal / zero */

loc_004E39A3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E39AD; /* je: equal / zero */

loc_004E39A8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E39CD; /* jne: not equal / not zero */

loc_004E39AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E39BB; /* je: equal / zero */

loc_004E39B1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E39BB; /* je: equal / zero */

loc_004E39B6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E39CD; /* jne: not equal / not zero */

loc_004E39BB: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E395E; /* jb: below (unsigned <) */

loc_004E39CB: ;
    goto loc_004E39D1;

loc_004E39CD: ;
    MEM8(ebp + -1) = 0;

loc_004E39D1: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_004E39D3: ;
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E39D9
 * Original: 0x004E39D9 - 0x004E39DD (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E39D9(void)
{

loc_004E39D9: ;
    eax = ecx + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_004E39DD
 * Original: 0x004E39DD - 0x004E39ED (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E39DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E39DD: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x004E39E4u); RECOMP_ABI_CALL(0x004E387Bu, sub_004E387B); /* call 0x004E387B */

loc_004E39E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004E39ED
 * Original: 0x004E39ED - 0x004E3A53 (102 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E39ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E39ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E3A00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E39FDu); } /* indirect call */
    }

loc_004E3A00: ;
    edi = eax;
    esi = MEM32(edi + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3A0Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E3A0A: ;
    edx = MEM32(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi + esi * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004E3A1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3A1Au); } /* indirect call */
    }

loc_004E3A1C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E3A49; /* jbe: below or equal (unsigned <=) */

loc_004E3A23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;

loc_004E3A29: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3A34u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E3A34: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3A3Du); RECOMP_ABI_CALL(0x004E3747u, sub_004E3747); /* call 0x004E3747 */

loc_004E3A3D: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x90;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3A29; /* jb: below (unsigned <) */

loc_004E3A49: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3A53
 * Original: 0x004E3A53 - 0x004E3A93 (64 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3A53(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3A53: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004E3A5Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E3A5C: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x120);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004E3A6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3A6Au); } /* indirect call */
    }

loc_004E3A6C: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, 0x004E3A7Au); RECOMP_ABI_CALL(0x004E37A5u, sub_004E37A5); /* call 0x004E37A5 */

loc_004E3A7A: ;
    eax = esi + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    PUSH32(esp, 0x004E3A8Cu); RECOMP_ABI_CALL(0x004E37A5u, sub_004E37A5); /* call 0x004E37A5 */

loc_004E3A8C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E3A93
 * Original: 0x004E3A93 - 0x004E3B3F (172 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E3A93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3A93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, MEM32(edi + 0x7C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3AA5u); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E3AA5: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB8);
    eax = eax + ecx + 0x56;
    ecx = MEM32(edi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004E3ADC; /* jne: not equal / not zero */

loc_004E3AC0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3AC5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E3AC5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E3ACCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3AC9u); } /* indirect call */
    }

loc_004E3ACC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004E3AD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3AD0u); } /* indirect call */
    }

loc_004E3AD3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004E3ADAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3AD7u); } /* indirect call */
    }

loc_004E3ADA: ;
    goto loc_004E3AE1;

loc_004E3ADC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E3AE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3ADEu); } /* indirect call */
    }

loc_004E3AE1: ;
    ecx = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_004E3B32; /* jbe: below or equal (unsigned <=) */

loc_004E3AED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;

loc_004E3AF3: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3AFCu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E3AFC: ;
    _fa = (uint32_t)(MEM32(edi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x90), 0 (32-bit) */
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_004E3B1A; /* jne: not equal / not zero */

loc_004E3B0B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004E3B0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3B0Bu); } /* indirect call */
    }

loc_004E3B0E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004E3B18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3B15u); } /* indirect call */
    }

loc_004E3B18: ;
    goto loc_004E3B28;

loc_004E3B1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E3B20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3B1Du); } /* indirect call */
    }

loc_004E3B20: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3B26u); RECOMP_ABI_CALL(0x004DBEFCu, sub_004DBEFC); /* call 0x004DBEFC */

loc_004E3B26: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004E3B28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E3B3B; /* jne: not equal / not zero */

loc_004E3B2C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3AF3; /* jb: below (unsigned <) */

loc_004E3B32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E3B34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_004E3B3B: ;
    eax = esi;
    goto loc_004E3B34;

}

/**
 * sub_004E3B3F
 * Original: 0x004E3B3F - 0x004E3B9E (95 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3B3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E3B3F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E3B4Du); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E3B4D: ;
    edi = MEM32(esi + 0x68);
    POP32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = eax + ecx + 0x56;
    if (CMP_BE(_fa, _fb)) goto loc_004E3B91; /* jbe: below or equal (unsigned <=) */

loc_004E3B65: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = esi;

loc_004E3B6C: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E3B76u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E3B76: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E3B80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3B7Du); } /* indirect call */
    }

loc_004E3B80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E3B86u); RECOMP_ABI_CALL(0x004DBEFCu, sub_004DBEFC); /* call 0x004DBEFC */

loc_004E3B86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004E3B9A; /* jne: not equal / not zero */

loc_004E3B8C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3B6C; /* jb: below (unsigned <) */

loc_004E3B91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E3B93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004E3B9A: ;
    eax = esi;
    goto loc_004E3B93;

}

/**
 * sub_004E3B9E
 * Original: 0x004E3B9E - 0x004E3C0F (113 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3B9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3B9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx + 0x7C));
    PUSH32(esp, 0x004E3BA8u); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E3BA8: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB8);
    eax = eax + ecx + 8;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0xB0);
    ecx = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0x28);
    _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E3BD6u); RECOMP_ABI_CALL(0x004AE415u, sub_004AE415); /* call 0x004AE415 */

loc_004E3BD6: ;
    edi = eax;
    PUSH32(esp, 0x004E3BDDu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E3BDD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004E3BE9u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E3BE9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3BFB; /* je: equal / zero */

loc_004E3BF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x004E3BF9u); RECOMP_ABI_CALL(0x004E4BEFu, sub_004E4BEF); /* call 0x004E4BEF */

loc_004E3BF9: ;
    goto loc_004E3BFD;

loc_004E3BFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E3BFD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E3C03u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E3C03: ;
    ecx = eax;
    PUSH32(esp, 0x004E3C0Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E3C0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3C0F
 * Original: 0x004E3C0F - 0x004E3C5D (78 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3C0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E3C0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = ecx;
    PUSH32(esp, 0x004E3C19u); RECOMP_ABI_CALL(0x004E387Bu, sub_004E387B); /* call 0x004E387B */

loc_004E3C19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3C49; /* je: equal / zero */

loc_004E3C1D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x10;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E3C46; /* jbe: below or equal (unsigned <=) */

loc_004E3C2C: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004E3C34u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E3C34: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x8C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E3C41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3C3Eu); } /* indirect call */
    }

loc_004E3C41: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3C2C; /* jb: below (unsigned <) */

loc_004E3C46: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004E3C49: ;
    ecx = esi;
    PUSH32(esp, 0x004E3C50u); RECOMP_ABI_CALL(0x004E3926u, sub_004E3926); /* call 0x004E3926 */

loc_004E3C50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E3C5B; /* je: equal / zero */

loc_004E3C54: ;
    MEM32(esi + 0x8C) = MEM32(esi + 0x8C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004E3C5B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E3C5D
 * Original: 0x004E3C5D - 0x004E3D43 (230 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3C5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E3C5D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x90E7AC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x004E3C71u); RECOMP_ABI_CALL(0x004DC1D4u, sub_004DC1D4); /* call 0x004DC1D4 */

loc_004E3C71: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x004E3C7Au); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E3C7A: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x636F6E66);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E3C8Eu); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004E3C8E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebp = eax;
    PUSH32(esp, 0x004E3C97u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E3C97: ;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x004E3CA0u); RECOMP_ABI_CALL(0x004DC1EBu, sub_004DC1EB); /* call 0x004DC1EB */

loc_004E3CA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E3CACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3CA9u); } /* indirect call */
    }

loc_004E3CAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E3CB5u); RECOMP_ABI_CALL(0x005EB870u, sub_005EB870); /* call 0x005EB870 */

loc_004E3CB5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x86CDA0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E3CC5u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E3CC5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E3CCDu); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004E3CCD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6D6E676C);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E3CDFu); RECOMP_ABI_CALL(0x005EB550u, sub_005EB550); /* call 0x005EB550 */

loc_004E3CDF: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x74797065);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E3CF0u); RECOMP_ABI_CALL(0x005EB550u, sub_005EB550); /* call 0x005EB550 */

loc_004E3CF0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004E3CF8u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004E3CF8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004E3CFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3CFCu); } /* indirect call */
    }

loc_004E3CFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C627566);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E3D0Fu); RECOMP_ABI_CALL(0x005EB550u, sub_005EB550); /* call 0x005EB550 */

loc_004E3D0F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2710);
    PUSH32(esp, 0x86CD94);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E3D22u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E3D22: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E3D2Au); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004E3D2A: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x74696D65);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E3D3Au); RECOMP_ABI_CALL(0x005EB550u, sub_005EB550); /* call 0x005EB550 */

loc_004E3D3A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E3D43
 * Original: 0x004E3D43 - 0x004E3DBC (121 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3D43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E3D43: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    MEM32(esi + 0x8C) = 1;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E3D79; /* jbe: below or equal (unsigned <=) */

loc_004E3D5F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004E3D67u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E3D67: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x8C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E3D74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3D71u); } /* indirect call */
    }

loc_004E3D74: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3D5F; /* jb: below (unsigned <) */

loc_004E3D79: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E3D85u); RECOMP_ABI_CALL(0x004E39EDu, sub_004E39ED); /* call 0x004E39ED */

loc_004E3D85: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E3D8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3D8Bu); } /* indirect call */
    }

loc_004E3D8E: ;
    ebp = MEM32(eax + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E3D9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3D97u); } /* indirect call */
    }

loc_004E3D9A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E3DA5u); RECOMP_ABI_CALL(0x005EB130u, sub_005EB130); /* call 0x005EB130 */

loc_004E3DA5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004E3DADu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E3DAD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E3DB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3DB2u); } /* indirect call */
    }

loc_004E3DB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3DBC
 * Original: 0x004E3DBC - 0x004E3E35 (121 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3DBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E3DBC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    MEM32(esi + 0x8C) = 2;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E3DF2; /* jbe: below or equal (unsigned <=) */

loc_004E3DD8: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004E3DE0u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E3DE0: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x8C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E3DEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3DEAu); } /* indirect call */
    }

loc_004E3DED: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3DD8; /* jb: below (unsigned <) */

loc_004E3DF2: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E3DFEu); RECOMP_ABI_CALL(0x004E39EDu, sub_004E39ED); /* call 0x004E39ED */

loc_004E3DFE: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E3E07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3E04u); } /* indirect call */
    }

loc_004E3E07: ;
    ebp = MEM32(eax + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E3E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3E10u); } /* indirect call */
    }

loc_004E3E13: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E3E1Eu); RECOMP_ABI_CALL(0x005EB1C0u, sub_005EB1C0); /* call 0x005EB1C0 */

loc_004E3E1E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004E3E26u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E3E26: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E3E2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3E2Bu); } /* indirect call */
    }

loc_004E3E2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3E35
 * Original: 0x004E3E35 - 0x004E3ED3 (158 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E3E35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3E35: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -20) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_004E3EBD; /* jbe: below or equal (unsigned <=) */

loc_004E3E4C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E3E54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3E51u); } /* indirect call */
    }

loc_004E3E54: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    eax = MEM32(eax + 0x14);
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E3EBD; /* jbe: below or equal (unsigned <=) */

loc_004E3E65: ;
    PUSH32(esp, ebx);

loc_004E3E66: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi + 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3E71u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E3E71: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    edi = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E3EB5; /* jbe: below or equal (unsigned <=) */

loc_004E3E7D: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, MEM32(ebp + 8));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3E8Bu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E3E8B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004E3E92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3E8Fu); } /* indirect call */
    }

loc_004E3E92: ;
    esi = eax;
    eax = MEM32(edi);
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E3E9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3E9Au); } /* indirect call */
    }

loc_004E3E9D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x004E3EA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3EA0u); } /* indirect call */
    }

loc_004E3EA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E3EC3; /* jne: not equal / not zero */

loc_004E3EA7: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3E7D; /* jb: below (unsigned <) */

loc_004E3EB2: ;
    esi = MEM32(ebp + -12);

loc_004E3EB5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E3EBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3EB9u); } /* indirect call */
    }

loc_004E3EBC: ;
    POP32(esp, ebx);

loc_004E3EBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_004E3EC3: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004E3EBC; /* jae: above or equal (unsigned >=) */

loc_004E3ECE: ;
    esi = MEM32(ebp + -12);
    goto loc_004E3E66;

}

/**
 * sub_004E3ED3
 * Original: 0x004E3ED3 - 0x004E3EF5 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3ED3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3ED3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx + 0x34;
    ecx = esi;
    PUSH32(esp, 0x004E3EE2u); RECOMP_ABI_CALL(0x004DB9F8u, sub_004DB9F8); /* call 0x004DB9F8 */

loc_004E3EE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E3EF1; /* jne: not equal / not zero */

loc_004E3EE6: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004E3EF1u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E3EF1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3EF5
 * Original: 0x004E3EF5 - 0x004E3F60 (107 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E3EF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3EF5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E3F5A; /* je: equal / zero */

loc_004E3F04: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3F0Cu); RECOMP_ABI_CALL(0x004E6F50u, sub_004E6F50); /* call 0x004E6F50 */

loc_004E3F0C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3F13u); RECOMP_ABI_CALL(0x004E6F7Bu, sub_004E6F7B); /* call 0x004E6F7B */

loc_004E3F13: ;
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3F1Cu); RECOMP_ABI_CALL(0x004E0521u, sub_004E0521); /* call 0x004E0521 */

loc_004E3F1C: ;
    PUSH32(esp, edi);
    ecx = esi + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3F25u); RECOMP_ABI_CALL(0x004DBA5Au, sub_004DBA5A); /* call 0x004DBA5A */

loc_004E3F25: ;
    ebx = MEM32(esi + 0x1C);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E3F4D; /* jbe: below or equal (unsigned <=) */

loc_004E3F33: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3F3Du); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E3F3D: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E3F45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3F42u); } /* indirect call */
    }

loc_004E3F45: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3F33; /* jb: below (unsigned <) */

loc_004E3F4D: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004E3F5A; /* je: equal / zero */

loc_004E3F55: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E3F5Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E3F5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3F60
 * Original: 0x004E3F60 - 0x004E3F89 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx + 0x5C;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E3F71u); RECOMP_ABI_CALL(0x004DB9F8u, sub_004DB9F8); /* call 0x004DB9F8 */

loc_004E3F71: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E3F7D; /* jne: not equal / not zero */

loc_004E3F75: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E3F7Du); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E3F7D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E3F84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3F81u); } /* indirect call */
    }

loc_004E3F84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3F89
 * Original: 0x004E3F89 - 0x004E3FD7 (78 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3F89(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E3F89: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E3FD2; /* je: equal / zero */

loc_004E3F95: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E3F9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3F99u); } /* indirect call */
    }

loc_004E3F9C: ;
    PUSH32(esp, edi);
    ecx = esi + 0x5C;
    PUSH32(esp, 0x004E3FA5u); RECOMP_ABI_CALL(0x004DBA5Au, sub_004DBA5A); /* call 0x004DBA5A */

loc_004E3FA5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E3FACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3FA9u); } /* indirect call */
    }

loc_004E3FAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E3FD2; /* jne: not equal / not zero */

loc_004E3FB0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E3FD1; /* jbe: below or equal (unsigned <=) */

loc_004E3FBD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E3FC5u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E3FC5: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E3FCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3FC9u); } /* indirect call */
    }

loc_004E3FCC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E3FBD; /* jb: below (unsigned <) */

loc_004E3FD1: ;
    POP32(esp, ebx);

loc_004E3FD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E3FD7
 * Original: 0x004E3FD7 - 0x004E405B (132 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3FD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E3FD7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x004E3FE2u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E3FE2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E3FE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3FE6u); } /* indirect call */
    }

loc_004E3FE9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004E3FF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3FEDu); } /* indirect call */
    }

loc_004E3FF0: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E3FF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E3FF6u); } /* indirect call */
    }

loc_004E3FF9: ;
    edi = MEM32(esp + 0x14);
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E4006u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4003u); } /* indirect call */
    }

loc_004E4006: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E400Du); RECOMP_ABI_CALL(0x005E85C0u, sub_005E85C0); /* call 0x005E85C0 */

loc_004E400D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_004E401B; /* jg: greater (signed >) */

loc_004E4013: ;
    eax = esi;
    esi = edi;
    SET_LO8(ebx, 1);
    goto loc_004E401F;

loc_004E401B: ;
    eax = edi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004E401F: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004E4028u); RECOMP_ABI_CALL(0x004E3A53u, sub_004E3A53); /* call 0x004E3A53 */

loc_004E4028: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x7C));
    if (CMP_EQ(_fa, _fb)) goto loc_004E403F; /* je: equal / zero */

loc_004E4038: ;
    PUSH32(esp, 0x004E403Du); RECOMP_ABI_CALL(0x005EB130u, sub_005EB130); /* call 0x005EB130 */

loc_004E403D: ;
    goto loc_004E4044;

loc_004E403F: ;
    PUSH32(esp, 0x004E4044u); RECOMP_ABI_CALL(0x005EB1C0u, sub_005EB1C0); /* call 0x005EB1C0 */

loc_004E4044: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004E404Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E404C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E4054u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4051u); } /* indirect call */
    }

loc_004E4054: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E405B
 * Original: 0x004E405B - 0x004E41AC (337 bytes, 117 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E405B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E405B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_004E409A; /* jge: greater or equal (signed >=) */

loc_004E406B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004E409A; /* jl: less (signed <) */

loc_004E4071: ;
    eax = esi + -12;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + -4;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E409Au); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004E409A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004E41A6; /* jne: not equal / not zero */

loc_004E40A4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_004E41A6; /* jle: less or equal (signed <=) */

loc_004E40AE: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E4199; /* je: equal / zero */

loc_004E40CA: ;
    edi = esi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E40D5u); RECOMP_ABI_CALL(0x004BC076u, sub_004BC076); /* call 0x004BC076 */

loc_004E40D5: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E40DDu); RECOMP_ABI_CALL(0x004DEEEFu, sub_004DEEEF); /* call 0x004DEEEF */

loc_004E40DD: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E40E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E40E1u); } /* indirect call */
    }

loc_004E40E4: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = eax;
    eax = MEM32(eax + 0x14);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_004E41A5; /* jbe: below or equal (unsigned <=) */

loc_004E40FE: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x28)) >> 32) & 1);
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = esi;

loc_004E4104: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E410Fu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E410F: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E4118u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4115u); } /* indirect call */
    }

loc_004E4118: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4121u); RECOMP_ABI_CALL(0x004BFD57u, sub_004BFD57); /* call 0x004BFD57 */

loc_004E4121: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x28)) >> 32) & 1);
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(ebp + -20) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E412Fu); RECOMP_ABI_CALL(0x004DECFDu, sub_004DECFD); /* call 0x004DECFD */

loc_004E412F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_004E417A; /* jbe: below or equal (unsigned <=) */

loc_004E4137: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, MEM32(ebp + 0xC));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4145u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E4145: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004E414Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E414Bu); } /* indirect call */
    }

loc_004E414E: ;
    ecx = MEM32(ebp + -8);
    edi = eax;
    eax = MEM32(ecx);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E415Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4157u); } /* indirect call */
    }

loc_004E415A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x004E4160u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E415Du); } /* indirect call */
    }

loc_004E4160: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004E4171; /* jne: not equal / not zero */

loc_004E4164: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004E4137; /* jb: below (unsigned <) */

loc_004E416F: ;
    goto loc_004E417A;

loc_004E4171: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E417Au); RECOMP_ABI_CALL(0x004DECFDu, sub_004DECFD); /* call 0x004DECFD */

loc_004E417A: ;
    ecx = MEM32(ebp + -8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E4188; /* je: equal / zero */

loc_004E4183: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4188u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E4188: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004E4104; /* jb: below (unsigned <) */

loc_004E4197: ;
    goto loc_004E41A5;

loc_004E4199: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E41A5u); RECOMP_ABI_CALL(0x004DEEEFu, sub_004DEEEF); /* call 0x004DEEEF */

loc_004E41A5: ;
    POP32(esp, ebx);

loc_004E41A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E4149
 * Original: 0x004E4149 - 0x004E41AC (99 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4149(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4149: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004E414Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E414Bu); } /* indirect call */
    }

loc_004E414E: ;
    ecx = MEM32(ebp + -8);
    edi = eax;
    eax = MEM32(ecx);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E415Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4157u); } /* indirect call */
    }

loc_004E415A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x004E4160u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E415Du); } /* indirect call */
    }

loc_004E4160: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4171; /* jne: not equal / not zero */

loc_004E4164: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_004E4137(); return; } /* jb: below (unsigned <) */

loc_004E416F: ;
    goto loc_004E417A;

loc_004E4171: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E417Au); RECOMP_ABI_CALL(0x004DECFDu, sub_004DECFD); /* call 0x004DECFD */

loc_004E417A: ;
    ecx = MEM32(ebp + -8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4188; /* je: equal / zero */

loc_004E4183: ;
    PUSH32(esp, 0x004E4188u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E4188: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_004E4104(); return; } /* jb: below (unsigned <) */

loc_004E4197: ;
    goto loc_004E41A5;

    PUSH32(esp, ebx);
    ecx = esi + 0x84;
    PUSH32(esp, 0x004E41A5u); RECOMP_ABI_CALL(0x004DEEEFu, sub_004DEEEF); /* call 0x004DEEEF */

loc_004E41A5: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E41AC
 * Original: 0x004E41AC - 0x004E41F9 (77 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E41AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E41AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_004E41F4; /* jl: less (signed <) */

loc_004E41B8: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004E41F4; /* jge: greater or equal (signed >=) */

loc_004E41BE: ;
    eax = esi + -12;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + -4;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E41E7u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004E41E7: ;
    PUSH32(esp, 0);
    ecx = esi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E41F4u); RECOMP_ABI_CALL(0x004DEEEFu, sub_004DEEEF); /* call 0x004DEEEF */

loc_004E41F4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E41F9
 * Original: 0x004E41F9 - 0x004E424D (84 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E41F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E41F9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_004E4243; /* jbe: below or equal (unsigned <=) */

loc_004E4209: ;
    PUSH32(esp, ebp);
    ebp = ecx + 0x34;
    PUSH32(esp, esi);

loc_004E420E: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x004E4216u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E4216: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E421Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E421Cu); } /* indirect call */
    }

loc_004E421F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x18));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E422Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4227u); } /* indirect call */
    }

loc_004E422A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E4230u); RECOMP_ABI_CALL(0x004DBEFCu, sub_004DBEFC); /* call 0x004DBEFC */

loc_004E4230: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004E423D; /* jne: not equal / not zero */

loc_004E4236: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E420E; /* jb: below (unsigned <) */

loc_004E423B: ;
    goto loc_004E4241;

loc_004E423D: ;
    MEM32(esp + 0x10) = esi;

loc_004E4241: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_004E4243: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E424D
 * Original: 0x004E424D - 0x004E427E (49 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E424D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E424D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4279; /* jbe: below or equal (unsigned <=) */

loc_004E425F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004E4267u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4267: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x8C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E4274u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4271u); } /* indirect call */
    }

loc_004E4274: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E425F; /* jb: below (unsigned <) */

loc_004E4279: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E427E
 * Original: 0x004E427E - 0x004E438E (272 bytes, 108 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E427E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E427E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004E4325; /* jne: not equal / not zero */

loc_004E4293: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4325; /* je: equal / zero */

loc_004E429C: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x004E42A3u); RECOMP_ABI_CALL(0x004E3B9Eu, sub_004E3B9E); /* call 0x004E3B9E */

loc_004E42A3: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0 (32-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004E42FB; /* jne: not equal / not zero */

loc_004E42AB: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x004E42BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E42BBu); } /* indirect call */
    }

loc_004E42BE: ;
    edi = eax;
    PUSH32(esp, 0x004E42C5u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E42C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004E42D1u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E42D1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E42E4; /* je: equal / zero */

loc_004E42D8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x004E42E2u); RECOMP_ABI_CALL(0x004E4BEFu, sub_004E4BEF); /* call 0x004E4BEF */

loc_004E42E2: ;
    goto loc_004E42E6;

loc_004E42E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E42E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E42ECu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E42EC: ;
    ecx = eax;
    PUSH32(esp, 0x004E42F3u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E42F3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004E42FBu); RECOMP_ABI_CALL(0x004E3F60u, sub_004E3F60); /* call 0x004E3F60 */

loc_004E42FB: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004E4303u); RECOMP_ABI_CALL(0x004E3F60u, sub_004E3F60); /* call 0x004E3F60 */

loc_004E4303: ;
    edi = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4388; /* jbe: below or equal (unsigned <=) */

loc_004E430F: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004E4317u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4317: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E431Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E431Bu); } /* indirect call */
    }

loc_004E431E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E430F; /* jb: below (unsigned <) */

loc_004E4323: ;
    goto loc_004E4388;

loc_004E4325: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4388; /* jne: not equal / not zero */

loc_004E432A: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4388; /* je: equal / zero */

loc_004E432F: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E4337u); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E4337: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_004E4388; /* jl: less (signed <) */

loc_004E433E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004E4388; /* jge: greater or equal (signed >=) */

loc_004E4342: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E434Au); RECOMP_ABI_CALL(0x004E3B3Fu, sub_004E3B3F); /* call 0x004E3B3F */

loc_004E434A: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E4353u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4350u); } /* indirect call */
    }

loc_004E4353: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004E4361; /* je: equal / zero */

loc_004E4359: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E435Fu); RECOMP_ABI_CALL(0x004E3F89u, sub_004E3F89); /* call 0x004E3F89 */

loc_004E435F: ;
    goto loc_004E4366;

loc_004E4361: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E4366u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4363u); } /* indirect call */
    }

loc_004E4366: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4388; /* jne: not equal / not zero */

loc_004E436A: ;
    ebx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4388; /* jbe: below or equal (unsigned <=) */

loc_004E4374: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E437Cu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E437C: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E4383u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4380u); } /* indirect call */
    }

loc_004E4383: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4374; /* jb: below (unsigned <) */

loc_004E4388: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E438E
 * Original: 0x004E438E - 0x004E4548 (442 bytes, 160 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E438E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E438E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004E44AD; /* jne: not equal / not zero */

loc_004E43A6: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E44AD; /* je: equal / zero */

loc_004E43AF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E43B4u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E43B4: ;
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E43BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E43BAu); } /* indirect call */
    }

loc_004E43BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E440F; /* je: equal / zero */

loc_004E43C1: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004E43C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E43C5u); } /* indirect call */
    }

loc_004E43C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E440F; /* je: equal / zero */

loc_004E43CC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004E43D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E43D0u); } /* indirect call */
    }

loc_004E43D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E440F; /* jne: not equal / not zero */

loc_004E43D7: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 0x10;
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4403; /* jbe: below or equal (unsigned <=) */

loc_004E43E4: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E43EEu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E43EE: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x8C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E43FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E43F8u); } /* indirect call */
    }

loc_004E43FB: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E43E4; /* jb: below (unsigned <) */

loc_004E4403: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E440Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4407u); } /* indirect call */
    }

loc_004E440A: ;
    goto loc_004E4541;

loc_004E440F: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4417u); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E4417: ;
    POP32(esp, ecx);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4423u); RECOMP_ABI_CALL(0x004E3A93u, sub_004E3A93); /* call 0x004E3A93 */

loc_004E4423: ;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E442Bu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E442B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4437u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E4437: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E445B; /* je: equal / zero */

loc_004E443E: ;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(edi);
    PUSH32(esp, edx);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB8);
    ecx = edx + ebx + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x7C));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4459u); RECOMP_ABI_CALL(0x004E6FB6u, sub_004E6FB6); /* call 0x004E6FB6 */

loc_004E4459: ;
    goto loc_004E445D;

loc_004E445B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E445D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4463u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E4463: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E446Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E446A: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4475u); RECOMP_ABI_CALL(0x004E3ED3u, sub_004E3ED3); /* call 0x004E3ED3 */

loc_004E4475: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 0x10;
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4541; /* jbe: below or equal (unsigned <=) */

loc_004E4487: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4491u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4491: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x8C));
    ecx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E44A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E449Eu); } /* indirect call */
    }

loc_004E44A0: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4487; /* jb: below (unsigned <) */

loc_004E44A8: ;
    goto loc_004E4541;

loc_004E44AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4541; /* jne: not equal / not zero */

loc_004E44B6: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4541; /* je: equal / zero */

loc_004E44BF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E44C4u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E44C4: ;
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E44CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E44CAu); } /* indirect call */
    }

loc_004E44CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E44EB; /* je: equal / zero */

loc_004E44D1: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004E44D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E44D5u); } /* indirect call */
    }

loc_004E44D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E44EB; /* je: equal / zero */

loc_004E44DC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004E44E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E44E0u); } /* indirect call */
    }

loc_004E44E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4403; /* je: equal / zero */

loc_004E44EB: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E44F4u); RECOMP_ABI_CALL(0x004E3A93u, sub_004E3A93); /* call 0x004E3A93 */

loc_004E44F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4541; /* je: equal / zero */

loc_004E44F8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E44FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E44FCu); } /* indirect call */
    }

loc_004E44FF: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4507u); RECOMP_ABI_CALL(0x004E41F9u, sub_004E41F9); /* call 0x004E41F9 */

loc_004E4507: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4539; /* jne: not equal / not zero */

loc_004E450B: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 0x10;
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4541; /* jbe: below or equal (unsigned <=) */

loc_004E4518: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4522u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4522: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x8C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E452Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E452Cu); } /* indirect call */
    }

loc_004E452F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4518; /* jb: below (unsigned <) */

loc_004E4537: ;
    goto loc_004E4541;

loc_004E4539: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4541u); RECOMP_ABI_CALL(0x004E3EF5u, sub_004E3EF5); /* call 0x004E3EF5 */

loc_004E4541: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4545
 * Original: 0x004E4545 - 0x004E4548 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4545(void)
{

loc_004E4545: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4548
 * Original: 0x004E4548 - 0x004E46E5 (413 bytes, 137 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E4548(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4548: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x7C));
    MEM32(ebp + 0x70) = eax;
    PUSH32(esp, 0x004E4568u); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E4568: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x7C);
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E4573u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4570u); } /* indirect call */
    }

loc_004E4573: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -52) = edi;
    MEM32(ebp + -48) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E4645; /* jbe: below or equal (unsigned <=) */

loc_004E458A: ;
    PUSH32(esp, MEM32(ebp + -36));
    ecx = edi + 8;
    PUSH32(esp, 0x004E4595u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E4595: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -56) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004E459Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E459Cu); } /* indirect call */
    }

loc_004E459F: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    MEM32(ebp + -44) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E45D1; /* jbe: below or equal (unsigned <=) */

loc_004E45AB: ;
    eax = ebx + 0x56;
    MEM32(ebp + 0x7C) = eax;

loc_004E45B1: ;
    ecx = MEM32(ebp + -44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E45BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E45B9u); } /* indirect call */
    }

loc_004E45BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4636; /* jne: not equal / not zero */

loc_004E45C0: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -40);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 0xB8;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E45B1; /* jb: below (unsigned <) */

loc_004E45D1: ;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E45E4; /* jne: not equal / not zero */

loc_004E45DA: ;
    MEM32(esi + 0x8C) = 3;

loc_004E45E4: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 0x10;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -44) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E4617; /* jbe: below or equal (unsigned <=) */

loc_004E45F5: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = edi;
    PUSH32(esp, 0x004E45FFu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E45FF: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x8C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E460Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4609u); } /* indirect call */
    }

loc_004E460C: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -44) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E45F5; /* jb: below (unsigned <) */

loc_004E4617: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -56));
    ecx = esi;
    PUSH32(esp, 0x004E4625u); RECOMP_ABI_CALL(0x004E3747u, sub_004E3747); /* call 0x004E3747 */

loc_004E4625: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E4631u); RECOMP_ABI_CALL(0x005EB240u, sub_005EB240); /* call 0x005EB240 */

loc_004E4631: ;
    edi = MEM32(ebp + -52);
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004E4636: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) + 1;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -48) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E458A; /* jb: below (unsigned <) */

loc_004E4645: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E46D3; /* jbe: below or equal (unsigned <=) */

loc_004E4652: ;
    eax = ebx + 0x56;
    MEM32(ebp + 0x7C) = eax;

loc_004E4658: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E468D; /* jbe: below or equal (unsigned <=) */

loc_004E4662: ;
    PUSH32(esp, MEM32(ebp + -40));
    ecx = edi + 8;
    PUSH32(esp, 0x004E466Du); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E466D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004E4674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4671u); } /* indirect call */
    }

loc_004E4674: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x7C));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004E467Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E467Bu); } /* indirect call */
    }

loc_004E467E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E46C2; /* jne: not equal / not zero */

loc_004E4682: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -48) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4662; /* jb: below (unsigned <) */

loc_004E468D: ;
    PUSH32(esp, MEM32(ebp + -36));
    ecx = esi;
    PUSH32(esp, 0x004E4697u); RECOMP_ABI_CALL(0x004E3B3Fu, sub_004E3B3F); /* call 0x004E3B3F */

loc_004E4697: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004E469Fu); RECOMP_ABI_CALL(0x004E3F89u, sub_004E3F89); /* call 0x004E3F89 */

loc_004E469F: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = esi;
    PUSH32(esp, 0x004E46A9u); RECOMP_ABI_CALL(0x004E41F9u, sub_004E41F9); /* call 0x004E41F9 */

loc_004E46A9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004E46B1u); RECOMP_ABI_CALL(0x004E3EF5u, sub_004E3EF5); /* call 0x004E3EF5 */

loc_004E46B1: ;
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E46BFu); RECOMP_ABI_CALL(0x005EB290u, sub_005EB290); /* call 0x005EB290 */

loc_004E46BF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E46C2: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) + 1;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 0xB8;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4658; /* jb: below (unsigned <) */

loc_004E46D3: ;
    ecx = MEM32(ebp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x004E46DEu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E46DE: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E454D
 * Original: 0x004E454D - 0x004E46E5 (408 bytes, 135 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E454D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E454D: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x7C));
    MEM32(ebp + 0x70) = eax;
    PUSH32(esp, 0x004E4568u); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E4568: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x7C);
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E4573u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4570u); } /* indirect call */
    }

loc_004E4573: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -52) = edi;
    MEM32(ebp + -48) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E4645; /* jbe: below or equal (unsigned <=) */

loc_004E458A: ;
    PUSH32(esp, MEM32(ebp + -36));
    ecx = edi + 8;
    PUSH32(esp, 0x004E4595u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E4595: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -56) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004E459Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E459Cu); } /* indirect call */
    }

loc_004E459F: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    MEM32(ebp + -44) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E45D1; /* jbe: below or equal (unsigned <=) */

loc_004E45AB: ;
    eax = ebx + 0x56;
    MEM32(ebp + 0x7C) = eax;

loc_004E45B1: ;
    ecx = MEM32(ebp + -44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E45BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E45B9u); } /* indirect call */
    }

loc_004E45BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4636; /* jne: not equal / not zero */

loc_004E45C0: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -40);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 0xB8;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E45B1; /* jb: below (unsigned <) */

loc_004E45D1: ;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E45E4; /* jne: not equal / not zero */

loc_004E45DA: ;
    MEM32(esi + 0x8C) = 3;

loc_004E45E4: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 0x10;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -44) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E4617; /* jbe: below or equal (unsigned <=) */

loc_004E45F5: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = edi;
    PUSH32(esp, 0x004E45FFu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E45FF: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x8C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E460Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4609u); } /* indirect call */
    }

loc_004E460C: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -44) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E45F5; /* jb: below (unsigned <) */

loc_004E4617: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -56));
    ecx = esi;
    PUSH32(esp, 0x004E4625u); RECOMP_ABI_CALL(0x004E3747u, sub_004E3747); /* call 0x004E3747 */

loc_004E4625: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E4631u); RECOMP_ABI_CALL(0x005EB240u, sub_005EB240); /* call 0x005EB240 */

loc_004E4631: ;
    edi = MEM32(ebp + -52);
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004E4636: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) + 1;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -48) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E458A; /* jb: below (unsigned <) */

loc_004E4645: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E46D3; /* jbe: below or equal (unsigned <=) */

loc_004E4652: ;
    eax = ebx + 0x56;
    MEM32(ebp + 0x7C) = eax;

loc_004E4658: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E468D; /* jbe: below or equal (unsigned <=) */

loc_004E4662: ;
    PUSH32(esp, MEM32(ebp + -40));
    ecx = edi + 8;
    PUSH32(esp, 0x004E466Du); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E466D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004E4674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4671u); } /* indirect call */
    }

loc_004E4674: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x7C));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004E467Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E467Bu); } /* indirect call */
    }

loc_004E467E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E46C2; /* jne: not equal / not zero */

loc_004E4682: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -48) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4662; /* jb: below (unsigned <) */

loc_004E468D: ;
    PUSH32(esp, MEM32(ebp + -36));
    ecx = esi;
    PUSH32(esp, 0x004E4697u); RECOMP_ABI_CALL(0x004E3B3Fu, sub_004E3B3F); /* call 0x004E3B3F */

loc_004E4697: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004E469Fu); RECOMP_ABI_CALL(0x004E3F89u, sub_004E3F89); /* call 0x004E3F89 */

loc_004E469F: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = esi;
    PUSH32(esp, 0x004E46A9u); RECOMP_ABI_CALL(0x004E41F9u, sub_004E41F9); /* call 0x004E41F9 */

loc_004E46A9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004E46B1u); RECOMP_ABI_CALL(0x004E3EF5u, sub_004E3EF5); /* call 0x004E3EF5 */

loc_004E46B1: ;
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E46BFu); RECOMP_ABI_CALL(0x005EB290u, sub_005EB290); /* call 0x005EB290 */

loc_004E46BF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E46C2: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) + 1;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 0xB8;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4658; /* jb: below (unsigned <) */

loc_004E46D3: ;
    ecx = MEM32(ebp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x004E46DEu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E46DE: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E46E5
 * Original: 0x004E46E5 - 0x004E475C (119 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E46E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E46E5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x004E46F0u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E46F0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E46F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E46F4u); } /* indirect call */
    }

loc_004E46F7: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004E4704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4701u); } /* indirect call */
    }

loc_004E4704: ;
    edx = MEM32(eax);
    ebx = MEM32(edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E470Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E470Au); } /* indirect call */
    }

loc_004E470D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x004E4713u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4710u); } /* indirect call */
    }

loc_004E4713: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4724; /* jne: not equal / not zero */

loc_004E4719: ;
    ecx = esi;
    PUSH32(esp, 0x004E4720u); RECOMP_ABI_CALL(0x004BC073u, sub_004BC073); /* call 0x004BC073 */

loc_004E4720: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4755; /* je: equal / zero */

loc_004E4724: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x004E472Cu); RECOMP_ABI_CALL(0x004E3E35u, sub_004E3E35); /* call 0x004E3E35 */

loc_004E472C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x74797065);
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, 0x004E473Fu); RECOMP_ABI_CALL(0x005EB550u, sub_005EB550); /* call 0x005EB550 */

loc_004E473F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = ebp;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004E4750; /* je: equal / zero */

loc_004E4749: ;
    PUSH32(esp, 0x004E474Eu); RECOMP_ABI_CALL(0x004E3D43u, sub_004E3D43); /* call 0x004E3D43 */

loc_004E474E: ;
    goto loc_004E4755;

loc_004E4750: ;
    PUSH32(esp, 0x004E4755u); RECOMP_ABI_CALL(0x004E3DBCu, sub_004E3DBC); /* call 0x004E3DBC */

loc_004E4755: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4749
 * Original: 0x004E4749 - 0x004E475C (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4749(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4749: ;
    PUSH32(esp, 0x004E474Eu); RECOMP_ABI_CALL(0x004E3D43u, sub_004E3D43); /* call 0x004E3D43 */

loc_004E474E: ;
    goto loc_004E4755;

    PUSH32(esp, 0x004E4755u); RECOMP_ABI_CALL(0x004E3DBCu, sub_004E3DBC); /* call 0x004E3DBC */

loc_004E4755: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E475C
 * Original: 0x004E475C - 0x004E47DC (128 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E475C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E475C: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_004E4782; /* jbe: below or equal (unsigned <=) */

loc_004E4767: ;
    edi = esi + 0x34;

loc_004E476A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004E4773u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E4773: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004E477Bu); RECOMP_ABI_CALL(0x004E3EF5u, sub_004E3EF5); /* call 0x004E3EF5 */

loc_004E477B: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E476A; /* ja: above (unsigned >) */

loc_004E4782: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E47A4; /* jbe: below or equal (unsigned <=) */

loc_004E4789: ;
    edi = esi + 0x5C;

loc_004E478C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004E4795u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E4795: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004E479Du); RECOMP_ABI_CALL(0x004E3F89u, sub_004E3F89); /* call 0x004E3F89 */

loc_004E479D: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E478C; /* ja: above (unsigned >) */

loc_004E47A4: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E47ACu); RECOMP_ABI_CALL(0x005EB300u, sub_005EB300); /* call 0x005EB300 */

loc_004E47AC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x74797065);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E47BFu); RECOMP_ABI_CALL(0x005EB550u, sub_005EB550); /* call 0x005EB550 */

loc_004E47BF: ;
    PUSH32(esp, 0x004E47C4u); RECOMP_ABI_CALL(0x004551E0u, sub_004551E0); /* call 0x004551E0 */

loc_004E47C4: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E47CEu); RECOMP_ABI_CALL(0x00455400u, sub_00455400); /* call 0x00455400 */

loc_004E47CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E47D6u); RECOMP_ABI_CALL(0x00455410u, sub_00455410); /* call 0x00455410 */

loc_004E47D6: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E47DC
 * Original: 0x004E47DC - 0x004E480B (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E47DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E47DC: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E47F3; /* jne: not equal / not zero */

loc_004E47E7: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x004E47F1u); RECOMP_ABI_CALL(0x004E438Eu, sub_004E438E); /* call 0x004E438E */

loc_004E47F1: ;
    goto loc_004E4802;

loc_004E47F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4802; /* jne: not equal / not zero */

loc_004E47F8: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x004E4802u); RECOMP_ABI_CALL(0x004E427Eu, sub_004E427E); /* call 0x004E427E */

loc_004E4802: ;
    ecx = MEM32(esp + 0xC);
    g_seh_ebp = ebp; sub_004E3C0F(); return; /* tail jmp 0x004E3C0F */

}

/**
 * sub_004E480B
 * Original: 0x004E480B - 0x004E489D (146 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E480B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E480B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E4821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E481Eu); } /* indirect call */
    }

loc_004E4821: ;
    edi = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4859; /* jbe: below or equal (unsigned <=) */

loc_004E482A: ;
    ebp = eax + 8;

loc_004E482D: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x004E4835u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E4835: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004E483Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4839u); } /* indirect call */
    }

loc_004E483C: ;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004E4850u); RECOMP_ABI_CALL(0x004AEE33u, sub_004AEE33); /* call 0x004AEE33 */

loc_004E4850: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E482D; /* jb: below (unsigned <) */

loc_004E4855: ;
    ebp = MEM32(esp + 0x10);

loc_004E4859: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E4861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E485Eu); } /* indirect call */
    }

loc_004E4861: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E488D; /* jne: not equal / not zero */

loc_004E4865: ;
    PUSH32(esp, 0x004E486Au); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E486A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004E4871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E486Eu); } /* indirect call */
    }

loc_004E4871: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4883; /* je: equal / zero */

loc_004E4876: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E487Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E487Au); } /* indirect call */
    }

loc_004E487D: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4895; /* jbe: below or equal (unsigned <=) */

loc_004E4883: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x004E488Bu); RECOMP_ABI_CALL(0x004E46E5u, sub_004E46E5); /* call 0x004E46E5 */

loc_004E488B: ;
    goto loc_004E4895;

loc_004E488D: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x004E4895u); RECOMP_ABI_CALL(0x004E4548u, sub_004E4548); /* call 0x004E4548 */

loc_004E4895: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E489D
 * Original: 0x004E489D - 0x004E48D8 (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E489D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E489D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004E48A6u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E48A6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004E48ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E48AAu); } /* indirect call */
    }

loc_004E48AD: ;
    PUSH32(esp, 0x696E676D);
    edi = eax;
    PUSH32(esp, 0x004E48B9u); RECOMP_ABI_CALL(0x004580C0u, sub_004580C0); /* call 0x004580C0 */

loc_004E48B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4E47DC);
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E48CBu); RECOMP_ABI_CALL(0x005EB7C0u, sub_005EB7C0); /* call 0x005EB7C0 */

loc_004E48CB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x7C) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004580E0(); return; /* tail jmp 0x004580E0 */

}

/**
 * sub_004E48D8
 * Original: 0x004E48D8 - 0x004E497E (166 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E48D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E48D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004E48E3u); RECOMP_ABI_CALL(0x004E7154u, sub_004E7154); /* call 0x004E7154 */

loc_004E48E3: ;
    PUSH32(esp, 0x004E48E8u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E48E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004E48F5u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004E48F5: ;
    ebx = esi + 8;
    ecx = ebx;
    PUSH32(esp, 0x004E48FFu); RECOMP_ABI_CALL(0x004E36E1u, sub_004E36E1); /* call 0x004E36E1 */

loc_004E48FF: ;
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x004E4909u); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004E4909: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    MEM32(esi) = 0x86CDE0;
    MEM32(ebx) = 0x86CDC0;
    MEM32(edi) = 0x86CDB4;
    PUSH32(esp, 0x004E4923u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E4923: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004E4931u); RECOMP_ABI_CALL(0x004DED8Eu, sub_004DED8E); /* call 0x004DED8E */

loc_004E4931: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E4937u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E4937: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0x54;
    PUSH32(esp, 0x004E4941u); RECOMP_ABI_CALL(0x004DEE28u, sub_004DEE28); /* call 0x004DEE28 */

loc_004E4941: ;
    MEM32(esi + 0x7C) = ebp;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebp;
    MEM32(esi + 0x8C) = ebp;
    ecx = esi;
    MEM32(esi + 0x90) = ebp;
    PUSH32(esp, 0x004E4963u); RECOMP_ABI_CALL(0x004E489Du, sub_004E489D); /* call 0x004E489D */

loc_004E4963: ;
    ecx = esi;
    PUSH32(esp, 0x004E496Au); RECOMP_ABI_CALL(0x004E3C5Du, sub_004E3C5D); /* call 0x004E3C5D */

loc_004E496A: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E4975u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4973u); } /* indirect call */
    }

loc_004E4975: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4950
 * Original: 0x004E4950 - 0x004E497E (46 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4950: ;
    MEM32(esi + 0x8C) = ebp;
    ecx = esi;
    MEM32(esi + 0x90) = ebp;
    PUSH32(esp, 0x004E4963u); RECOMP_ABI_CALL(0x004E489Du, sub_004E489D); /* call 0x004E489D */

loc_004E4963: ;
    ecx = esi;
    PUSH32(esp, 0x004E496Au); RECOMP_ABI_CALL(0x004E3C5Du, sub_004E3C5D); /* call 0x004E3C5D */

loc_004E496A: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E4975u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4973u); } /* indirect call */
    }

loc_004E4975: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E497E
 * Original: 0x004E497E - 0x004E4982 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E497E(void)
{

loc_004E497E: ;
    eax = ecx + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_004E4982
 * Original: 0x004E4982 - 0x004E4989 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4982(void)
{

loc_004E4982: ;
    eax = MEM32(ecx + 0x8C);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4989
 * Original: 0x004E4989 - 0x004E4991 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4989(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4989: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E4A5B(); return; /* tail jmp 0x004E4A5B */

}

/**
 * sub_004E4991
 * Original: 0x004E4991 - 0x004E4999 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4991(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4991: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E4A5B(); return; /* tail jmp 0x004E4A5B */

}

/**
 * sub_004E4999
 * Original: 0x004E4999 - 0x004E49A0 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4999(void)
{

loc_004E4999: ;
    eax = MEM32(ecx + 0x90);
    esp += 4; return; /* ret */

}

/**
 * sub_004E49A0
 * Original: 0x004E49A0 - 0x004E4A27 (135 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E49A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E49A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    MEM32(esi) = 0x86CDE0;
    ebx = esi + 8;
    MEM32(ebx) = 0x86CDC0;
    MEM32(edi) = 0x86CDB4;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E49C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E49C6u); } /* indirect call */
    }

loc_004E49C9: ;
    ecx = esi;
    PUSH32(esp, 0x004E49D0u); RECOMP_ABI_CALL(0x004E475Cu, sub_004E475C); /* call 0x004E475C */

loc_004E49D0: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0x004E49D8u); RECOMP_ABI_CALL(0x005EB930u, sub_005EB930); /* call 0x005EB930 */

loc_004E49D8: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E49E8; /* je: equal / zero */

loc_004E49E3: ;
    PUSH32(esp, 0x004E49E8u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E49E8: ;
    ecx = MEM32(esi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E49F7; /* je: equal / zero */

loc_004E49F2: ;
    PUSH32(esp, 0x004E49F7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E49F7: ;
    ecx = esi + 0x54;
    PUSH32(esp, 0x004E49FFu); RECOMP_ABI_CALL(0x004E1B78u, sub_004E1B78); /* call 0x004E1B78 */

loc_004E49FF: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004E4A07u); RECOMP_ABI_CALL(0x004E1B54u, sub_004E1B54); /* call 0x004E1B54 */

loc_004E4A07: ;
    ecx = edi;
    PUSH32(esp, 0x004E4A0Eu); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004E4A0E: ;
    ecx = ebx;
    PUSH32(esp, 0x004E4A15u); RECOMP_ABI_CALL(0x004E36EAu, sub_004E36EA); /* call 0x004E36EA */

loc_004E4A15: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x004E4A1Du); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004E4A1D: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004E7166(); return; /* tail jmp 0x004E7166 */

}

/**
 * sub_004E4A27
 * Original: 0x004E4A27 - 0x004E4A53 (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4A27(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4A27: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4A2Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E4A2F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E4A36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4A33u); } /* indirect call */
    }

loc_004E4A36: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004E4A3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4A3Au); } /* indirect call */
    }

loc_004E4A3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4A4F; /* jne: not equal / not zero */

loc_004E4A43: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi + -8;
    PUSH32(esp, 0x004E4A4Fu); RECOMP_ABI_CALL(0x004E480Bu, sub_004E480B); /* call 0x004E480B */

loc_004E4A4F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4A53
 * Original: 0x004E4A53 - 0x004E4A5B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4A53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4A53: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004E480B(); return; /* tail jmp 0x004E480B */

}

/**
 * sub_004E4A5B
 * Original: 0x004E4A5B - 0x004E4A77 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4A5B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4A5B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4A63u); RECOMP_ABI_CALL(0x004E49A0u, sub_004E49A0); /* call 0x004E49A0 */

loc_004E4A63: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E4A71; /* je: equal / zero */

loc_004E4A6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E4A70u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E4A70: ;
    POP32(esp, ecx);

loc_004E4A71: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4A77
 * Original: 0x004E4A77 - 0x004E4A91 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4A77(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4A77: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4A7Fu); RECOMP_ABI_CALL(0x004E7193u, sub_004E7193); /* call 0x004E7193 */

loc_004E4A7F: ;
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x86CE00;
    MEM8(esi + 0x60) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4A9C
 * Original: 0x004E4A9C - 0x004E4ABE (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4A9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4A9C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CE00;
    PUSH32(esp, 0x004E4AAAu); RECOMP_ABI_CALL(0x004E71DBu, sub_004E71DB); /* call 0x004E71DB */

loc_004E4AAA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E4AB8; /* je: equal / zero */

loc_004E4AB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E4AB7u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E4AB7: ;
    POP32(esp, ecx);

loc_004E4AB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4ABE
 * Original: 0x004E4ABE - 0x004E4AFC (62 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4ABE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4ABE: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4AD3; /* jne: not equal / not zero */

loc_004E4AC6: ;
    eax = MEM32(esp + 8);
    MEM8(ecx + 0x60) = 1;
    MEM32(ecx + 0x64) = eax;
    goto loc_004E4AF8;

loc_004E4AD3: ;
    PUSH32(esp, esi);
    esi = ecx + 8;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4AF6; /* jbe: below or equal (unsigned <=) */

loc_004E4ADF: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004E4AE7u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4AE7: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E4AF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4AEFu); } /* indirect call */
    }

loc_004E4AF1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4ADF; /* jb: below (unsigned <) */

loc_004E4AF6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004E4AF8: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4AFC
 * Original: 0x004E4AFC - 0x004E4B56 (90 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4AFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4AFC: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x60)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x60), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4B54; /* je: equal / zero */

loc_004E4B05: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4B53; /* je: equal / zero */

loc_004E4B0D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 8;
    MEM8(edi + 0x60) = 0;
    ebx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4B32; /* jbe: below or equal (unsigned <=) */

loc_004E4B1D: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x004E4B25u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4B25: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E4B2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4B2Bu); } /* indirect call */
    }

loc_004E4B2D: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4B1D; /* jb: below (unsigned <) */

loc_004E4B32: ;
    ebp = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4B51; /* jbe: below or equal (unsigned <=) */

loc_004E4B3B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004E4B43u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4B43: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x64));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E4B4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4B4Au); } /* indirect call */
    }

loc_004E4B4C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4B3B; /* jb: below (unsigned <) */

loc_004E4B51: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004E4B53: ;
    POP32(esp, ebp);

loc_004E4B54: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4B56
 * Original: 0x004E4B56 - 0x004E4B7C (38 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4B56(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4B56: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x24;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4B78; /* jbe: below or equal (unsigned <=) */

loc_004E4B65: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E4B6Du); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4B6D: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E4B73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4B71u); } /* indirect call */
    }

loc_004E4B73: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4B65; /* jb: below (unsigned <) */

loc_004E4B78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4B7C
 * Original: 0x004E4B7C - 0x004E4BAE (50 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E4B7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4B7C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4BA8; /* jne: not equal / not zero */

loc_004E4B87: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ebp + 0x40;
    ebx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4BA6; /* jbe: below or equal (unsigned <=) */

loc_004E4B93: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E4B9Bu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4B9B: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E4BA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4B9Fu); } /* indirect call */
    }

loc_004E4BA1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4B93; /* jb: below (unsigned <) */

loc_004E4BA6: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004E4BA8: ;
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4BAE
 * Original: 0x004E4BAE - 0x004E4BDA (44 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4BAE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4BAE: ;
    MEM32(ecx + 0x5C) = MEM32(ecx + 0x5C) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004E4BD9; /* jne: not equal / not zero */

loc_004E4BB3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x40;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E4BD6; /* jbe: below or equal (unsigned <=) */

loc_004E4BC2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E4BCAu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E4BCA: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E4BD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4BCEu); } /* indirect call */
    }

loc_004E4BD1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E4BC2; /* jb: below (unsigned <) */

loc_004E4BD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004E4BD9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004E4BDA
 * Original: 0x004E4BDA - 0x004E4BE1 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4BDA(void)
{

loc_004E4BDA: ;
    MEM8(ecx + 0xF) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E4BE1
 * Original: 0x004E4BE1 - 0x004E4BEF (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4BE1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4BE1: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 6 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM8(ecx + 0xF) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E4BEF
 * Original: 0x004E4BEF - 0x004E4C82 (147 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E4BEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4BEF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4BFCu); RECOMP_ABI_CALL(0x004E7220u, sub_004E7220); /* call 0x004E7220 */

loc_004E4BFC: ;
    ebx = esi + 8;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4C06u); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004E4C06: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(esi) = 0x86CE10;
    MEM32(ebx) = 0x86CE04;
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 0x14) = 0;
    MEM8(esi + 0x15) = 0;
    MEM8(esi + 0x16) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E4C2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4C29u); } /* indirect call */
    }

loc_004E4C2C: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4C35u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004E4C35: ;
    edi = eax;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4C3Eu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E4C3E: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004E4C4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4C48u); } /* indirect call */
    }

loc_004E4C4A: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4C57u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E4C57: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E4C65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4C63u); } /* indirect call */
    }

loc_004E4C65: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E4C70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4C6Du); } /* indirect call */
    }

loc_004E4C70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM8(esi + 0x17) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E4C82
 * Original: 0x004E4C82 - 0x004E4C86 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4C82(void)
{

loc_004E4C82: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4C86
 * Original: 0x004E4C86 - 0x004E4CC4 (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4C86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4C86: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x86CE10;
    MEM32(edi) = 0x86CE04;
    PUSH32(esp, 0x004E4C9Eu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E4C9E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E4CA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4CA5u); } /* indirect call */
    }

loc_004E4CA8: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E4CB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4CB1u); } /* indirect call */
    }

loc_004E4CB4: ;
    ecx = edi;
    PUSH32(esp, 0x004E4CBBu); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004E4CBB: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E7232(); return; /* tail jmp 0x004E7232 */

}

/**
 * sub_004E4CC4
 * Original: 0x004E4CC4 - 0x004E4D09 (69 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4CC4(void)
{
    int _flags = 0; /* fallback flag var */
    int _jf_004E4D00 = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4CC4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4CCDu); RECOMP_ABI_CALL(0x004551E0u, sub_004551E0); /* call 0x004551E0 */

loc_004E4CCD: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_004E4CE8; /* jne: not equal / not zero */

loc_004E4CD6: ;
    PUSH32(esp, 0x6D696372);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E4CE1u); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_004E4CE1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _jf_004E4D00 = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_004E4D00;

loc_004E4CE8: ;
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E4CF3u); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_004E4CF3: ;
    ecx = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    _jf_004E4D00 = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_004E4D00: ;
    if (_jf_004E4D00 /* jne: not equal / not zero */) goto loc_004E4D04;

loc_004E4D02: ;
    SET_LO8(ebx, 1);

loc_004E4D04: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4D09
 * Original: 0x004E4D09 - 0x004E4D47 (62 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4D09(void)
{
    int _flags = 0; /* fallback flag var */
    int _jf_004E4D3D = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4D09: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4D11u); RECOMP_ABI_CALL(0x004551E0u, sub_004551E0); /* call 0x004551E0 */

loc_004E4D11: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4D23; /* jne: not equal / not zero */

loc_004E4D17: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E4D1Du); RECOMP_ABI_CALL(0x004553E0u, sub_004553E0); /* call 0x004553E0 */

loc_004E4D1D: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _jf_004E4D3D = (TEST_Z(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_004E4D3D;

loc_004E4D23: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x66726F6D);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E4D30u); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_004E4D30: ;
    ecx = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    _jf_004E4D3D = (TEST_Z(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_004E4D3D: ;
    if (_jf_004E4D3D /* je: equal / zero */) goto loc_004E4D43;

loc_004E4D3F: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004E4D43: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4D47
 * Original: 0x004E4D47 - 0x004E4D50 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4D47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4D47: ;
    eax = MEM32(ecx);
    MEM8(ecx + 0x16) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004E4D50
 * Original: 0x004E4D50 - 0x004E4D55 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4D50(void)
{

loc_004E4D50: ;
    MEM8(ecx + 0x16) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004E4D55
 * Original: 0x004E4D55 - 0x004E4D79 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4D55(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4D55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004E4D5D;

loc_004E4D5D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4D65u); RECOMP_ABI_CALL(0x004E4C86u, sub_004E4C86); /* call 0x004E4C86 */

loc_004E4D65: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E4D73; /* je: equal / zero */

loc_004E4D6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E4D72u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E4D72: ;
    POP32(esp, ecx);

loc_004E4D73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4D5D
 * Original: 0x004E4D5D - 0x004E4D79 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4D5D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4D5D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4D65u); RECOMP_ABI_CALL(0x004E4C86u, sub_004E4C86); /* call 0x004E4C86 */

loc_004E4D65: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E4D73; /* je: equal / zero */

loc_004E4D6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E4D72u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E4D72: ;
    POP32(esp, ecx);

loc_004E4D73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4D79
 * Original: 0x004E4D79 - 0x004E4D99 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4D79(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4D79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x17)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x17), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4D98; /* je: equal / zero */

loc_004E4D80: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, MEM32(ecx + 0xC));
    ecx = eax;
    PUSH32(esp, 0x004E4D98u); RECOMP_ABI_CALL(0x004AE415u, sub_004AE415); /* call 0x004AE415 */

loc_004E4D98: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004E4D99
 * Original: 0x004E4D99 - 0x004E4DD3 (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4D99(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E4D99: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4DA1u); RECOMP_ABI_CALL(0x004551E0u, sub_004551E0); /* call 0x004551E0 */

loc_004E4DA1: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(MEM8(ecx + 0x24)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x24), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4DCF; /* je: equal / zero */

loc_004E4DB3: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004E4DCB; /* jne: not equal / not zero */

loc_004E4DB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E4DBFu); RECOMP_ABI_CALL(0x004553E0u, sub_004553E0); /* call 0x004553E0 */

loc_004E4DBF: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x40));
    SET_LO8(eax, LO8(eax) - 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, ecx);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_004E4DCB: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004E4DCF: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4DD3
 * Original: 0x004E4DD3 - 0x004E4E5B (136 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4DD3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4DD3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4DDCu); RECOMP_ABI_CALL(0x004551E0u, sub_004551E0); /* call 0x004551E0 */

loc_004E4DDC: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E4DE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4DE2u); } /* indirect call */
    }

loc_004E4DE5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4E58; /* jne: not equal / not zero */

loc_004E4DE9: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004E4E3B; /* je: equal / zero */

loc_004E4DF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E4DFEu); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_004E4DFE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6D696372);
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x004E4E0Du); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_004E4E0D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4E1C; /* jne: not equal / not zero */

loc_004E4E14: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4E1C; /* je: equal / zero */

loc_004E4E18: ;
    SET_LO8(ebx, 1);
    goto loc_004E4E1E;

loc_004E4E1C: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004E4E1E: ;
    ecx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ~eax;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E4E31u); RECOMP_ABI_CALL(0x00455410u, sub_00455410); /* call 0x00455410 */

loc_004E4E31: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_004E4E45; /* jne: not equal / not zero */

loc_004E4E38: ;
    PUSH32(esp, edi);
    goto loc_004E4E3D;

loc_004E4E3B: ;
    PUSH32(esp, 0);

loc_004E4E3D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E4E43u); RECOMP_ABI_CALL(0x00455400u, sub_00455400); /* call 0x00455400 */

loc_004E4E43: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004E4E45: ;
    ecx = esi;
    PUSH32(esp, 0x004E4E4Cu); RECOMP_ABI_CALL(0x004E4D79u, sub_004E4D79); /* call 0x004E4D79 */

loc_004E4E4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004E4E58; /* je: equal / zero */

loc_004E4E51: ;
    MEM8(eax + 0x200) = 1;

loc_004E4E58: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4E4F
 * Original: 0x004E4E4F - 0x004E4E5B (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4E4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4E4F: ;
    if (_flags /* je: equal / zero */) goto loc_004E4E58;

loc_004E4E51: ;
    MEM8(eax + 0x200) = 1;

loc_004E4E58: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4E5B
 * Original: 0x004E4E5B - 0x004E4F04 (169 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4E5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4E5B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E4E64u); RECOMP_ABI_CALL(0x004551E0u, sub_004551E0); /* call 0x004551E0 */

loc_004E4E64: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E4E6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4E6Au); } /* indirect call */
    }

loc_004E4E6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4F01; /* je: equal / zero */

loc_004E4E75: ;
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x16), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4F01; /* jne: not equal / not zero */

loc_004E4E7F: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004E4ED7; /* je: equal / zero */

loc_004E4E86: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E4E94u); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_004E4E94: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6D696372);
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x004E4EA3u); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_004E4EA3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E4EB2; /* jne: not equal / not zero */

loc_004E4EAA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4EB2; /* je: equal / zero */

loc_004E4EAE: ;
    SET_LO8(ebx, 1);
    goto loc_004E4EB4;

loc_004E4EB2: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004E4EB4: ;
    ecx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E4EC5u); RECOMP_ABI_CALL(0x00455410u, sub_00455410); /* call 0x00455410 */

loc_004E4EC5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_004E4EEE; /* jne: not equal / not zero */

loc_004E4ECC: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E4ED3u); RECOMP_ABI_CALL(0x00455400u, sub_00455400); /* call 0x00455400 */

loc_004E4ED3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_004E4EEE;

loc_004E4ED7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E4EE4u); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_004E4EE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E4EEBu); RECOMP_ABI_CALL(0x00455400u, sub_00455400); /* call 0x00455400 */

loc_004E4EEB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E4EEE: ;
    ecx = esi;
    PUSH32(esp, 0x004E4EF5u); RECOMP_ABI_CALL(0x004E4D79u, sub_004E4D79); /* call 0x004E4D79 */

loc_004E4EF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004E4F01; /* je: equal / zero */

loc_004E4EFA: ;
    MEM8(eax + 0x200) = 1;

loc_004E4F01: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004E4F04
 * Original: 0x004E4F04 - 0x004E4F46 (66 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E4F04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4F04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E4F11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4F0Eu); } /* indirect call */
    }

loc_004E4F11: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E4F1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4F17u); } /* indirect call */
    }

loc_004E4F1A: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), LO8(ebx) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_004E4F27; /* jne: not equal / not zero */

loc_004E4F22: ;
    _fa = (uint32_t)(MEM8(esi + 0x15)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x15), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4F39; /* je: equal / zero */

loc_004E4F27: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E4F2Eu); RECOMP_ABI_CALL(0x004E4D79u, sub_004E4D79); /* call 0x004E4D79 */

loc_004E4F2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E4F39; /* je: equal / zero */

loc_004E4F32: ;
    MEM8(eax + 0x200) = 1;

loc_004E4F39: ;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(esi + 0x14) = LO8(ebx);
    MEM8(esi + 0x15) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E4F46
 * Original: 0x004E4F46 - 0x004E4F4B (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4F46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4F46: ;
    g_seh_ebp = ebp; sub_004E4D79(); return; /* tail jmp 0x004E4D79 */

}

/**
 * sub_004E4F4B
 * Original: 0x004E4F4B - 0x004E4F56 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4F4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4F4B: ;
    ecx = MEM32(0x90E7AC);
    g_seh_ebp = ebp; sub_004DC207(); return; /* tail jmp 0x004DC207 */

}

/**
 * sub_004E4F56
 * Original: 0x004E4F56 - 0x004E5140 (490 bytes, 156 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E4F56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E4F56: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x6C) = ecx;
    PUSH32(esp, 0x004E4F6Cu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E4F6C: ;
    esi = MEM32(ebp + 0x7C);
    PUSH32(esp, MEM32(esi + 0x10));
    ebx = eax;
    ecx = ebp + -28;
    MEM32(ebp + 0x70) = ebx;
    PUSH32(esp, 0x004E4F7Fu); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004E4F7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    ecx = ebp + 0x44;
    PUSH32(esp, 0x004E4F8Au); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004E4F8A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x864264);
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = ebp + 0x44;
    PUSH32(esp, 0x004E4F9Du); RECOMP_ABI_CALL(0x004DDAF9u, sub_004DDAF9); /* call 0x004DDAF9 */

loc_004E4F9D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x864268);
    ecx = ebp + -28;
    PUSH32(esp, 0x004E4FABu); RECOMP_ABI_CALL(0x004DD187u, sub_004DD187); /* call 0x004DD187 */

loc_004E4FAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E50B4; /* je: equal / zero */

loc_004E4FB6: ;
    PUSH32(esp, 0x864260);
    ecx = ebp + -28;
    PUSH32(esp, 0x004E4FC3u); RECOMP_ABI_CALL(0x004DD0BEu, sub_004DD0BE); /* call 0x004DD0BE */

loc_004E4FC3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    ecx = ebp + 0x58;
    esi = eax;
    PUSH32(esp, 0x004E4FD0u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004E4FD0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebx = 0x8638F8;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004E4FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4FDBu); } /* indirect call */
    }

loc_004E4FDE: ;
    PUSH32(esp, eax);
    ecx = ebp + 0x58;
    PUSH32(esp, 0x004E4FE7u); RECOMP_ABI_CALL(0x004DDAF9u, sub_004DDAF9); /* call 0x004DDAF9 */

loc_004E4FE7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = 0x830C60;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E4FF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4FF2u); } /* indirect call */
    }

loc_004E4FF5: ;
    PUSH32(esp, 0x864208);
    ecx = ebp + 0x58;
    MEM32(ebp + 0x7C) = eax;
    PUSH32(esp, 0x004E5005u); RECOMP_ABI_CALL(0x004DDA6Bu, sub_004DDA6B); /* call 0x004DDA6B */

loc_004E5005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E511E; /* jne: not equal / not zero */

loc_004E500D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = ebp + 4;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004E501Du); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004E501D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = ebp + 0x24;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x004E502Bu); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004E502B: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = ebp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E5039u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004E5039: ;
    PUSH32(esp, 0x8641E0);
    PUSH32(esp, ebx);
    ecx = ebp + 4;
    PUSH32(esp, 0x004E5047u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E5047: ;
    PUSH32(esp, 0x1004020);
    PUSH32(esp, 0x864250);
    ecx = ebp + 0x24;
    PUSH32(esp, 0x004E5059u); RECOMP_ABI_CALL(0x004DD1A3u, sub_004DD1A3); /* call 0x004DD1A3 */

loc_004E5059: ;
    PUSH32(esp, MEM32(ebp + 0x4C));
    ecx = ebp + 0x24;
    PUSH32(esp, 0x864248);
    PUSH32(esp, 0x004E5069u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E5069: ;
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x863900);
    ecx = ebp + 0x24;
    PUSH32(esp, 0x004E507Au); RECOMP_ABI_CALL(0x004DD12Du, sub_004DD12D); /* call 0x004DD12D */

loc_004E507A: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    edi = MEM32(eax + 8);
    eax = MEM32(ebp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = ebp + 0x24;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004E5093u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5090u); } /* indirect call */
    }

loc_004E5093: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6D657367);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E509Fu); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004E509F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + 0x24;
    PUSH32(esp, 0x004E50AAu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E50AA: ;
    ecx = ebp + 4;
    PUSH32(esp, 0x004E50B2u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E50B2: ;
    goto loc_004E511E;

loc_004E50B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E5126; /* je: equal / zero */

loc_004E50B8: ;
    eax = MEM32(ebp + 0x6C);
    ecx = MEM32(eax + 0x69C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E50C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E50C3u); } /* indirect call */
    }

loc_004E50C6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x865224);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E50D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E50D1u); } /* indirect call */
    }

loc_004E50D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5126; /* je: equal / zero */

loc_004E50D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x100);
    ecx = ebp + 0x58;
    PUSH32(esp, 0x004E50E6u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004E50E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x864260);
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = ebp + 0x58;
    PUSH32(esp, 0x004E50F7u); RECOMP_ABI_CALL(0x004DDAF9u, sub_004DDAF9); /* call 0x004DDAF9 */

loc_004E50F7: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, MEM32(ebp + 0x4C));
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, 0x004E5110u); RECOMP_ABI_CALL(0x004E41F9u, sub_004E41F9); /* call 0x004E41F9 */

loc_004E5110: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E511E; /* je: equal / zero */

loc_004E5114: ;
    PUSH32(esp, MEM32(ebp + 0x60));
    ecx = eax;
    PUSH32(esp, 0x004E511Eu); RECOMP_ABI_CALL(0x004E70DFu, sub_004E70DF); /* call 0x004E70DF */

loc_004E511E: ;
    ecx = ebp + 0x58;
    PUSH32(esp, 0x004E5126u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004E5126: ;
    ecx = ebp + 0x44;
    PUSH32(esp, 0x004E512Eu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004E512E: ;
    ecx = ebp + -28;
    PUSH32(esp, 0x004E5136u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E5136: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E4F57
 * Original: 0x004E4F57 - 0x004E5140 (489 bytes, 155 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4F57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E4F57: ;
    ebp = esp + -116;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x6C) = ecx;
    PUSH32(esp, 0x004E4F6Cu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E4F6C: ;
    esi = MEM32(ebp + 0x7C);
    PUSH32(esp, MEM32(esi + 0x10));
    ebx = eax;
    ecx = ebp + -28;
    MEM32(ebp + 0x70) = ebx;
    PUSH32(esp, 0x004E4F7Fu); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004E4F7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    ecx = ebp + 0x44;
    PUSH32(esp, 0x004E4F8Au); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004E4F8A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x864264);
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = ebp + 0x44;
    PUSH32(esp, 0x004E4F9Du); RECOMP_ABI_CALL(0x004DDAF9u, sub_004DDAF9); /* call 0x004DDAF9 */

loc_004E4F9D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x864268);
    ecx = ebp + -28;
    PUSH32(esp, 0x004E4FABu); RECOMP_ABI_CALL(0x004DD187u, sub_004DD187); /* call 0x004DD187 */

loc_004E4FAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E50B4; /* je: equal / zero */

loc_004E4FB6: ;
    PUSH32(esp, 0x864260);
    ecx = ebp + -28;
    PUSH32(esp, 0x004E4FC3u); RECOMP_ABI_CALL(0x004DD0BEu, sub_004DD0BE); /* call 0x004DD0BE */

loc_004E4FC3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    ecx = ebp + 0x58;
    esi = eax;
    PUSH32(esp, 0x004E4FD0u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004E4FD0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebx = 0x8638F8;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004E4FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4FDBu); } /* indirect call */
    }

loc_004E4FDE: ;
    PUSH32(esp, eax);
    ecx = ebp + 0x58;
    PUSH32(esp, 0x004E4FE7u); RECOMP_ABI_CALL(0x004DDAF9u, sub_004DDAF9); /* call 0x004DDAF9 */

loc_004E4FE7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = 0x830C60;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E4FF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E4FF2u); } /* indirect call */
    }

loc_004E4FF5: ;
    PUSH32(esp, 0x864208);
    ecx = ebp + 0x58;
    MEM32(ebp + 0x7C) = eax;
    PUSH32(esp, 0x004E5005u); RECOMP_ABI_CALL(0x004DDA6Bu, sub_004DDA6B); /* call 0x004DDA6B */

loc_004E5005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E511E; /* jne: not equal / not zero */

loc_004E500D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = ebp + 4;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004E501Du); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004E501D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = ebp + 0x24;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x004E502Bu); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004E502B: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = ebp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E5039u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004E5039: ;
    PUSH32(esp, 0x8641E0);
    PUSH32(esp, ebx);
    ecx = ebp + 4;
    PUSH32(esp, 0x004E5047u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E5047: ;
    PUSH32(esp, 0x1004020);
    PUSH32(esp, 0x864250);
    ecx = ebp + 0x24;
    PUSH32(esp, 0x004E5059u); RECOMP_ABI_CALL(0x004DD1A3u, sub_004DD1A3); /* call 0x004DD1A3 */

loc_004E5059: ;
    PUSH32(esp, MEM32(ebp + 0x4C));
    ecx = ebp + 0x24;
    PUSH32(esp, 0x864248);
    PUSH32(esp, 0x004E5069u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E5069: ;
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x863900);
    ecx = ebp + 0x24;
    PUSH32(esp, 0x004E507Au); RECOMP_ABI_CALL(0x004DD12Du, sub_004DD12D); /* call 0x004DD12D */

loc_004E507A: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    edi = MEM32(eax + 8);
    eax = MEM32(ebp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = ebp + 0x24;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004E5093u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5090u); } /* indirect call */
    }

loc_004E5093: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6D657367);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E509Fu); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004E509F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + 0x24;
    PUSH32(esp, 0x004E50AAu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E50AA: ;
    ecx = ebp + 4;
    PUSH32(esp, 0x004E50B2u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E50B2: ;
    goto loc_004E511E;

loc_004E50B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E5126; /* je: equal / zero */

loc_004E50B8: ;
    eax = MEM32(ebp + 0x6C);
    ecx = MEM32(eax + 0x69C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E50C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E50C3u); } /* indirect call */
    }

loc_004E50C6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x865224);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E50D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E50D1u); } /* indirect call */
    }

loc_004E50D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5126; /* je: equal / zero */

loc_004E50D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x100);
    ecx = ebp + 0x58;
    PUSH32(esp, 0x004E50E6u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004E50E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x864260);
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = ebp + 0x58;
    PUSH32(esp, 0x004E50F7u); RECOMP_ABI_CALL(0x004DDAF9u, sub_004DDAF9); /* call 0x004DDAF9 */

loc_004E50F7: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, MEM32(ebp + 0x4C));
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, 0x004E5110u); RECOMP_ABI_CALL(0x004E41F9u, sub_004E41F9); /* call 0x004E41F9 */

loc_004E5110: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E511E; /* je: equal / zero */

loc_004E5114: ;
    PUSH32(esp, MEM32(ebp + 0x60));
    ecx = eax;
    PUSH32(esp, 0x004E511Eu); RECOMP_ABI_CALL(0x004E70DFu, sub_004E70DF); /* call 0x004E70DF */

loc_004E511E: ;
    ecx = ebp + 0x58;
    PUSH32(esp, 0x004E5126u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004E5126: ;
    ecx = ebp + 0x44;
    PUSH32(esp, 0x004E512Eu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004E512E: ;
    ecx = ebp + -28;
    PUSH32(esp, 0x004E5136u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E5136: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E5140
 * Original: 0x004E5140 - 0x004E5202 (194 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E5140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5151u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E5151: ;
    edi = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004E515Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5159u); } /* indirect call */
    }

loc_004E515C: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E516Au); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004E516A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E5171u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E516Eu); } /* indirect call */
    }

loc_004E5171: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E5178u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5175u); } /* indirect call */
    }

loc_004E5178: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86CE58);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5186u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E5186: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x830C7C);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E519Au); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004E519A: ;
    PUSH32(esp, MEM32(esi + 0x16C));
    ecx = ebp + -32;
    PUSH32(esp, 0x86CE50);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E51ADu); RECOMP_ABI_CALL(0x004DD15Eu, sub_004DD15E); /* call 0x004DD15E */

loc_004E51AD: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x170;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x86CE48);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E51C1u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E51C1: ;
    PUSH32(esp, edi);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E51CAu); RECOMP_ABI_CALL(0x004DCFFBu, sub_004DCFFB); /* call 0x004DCFFB */

loc_004E51CA: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    esi = MEM32(eax + 8);
    eax = MEM32(ebp + -32);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004E51E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E51E2u); } /* indirect call */
    }

loc_004E51E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x72616E6B);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E51F1u); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004E51F1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E51FCu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E51FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E5202
 * Original: 0x004E5202 - 0x004E5266 (100 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5202(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E5202: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x6A0));
    MEM32(esi) = 0x86CE60;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004E5224u); RECOMP_ABI_CALL(0x005E1F80u, sub_005E1F80); /* call 0x005E1F80 */

loc_004E5224: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x69C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5235; /* je: equal / zero */

loc_004E5230: ;
    PUSH32(esp, 0x004E5235u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E5235: ;
    ecx = MEM32(esi + 0x698);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5244; /* je: equal / zero */

loc_004E523F: ;
    PUSH32(esp, 0x004E5244u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E5244: ;
    ecx = MEM32(esi + 0x694);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5253; /* je: equal / zero */

loc_004E524E: ;
    PUSH32(esp, 0x004E5253u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E5253: ;
    ecx = esi + 0x66C;
    PUSH32(esp, 0x004E525Eu); RECOMP_ABI_CALL(0x004E1388u, sub_004E1388); /* call 0x004E1388 */

loc_004E525E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E7271(); return; /* tail jmp 0x004E7271 */

}

/**
 * sub_004E5266
 * Original: 0x004E5266 - 0x004E526A (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5266(void)
{

loc_004E5266: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_004E526A
 * Original: 0x004E526A - 0x004E526E (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E526A(void)
{

loc_004E526A: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004E526E
 * Original: 0x004E526E - 0x004E5272 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E526E(void)
{

loc_004E526E: ;
    eax = ecx + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_004E5272
 * Original: 0x004E5272 - 0x004E5279 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5272(void)
{

loc_004E5272: ;
    eax = ecx + 0x66C;
    esp += 4; return; /* ret */

}

/**
 * sub_004E5279
 * Original: 0x004E5279 - 0x004E5280 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5279(void)
{

loc_004E5279: ;
    eax = MEM32(ecx + 0x694);
    esp += 4; return; /* ret */

}

/**
 * sub_004E5280
 * Original: 0x004E5280 - 0x004E5287 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5280(void)
{

loc_004E5280: ;
    eax = MEM32(ecx + 0x698);
    esp += 4; return; /* ret */

}

/**
 * sub_004E5287
 * Original: 0x004E5287 - 0x004E528E (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5287(void)
{

loc_004E5287: ;
    eax = MEM32(ecx + 0x69C);
    esp += 4; return; /* ret */

}

/**
 * sub_004E528E
 * Original: 0x004E528E - 0x004E52B4 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E528E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E528E: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(eax + 0xAC));
    PUSH32(esp, 0x004E52AEu); RECOMP_ABI_CALL(0x005DEE20u, sub_005DEE20); /* call 0x005DEE20 */

loc_004E52AE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E52B4
 * Original: 0x004E52B4 - 0x004E52E6 (50 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E52B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E52B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(0x90E7AC);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(eax + 0x18);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(eax + 0x30);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(eax + 0xAC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E52DFu); RECOMP_ABI_CALL(0x005EC460u, sub_005EC460); /* call 0x005EC460 */

loc_004E52DF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004E52E6
 * Original: 0x004E52E6 - 0x004E536F (137 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E52E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E52E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E52F4u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E52F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1FE);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5302u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004E5302: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E530Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5307u); } /* indirect call */
    }

loc_004E530A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x864248);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5318u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E5318: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -32;
    PUSH32(esp, 0x864250);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5328u); RECOMP_ABI_CALL(0x004DD1A3u, sub_004DD1A3); /* call 0x004DD1A3 */

loc_004E5328: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -32;
    PUSH32(esp, 0x863900);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5338u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E5338: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    esi = MEM32(eax + 8);
    eax = MEM32(ebp + -32);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004E5353u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5350u); } /* indirect call */
    }

loc_004E5353: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6D657367);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E535Fu); RECOMP_ABI_CALL(0x005E20B0u, sub_005E20B0); /* call 0x005E20B0 */

loc_004E535F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E536Au); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E536A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E536F
 * Original: 0x004E536F - 0x004E5396 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E536F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E536F: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5395; /* je: equal / zero */

loc_004E5376: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63686174) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63686174 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E538B; /* je: equal / zero */

loc_004E5384: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70726976) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70726976 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E5395; /* jne: not equal / not zero */

loc_004E538B: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x004E5395u); RECOMP_ABI_CALL(0x004E4F56u, sub_004E4F56); /* call 0x004E4F56 */

loc_004E5395: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004E5396
 * Original: 0x004E5396 - 0x004E554C (438 bytes, 150 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E5396(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5396: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E53A6u); RECOMP_ABI_CALL(0x004E725Fu, sub_004E725F); /* call 0x004E725F */

loc_004E53A6: ;
    edi = MEM32(ebp + 8);
    MEM32(esi) = 0x86CE60;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E53B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E53B3u); } /* indirect call */
    }

loc_004E53B6: ;
    ebx = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E53C0u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E53C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0x66C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E53CDu); RECOMP_ABI_CALL(0x004DDDCCu, sub_004DDDCC); /* call 0x004DDDCC */

loc_004E53CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x694) = eax;
    MEM32(esi + 0x698) = eax;
    MEM32(esi + 0x69C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E53E6u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E53E6: ;
    PUSH32(esp, 0x664);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = eax;
    eax = esi + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E53FAu); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_004E53FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5402u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E5402: ;
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004E540Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5408u); } /* indirect call */
    }

loc_004E540B: ;
    edx = MEM32(eax);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E5416u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5413u); } /* indirect call */
    }

loc_004E5416: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004E5420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E541Du); } /* indirect call */
    }

loc_004E5420: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004E542Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5427u); } /* indirect call */
    }

loc_004E542A: ;
    PUSH32(esp, MEM32(ebp + -4));
    ebx = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E543Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E543A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E544E; /* je: equal / zero */

loc_004E5441: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E544Cu); RECOMP_ABI_CALL(0x004DD485u, sub_004DD485); /* call 0x004DD485 */

loc_004E544C: ;
    goto loc_004E5450;

loc_004E544E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5450: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5456u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E5456: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E545Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E545D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x694;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5469u); RECOMP_ABI_CALL(0x004DBF93u, sub_004DBF93); /* call 0x004DBF93 */

loc_004E5469: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E5470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E546Du); } /* indirect call */
    }

loc_004E5470: ;
    ecx = MEM32(eax + 0x14);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -16) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_004E551E; /* jbe: below or equal (unsigned <=) */

loc_004E5482: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;

loc_004E5488: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5493u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004E5493: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E549Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5499u); } /* indirect call */
    }

loc_004E549C: ;
    PUSH32(esp, MEM32(ebp + -4));
    ebx = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xAC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E54AFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E54AF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E54C0; /* je: equal / zero */

loc_004E54B6: ;
    PUSH32(esp, edi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E54BEu); RECOMP_ABI_CALL(0x004E580Du, sub_004E580D); /* call 0x004E580D */

loc_004E54BE: ;
    goto loc_004E54C2;

loc_004E54C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E54C2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E54C8u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E54C8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E54CFu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E54CF: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = esi + 0x674;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E54DDu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E54DD: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E54E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E54E3u); } /* indirect call */
    }

loc_004E54E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E54F6; /* je: equal / zero */

loc_004E54EA: ;
    PUSH32(esp, edi);
    ecx = esi + 0x698;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E54F6u); RECOMP_ABI_CALL(0x004DECFDu, sub_004DECFD); /* call 0x004DECFD */

loc_004E54F6: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004E54FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E54FCu); } /* indirect call */
    }

loc_004E54FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E550F; /* je: equal / zero */

loc_004E5503: ;
    PUSH32(esp, edi);
    ecx = esi + 0x69C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E550Fu); RECOMP_ABI_CALL(0x004DECFDu, sub_004DECFD); /* call 0x004DECFD */

loc_004E550F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E5488; /* jb: below (unsigned <) */

loc_004E551E: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4E536F);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E553Au); RECOMP_ABI_CALL(0x005E1F20u, sub_005E1F20); /* call 0x005E1F20 */

loc_004E553A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x6A0) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E554C
 * Original: 0x004E554C - 0x004E5568 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E554C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E554C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E5554u); RECOMP_ABI_CALL(0x004E5202u, sub_004E5202); /* call 0x004E5202 */

loc_004E5554: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E5562; /* je: equal / zero */

loc_004E555B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E5561u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E5561: ;
    POP32(esp, ecx);

loc_004E5562: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E5568
 * Original: 0x004E5568 - 0x004E5599 (49 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5568(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E5568: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x98;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E5584; /* jne: not equal / not zero */

loc_004E5578: ;
    edi = esi + 0x94;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E558F; /* je: equal / zero */

loc_004E5584: ;
    eax = MEM32(ecx);
    edx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E558Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E558Au); } /* indirect call */
    }

loc_004E558C: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004E558F: ;
    POP32(esp, edi);
    ecx = esi + -8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

}

/**
 * sub_004E5599
 * Original: 0x004E5599 - 0x004E55C2 (41 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004E5599(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5599: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004E55BD; /* je: equal / zero */

loc_004E55A2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E55B8; /* je: equal / zero */

loc_004E55A5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E55B3; /* je: equal / zero */

loc_004E55A8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E55AF; /* je: equal / zero */

loc_004E55AB: ;
    PUSH32(esp, 4);
    goto loc_004E55B5;

loc_004E55AF: ;
    PUSH32(esp, 3);
    goto loc_004E55B5;

loc_004E55B3: ;
    PUSH32(esp, 2);

loc_004E55B5: ;
    POP32(esp, eax);
    goto loc_004E55BF;

loc_004E55B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004E55BF;

loc_004E55BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E55BF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E55C2
 * Original: 0x004E55C2 - 0x004E55E4 (34 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004E55C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E55C2: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004E55DF; /* je: equal / zero */

loc_004E55CB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E55DA; /* je: equal / zero */

loc_004E55CE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E55D5; /* je: equal / zero */

loc_004E55D1: ;
    PUSH32(esp, 4);
    goto loc_004E55D7;

loc_004E55D5: ;
    PUSH32(esp, 2);

loc_004E55D7: ;
    POP32(esp, eax);
    goto loc_004E55E1;

loc_004E55DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004E55E1;

loc_004E55DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E55E1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E55E4
 * Original: 0x004E55E4 - 0x004E560A (38 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E55E4(void)
{

loc_004E55E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004E55EEu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E55EE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004E55F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E55F2u); } /* indirect call */
    }

loc_004E55F5: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E5600u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E55FDu); } /* indirect call */
    }

loc_004E5600: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 4); PUSH32(esp, 0x004E5606u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5603u); } /* indirect call */
    }

loc_004E5606: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E560A
 * Original: 0x004E560A - 0x004E5669 (95 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E560A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E560A: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x98);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004E5636; /* je: equal / zero */

loc_004E5618: ;
    PUSH32(esp, MEM32(esp + 0xC));
    edi = MEM32(edx);
    ecx = esi + -8;
    PUSH32(esp, 0x004E5626u); RECOMP_ABI_CALL(0x004E5599u, sub_004E5599); /* call 0x004E5599 */

loc_004E5626: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edx;
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x004E562Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E562Au); } /* indirect call */
    }

loc_004E562D: ;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004E565C;

loc_004E5636: ;
    edx = MEM32(esi + 0x94);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E565C; /* je: equal / zero */

loc_004E5640: ;
    PUSH32(esp, MEM32(esp + 0xC));
    edi = MEM32(edx);
    ecx = esi + -8;
    PUSH32(esp, 0x004E564Eu); RECOMP_ABI_CALL(0x004E55C2u, sub_004E55C2); /* call 0x004E55C2 */

loc_004E564E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edx;
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x004E5655u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5652u); } /* indirect call */
    }

loc_004E5655: ;
    MEM32(esi + 0x94) = MEM32(esi + 0x94) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004E565C: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004E5664u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E5664: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E5669
 * Original: 0x004E5669 - 0x004E57B6 (333 bytes, 116 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E5669(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5669: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5681u); RECOMP_ABI_CALL(0x004E729Eu, sub_004E729E); /* call 0x004E729E */

loc_004E5681: ;
    esi = ebx + 8;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E568Bu); RECOMP_ABI_CALL(0x004E596Fu, sub_004E596F); /* call 0x004E596F */

loc_004E568B: ;
    eax = MEM32(ebp + 8);
    MEM32(esi) = 0x86CEE4;
    PUSH32(esp, 0x23);
    MEM32(ebx) = 0x86CEA0;
    edi = ebx + 0xC;
    POP32(esp, ecx);
    esi = eax;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x98) = esi;
    edi = eax + 0x68;
    MEM32(ebx + 0x9C) = esi;
    MEM32(ebx + 0xA0) = esi;
    MEM32(ebx + 0xA4) = esi;
    MEM32(ebx + 0xA8) = esi;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x5E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E570C; /* je: equal / zero */

loc_004E56CC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E56D1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E56D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E56DBu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E56DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E56EC; /* je: equal / zero */

loc_004E56E2: ;
    PUSH32(esp, edi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E56EAu); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004E56EA: ;
    goto loc_004E56EE;

loc_004E56EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E56EE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E56F4u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E56F4: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E56FBu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E56FB: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5707u); RECOMP_ABI_CALL(0x004E0386u, sub_004E0386); /* call 0x004E0386 */

loc_004E5707: ;
    goto loc_004E57A5;

loc_004E570C: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5712u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E5712: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5720u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004E5720: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    edi = 0x86CE94;
    PUSH32(esp, edi);
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5731u); RECOMP_ABI_CALL(0x004DD219u, sub_004DD219); /* call 0x004DD219 */

loc_004E5731: ;
    PUSH32(esp, 0x1C);
    eax = ebp + -32;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E573Du); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004E573D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1C);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E574Fu); RECOMP_ABI_CALL(0x004DD3A0u, sub_004DD3A0); /* call 0x004DD3A0 */

loc_004E574F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5754u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E5754: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E575Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E575E: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5782; /* je: equal / zero */

loc_004E5767: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004E5771u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E576Eu); } /* indirect call */
    }

loc_004E5771: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5780u); RECOMP_ABI_CALL(0x004DD4E3u, sub_004DD4E3); /* call 0x004DD4E3 */

loc_004E5780: ;
    goto loc_004E5784;

loc_004E5782: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5784: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E578Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E578A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5791u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E5791: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E579Du); RECOMP_ABI_CALL(0x004E0386u, sub_004E0386); /* call 0x004E0386 */

loc_004E579D: ;
    ecx = ebp + -64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E57A5u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E57A5: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E57B2u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E57B2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E574F
 * Original: 0x004E574F - 0x004E57B6 (103 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E574F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E574F: ;
    PUSH32(esp, 0x004E5754u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E5754: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004E575Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E575E: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5782; /* je: equal / zero */

loc_004E5767: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004E5771u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E576Eu); } /* indirect call */
    }

loc_004E5771: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004E5780u); RECOMP_ABI_CALL(0x004DD4E3u, sub_004DD4E3); /* call 0x004DD4E3 */

loc_004E5780: ;
    goto loc_004E5784;

loc_004E5782: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5784: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E578Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E578A: ;
    ecx = eax;
    PUSH32(esp, 0x004E5791u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E5791: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x98;
    PUSH32(esp, 0x004E579Du); RECOMP_ABI_CALL(0x004E0386u, sub_004E0386); /* call 0x004E0386 */

loc_004E579D: ;
    ecx = ebp + -64;
    PUSH32(esp, 0x004E57A5u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E57A5: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    PUSH32(esp, 0x004E57B2u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E57B2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E57B6
 * Original: 0x004E57B6 - 0x004E57BA (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57B6(void)
{

loc_004E57B6: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004E57BA
 * Original: 0x004E57BA - 0x004E57BE (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57BA(void)
{

loc_004E57BA: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_004E57BE
 * Original: 0x004E57BE - 0x004E57C2 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57BE(void)
{

loc_004E57BE: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_004E57C2
 * Original: 0x004E57C2 - 0x004E57C6 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57C2(void)
{

loc_004E57C2: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_004E57C6
 * Original: 0x004E57C6 - 0x004E57CA (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57C6(void)
{

loc_004E57C6: ;
    eax = ecx + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_004E57CA
 * Original: 0x004E57CA - 0x004E57CE (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57CA(void)
{

loc_004E57CA: ;
    eax = MEM32(ecx + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_004E57CE
 * Original: 0x004E57CE - 0x004E57D2 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57CE(void)
{

loc_004E57CE: ;
    eax = MEM32(ecx + 0x6C);
    esp += 4; return; /* ret */

}

/**
 * sub_004E57D2
 * Original: 0x004E57D2 - 0x004E57D6 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57D2(void)
{

loc_004E57D2: ;
    eax = ecx + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_004E57D6
 * Original: 0x004E57D6 - 0x004E57E3 (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57D6(void)
{

loc_004E57D6: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xA4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E57E3
 * Original: 0x004E57E3 - 0x004E57EA (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57E3(void)
{

loc_004E57E3: ;
    eax = MEM32(ecx + 0xA4);
    esp += 4; return; /* ret */

}

/**
 * sub_004E57EA
 * Original: 0x004E57EA - 0x004E57F1 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57EA(void)
{

loc_004E57EA: ;
    eax = MEM32(ecx + 0xA8);
    esp += 4; return; /* ret */

}

/**
 * sub_004E57F1
 * Original: 0x004E57F1 - 0x004E57FE (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57F1(void)
{

loc_004E57F1: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xA8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E57FE
 * Original: 0x004E57FE - 0x004E5806 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E57FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E57FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E5953(); return; /* tail jmp 0x004E5953 */

}

/**
 * sub_004E5806
 * Original: 0x004E5806 - 0x004E580D (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5806(void)
{

loc_004E5806: ;
    eax = MEM32(ecx + 0x98);
    esp += 4; return; /* ret */

}

/**
 * sub_004E580D
 * Original: 0x004E580D - 0x004E58B4 (167 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E580D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E580D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E581Cu); RECOMP_ABI_CALL(0x004E729Eu, sub_004E729E); /* call 0x004E729E */

loc_004E581C: ;
    esi = ebx + 8;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5826u); RECOMP_ABI_CALL(0x004E596Fu, sub_004E596F); /* call 0x004E596F */

loc_004E5826: ;
    MEM32(esi) = 0x86CEE4;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x23);
    MEM32(ebx) = 0x86CEA0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    edi = ebx + 0xC;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x98;
    MEM32(edi) = esi;
    MEM32(ebx + 0x9C) = esi;
    MEM32(ebx + 0xA0) = esi;
    MEM32(ebx + 0xA4) = esi;
    MEM32(ebx + 0xA8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5867u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E5867: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5874u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E5874: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004E5894; /* je: equal / zero */

loc_004E587E: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E5889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5886u); } /* indirect call */
    }

loc_004E5889: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5892u); RECOMP_ABI_CALL(0x004DD485u, sub_004DD485); /* call 0x004DD485 */

loc_004E5892: ;
    goto loc_004E5896;

loc_004E5894: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5896: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E589Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E589C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E58A3u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E58A3: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E58ABu); RECOMP_ABI_CALL(0x004E0386u, sub_004E0386); /* call 0x004E0386 */

loc_004E58AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E58B4
 * Original: 0x004E58B4 - 0x004E58E6 (50 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E58B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E58B4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x86CEA0;
    MEM32(edi) = 0x86CEE4;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E58D6; /* je: equal / zero */

loc_004E58D1: ;
    PUSH32(esp, 0x004E58D6u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E58D6: ;
    ecx = edi;
    PUSH32(esp, 0x004E58DDu); RECOMP_ABI_CALL(0x004E5978u, sub_004E5978); /* call 0x004E5978 */

loc_004E58DD: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E72B0(); return; /* tail jmp 0x004E72B0 */

}

/**
 * sub_004E58E6
 * Original: 0x004E58E6 - 0x004E591B (53 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E58E6(void)
{

loc_004E58E6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x9C) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x54);
    PUSH32(esp, 0x004E590Au); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E590A: ;
    eax = MEM32(edi);
    ecx = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x004E5916u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5913u); } /* indirect call */
    }

loc_004E5916: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E591B
 * Original: 0x004E591B - 0x004E5953 (56 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E591B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E591B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xA0) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x54);
    PUSH32(esp, 0x004E593Fu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004E593F: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x004E594Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E594Bu); } /* indirect call */
    }

loc_004E594E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E5953
 * Original: 0x004E5953 - 0x004E596F (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5953(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5953: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E595Bu); RECOMP_ABI_CALL(0x004E58B4u, sub_004E58B4); /* call 0x004E58B4 */

loc_004E595B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E5969; /* je: equal / zero */

loc_004E5962: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E5968u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E5968: ;
    POP32(esp, ecx);

loc_004E5969: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E596F
 * Original: 0x004E596F - 0x004E5978 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E596F(void)
{

loc_004E596F: ;
    eax = ecx;
    MEM32(eax) = 0x86CEF0;
    esp += 4; return; /* ret */

}

/**
 * sub_004E5978
 * Original: 0x004E5978 - 0x004E597F (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5978(void)
{

loc_004E5978: ;
    MEM32(ecx) = 0x86CEF0;
    esp += 4; return; /* ret */

}

/**
 * sub_004E597F
 * Original: 0x004E597F - 0x004E599C (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E597F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E597F: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CEF0;
    if (TEST_Z(_fa, _fb)) goto loc_004E5996; /* je: equal / zero */

loc_004E598F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E5995u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004E5995: ;
    POP32(esp, ecx);

loc_004E5996: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E599C
 * Original: 0x004E599C - 0x004E59A5 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E599C(void)
{

loc_004E599C: ;
    eax = ecx;
    MEM32(eax) = 0x86CEFC;
    esp += 4; return; /* ret */

}

/**
 * sub_004E59A5
 * Original: 0x004E59A5 - 0x004E59AC (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E59A5(void)
{

loc_004E59A5: ;
    MEM32(ecx) = 0x86CEFC;
    esp += 4; return; /* ret */

}

/**
 * sub_004E59AC
 * Original: 0x004E59AC - 0x004E59C9 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E59AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E59AC: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CEFC;
    if (TEST_Z(_fa, _fb)) goto loc_004E59C3; /* je: equal / zero */

loc_004E59BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E59C2u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004E59C2: ;
    POP32(esp, ecx);

loc_004E59C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E59C9
 * Original: 0x004E59C9 - 0x004E59DB (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E59C9(void)
{

loc_004E59C9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E59D1u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E59D1: ;
    MEM32(esi) = 0x86CF04;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E59DB
 * Original: 0x004E59DB - 0x004E59E6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E59DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E59DB: ;
    MEM32(ecx) = 0x86CF04;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E59E6
 * Original: 0x004E59E6 - 0x004E5A14 (46 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E59E6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E59E6: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CF04;
    PUSH32(esp, 0x004E59F4u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004E59F4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E5A02; /* je: equal / zero */

loc_004E59FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E5A01u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E5A01: ;
    POP32(esp, ecx);

loc_004E5A02: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E5A14
 * Original: 0x004E5A14 - 0x004E5A15 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5A14(void)
{

loc_004E5A14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004E5A15
 * Original: 0x004E5A15 - 0x004E5A27 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5A15(void)
{

loc_004E5A15: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E5A1Du); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E5A1D: ;
    MEM32(esi) = 0x86CF08;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E5A37
 * Original: 0x004E5A37 - 0x004E5A82 (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5A37(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5A37: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004E5A40u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E5A40: ;
    PUSH32(esp, 0x004E5A45u); RECOMP_ABI_CALL(0x004DC9CEu, sub_004DC9CE); /* call 0x004DC9CE */

loc_004E5A45: ;
    edi = eax;
    PUSH32(esp, 0x004E5A4Cu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E5A4C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E5A53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5A51u); } /* indirect call */
    }

loc_004E5A53: ;
    eax = eax + eax + 7;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x004E5A60u); RECOMP_ABI_CALL(0x004DE4ADu, sub_004DE4AD); /* call 0x004DE4AD */

loc_004E5A60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, edi);
    MEM32(esi) = 0x86CF0C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E5A82
 * Original: 0x004E5A82 - 0x004E5A9F (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5A82(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5A82: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E5A8Au); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E5A8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86CF10;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E5A9F
 * Original: 0x004E5A9F - 0x004E5B7A (219 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E5A9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E5A9F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5AACu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E5AAC: ;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x68);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5AB8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E5AB8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E5AC8; /* je: equal / zero */

loc_004E5ABF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5AC6u); RECOMP_ABI_CALL(0x004E4A77u, sub_004E4A77); /* call 0x004E4A77 */

loc_004E5AC6: ;
    goto loc_004E5ACA;

loc_004E5AC8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5ACA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5AD0u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E5AD0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5AD7u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E5AD7: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5AE0u); RECOMP_ABI_CALL(0x004DE4F7u, sub_004DE4F7); /* call 0x004DE4F7 */

loc_004E5AE0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5AE5u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E5AE5: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5AEFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E5AEF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E5B01; /* je: equal / zero */

loc_004E5AF6: ;
    PUSH32(esp, 0x64);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5AFFu); RECOMP_ABI_CALL(0x004E34E4u, sub_004E34E4); /* call 0x004E34E4 */

loc_004E5AFF: ;
    goto loc_004E5B03;

loc_004E5B01: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5B03: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B09u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E5B09: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B10u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E5B10: ;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B19u); RECOMP_ABI_CALL(0x004DE54Bu, sub_004DE54B); /* call 0x004DE54B */

loc_004E5B19: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B1Eu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E5B1E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B28u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E5B28: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E5B3B; /* je: equal / zero */

loc_004E5B2F: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B39u); RECOMP_ABI_CALL(0x004E75EFu, sub_004E75EF); /* call 0x004E75EF */

loc_004E5B39: ;
    goto loc_004E5B3D;

loc_004E5B3B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5B3D: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B46u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E5B46: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B4Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E5B4D: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B55u); RECOMP_ABI_CALL(0x004DE59Fu, sub_004DE59F); /* call 0x004DE59F */

loc_004E5B55: ;
    eax = MEM32(0x90E7AC);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5B76u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004E5B76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E5B7A
 * Original: 0x004E5B7A - 0x004E5BDD (99 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5B7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E5B7A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esi) = 0x86CF10;
    PUSH32(esp, 0x004E5B92u); RECOMP_ABI_CALL(0x004DE59Fu, sub_004DE59F); /* call 0x004DE59F */

loc_004E5B92: ;
    ebx = esi + 0xC;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x004E5B9Eu); RECOMP_ABI_CALL(0x004DE54Bu, sub_004DE54B); /* call 0x004DE54B */

loc_004E5B9E: ;
    ebp = esi + 8;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x004E5BAAu); RECOMP_ABI_CALL(0x004DE4F7u, sub_004DE4F7); /* call 0x004DE4F7 */

loc_004E5BAA: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5BB7; /* je: equal / zero */

loc_004E5BB0: ;
    ecx = edi;
    PUSH32(esp, 0x004E5BB7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E5BB7: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5BC4; /* je: equal / zero */

loc_004E5BBD: ;
    ecx = ebx;
    PUSH32(esp, 0x004E5BC4u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E5BC4: ;
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5BD2; /* je: equal / zero */

loc_004E5BCB: ;
    ecx = ebp;
    PUSH32(esp, 0x004E5BD2u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E5BD2: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E5BDD
 * Original: 0x004E5BDD - 0x004E5C30 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5BDD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5BDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004E5BE6u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E5BE6: ;
    MEM32(esi) = 0x86CF14;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 0x10;
    PUSH32(esp, 0x004E5BF8u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E5BF8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    ecx = edi;
    PUSH32(esp, 0x004E5C02u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004E5C02: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62626E64);
    PUSH32(esp, 0x004E5C14u); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_004E5C14: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, 0x7B891F);
    ecx = edi;
    MEM8(esi + 0x24) = LO8(eax);
    PUSH32(esp, 0x004E5C2Bu); RECOMP_ABI_CALL(0x004DDA93u, sub_004DDA93); /* call 0x004DDA93 */

loc_004E5C2B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E5C30
 * Original: 0x004E5C30 - 0x004E5D6D (317 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E5C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5C30: ;
    PUSH32(esp, ebp);
    ebp = esp + -136;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x84) = eax;
    ebx = ecx;
    PUSH32(esp, 0x004E5C53u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E5C53: ;
    edi = eax;
    PUSH32(esp, 0x004E5C5Au); RECOMP_ABI_CALL(0x004DC98Cu, sub_004DC98C); /* call 0x004DC98C */

loc_004E5C5A: ;
    MEM32(ebp + -128) = eax;
    MEM8(ebp + -124) = 0;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E5C68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5C65u); } /* indirect call */
    }

loc_004E5C68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86CF3C);
    esi = 0x100;
    eax = ebp + -124;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E5C7Du); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004E5C7D: ;
    ecx = MEM32(ebp + -128);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E5C87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5C85u); } /* indirect call */
    }

loc_004E5C87: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86CF34);
    eax = ebp + -124;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E5C97u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004E5C97: ;
    PUSH32(esp, 0x004E5C9Cu); RECOMP_ABI_CALL(0x004DBF29u, sub_004DBF29); /* call 0x004DBF29 */

loc_004E5C9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86CF2C);
    eax = ebp + -124;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E5CACu); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004E5CAC: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E5CB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5CB3u); } /* indirect call */
    }

loc_004E5CB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86CF24);
    eax = ebp + -124;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E5CC6u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004E5CC6: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E5CD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5CCDu); } /* indirect call */
    }

loc_004E5CD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86CF1C);
    eax = ebp + -124;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E5CE0u); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004E5CE0: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E5CEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5CE7u); } /* indirect call */
    }

loc_004E5CEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830C7C);
    eax = ebp + -124;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E5CFAu); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004E5CFA: ;
    PUSH32(esp, 0x004E5CFFu); RECOMP_ABI_CALL(0x004545F0u, sub_004545F0); /* call 0x004545F0 */

loc_004E5CFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86CF18);
    eax = ebp + -124;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E5D0Fu); RECOMP_ABI_CALL(0x005E6040u, sub_005E6040); /* call 0x005E6040 */

loc_004E5D0F: ;
    PUSH32(esp, 0x696E676D);
    PUSH32(esp, 0x4E5A14);
    eax = ebp + -124;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E5D24u); RECOMP_ABI_CALL(0x005E31F0u, sub_005E31F0); /* call 0x005E31F0 */

loc_004E5D24: ;
    PUSH32(esp, 0x9C40);
    PUSH32(esp, 0x6974696D);
    PUSH32(esp, eax);
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0x004E5D37u); RECOMP_ABI_CALL(0x005E2750u, sub_005E2750); /* call 0x005E2750 */

loc_004E5D37: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004E5D3Fu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E5D3F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x004E5D46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5D43u); } /* indirect call */
    }

loc_004E5D46: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7274696D);
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, 0x004E5D54u); RECOMP_ABI_CALL(0x005E2750u, sub_005E2750); /* call 0x005E2750 */

loc_004E5D54: ;
    ecx = MEM32(ebp + 0x84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x004E5D65u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E5D65: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x88;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E5D6D
 * Original: 0x004E5D6D - 0x004E5DC1 (84 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5D6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E5D6D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x28;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esi) = 0x86CF14;
    PUSH32(esp, 0x004E5D84u); RECOMP_ABI_CALL(0x004DE647u, sub_004DE647); /* call 0x004DE647 */

loc_004E5D84: ;
    ebx = esi + 0xC;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x004E5D90u); RECOMP_ABI_CALL(0x004DE5F3u, sub_004DE5F3); /* call 0x004DE5F3 */

loc_004E5D90: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x004E5D98u); RECOMP_ABI_CALL(0x005E3390u, sub_005E3390); /* call 0x005E3390 */

loc_004E5D98: ;
    POP32(esp, ecx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5DA4; /* je: equal / zero */

loc_004E5D9F: ;
    PUSH32(esp, 0x004E5DA4u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E5DA4: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x004E5DACu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004E5DAC: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5DB7; /* je: equal / zero */

loc_004E5DB2: ;
    PUSH32(esp, 0x004E5DB7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E5DB7: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E5DC1
 * Original: 0x004E5DC1 - 0x004E5DE3 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5DC1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5DC1: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CF08;
    PUSH32(esp, 0x004E5DCFu); RECOMP_ABI_CALL(0x004E59DBu, sub_004E59DB); /* call 0x004E59DB */

loc_004E5DCF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E5DDD; /* je: equal / zero */

loc_004E5DD6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E5DDCu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E5DDC: ;
    POP32(esp, ecx);

loc_004E5DDD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E5DE3
 * Original: 0x004E5DE3 - 0x004E5E17 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5DE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5DE3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E5DEBu); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E5DEB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86CF44;
    MEM32(esi + 0xA8) = ecx;
    PUSH32(esp, 0xA);
    MEM32(esi + 0xB0) = ecx;
    MEM32(esi + 0xB4) = ecx;
    eax = esi + 8;
    POP32(esp, edx);

loc_004E5E0B: ;
    MEM8(eax) = LO8(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004E5E0B; /* jne: not equal / not zero */

loc_004E5E13: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E5E17
 * Original: 0x004E5E17 - 0x004E61BD (934 bytes, 344 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E5E17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E5E17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -16) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5E32u); RECOMP_ABI_CALL(0x004DC9A2u, sub_004DC9A2); /* call 0x004DC9A2 */

loc_004E5E32: ;
    edi = eax;
    MEM32(ebp + -24) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5E3Cu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E5E3C: ;
    esi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x696E676D);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E5E4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5E47u); } /* indirect call */
    }

loc_004E5E4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E5E52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5E4Fu); } /* indirect call */
    }

loc_004E5E52: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5E58u); RECOMP_ABI_CALL(0x005E12D0u, sub_005E12D0); /* call 0x005E12D0 */

loc_004E5E58: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xAC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5E66u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E5E66: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E5E6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5E6Cu); } /* indirect call */
    }

loc_004E5E6F: ;
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5E77u); RECOMP_ABI_CALL(0x004DBF29u, sub_004DBF29); /* call 0x004DBF29 */

loc_004E5E77: ;
    PUSH32(esp, 8);
    esi = eax;
    eax = ebp + -12;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5E86u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004E5E86: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5E8Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E5E8E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004E5E95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5E92u); } /* indirect call */
    }

loc_004E5E95: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5EF5; /* je: equal / zero */

loc_004E5E99: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5E9Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E5E9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E5EA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5EA2u); } /* indirect call */
    }

loc_004E5EA5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5EDC; /* je: equal / zero */

loc_004E5EAB: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004E5EB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5EAFu); } /* indirect call */
    }

loc_004E5EB2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x004E5EBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5EB6u); } /* indirect call */
    }

loc_004E5EBC: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(ebp + -12) = LO8(eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004E5EC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5EC6u); } /* indirect call */
    }

loc_004E5EC9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x004E5ED3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5ECDu); } /* indirect call */
    }

loc_004E5ED3: ;
    MEM8(ebp + -11) = LO8(eax);
    MEM8(ebp + -10) = 0;
    goto loc_004E5EF2;

loc_004E5EDC: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E5EE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E5EE2u); } /* indirect call */
    }

loc_004E5EE5: ;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E5EEFu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E5EEF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E5EF2: ;
    ebx = MEM32(ebp + -16);

loc_004E5EF5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F0F; /* je: equal / zero */

loc_004E5EF9: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F0F; /* je: equal / zero */

loc_004E5EFF: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E5F11;

loc_004E5F0F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5F11: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0x41 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E5F5B; /* jb: below (unsigned <) */

loc_004E5F16: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F30; /* je: equal / zero */

loc_004E5F1A: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F30; /* je: equal / zero */

loc_004E5F20: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E5F32;

loc_004E5F30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5F32: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0x5A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E5F5B; /* ja: above (unsigned >) */

loc_004E5F37: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F51; /* je: equal / zero */

loc_004E5F3B: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F51; /* je: equal / zero */

loc_004E5F41: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E5F53;

loc_004E5F51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5F53: ;
    edi = ZX8(HI8(eax));
    edi = edi | 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_004E5F7D;

loc_004E5F5B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F75; /* je: equal / zero */

loc_004E5F5F: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F75; /* je: equal / zero */

loc_004E5F65: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E5F77;

loc_004E5F75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5F77: ;
    edi = ZX16(LO16(eax));
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_004E5F7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F97; /* je: equal / zero */

loc_004E5F81: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5F97; /* je: equal / zero */

loc_004E5F87: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E5F99;

loc_004E5F97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5F99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E5FE1; /* jb: below (unsigned <) */

loc_004E5F9D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5FB7; /* je: equal / zero */

loc_004E5FA1: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5FB7; /* je: equal / zero */

loc_004E5FA7: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E5FB9;

loc_004E5FB7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5FB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E5FE1; /* ja: above (unsigned >) */

loc_004E5FBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5FD7; /* je: equal / zero */

loc_004E5FC1: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5FD7; /* je: equal / zero */

loc_004E5FC7: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E5FD9;

loc_004E5FD7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5FD9: ;
    esi = ZX8(LO8(eax));
    esi = esi | 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_004E6004;

loc_004E5FE1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5FFB; /* je: equal / zero */

loc_004E5FE5: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E5FFB; /* je: equal / zero */

loc_004E5FEB: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 1));
    SET_LO16(eax, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E5FFD;

loc_004E5FFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E5FFD: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;

loc_004E6004: ;
    SET_LO8(edx, MEM8(ebp + -12));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E601B; /* je: equal / zero */

loc_004E600B: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebp + -11));
    SET_LO16(eax, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E601D;

loc_004E601B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E601D: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0x61 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E605B; /* jb: below (unsigned <) */

loc_004E6022: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6036; /* je: equal / zero */

loc_004E6026: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebp + -11));
    SET_LO16(eax, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E6038;

loc_004E6036: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6038: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0x7A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E605B; /* ja: above (unsigned >) */

loc_004E603D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6051; /* je: equal / zero */

loc_004E6041: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebp + -11));
    SET_LO16(eax, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E6053;

loc_004E6051: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6053: ;
    eax = ZX8(HI8(eax));
    eax = eax & 0xFFFFFFDFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004E6077;

loc_004E605B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E606F; /* je: equal / zero */

loc_004E605F: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ebp + -11));
    SET_LO16(eax, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E6071;

loc_004E606F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6071: ;
    eax = ZX16(LO16(eax));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_004E6077: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E608E; /* je: equal / zero */

loc_004E607B: ;
    SET_LO16(ebx, (uint32_t)(int32_t)SMEM8(ebp + -11));
    SET_LO16(ecx, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -16);
    goto loc_004E6090;

loc_004E608E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6090: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E60D1; /* jb: below (unsigned <) */

loc_004E6095: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E60AC; /* je: equal / zero */

loc_004E6099: ;
    SET_LO16(ebx, (uint32_t)(int32_t)SMEM8(ebp + -11));
    SET_LO16(ecx, SX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -16);
    goto loc_004E60AE;

loc_004E60AC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E60AE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E60D1; /* ja: above (unsigned >) */

loc_004E60B3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E60C7; /* je: equal / zero */

loc_004E60B7: ;
    SET_LO16(ecx, SX8(LO8(edx)));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(ebp + -11));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E60C9;

loc_004E60C7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E60C9: ;
    ecx = ZX8(LO8(ecx));
    ecx = ecx & 0xFFFFFFDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004E60ED;

loc_004E60D1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E60E5; /* je: equal / zero */

loc_004E60D5: ;
    SET_LO16(ecx, SX8(LO8(edx)));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(ebp + -11));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E60E7;

loc_004E60E5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E60E7: ;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004E60ED: ;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(LO16(edi));
    eax = ZX16(LO16(eax));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebx + 0xAC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6111u); RECOMP_ABI_CALL(0x005DE3E0u, sub_005DE3E0); /* call 0x005DE3E0 */

loc_004E6111: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E611Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6119u); } /* indirect call */
    }

loc_004E611C: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xAC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6128u); RECOMP_ABI_CALL(0x005DE310u, sub_005DE310); /* call 0x005DE310 */

loc_004E6128: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E612Du); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E612D: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6139u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6139: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6149; /* je: equal / zero */

loc_004E6140: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6147u); RECOMP_ABI_CALL(0x004E833Bu, sub_004E833B); /* call 0x004E833B */

loc_004E6147: ;
    goto loc_004E614B;

loc_004E6149: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E614B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6151u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6151: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6158u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6158: ;
    PUSH32(esp, eax);
    ecx = ebx + 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6164u); RECOMP_ABI_CALL(0x004DE69Bu, sub_004DE69B); /* call 0x004DE69B */

loc_004E6164: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6169u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E6169: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x94);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6176u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6176: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6195; /* je: equal / zero */

loc_004E617F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6184u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E6184: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E618Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6188u); } /* indirect call */
    }

loc_004E618B: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6193u); RECOMP_ABI_CALL(0x004E48D8u, sub_004E48D8); /* call 0x004E48D8 */

loc_004E6193: ;
    goto loc_004E6197;

loc_004E6195: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6197: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E619Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E619D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E61A4u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E61A4: ;
    PUSH32(esp, eax);
    ecx = ebx + 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E61B0u); RECOMP_ABI_CALL(0x004DE6EFu, sub_004DE6EF); /* call 0x004DE6EF */

loc_004E61B0: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E61BBu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E61BB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E61BD
 * Original: 0x004E61BD - 0x004E6223 (102 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E61BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E61BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = esi + 0xB4;
    PUSH32(esp, 0);
    ecx = ebx;
    MEM32(esi) = 0x86CF44;
    PUSH32(esp, 0x004E61D8u); RECOMP_ABI_CALL(0x004DE6EFu, sub_004DE6EF); /* call 0x004DE6EF */

loc_004E61D8: ;
    ebp = esi + 0xB0;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x004E61E7u); RECOMP_ABI_CALL(0x004DE69Bu, sub_004DE69B); /* call 0x004DE69B */

loc_004E61E7: ;
    edi = esi + 0xAC;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x004E61F4u); RECOMP_ABI_CALL(0x005E0650u, sub_005E0650); /* call 0x005E0650 */

loc_004E61F4: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x004E61FBu); RECOMP_ABI_CALL(0x005E0690u, sub_005E0690); /* call 0x005E0690 */

loc_004E61FB: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004E620A; /* je: equal / zero */

loc_004E6203: ;
    ecx = ebx;
    PUSH32(esp, 0x004E620Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E620A: ;
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6218; /* je: equal / zero */

loc_004E6211: ;
    ecx = ebp;
    PUSH32(esp, 0x004E6218u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E6218: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E6223
 * Original: 0x004E6223 - 0x004E6258 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6223(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6223: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E622Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E622B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86CF48;
    MEM32(esi + 8) = eax;
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
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E6258
 * Original: 0x004E6258 - 0x004E657A (802 bytes, 285 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E6258(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E6258: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6270u); RECOMP_ABI_CALL(0x004DC9CEu, sub_004DC9CE); /* call 0x004DC9CE */

loc_004E6270: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004E6276u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6274u); } /* indirect call */
    }

loc_004E6276: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E627Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E627D: ;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6289u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6289: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E629E; /* je: equal / zero */

loc_004E6290: ;
    edx = ebx + 0xA;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E629Cu); RECOMP_ABI_CALL(0x004BD695u, sub_004BD695); /* call 0x004BD695 */

loc_004E629C: ;
    goto loc_004E62A0;

loc_004E629E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E62A0: ;
    PUSH32(esp, eax);
    ebx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E62A9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E62A9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E62B0u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E62B0: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E62B8u); RECOMP_ABI_CALL(0x004DE98Fu, sub_004DE98F); /* call 0x004DE98F */

loc_004E62B8: ;
    eax = MEM32(0x90E7AC);
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -72) = ecx;
    ecx = MEM32(ebx);
    eax = ebp + -72;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E62D9u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004E62D9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E62DEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E62DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E62E8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E62E8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E62F8; /* je: equal / zero */

loc_004E62EF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E62F6u); RECOMP_ABI_CALL(0x0060B99Fu, sub_0060B99F); /* call 0x0060B99F */

loc_004E62F6: ;
    goto loc_004E62FA;

loc_004E62F8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E62FA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6300u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6300: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6307u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6307: ;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6310u); RECOMP_ABI_CALL(0x004DE797u, sub_004DE797); /* call 0x004DE797 */

loc_004E6310: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6315u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6315: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xCC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6322u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6322: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E6332; /* je: equal / zero */

loc_004E6329: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6330u); RECOMP_ABI_CALL(0x004B7660u, sub_004B7660); /* call 0x004B7660 */

loc_004E6330: ;
    goto loc_004E6334;

loc_004E6332: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6334: ;
    PUSH32(esp, eax);
    ebx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E633Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E633D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6344u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6344: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E634Cu); RECOMP_ABI_CALL(0x004DE743u, sub_004DE743); /* call 0x004DE743 */

loc_004E634C: ;
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6353u); RECOMP_ABI_CALL(0x004B79C8u, sub_004B79C8); /* call 0x004B79C8 */

loc_004E6353: ;
    eax = MEM32(0x90E7AC);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    edx = ebp + -68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86CF4C);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E6370u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E636Du); } /* indirect call */
    }

loc_004E6370: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6375u); RECOMP_ABI_CALL(0x004B3D7Au, sub_004B3D7A); /* call 0x004B3D7A */

loc_004E6375: ;
    MEM32(esi + 0x34) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E638Bu); RECOMP_ABI_CALL(0x005EA150u, sub_005EA150); /* call 0x005EA150 */

loc_004E638B: ;
    MEM32(esp) = 0x4E20;
    PUSH32(esp, 0x1F4);
    PUSH32(esp, eax);
    MEM32(esi + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63A0u); RECOMP_ABI_CALL(0x005EA1B0u, sub_005EA1B0); /* call 0x005EA1B0 */

loc_004E63A0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63A5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E63A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x168);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63B2u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E63B2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E63C2; /* je: equal / zero */

loc_004E63B9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63C0u); RECOMP_ABI_CALL(0x004B547Eu, sub_004B547E); /* call 0x004B547E */

loc_004E63C0: ;
    goto loc_004E63C4;

loc_004E63C2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E63C4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63CAu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E63CA: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63D1u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E63D1: ;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63DAu); RECOMP_ABI_CALL(0x004DE83Fu, sub_004DE83F); /* call 0x004DE83F */

loc_004E63DA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63DFu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E63DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63ECu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E63EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E63FC; /* je: equal / zero */

loc_004E63F3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E63FAu); RECOMP_ABI_CALL(0x0060ADCBu, sub_0060ADCB); /* call 0x0060ADCB */

loc_004E63FA: ;
    goto loc_004E63FE;

loc_004E63FC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E63FE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6404u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6404: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E640Bu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E640B: ;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6414u); RECOMP_ABI_CALL(0x004DE8E7u, sub_004DE8E7); /* call 0x004DE8E7 */

loc_004E6414: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6419u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6419: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6423u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6423: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E6433; /* je: equal / zero */

loc_004E642A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6431u); RECOMP_ABI_CALL(0x004AE007u, sub_004AE007); /* call 0x004AE007 */

loc_004E6431: ;
    goto loc_004E6435;

loc_004E6433: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6435: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E643Bu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E643B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6442u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6442: ;
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E644Bu); RECOMP_ABI_CALL(0x004DE9E3u, sub_004DE9E3); /* call 0x004DE9E3 */

loc_004E644B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6450u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6450: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E645Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E645D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E646D; /* je: equal / zero */

loc_004E6464: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E646Bu); RECOMP_ABI_CALL(0x004B0A4Eu, sub_004B0A4E); /* call 0x004B0A4E */

loc_004E646B: ;
    goto loc_004E646F;

loc_004E646D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E646F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6475u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6475: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E647Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E647C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6485u); RECOMP_ABI_CALL(0x004DEA37u, sub_004DEA37); /* call 0x004DEA37 */

loc_004E6485: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E648Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E648A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6497u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6497: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E64AB; /* je: equal / zero */

loc_004E649E: ;
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64A9u); RECOMP_ABI_CALL(0x004AF354u, sub_004AF354); /* call 0x004AF354 */

loc_004E64A9: ;
    goto loc_004E64AD;

loc_004E64AB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E64AD: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64B3u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E64B3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64BAu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E64BA: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64C3u); RECOMP_ABI_CALL(0x004DE7EBu, sub_004DE7EB); /* call 0x004DE7EB */

loc_004E64C3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64C8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E64C8: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64D5u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E64D5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E64E7; /* je: equal / zero */

loc_004E64DC: ;
    PUSH32(esp, 1);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64E5u); RECOMP_ABI_CALL(0x0060A576u, sub_0060A576); /* call 0x0060A576 */

loc_004E64E5: ;
    goto loc_004E64E9;

loc_004E64E7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E64E9: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64EFu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E64EF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64F6u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E64F6: ;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E64FFu); RECOMP_ABI_CALL(0x004DE893u, sub_004DE893); /* call 0x004DE893 */

loc_004E64FF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6504u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6504: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E650Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E650E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E651E; /* je: equal / zero */

loc_004E6515: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E651Cu); RECOMP_ABI_CALL(0x00609679u, sub_00609679); /* call 0x00609679 */

loc_004E651C: ;
    goto loc_004E6520;

loc_004E651E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6520: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6526u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6526: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E652Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E652D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6536u); RECOMP_ABI_CALL(0x004DEA8Bu, sub_004DEA8B); /* call 0x004DEA8B */

loc_004E6536: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E653Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E653B: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6545u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6545: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E6555; /* je: equal / zero */

loc_004E654C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6553u); RECOMP_ABI_CALL(0x00608791u, sub_00608791); /* call 0x00608791 */

loc_004E6553: ;
    goto loc_004E6557;

loc_004E6555: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6557: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E655Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E655D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6564u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6564: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E656Du); RECOMP_ABI_CALL(0x004DE93Bu, sub_004DE93B); /* call 0x004DE93B */

loc_004E656D: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6578u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E6578: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E657A
 * Original: 0x004E657A - 0x004E66C6 (332 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E657A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E657A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0x20;
    ecx = MEM32(ebx);
    MEM32(esi) = 0x86CF48;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E6593u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6590u); } /* indirect call */
    }

loc_004E6593: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E659Du); RECOMP_ABI_CALL(0x004DE93Bu, sub_004DE93B); /* call 0x004DE93B */

loc_004E659D: ;
    ebx = esi + 0x30;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65A8u); RECOMP_ABI_CALL(0x004DEA8Bu, sub_004DEA8B); /* call 0x004DEA8B */

loc_004E65A8: ;
    ecx = esi + 0x18;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65B1u); RECOMP_ABI_CALL(0x004DE893u, sub_004DE893); /* call 0x004DE893 */

loc_004E65B1: ;
    ecx = esi + 0x10;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65BAu); RECOMP_ABI_CALL(0x004DE7EBu, sub_004DE7EB); /* call 0x004DE7EB */

loc_004E65BA: ;
    ecx = esi + 0x2C;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65C3u); RECOMP_ABI_CALL(0x004DEA37u, sub_004DEA37); /* call 0x004DEA37 */

loc_004E65C3: ;
    ecx = esi + 0x28;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65CCu); RECOMP_ABI_CALL(0x004DE9E3u, sub_004DE9E3); /* call 0x004DE9E3 */

loc_004E65CC: ;
    ecx = esi + 0x1C;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65D5u); RECOMP_ABI_CALL(0x004DE8E7u, sub_004DE8E7); /* call 0x004DE8E7 */

loc_004E65D5: ;
    ecx = esi + 0x14;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65DEu); RECOMP_ABI_CALL(0x004DE83Fu, sub_004DE83F); /* call 0x004DE83F */

loc_004E65DE: ;
    PUSH32(esp, MEM32(esi + 0x38));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65E6u); RECOMP_ABI_CALL(0x005EA220u, sub_005EA220); /* call 0x005EA220 */

loc_004E65E6: ;
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65EEu); RECOMP_ABI_CALL(0x004B3DBDu, sub_004B3DBD); /* call 0x004B3DBD */

loc_004E65EE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E65F8u); RECOMP_ABI_CALL(0x004B7F5Au, sub_004B7F5A); /* call 0x004B7F5A */

loc_004E65F8: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6601u); RECOMP_ABI_CALL(0x004DE743u, sub_004DE743); /* call 0x004DE743 */

loc_004E6601: ;
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E660Au); RECOMP_ABI_CALL(0x004DE797u, sub_004DE797); /* call 0x004DE797 */

loc_004E660A: ;
    eax = MEM32(0x90E7AC);
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(esi + 0x24);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E662Cu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004E662C: ;
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6635u); RECOMP_ABI_CALL(0x004DE98Fu, sub_004DE98F); /* call 0x004DE98F */

loc_004E6635: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E6642; /* je: equal / zero */

loc_004E663B: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6642u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E6642: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E664E; /* je: equal / zero */

loc_004E6649: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E664Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E664E: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E665A; /* je: equal / zero */

loc_004E6655: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E665Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E665A: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E6666; /* je: equal / zero */

loc_004E6661: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6666u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E6666: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E6672; /* je: equal / zero */

loc_004E666D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6672u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E6672: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E667E; /* je: equal / zero */

loc_004E6679: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E667Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E667E: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E668A; /* je: equal / zero */

loc_004E6685: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E668Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E668A: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E6696; /* je: equal / zero */

loc_004E6691: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6696u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E6696: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E66A2; /* je: equal / zero */

loc_004E669D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E66A2u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E66A2: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E66AE; /* je: equal / zero */

loc_004E66A9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E66AEu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E66AE: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E66BA; /* je: equal / zero */

loc_004E66B5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E66BAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E66BA: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E66C1u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004E66C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E66C6
 * Original: 0x004E66C6 - 0x004E66EC (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E66C6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E66C6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E66CEu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E66CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86CF54;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E66EC
 * Original: 0x004E66EC - 0x004E6796 (170 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E66EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E66EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    MEM32(esi) = 0x86CF54;
    PUSH32(esp, 0x004E6700u); RECOMP_ABI_CALL(0x005EC3D0u, sub_005EC3D0); /* call 0x005EC3D0 */

loc_004E6700: ;
    POP32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E670Cu); RECOMP_ABI_CALL(0x004DEB33u, sub_004DEB33); /* call 0x004DEB33 */

loc_004E670C: ;
    edi = esi + 0x10;
    ecx = MEM32(edi);
    PUSH32(esp, 0x004E6716u); RECOMP_ABI_CALL(0x0060BBF2u, sub_0060BBF2); /* call 0x0060BBF2 */

loc_004E6716: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004E671Eu); RECOMP_ABI_CALL(0x004DEB87u, sub_004DEB87); /* call 0x004DEB87 */

loc_004E671E: ;
    ebp = esi + 0x14;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x004E6729u); RECOMP_ABI_CALL(0x004DEBDBu, sub_004DEBDB); /* call 0x004DEBDB */

loc_004E6729: ;
    ebx = esi + 0x18;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x004E6735u); RECOMP_ABI_CALL(0x004DEC2Fu, sub_004DEC2F); /* call 0x004DEC2F */

loc_004E6735: ;
    ecx = esi + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004E673Fu); RECOMP_ABI_CALL(0x004DEADFu, sub_004DEADF); /* call 0x004DEADF */

loc_004E673F: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E674B; /* je: equal / zero */

loc_004E6746: ;
    PUSH32(esp, 0x004E674Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E674B: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6758; /* je: equal / zero */

loc_004E6751: ;
    ecx = ebx;
    PUSH32(esp, 0x004E6758u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E6758: ;
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6766; /* je: equal / zero */

loc_004E675F: ;
    ecx = ebp;
    PUSH32(esp, 0x004E6766u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E6766: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6773; /* je: equal / zero */

loc_004E676C: ;
    ecx = edi;
    PUSH32(esp, 0x004E6773u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E6773: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E677F; /* je: equal / zero */

loc_004E677A: ;
    PUSH32(esp, 0x004E677Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E677F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E678B; /* je: equal / zero */

loc_004E6786: ;
    PUSH32(esp, 0x004E678Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E678B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E6796
 * Original: 0x004E6796 - 0x004E6879 (227 bytes, 92 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E6796(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6796: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E7AC);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E67A9u); RECOMP_ABI_CALL(0x004DC1D4u, sub_004DC1D4); /* call 0x004DC1D4 */

loc_004E67A9: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E67B0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E67B0: ;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E67BCu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E67BC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E67CD; /* je: equal / zero */

loc_004E67C3: ;
    PUSH32(esp, edi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E67CBu); RECOMP_ABI_CALL(0x0060C532u, sub_0060C532); /* call 0x0060C532 */

loc_004E67CB: ;
    goto loc_004E67CF;

loc_004E67CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E67CF: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E67D8u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E67D8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E67DFu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E67DF: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E67E7u); RECOMP_ABI_CALL(0x004DEADFu, sub_004DEADF); /* call 0x004DEADF */

loc_004E67E7: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x86CF60);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004E67F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E67F4u); } /* indirect call */
    }

loc_004E67F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(ebp + 8) = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0x86CF58);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004E6807u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6804u); } /* indirect call */
    }

loc_004E6807: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6822; /* je: equal / zero */

loc_004E680C: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E6822; /* jb: below (unsigned <) */

loc_004E6816: ;
    PUSH32(esp, MEM32(ebp + 8));

loc_004E6819: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E6820u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E681Du); } /* indirect call */
    }

loc_004E6820: ;
    goto loc_004E684F;

loc_004E6822: ;
    eax = MEM32(0x90E7AC);
    _fa = (uint32_t)(MEM8(eax + 0x53)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x53), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E682F; /* jne: not equal / not zero */

loc_004E682C: ;
    PUSH32(esp, ebx);
    goto loc_004E6819;

loc_004E682F: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    edi = MEM32(esi);
    ebx = MEM32(edi);
    PUSH32(esp, 0x7374696D);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6847u); RECOMP_ABI_CALL(0x005E2450u, sub_005E2450); /* call 0x005E2450 */

loc_004E6847: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x1C); PUSH32(esp, 0x004E684Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E684Cu); } /* indirect call */
    }

loc_004E684F: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E6859u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6856u); } /* indirect call */
    }

loc_004E6859: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E6863u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6860u); } /* indirect call */
    }

loc_004E6863: ;
    esi = MEM32(esi);
    edi = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E686Cu); RECOMP_ABI_CALL(0x004545F0u, sub_004545F0); /* call 0x004545F0 */

loc_004E686C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x004E6872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E686Fu); } /* indirect call */
    }

loc_004E6872: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E6879
 * Original: 0x004E6879 - 0x004E6895 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6879(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6879: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E6881u); RECOMP_ABI_CALL(0x004E5B7Au, sub_004E5B7A); /* call 0x004E5B7A */

loc_004E6881: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E688F; /* je: equal / zero */

loc_004E6888: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E688Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E688E: ;
    POP32(esp, ecx);

loc_004E688F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E6895
 * Original: 0x004E6895 - 0x004E68B1 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6895(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6895: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E689Du); RECOMP_ABI_CALL(0x004E5D6Du, sub_004E5D6D); /* call 0x004E5D6D */

loc_004E689D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E68AB; /* je: equal / zero */

loc_004E68A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E68AAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E68AA: ;
    POP32(esp, ecx);

loc_004E68AB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E68B1
 * Original: 0x004E68B1 - 0x004E6974 (195 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E68B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E68B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E68BEu); RECOMP_ABI_CALL(0x004E5C30u, sub_004E5C30); /* call 0x004E5C30 */

loc_004E68BE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E68C3u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E68C3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004E68CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E68C7u); } /* indirect call */
    }

loc_004E68CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x1C));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004E68D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E68D4u); } /* indirect call */
    }

loc_004E68D7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E68DCu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E68DC: ;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4454);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E68EBu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E68EB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E68FB; /* je: equal / zero */

loc_004E68F2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E68F9u); RECOMP_ABI_CALL(0x004E885Au, sub_004E885A); /* call 0x004E885A */

loc_004E68F9: ;
    goto loc_004E68FD;

loc_004E68FB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E68FD: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6903u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6903: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E690Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E690A: ;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6913u); RECOMP_ABI_CALL(0x004DE5F3u, sub_004DE5F3); /* call 0x004DE5F3 */

loc_004E6913: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6918u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E6918: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6922u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6922: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E6935; /* je: equal / zero */

loc_004E6929: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6933u); RECOMP_ABI_CALL(0x004E8643u, sub_004E8643); /* call 0x004E8643 */

loc_004E6933: ;
    goto loc_004E6937;

loc_004E6935: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6937: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x28)) >> 32) & 1);
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6940u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6940: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6947u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6947: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E694Fu); RECOMP_ABI_CALL(0x004DE647u, sub_004DE647); /* call 0x004DE647 */

loc_004E694F: ;
    eax = MEM32(0x90E7AC);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E6970u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004E6970: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E6974
 * Original: 0x004E6974 - 0x004E6990 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6974(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6974: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E697Cu); RECOMP_ABI_CALL(0x004E61BDu, sub_004E61BD); /* call 0x004E61BD */

loc_004E697C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E698A; /* je: equal / zero */

loc_004E6983: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E6989u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E6989: ;
    POP32(esp, ecx);

loc_004E698A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E6990
 * Original: 0x004E6990 - 0x004E69AC (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6990: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E6998u); RECOMP_ABI_CALL(0x004E657Au, sub_004E657A); /* call 0x004E657A */

loc_004E6998: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E69A6; /* je: equal / zero */

loc_004E699F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E69A5u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E69A5: ;
    POP32(esp, ecx);

loc_004E69A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E69AC
 * Original: 0x004E69AC - 0x004E69C8 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E69AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E69AC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E69B4u); RECOMP_ABI_CALL(0x004E66ECu, sub_004E66EC); /* call 0x004E66EC */

loc_004E69B4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E69C2; /* je: equal / zero */

loc_004E69BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E69C1u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E69C1: ;
    POP32(esp, ecx);

loc_004E69C2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E69C8
 * Original: 0x004E69C8 - 0x004E6BAB (483 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E69C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E69C8: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    ebx = MEM32(0x90E7AC);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = ebp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    MEM32(ebp + 0x74) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x86CF4C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E6A00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E69FDu); } /* indirect call */
    }

loc_004E6A00: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86CF68);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E6A17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6A14u); } /* indirect call */
    }

loc_004E6A17: ;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xAC);
    ecx = MEM32(ecx + 8);
    MEM32(ebp + -20) = eax;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 0x34;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004E6A3Fu); RECOMP_ABI_CALL(0x004E6796u, sub_004E6796); /* call 0x004E6796 */

loc_004E6A3F: ;
    PUSH32(esp, 0x004E6A44u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6A44: ;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004E6A50u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6A50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6A60; /* je: equal / zero */

loc_004E6A57: ;
    ecx = eax;
    PUSH32(esp, 0x004E6A5Eu); RECOMP_ABI_CALL(0x004B5D0Eu, sub_004B5D0E); /* call 0x004B5D0E */

loc_004E6A5E: ;
    goto loc_004E6A62;

loc_004E6A60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6A62: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E6A68u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6A68: ;
    ecx = eax;
    PUSH32(esp, 0x004E6A6Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6A6F: ;
    PUSH32(esp, eax);
    ecx = edi + 0x18;
    PUSH32(esp, 0x004E6A78u); RECOMP_ABI_CALL(0x004DEC2Fu, sub_004DEC2F); /* call 0x004DEC2F */

loc_004E6A78: ;
    PUSH32(esp, 0x004E6A7Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6A7D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x004E6A87u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6A87: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6A97; /* je: equal / zero */

loc_004E6A8E: ;
    ecx = eax;
    PUSH32(esp, 0x004E6A95u); RECOMP_ABI_CALL(0x004BAF06u, sub_004BAF06); /* call 0x004BAF06 */

loc_004E6A95: ;
    goto loc_004E6A99;

loc_004E6A97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6A99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E6A9Fu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6A9F: ;
    ecx = eax;
    PUSH32(esp, 0x004E6AA6u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6AA6: ;
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, 0x004E6AAFu); RECOMP_ABI_CALL(0x004DEBDBu, sub_004DEBDB); /* call 0x004DEBDB */

loc_004E6AAF: ;
    PUSH32(esp, 0x004E6AB4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6AB4: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x004E6ABEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6ABE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6ACE; /* je: equal / zero */

loc_004E6AC5: ;
    ecx = eax;
    PUSH32(esp, 0x004E6ACCu); RECOMP_ABI_CALL(0x0060C121u, sub_0060C121); /* call 0x0060C121 */

loc_004E6ACC: ;
    goto loc_004E6AD0;

loc_004E6ACE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6AD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E6AD6u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6AD6: ;
    ecx = eax;
    PUSH32(esp, 0x004E6ADDu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6ADD: ;
    PUSH32(esp, eax);
    ecx = edi + 0x10;
    PUSH32(esp, 0x004E6AE6u); RECOMP_ABI_CALL(0x004DEB87u, sub_004DEB87); /* call 0x004DEB87 */

loc_004E6AE6: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, 0x004E6AEEu); RECOMP_ABI_CALL(0x0060BB71u, sub_0060BB71); /* call 0x0060BB71 */

loc_004E6AEE: ;
    PUSH32(esp, 0x004E6AF3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6AF3: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004E6AFDu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6AFD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6B0D; /* je: equal / zero */

loc_004E6B04: ;
    ecx = eax;
    PUSH32(esp, 0x004E6B0Bu); RECOMP_ABI_CALL(0x0060C95Fu, sub_0060C95F); /* call 0x0060C95F */

loc_004E6B0B: ;
    goto loc_004E6B0F;

loc_004E6B0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6B0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E6B15u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6B15: ;
    ecx = eax;
    PUSH32(esp, 0x004E6B1Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6B1C: ;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x004E6B25u); RECOMP_ABI_CALL(0x004DEB33u, sub_004DEB33); /* call 0x004DEB33 */

loc_004E6B25: ;
    eax = MEM32(ebx + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x004E6B3Cu); RECOMP_ABI_CALL(0x005EC300u, sub_005EC300); /* call 0x005EC300 */

loc_004E6B3C: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x609D37);
    PUSH32(esp, eax);
    MEM32(edi + 0x20) = eax;
    PUSH32(esp, 0x004E6B51u); RECOMP_ABI_CALL(0x005EC420u, sub_005EC420); /* call 0x005EC420 */

loc_004E6B51: ;
    PUSH32(esp, 0x004E6B56u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6B56: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x004E6B60u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6B60: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6B70; /* je: equal / zero */

loc_004E6B67: ;
    ecx = eax;
    PUSH32(esp, 0x004E6B6Eu); RECOMP_ABI_CALL(0x004BF06Cu, sub_004BF06C); /* call 0x004BF06C */

loc_004E6B6E: ;
    goto loc_004E6B72;

loc_004E6B70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6B72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E6B78u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E6B78: ;
    ecx = eax;
    PUSH32(esp, 0x004E6B7Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E6B7F: ;
    PUSH32(esp, eax);
    ecx = edi + 0x1C;
    PUSH32(esp, 0x004E6B88u); RECOMP_ABI_CALL(0x004DEC83u, sub_004DEC83); /* call 0x004DEC83 */

loc_004E6B88: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x004E6B9Bu); RECOMP_ABI_CALL(0x004B4C0Cu, sub_004B4C0C); /* call 0x004B4C0C */

loc_004E6B9B: ;
    ecx = MEM32(ebp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x004E6BA6u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E6BA6: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E6BAB
 * Original: 0x004E6BAB - 0x004E6DD4 (553 bytes, 226 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6BAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E6BAB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    MEM32(esp + 0x10) = eax;
    eax = esi + 8;
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E6BE9; /* jbe: below or equal (unsigned <=) */

loc_004E6BCC: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E6BD6u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E6BD6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x1C));
    ecx = MEM32(eax);
    PUSH32(esp, MEM32(esp + 0x18));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E6BE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6BE2u); } /* indirect call */
    }

loc_004E6BE4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E6BCC; /* jb: below (unsigned <) */

loc_004E6BE9: ;
    ebx = MEM32(esp + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004E6C04; /* jge: greater or equal (signed >=) */

loc_004E6BF5: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6C01; /* je: equal / zero */

loc_004E6BFC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E6C01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6BFFu); } /* indirect call */
    }

loc_004E6C01: ;
    MEM32(esi + 0x38) = ebp;

loc_004E6C04: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004E6C18; /* jge: greater or equal (signed >=) */

loc_004E6C09: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6C15; /* je: equal / zero */

loc_004E6C10: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E6C15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6C13u); } /* indirect call */
    }

loc_004E6C15: ;
    MEM32(esi + 0x34) = ebp;

loc_004E6C18: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004E6C2C; /* jge: greater or equal (signed >=) */

loc_004E6C1D: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6C29; /* je: equal / zero */

loc_004E6C24: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E6C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6C27u); } /* indirect call */
    }

loc_004E6C29: ;
    MEM32(esi + 0x30) = ebp;

loc_004E6C2C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004E6C40; /* jge: greater or equal (signed >=) */

loc_004E6C31: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6C3D; /* je: equal / zero */

loc_004E6C38: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E6C3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6C3Bu); } /* indirect call */
    }

loc_004E6C3D: ;
    MEM32(esi + 0x2C) = ebp;

loc_004E6C40: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004E6C54; /* jge: greater or equal (signed >=) */

loc_004E6C45: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6C51; /* je: equal / zero */

loc_004E6C4C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E6C51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6C4Fu); } /* indirect call */
    }

loc_004E6C51: ;
    MEM32(esi + 0x28) = ebp;

loc_004E6C54: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004E6C67; /* jge: greater or equal (signed >=) */

loc_004E6C58: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6C64; /* je: equal / zero */

loc_004E6C5F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E6C64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6C62u); } /* indirect call */
    }

loc_004E6C64: ;
    MEM32(esi + 0x24) = ebp;

loc_004E6C67: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi + 0x3C) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_004E6C9E; /* jl: less (signed <) */

loc_004E6C6E: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E6C9E; /* jne: not equal / not zero */

loc_004E6C73: ;
    PUSH32(esp, 0x004E6C78u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E6C78: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004E6C82u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6C82: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6C92; /* je: equal / zero */

loc_004E6C89: ;
    ecx = eax;
    PUSH32(esp, 0x004E6C90u); RECOMP_ABI_CALL(0x004E5A82u, sub_004E5A82); /* call 0x004E5A82 */

loc_004E6C90: ;
    goto loc_004E6C94;

loc_004E6C92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6C94: ;
    ecx = eax;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x004E6C9Eu); RECOMP_ABI_CALL(0x004E5A9Fu, sub_004E5A9F); /* call 0x004E5A9F */

loc_004E6C9E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004E6CD3; /* jl: less (signed <) */

loc_004E6CA3: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E6CD3; /* jne: not equal / not zero */

loc_004E6CA8: ;
    PUSH32(esp, 0x004E6CADu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E6CAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004E6CB7u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6CB7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6CC7; /* je: equal / zero */

loc_004E6CBE: ;
    ecx = eax;
    PUSH32(esp, 0x004E6CC5u); RECOMP_ABI_CALL(0x004E5BDDu, sub_004E5BDD); /* call 0x004E5BDD */

loc_004E6CC5: ;
    goto loc_004E6CC9;

loc_004E6CC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6CC9: ;
    ecx = eax;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x004E6CD3u); RECOMP_ABI_CALL(0x004E68B1u, sub_004E68B1); /* call 0x004E68B1 */

loc_004E6CD3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004E6D01; /* jl: less (signed <) */

loc_004E6CD8: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E6D01; /* jne: not equal / not zero */

loc_004E6CDD: ;
    PUSH32(esp, 0x004E6CE2u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E6CE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004E6CECu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6CEC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6CFC; /* je: equal / zero */

loc_004E6CF3: ;
    ecx = eax;
    PUSH32(esp, 0x004E6CFAu); RECOMP_ABI_CALL(0x004E5A15u, sub_004E5A15); /* call 0x004E5A15 */

loc_004E6CFA: ;
    goto loc_004E6CFE;

loc_004E6CFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6CFE: ;
    MEM32(esi + 0x2C) = eax;

loc_004E6D01: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004E6D39; /* jl: less (signed <) */

loc_004E6D06: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E6D39; /* jne: not equal / not zero */

loc_004E6D0B: ;
    PUSH32(esp, 0x004E6D10u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E6D10: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x004E6D1Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6D1D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6D2D; /* je: equal / zero */

loc_004E6D24: ;
    ecx = eax;
    PUSH32(esp, 0x004E6D2Bu); RECOMP_ABI_CALL(0x004E5DE3u, sub_004E5DE3); /* call 0x004E5DE3 */

loc_004E6D2B: ;
    goto loc_004E6D2F;

loc_004E6D2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6D2F: ;
    ecx = eax;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x004E6D39u); RECOMP_ABI_CALL(0x004E5E17u, sub_004E5E17); /* call 0x004E5E17 */

loc_004E6D39: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004E6D6E; /* jl: less (signed <) */

loc_004E6D3E: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E6D6E; /* jne: not equal / not zero */

loc_004E6D43: ;
    PUSH32(esp, 0x004E6D48u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6D48: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x004E6D52u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6D52: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6D62; /* je: equal / zero */

loc_004E6D59: ;
    ecx = eax;
    PUSH32(esp, 0x004E6D60u); RECOMP_ABI_CALL(0x004E6223u, sub_004E6223); /* call 0x004E6223 */

loc_004E6D60: ;
    goto loc_004E6D64;

loc_004E6D62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6D64: ;
    ecx = eax;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x004E6D6Eu); RECOMP_ABI_CALL(0x004E6258u, sub_004E6258); /* call 0x004E6258 */

loc_004E6D6E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004E6DA3; /* jl: less (signed <) */

loc_004E6D73: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E6DA3; /* jne: not equal / not zero */

loc_004E6D78: ;
    PUSH32(esp, 0x004E6D7Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E6D7D: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004E6D87u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E6D87: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6D97; /* je: equal / zero */

loc_004E6D8E: ;
    ecx = eax;
    PUSH32(esp, 0x004E6D95u); RECOMP_ABI_CALL(0x004E66C6u, sub_004E66C6); /* call 0x004E66C6 */

loc_004E6D95: ;
    goto loc_004E6D99;

loc_004E6D97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6D99: ;
    ecx = eax;
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x004E6DA3u); RECOMP_ABI_CALL(0x004E69C8u, sub_004E69C8); /* call 0x004E69C8 */

loc_004E6DA3: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E6DCB; /* jbe: below or equal (unsigned <=) */

loc_004E6DB0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E6DBAu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E6DBA: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E6DC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6DC3u); } /* indirect call */
    }

loc_004E6DC6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E6DB0; /* jb: below (unsigned <) */

loc_004E6DCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E6DD4
 * Original: 0x004E6DD4 - 0x004E6DF4 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6DD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E6DD4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi) = 0x86CF0C;
    PUSH32(esp, 0x004E6DE4u); RECOMP_ABI_CALL(0x004E6BABu, sub_004E6BAB); /* call 0x004E6BAB */

loc_004E6DE4: ;
    ecx = esi + 8;
    PUSH32(esp, 0x004E6DECu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004E6DEC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E6DF4
 * Original: 0x004E6DF4 - 0x004E6E10 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6DF4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6DF4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E6DFCu); RECOMP_ABI_CALL(0x004E6DD4u, sub_004E6DD4); /* call 0x004E6DD4 */

loc_004E6DFC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E6E0A; /* je: equal / zero */

loc_004E6E03: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E6E09u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E6E09: ;
    POP32(esp, ecx);

loc_004E6E0A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E6E10
 * Original: 0x004E6E10 - 0x004E6E22 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6E10(void)
{

loc_004E6E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E6E18u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E6E18: ;
    MEM32(esi) = 0x86CF78;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E6E22
 * Original: 0x004E6E22 - 0x004E6E2D (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6E22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E6E22: ;
    MEM32(ecx) = 0x86CF78;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E6E2D
 * Original: 0x004E6E2D - 0x004E6E4F (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6E2D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6E2D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CF78;
    PUSH32(esp, 0x004E6E3Bu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004E6E3B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E6E49; /* je: equal / zero */

loc_004E6E42: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E6E48u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E6E48: ;
    POP32(esp, ecx);

loc_004E6E49: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E6E4F
 * Original: 0x004E6E4F - 0x004E6E61 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6E4F(void)
{

loc_004E6E4F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E6E57u); RECOMP_ABI_CALL(0x004E9ADCu, sub_004E9ADC); /* call 0x004E9ADC */

loc_004E6E57: ;
    MEM32(esi) = 0x86CFB8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E6E61
 * Original: 0x004E6E61 - 0x004E6E6C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6E61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E6E61: ;
    MEM32(ecx) = 0x86CFB8;
    g_seh_ebp = ebp; sub_004E9AEE(); return; /* tail jmp 0x004E9AEE */

}

/**
 * sub_004E6E6C
 * Original: 0x004E6E6C - 0x004E6E8E (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6E6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6E6C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CFB8;
    PUSH32(esp, 0x004E6E7Au); RECOMP_ABI_CALL(0x004E9AEEu, sub_004E9AEE); /* call 0x004E9AEE */

loc_004E6E7A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E6E88; /* je: equal / zero */

loc_004E6E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E6E87u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E6E87: ;
    POP32(esp, ecx);

loc_004E6E88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E6E8E
 * Original: 0x004E6E8E - 0x004E6EA0 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6E8E(void)
{

loc_004E6E8E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E6E96u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E6E96: ;
    MEM32(esi) = 0x86CFD0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E6EA0
 * Original: 0x004E6EA0 - 0x004E6EAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E6EA0: ;
    MEM32(ecx) = 0x86CFD0;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E6EAB
 * Original: 0x004E6EAB - 0x004E6ECD (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6EAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6EAB: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CFD0;
    PUSH32(esp, 0x004E6EB9u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004E6EB9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E6EC7; /* je: equal / zero */

loc_004E6EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E6EC6u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E6EC6: ;
    POP32(esp, ecx);

loc_004E6EC7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E6ECD
 * Original: 0x004E6ECD - 0x004E6F24 (87 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6ECD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E6ECD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x004E6EDCu); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E6EDC: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    POP32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E6EE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6EE5u); } /* indirect call */
    }

loc_004E6EE8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E6EEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6EECu); } /* indirect call */
    }

loc_004E6EEF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E6F17; /* jbe: below or equal (unsigned <=) */

loc_004E6EF9: ;
    ebp = edi + 0x56;

loc_004E6EFC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004E6F06u); RECOMP_ABI_CALL(0x004DBEFCu, sub_004DBEFC); /* call 0x004DBEFC */

loc_004E6F06: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004E6F20; /* jne: not equal / not zero */

loc_004E6F0C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xB8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E6EFC; /* jb: below (unsigned <) */

loc_004E6F17: ;
    eax = MEM32(edi + 4);

loc_004E6F1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004E6F20: ;
    eax = esi;
    goto loc_004E6F1A;

}

/**
 * sub_004E6F24
 * Original: 0x004E6F24 - 0x004E6F50 (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6F24(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6F24: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, MEM32(edi + 0x24));
    PUSH32(esp, 0x004E6F30u); RECOMP_ABI_CALL(0x005EB3B0u, sub_005EB3B0); /* call 0x005EB3B0 */

loc_004E6F30: ;
    POP32(esp, ecx);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x004E6F3Au); RECOMP_ABI_CALL(0x004E6ECDu, sub_004E6ECD); /* call 0x004E6ECD */

loc_004E6F3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004E6F4B; /* jae: above or equal (unsigned >=) */

loc_004E6F3F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB8);
    eax = eax + esi + 8;
    goto loc_004E6F4D;

loc_004E6F4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E6F4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E6F50
 * Original: 0x004E6F50 - 0x004E6F7B (43 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E6F50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = ebx + 8;
    ebp = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E6F76; /* jbe: below or equal (unsigned <=) */

loc_004E6F62: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E6F6Au); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E6F6A: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E6F71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E6F6Fu); } /* indirect call */
    }

loc_004E6F71: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E6F62; /* jb: below (unsigned <) */

loc_004E6F76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E6F7B
 * Original: 0x004E6F7B - 0x004E6FB6 (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6F7B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E6F7B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E6F83u); RECOMP_ABI_CALL(0x004E6F24u, sub_004E6F24); /* call 0x004E6F24 */

loc_004E6F83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6FB4; /* je: equal / zero */

loc_004E6F87: ;
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E6FB4; /* je: equal / zero */

loc_004E6F91: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E6F97u); RECOMP_ABI_CALL(0x005ECA60u, sub_005ECA60); /* call 0x005ECA60 */

loc_004E6F97: ;
    POP32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004E6FA3u); RECOMP_ABI_CALL(0x004E6ECDu, sub_004E6ECD); /* call 0x004E6ECD */

loc_004E6FA3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64697374);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x004E6FB1u); RECOMP_ABI_CALL(0x005EB550u, sub_005EB550); /* call 0x005EB550 */

loc_004E6FB1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E6FB4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E6FB6
 * Original: 0x004E6FB6 - 0x004E6FF0 (58 bytes, 17 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6FB6(void)
{

loc_004E6FB6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E6FBEu); RECOMP_ABI_CALL(0x004E9B1Bu, sub_004E9B1B); /* call 0x004E9B1B */

loc_004E6FBE: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = esi + 0x28;
    MEM32(esi) = 0x86CFD8;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x004E6FD7u); RECOMP_ABI_CALL(0x004BFD57u, sub_004BFD57); /* call 0x004BFD57 */

loc_004E6FD7: ;
    PUSH32(esp, 0x004E6FDCu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E6FDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004E6FEAu); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_004E6FEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E6FF0
 * Original: 0x004E6FF0 - 0x004E6FF8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E6FF0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_004E6FF8
 * Original: 0x004E6FF8 - 0x004E6FFC (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6FF8(void)
{

loc_004E6FF8: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_004E6FFC
 * Original: 0x004E6FFC - 0x004E7008 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6FFC(void)
{

loc_004E6FFC: ;
    PUSH32(esp, 0x004E7001u); RECOMP_ABI_CALL(0x004E6F24u, sub_004E6F24); /* call 0x004E6F24 */

loc_004E7001: ;
    eax = MEM32(eax + 0xA0);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7008
 * Original: 0x004E7008 - 0x004E7014 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7008(void)
{

loc_004E7008: ;
    PUSH32(esp, 0x004E700Du); RECOMP_ABI_CALL(0x004E6F24u, sub_004E6F24); /* call 0x004E6F24 */

loc_004E700D: ;
    eax = MEM32(eax + 0xA4);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7014
 * Original: 0x004E7014 - 0x004E703E (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7014(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7014: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CFD8;
    PUSH32(esp, 0x004E7022u); RECOMP_ABI_CALL(0x004E6F7Bu, sub_004E6F7B); /* call 0x004E6F7B */

loc_004E7022: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x004E702Au); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004E702A: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7036; /* je: equal / zero */

loc_004E7031: ;
    PUSH32(esp, 0x004E7036u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E7036: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E9B3F(); return; /* tail jmp 0x004E9B3F */

}

/**
 * sub_004E703E
 * Original: 0x004E703E - 0x004E70B2 (116 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E703E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E703E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E7046u); RECOMP_ABI_CALL(0x004E6F24u, sub_004E6F24); /* call 0x004E6F24 */

loc_004E7046: ;
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E70A3; /* jne: not equal / not zero */

loc_004E704F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x696E676D);
    PUSH32(esp, 0x004E705Au); RECOMP_ABI_CALL(0x004580C0u, sub_004580C0); /* call 0x004580C0 */

loc_004E705A: ;
    MEM32(esp) = 0x4579B0;
    PUSH32(esp, 0x4578F0);
    PUSH32(esp, 0x457880);
    ecx = esi;
    PUSH32(esp, 0x004E7072u); RECOMP_ABI_CALL(0x004E6F24u, sub_004E6F24); /* call 0x004E6F24 */

loc_004E7072: ;
    PUSH32(esp, MEM32(eax + 0xA4));
    PUSH32(esp, 0x004E707Du); RECOMP_ABI_CALL(0x005EC9E0u, sub_005EC9E0); /* call 0x005EC9E0 */

loc_004E707D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x004E7087u); RECOMP_ABI_CALL(0x004580E0u, sub_004580E0); /* call 0x004580E0 */

loc_004E7087: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004E7091u); RECOMP_ABI_CALL(0x004E6ECDu, sub_004E6ECD); /* call 0x004E6ECD */

loc_004E7091: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64697374);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x004E709Fu); RECOMP_ABI_CALL(0x005EB550u, sub_005EB550); /* call 0x005EB550 */

loc_004E709F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_004E70A3: ;
    ecx = esi;
    PUSH32(esp, 0x004E70AAu); RECOMP_ABI_CALL(0x004E6F24u, sub_004E6F24); /* call 0x004E6F24 */

loc_004E70AA: ;
    eax = MEM32(eax + 0xA8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E70B2
 * Original: 0x004E70B2 - 0x004E70DF (45 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E70B2(void)
{

loc_004E70B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E70BAu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E70BA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004E70C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E70BEu); } /* indirect call */
    }

loc_004E70C1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004E70C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E70C5u); } /* indirect call */
    }

loc_004E70C8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4028);
    PUSH32(esp, MEM32(esi + 0x28));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E70DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E70D8u); } /* indirect call */
    }

loc_004E70DB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E70DF
 * Original: 0x004E70DF - 0x004E7138 (89 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E70DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E70DF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    edi = ecx;
    esi = edi + 0x2C;
    ecx = esi;
    PUSH32(esp, 0x004E70F2u); RECOMP_ABI_CALL(0x004DDA93u, sub_004DDA93); /* call 0x004DDA93 */

loc_004E70F2: ;
    eax = MEM32(edi + 0x14);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E7132; /* jbe: below or equal (unsigned <=) */

loc_004E7102: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_004E7104: ;
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = edi + 8;
    PUSH32(esp, 0x004E7110u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E7110: ;
    ebx = MEM32(eax);
    eax = MEM32(esi);
    ebp = MEM32(ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E711Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7118u); } /* indirect call */
    }

loc_004E711B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x004E7122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E711Fu); } /* indirect call */
    }

loc_004E7122: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E7104; /* jb: below (unsigned <) */

loc_004E7130: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004E7132: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7138
 * Original: 0x004E7138 - 0x004E7154 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7138(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7138: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E7140u); RECOMP_ABI_CALL(0x004E7014u, sub_004E7014); /* call 0x004E7014 */

loc_004E7140: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E714E; /* je: equal / zero */

loc_004E7147: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E714Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E714D: ;
    POP32(esp, ecx);

loc_004E714E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7154
 * Original: 0x004E7154 - 0x004E7166 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7154(void)
{

loc_004E7154: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E715Cu); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E715C: ;
    MEM32(esi) = 0x86CFF4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7166
 * Original: 0x004E7166 - 0x004E7171 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7166(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7166: ;
    MEM32(ecx) = 0x86CFF4;
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E7171
 * Original: 0x004E7171 - 0x004E7193 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7171(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7171: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CFF4;
    PUSH32(esp, 0x004E717Fu); RECOMP_ABI_CALL(0x004E59DBu, sub_004E59DB); /* call 0x004E59DB */

loc_004E717F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E718D; /* je: equal / zero */

loc_004E7186: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E718Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E718C: ;
    POP32(esp, ecx);

loc_004E718D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7193
 * Original: 0x004E7193 - 0x004E71DB (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7193(void)
{

loc_004E7193: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E719Bu); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E719B: ;
    PUSH32(esp, 0x004E71A0u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E71A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    ecx = esi + 8;
    PUSH32(esp, 0x004E71ADu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004E71AD: ;
    PUSH32(esp, 0x004E71B2u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E71B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004E71BFu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004E71BF: ;
    PUSH32(esp, 0x004E71C4u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E71C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004E71D1u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004E71D1: ;
    MEM32(esi) = 0x86D014;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E71DB
 * Original: 0x004E71DB - 0x004E7204 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E71DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E71DB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x40;
    MEM32(esi) = 0x86D014;
    PUSH32(esp, 0x004E71ECu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004E71EC: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004E71F4u); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004E71F4: ;
    ecx = esi + 8;
    PUSH32(esp, 0x004E71FCu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004E71FC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E7204
 * Original: 0x004E7204 - 0x004E7220 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7204(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7204: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E720Cu); RECOMP_ABI_CALL(0x004E71DBu, sub_004E71DB); /* call 0x004E71DB */

loc_004E720C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E721A; /* je: equal / zero */

loc_004E7213: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7219u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E7219: ;
    POP32(esp, ecx);

loc_004E721A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7220
 * Original: 0x004E7220 - 0x004E7232 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7220(void)
{

loc_004E7220: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E7228u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E7228: ;
    MEM32(esi) = 0x86D018;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7232
 * Original: 0x004E7232 - 0x004E723D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7232(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7232: ;
    MEM32(ecx) = 0x86D018;
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E723D
 * Original: 0x004E723D - 0x004E725F (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E723D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E723D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D018;
    PUSH32(esp, 0x004E724Bu); RECOMP_ABI_CALL(0x004E59DBu, sub_004E59DB); /* call 0x004E59DB */

loc_004E724B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E7259; /* je: equal / zero */

loc_004E7252: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7258u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E7258: ;
    POP32(esp, ecx);

loc_004E7259: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E725F
 * Original: 0x004E725F - 0x004E7271 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E725F(void)
{

loc_004E725F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E7267u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E7267: ;
    MEM32(esi) = 0x86D038;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7271
 * Original: 0x004E7271 - 0x004E727C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7271: ;
    MEM32(ecx) = 0x86D038;
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E727C
 * Original: 0x004E727C - 0x004E729E (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E727C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E727C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D038;
    PUSH32(esp, 0x004E728Au); RECOMP_ABI_CALL(0x004E59DBu, sub_004E59DB); /* call 0x004E59DB */

loc_004E728A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E7298; /* je: equal / zero */

loc_004E7291: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7297u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E7297: ;
    POP32(esp, ecx);

loc_004E7298: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E729E
 * Original: 0x004E729E - 0x004E72B0 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E729E(void)
{

loc_004E729E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E72A6u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E72A6: ;
    MEM32(esi) = 0x86D06C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E72B0
 * Original: 0x004E72B0 - 0x004E72BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E72B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E72B0: ;
    MEM32(ecx) = 0x86D06C;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E72BB
 * Original: 0x004E72BB - 0x004E72DD (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E72BB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E72BB: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D06C;
    PUSH32(esp, 0x004E72C9u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004E72C9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E72D7; /* je: equal / zero */

loc_004E72D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E72D6u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E72D6: ;
    POP32(esp, ecx);

loc_004E72D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E72DD
 * Original: 0x004E72DD - 0x004E7317 (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E72DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E72DD: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D0DC;
    ecx = esi + 0x28;
    MEM32(ecx) = 0x86D0B8;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D0A4;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    edx = eax + -24;
    MEM32(eax + esi + 0x20) = edx;
    PUSH32(esp, 0x004E730Fu); RECOMP_ABI_CALL(0x004E9CAEu, sub_004E9CAE); /* call 0x004E9CAE */

loc_004E730F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E9E3A(); return; /* tail jmp 0x004E9E3A */

}

/**
 * sub_004E7317
 * Original: 0x004E7317 - 0x004E731A (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7317(void)
{

loc_004E7317: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E731A
 * Original: 0x004E731A - 0x004E7335 (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E731A(void)
{

loc_004E731A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E7322u); RECOMP_ABI_CALL(0x0060CA37u, sub_0060CA37); /* call 0x0060CA37 */

loc_004E7322: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x86D0F8;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7335
 * Original: 0x004E7335 - 0x004E733C (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7335(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7335: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004E733C
 * Original: 0x004E733C - 0x004E7343 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E733C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E733C: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004E7343
 * Original: 0x004E7343 - 0x004E7349 (6 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7343(void)
{

loc_004E7343: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}
