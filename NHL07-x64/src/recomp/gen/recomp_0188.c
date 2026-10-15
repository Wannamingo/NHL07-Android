/**
 * nhl_07_recomp - Recompiled code chunk 188
 * Functions: 250 (0x003E8200 - 0x003EE6C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003E8200
 * Original: 0x003E8200 - 0x003E8226 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8200: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8223; /* je: equal / zero */

loc_003E8209: ;
    edx = MEM32(esp + 4);
    /* nop */

loc_003E8210: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8223; /* jne: not equal / not zero */

loc_003E8214: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E821C; /* jne: not equal / not zero */

loc_003E8218: ;
    SET_LO8(ecx, 1);
    goto loc_003E821F;

loc_003E821C: ;
    eax = MEM32(eax + 4);

loc_003E821F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8210; /* jne: not equal / not zero */

loc_003E8223: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8230
 * Original: 0x003E8230 - 0x003E825D (45 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E8230: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(ecx + 8);
    /* nop */

loc_003E8240: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E825A; /* je: equal / zero */

loc_003E8244: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E824D; /* je: equal / zero */

loc_003E8248: ;
    ecx = MEM32(ecx + 4);
    goto loc_003E8240;

loc_003E824D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E825A; /* je: equal / zero */

loc_003E8251: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_000219CD(); return; /* tail jmp 0x000219CD */

loc_003E825A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8270
 * Original: 0x003E8270 - 0x003E8273 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8270(void)
{

loc_003E8270: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8280
 * Original: 0x003E8280 - 0x003E829A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8280: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);

loc_003E8287: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8294; /* je: equal / zero */

loc_003E828B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8294; /* je: equal / zero */

loc_003E828F: ;
    eax = MEM32(eax + 4);
    goto loc_003E8287;

loc_003E8294: ;
    eax = MEM32(eax + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E82A0
 * Original: 0x003E82A0 - 0x003E82C6 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E82A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E82A0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E82BC; /* je: equal / zero */

loc_003E82A7: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E82BF; /* jne: not equal / not zero */

loc_003E82AE: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E82BC; /* je: equal / zero */

loc_003E82B5: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E82A7; /* jne: not equal / not zero */

loc_003E82BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_003E82BF: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_003E82D0
 * Original: 0x003E82D0 - 0x003E832A (90 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E82D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E82D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E82E5; /* je: equal / zero */

loc_003E82D8: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E82E5; /* je: equal / zero */

loc_003E82DF: ;
    eax = MEM32(edx + 0x14);
    esp += 8; return; /* ret 4 */

loc_003E82E5: ;
    edx = MEM32(eax + 4);
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    /* nop */

loc_003E82F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E82FD; /* je: equal / zero */

loc_003E82F4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E82FD; /* je: equal / zero */

loc_003E82F8: ;
    eax = MEM32(eax + 4);
    goto loc_003E82F0;

loc_003E82FD: ;
    esi = MEM32(ecx + 4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003E830C; /* je: equal / zero */

loc_003E8307: ;
    edx = MEM32(eax + 4);
    goto loc_003E830E;

loc_003E830C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E830E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8310: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8327; /* je: equal / zero */

loc_003E8314: ;
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8320; /* jne: not equal / not zero */

loc_003E831B: ;
    edx = MEM32(edx + 4);
    goto loc_003E8323;

loc_003E8320: ;
    eax = MEM32(ecx + 0x14);

loc_003E8323: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8310; /* je: equal / zero */

loc_003E8327: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8340
 * Original: 0x003E8340 - 0x003E836A (42 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8340: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8361; /* jne: not equal / not zero */

loc_003E8358: ;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

loc_003E8361: ;
    MEM32(edx + 8) = eax;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8380
 * Original: 0x003E8380 - 0x003E83AD (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8380: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E83A1; /* jne: not equal / not zero */

loc_003E8398: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

loc_003E83A1: ;
    edx = MEM32(ecx + 0xC);
    MEM32(edx + 4) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E83C0
 * Original: 0x003E83C0 - 0x003E83F6 (54 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E83C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E83C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E83D1; /* jne: not equal / not zero */

loc_003E83C9: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E83DC;

loc_003E83D1: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    POP32(esp, esi);

loc_003E83DC: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E83EA; /* jne: not equal / not zero */

loc_003E83E1: ;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

loc_003E83EA: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8410
 * Original: 0x003E8410 - 0x003E8427 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8410: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E8430
 * Original: 0x003E8430 - 0x003E8447 (23 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8430: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);

loc_003E8437: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8444; /* je: equal / zero */

loc_003E843B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8444; /* je: equal / zero */

loc_003E843F: ;
    eax = MEM32(eax + 4);
    goto loc_003E8437;

loc_003E8444: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8450
 * Original: 0x003E8450 - 0x003E8467 (23 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8450: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);

loc_003E8457: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8464; /* je: equal / zero */

loc_003E845B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8464; /* je: equal / zero */

loc_003E845F: ;
    eax = MEM32(eax + 4);
    goto loc_003E8457;

loc_003E8464: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8470
 * Original: 0x003E8470 - 0x003E8476 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8470(void)
{

loc_003E8470: ;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8480
 * Original: 0x003E8480 - 0x003E84A6 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8480: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E84A3; /* je: equal / zero */

loc_003E8489: ;
    edx = MEM32(esp + 4);
    /* nop */

loc_003E8490: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E84A3; /* jne: not equal / not zero */

loc_003E8494: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E849C; /* jne: not equal / not zero */

loc_003E8498: ;
    SET_LO8(ecx, 1);
    goto loc_003E849F;

loc_003E849C: ;
    eax = MEM32(eax + 4);

loc_003E849F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8490; /* jne: not equal / not zero */

loc_003E84A3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E84B0
 * Original: 0x003E84B0 - 0x003E84DD (45 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E84B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E84B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(ecx + 8);
    /* nop */

loc_003E84C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E84DA; /* je: equal / zero */

loc_003E84C4: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E84CD; /* je: equal / zero */

loc_003E84C8: ;
    ecx = MEM32(ecx + 4);
    goto loc_003E84C0;

loc_003E84CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E84DA; /* je: equal / zero */

loc_003E84D1: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_000219CD(); return; /* tail jmp 0x000219CD */

loc_003E84DA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E84F0
 * Original: 0x003E84F0 - 0x003E84F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E84F0(void)
{

loc_003E84F0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8500
 * Original: 0x003E8500 - 0x003E851A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8500: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);

loc_003E8507: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8514; /* je: equal / zero */

loc_003E850B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8514; /* je: equal / zero */

loc_003E850F: ;
    eax = MEM32(eax + 4);
    goto loc_003E8507;

loc_003E8514: ;
    eax = MEM32(eax + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8520
 * Original: 0x003E8520 - 0x003E8546 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8520: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E853C; /* je: equal / zero */

loc_003E8527: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E853F; /* jne: not equal / not zero */

loc_003E852E: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E853C; /* je: equal / zero */

loc_003E8535: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8527; /* jne: not equal / not zero */

loc_003E853C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_003E853F: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8550
 * Original: 0x003E8550 - 0x003E85AA (90 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8550: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8565; /* je: equal / zero */

loc_003E8558: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8565; /* je: equal / zero */

loc_003E855F: ;
    eax = MEM32(edx + 0x14);
    esp += 8; return; /* ret 4 */

loc_003E8565: ;
    edx = MEM32(eax + 4);
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    /* nop */

loc_003E8570: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E857D; /* je: equal / zero */

loc_003E8574: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E857D; /* je: equal / zero */

loc_003E8578: ;
    eax = MEM32(eax + 4);
    goto loc_003E8570;

loc_003E857D: ;
    esi = MEM32(ecx + 4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003E858C; /* je: equal / zero */

loc_003E8587: ;
    edx = MEM32(eax + 4);
    goto loc_003E858E;

loc_003E858C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E858E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8590: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E85A7; /* je: equal / zero */

loc_003E8594: ;
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E85A0; /* jne: not equal / not zero */

loc_003E859B: ;
    edx = MEM32(edx + 4);
    goto loc_003E85A3;

loc_003E85A0: ;
    eax = MEM32(ecx + 0x14);

loc_003E85A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8590; /* je: equal / zero */

loc_003E85A7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E85C0
 * Original: 0x003E85C0 - 0x003E85EA (42 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E85C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E85C0: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E85E1; /* jne: not equal / not zero */

loc_003E85D8: ;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

loc_003E85E1: ;
    MEM32(edx + 8) = eax;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8600
 * Original: 0x003E8600 - 0x003E862D (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8600: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8621; /* jne: not equal / not zero */

loc_003E8618: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

loc_003E8621: ;
    edx = MEM32(ecx + 0xC);
    MEM32(edx + 4) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8640
 * Original: 0x003E8640 - 0x003E8676 (54 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8651; /* jne: not equal / not zero */

loc_003E8649: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E865C;

loc_003E8651: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    POP32(esp, esi);

loc_003E865C: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E866A; /* jne: not equal / not zero */

loc_003E8661: ;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

loc_003E866A: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8690
 * Original: 0x003E8690 - 0x003E86A9 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8690: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003E86A3; /* je: equal / zero */

loc_003E869A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E86A0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E86A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E86A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E86B0
 * Original: 0x003E86B0 - 0x003E870C (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E86B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E86B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = ecx;
    PUSH32(esp, 0x003E86BEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E86BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E86DC; /* je: equal / zero */

loc_003E86C5: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_003E86DE;

loc_003E86DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E86DE: ;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 8) = edx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E86F1; /* jne: not equal / not zero */

loc_003E86EC: ;
    MEM32(esi + 8) = eax;
    goto loc_003E86F7;

loc_003E86F1: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 4) = eax;

loc_003E86F7: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E8702; /* jne: not equal / not zero */

loc_003E86FF: ;
    MEM32(esi + 0x10) = eax;

loc_003E8702: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8730
 * Original: 0x003E8730 - 0x003E87AE (126 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8730: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    goto loc_003E8740;

    /* nop */

loc_003E8740: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8751; /* je: equal / zero */

loc_003E8744: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E874D; /* je: equal / zero */

loc_003E8748: ;
    eax = MEM32(eax + 4);
    goto loc_003E8740;

loc_003E874D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E876D; /* jne: not equal / not zero */

loc_003E8751: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003E8759u); RECOMP_ABI_CALL(0x0002AC3Au, sub_0002AC3A); /* call 0x0002AC3A */

loc_003E8759: ;
    eax = MEM32(edi + 8);
    /* nop */

loc_003E8760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E876D; /* je: equal / zero */

loc_003E8764: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E876D; /* je: equal / zero */

loc_003E8768: ;
    eax = MEM32(eax + 4);
    goto loc_003E8760;

loc_003E876D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003E879F; /* jne: not equal / not zero */

loc_003E8793: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_003E879F: ;
    edx = MEM32(eax + 0x14);
    MEM32(edx + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E87D0
 * Original: 0x003E87D0 - 0x003E87E8 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E87D0(void)
{

loc_003E87D0: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E87E5u); RECOMP_ABI_CALL(0x0001BA05u, sub_0001BA05); /* call 0x0001BA05 */

loc_003E87E5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E87F0
 * Original: 0x003E87F0 - 0x003E8885 (149 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E87F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E87F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E887A; /* jbe: below or equal (unsigned <=) */

loc_003E87FD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + edi * 4 + -4;
    ebx = edi;

loc_003E8806: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    goto loc_003E8810;

    /* nop */

loc_003E8810: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E886D; /* je: equal / zero */

loc_003E8814: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E881F; /* je: equal / zero */

loc_003E881A: ;
    eax = MEM32(eax + 4);
    goto loc_003E8810;

loc_003E881F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E886D; /* je: equal / zero */

loc_003E8823: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E882F; /* jne: not equal / not zero */

loc_003E8827: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E8838;

loc_003E882F: ;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;

loc_003E8838: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8845; /* jne: not equal / not zero */

loc_003E883D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    goto loc_003E884E;

loc_003E8845: ;
    edx = MEM32(eax + 4);
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;

loc_003E884E: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8867; /* jne: not equal / not zero */

loc_003E8862: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_003E886A;

loc_003E8867: ;
    MEM32(edx + 8) = eax;

loc_003E886A: ;
    MEM32(ecx + 8) = eax;

loc_003E886D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E8806; /* jne: not equal / not zero */

loc_003E8873: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E887A: ;
    edx = MEM32(eax + edi * 4 + -4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E88B0
 * Original: 0x003E88B0 - 0x003E8920 (112 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E88B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E88B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 8);
    eax = edx;
    /* nop */

loc_003E88C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E88CD; /* je: equal / zero */

loc_003E88C4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E88CD; /* je: equal / zero */

loc_003E88C8: ;
    eax = MEM32(eax + 4);
    goto loc_003E88C0;

loc_003E88CD: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E88D9; /* jne: not equal / not zero */

loc_003E88D2: ;
    MEM32(esi + 0x10) = 0;

loc_003E88D9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003E88E5; /* jne: not equal / not zero */

loc_003E88E0: ;
    MEM32(esi + 8) = ecx;
    goto loc_003E88EB;

loc_003E88E5: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;

loc_003E88EB: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003E8908; /* jne: not equal / not zero */

loc_003E88F3: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x003E88FCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E88FC: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E8908: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x003E8914u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E8914: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8940
 * Original: 0x003E8940 - 0x003E899C (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8940: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = ecx;
    PUSH32(esp, 0x003E894Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E894E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E896C; /* je: equal / zero */

loc_003E8955: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_003E896E;

loc_003E896C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E896E: ;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 8) = edx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8981; /* jne: not equal / not zero */

loc_003E897C: ;
    MEM32(esi + 8) = eax;
    goto loc_003E8987;

loc_003E8981: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 4) = eax;

loc_003E8987: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E8992; /* jne: not equal / not zero */

loc_003E898F: ;
    MEM32(esi + 0x10) = eax;

loc_003E8992: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E89C0
 * Original: 0x003E89C0 - 0x003E8A3E (126 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E89C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E89C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    goto loc_003E89D0;

    /* nop */

loc_003E89D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E89E1; /* je: equal / zero */

loc_003E89D4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E89DD; /* je: equal / zero */

loc_003E89D8: ;
    eax = MEM32(eax + 4);
    goto loc_003E89D0;

loc_003E89DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E89FD; /* jne: not equal / not zero */

loc_003E89E1: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003E89E9u); RECOMP_ABI_CALL(0x000189BDu, sub_000189BD); /* call 0x000189BD */

loc_003E89E9: ;
    eax = MEM32(edi + 8);
    /* nop */

loc_003E89F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E89FD; /* je: equal / zero */

loc_003E89F4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E89FD; /* je: equal / zero */

loc_003E89F8: ;
    eax = MEM32(eax + 4);
    goto loc_003E89F0;

loc_003E89FD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003E8A2F; /* jne: not equal / not zero */

loc_003E8A23: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_003E8A2F: ;
    edx = MEM32(eax + 0x14);
    MEM32(edx + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8A60
 * Original: 0x003E8A60 - 0x003E8A78 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8A60(void)
{

loc_003E8A60: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E8A75u); RECOMP_ABI_CALL(0x0001A650u, sub_0001A650); /* call 0x0001A650 */

loc_003E8A75: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E8A80
 * Original: 0x003E8A80 - 0x003E8B15 (149 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E8A80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E8B0A; /* jbe: below or equal (unsigned <=) */

loc_003E8A8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + edi * 4 + -4;
    ebx = edi;

loc_003E8A96: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    goto loc_003E8AA0;

    /* nop */

loc_003E8AA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8AFD; /* je: equal / zero */

loc_003E8AA4: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8AAF; /* je: equal / zero */

loc_003E8AAA: ;
    eax = MEM32(eax + 4);
    goto loc_003E8AA0;

loc_003E8AAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8AFD; /* je: equal / zero */

loc_003E8AB3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8ABF; /* jne: not equal / not zero */

loc_003E8AB7: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E8AC8;

loc_003E8ABF: ;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;

loc_003E8AC8: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8AD5; /* jne: not equal / not zero */

loc_003E8ACD: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    goto loc_003E8ADE;

loc_003E8AD5: ;
    edx = MEM32(eax + 4);
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;

loc_003E8ADE: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8AF7; /* jne: not equal / not zero */

loc_003E8AF2: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_003E8AFA;

loc_003E8AF7: ;
    MEM32(edx + 8) = eax;

loc_003E8AFA: ;
    MEM32(ecx + 8) = eax;

loc_003E8AFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E8A96; /* jne: not equal / not zero */

loc_003E8B03: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E8B0A: ;
    edx = MEM32(eax + edi * 4 + -4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E8B40
 * Original: 0x003E8B40 - 0x003E8BB0 (112 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 8);
    eax = edx;
    /* nop */

loc_003E8B50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8B5D; /* je: equal / zero */

loc_003E8B54: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8B5D; /* je: equal / zero */

loc_003E8B58: ;
    eax = MEM32(eax + 4);
    goto loc_003E8B50;

loc_003E8B5D: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8B69; /* jne: not equal / not zero */

loc_003E8B62: ;
    MEM32(esi + 0x10) = 0;

loc_003E8B69: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003E8B75; /* jne: not equal / not zero */

loc_003E8B70: ;
    MEM32(esi + 8) = ecx;
    goto loc_003E8B7B;

loc_003E8B75: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;

loc_003E8B7B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003E8B98; /* jne: not equal / not zero */

loc_003E8B83: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x003E8B8Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E8B8C: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E8B98: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x003E8BA4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E8BA4: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8BD0
 * Original: 0x003E8BD0 - 0x003E8C2C (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8BD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = ecx;
    PUSH32(esp, 0x003E8BDEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E8BDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8BFC; /* je: equal / zero */

loc_003E8BE5: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_003E8BFE;

loc_003E8BFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8BFE: ;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 8) = edx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8C11; /* jne: not equal / not zero */

loc_003E8C0C: ;
    MEM32(esi + 8) = eax;
    goto loc_003E8C17;

loc_003E8C11: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 4) = eax;

loc_003E8C17: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E8C22; /* jne: not equal / not zero */

loc_003E8C1F: ;
    MEM32(esi + 0x10) = eax;

loc_003E8C22: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8C50
 * Original: 0x003E8C50 - 0x003E8CCE (126 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8C50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    goto loc_003E8C60;

    /* nop */

loc_003E8C60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8C71; /* je: equal / zero */

loc_003E8C64: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8C6D; /* je: equal / zero */

loc_003E8C68: ;
    eax = MEM32(eax + 4);
    goto loc_003E8C60;

loc_003E8C6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8C8D; /* jne: not equal / not zero */

loc_003E8C71: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003E8C79u); RECOMP_ABI_CALL(0x00037953u, sub_00037953); /* call 0x00037953 */

loc_003E8C79: ;
    eax = MEM32(edi + 8);
    /* nop */

loc_003E8C80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8C8D; /* je: equal / zero */

loc_003E8C84: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8C8D; /* je: equal / zero */

loc_003E8C88: ;
    eax = MEM32(eax + 4);
    goto loc_003E8C80;

loc_003E8C8D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003E8CBF; /* jne: not equal / not zero */

loc_003E8CB3: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_003E8CBF: ;
    edx = MEM32(eax + 0x14);
    MEM32(edx + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8CF0
 * Original: 0x003E8CF0 - 0x003E8D08 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8CF0(void)
{

loc_003E8CF0: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E8D05u); RECOMP_ABI_CALL(0x00024E11u, sub_00024E11); /* call 0x00024E11 */

loc_003E8D05: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E8D10
 * Original: 0x003E8D10 - 0x003E8DA5 (149 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E8D10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E8D9A; /* jbe: below or equal (unsigned <=) */

loc_003E8D1D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + edi * 4 + -4;
    ebx = edi;

loc_003E8D26: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    goto loc_003E8D30;

    /* nop */

loc_003E8D30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8D8D; /* je: equal / zero */

loc_003E8D34: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8D3F; /* je: equal / zero */

loc_003E8D3A: ;
    eax = MEM32(eax + 4);
    goto loc_003E8D30;

loc_003E8D3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8D8D; /* je: equal / zero */

loc_003E8D43: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8D4F; /* jne: not equal / not zero */

loc_003E8D47: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E8D58;

loc_003E8D4F: ;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;

loc_003E8D58: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8D65; /* jne: not equal / not zero */

loc_003E8D5D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    goto loc_003E8D6E;

loc_003E8D65: ;
    edx = MEM32(eax + 4);
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;

loc_003E8D6E: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8D87; /* jne: not equal / not zero */

loc_003E8D82: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_003E8D8A;

loc_003E8D87: ;
    MEM32(edx + 8) = eax;

loc_003E8D8A: ;
    MEM32(ecx + 8) = eax;

loc_003E8D8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E8D26; /* jne: not equal / not zero */

loc_003E8D93: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E8D9A: ;
    edx = MEM32(eax + edi * 4 + -4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E8DD0
 * Original: 0x003E8DD0 - 0x003E8E40 (112 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 8);
    eax = edx;
    /* nop */

loc_003E8DE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8DED; /* je: equal / zero */

loc_003E8DE4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8DED; /* je: equal / zero */

loc_003E8DE8: ;
    eax = MEM32(eax + 4);
    goto loc_003E8DE0;

loc_003E8DED: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8DF9; /* jne: not equal / not zero */

loc_003E8DF2: ;
    MEM32(esi + 0x10) = 0;

loc_003E8DF9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003E8E05; /* jne: not equal / not zero */

loc_003E8E00: ;
    MEM32(esi + 8) = ecx;
    goto loc_003E8E0B;

loc_003E8E05: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;

loc_003E8E0B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003E8E28; /* jne: not equal / not zero */

loc_003E8E13: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x003E8E1Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E8E1C: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E8E28: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x003E8E34u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E8E34: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8E60
 * Original: 0x003E8E60 - 0x003E8EBC (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8E60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = ecx;
    PUSH32(esp, 0x003E8E6Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E8E6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8E8C; /* je: equal / zero */

loc_003E8E75: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_003E8E8E;

loc_003E8E8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8E8E: ;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 8) = edx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8EA1; /* jne: not equal / not zero */

loc_003E8E9C: ;
    MEM32(esi + 8) = eax;
    goto loc_003E8EA7;

loc_003E8EA1: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 4) = eax;

loc_003E8EA7: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E8EB2; /* jne: not equal / not zero */

loc_003E8EAF: ;
    MEM32(esi + 0x10) = eax;

loc_003E8EB2: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E8EE0
 * Original: 0x003E8EE0 - 0x003E8F5E (126 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    goto loc_003E8EF0;

    /* nop */

loc_003E8EF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8F01; /* je: equal / zero */

loc_003E8EF4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8EFD; /* je: equal / zero */

loc_003E8EF8: ;
    eax = MEM32(eax + 4);
    goto loc_003E8EF0;

loc_003E8EFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8F1D; /* jne: not equal / not zero */

loc_003E8F01: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003E8F09u); RECOMP_ABI_CALL(0x0001F434u, sub_0001F434); /* call 0x0001F434 */

loc_003E8F09: ;
    eax = MEM32(edi + 8);
    /* nop */

loc_003E8F10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8F1D; /* je: equal / zero */

loc_003E8F14: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8F1D; /* je: equal / zero */

loc_003E8F18: ;
    eax = MEM32(eax + 4);
    goto loc_003E8F10;

loc_003E8F1D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003E8F4F; /* jne: not equal / not zero */

loc_003E8F43: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_003E8F4F: ;
    edx = MEM32(eax + 0x14);
    MEM32(edx + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8F80
 * Original: 0x003E8F80 - 0x003E8F98 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8F80(void)
{

loc_003E8F80: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E8F95u); RECOMP_ABI_CALL(0x00027BA2u, sub_00027BA2); /* call 0x00027BA2 */

loc_003E8F95: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E8FA0
 * Original: 0x003E8FA0 - 0x003E9035 (149 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E8FA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E902A; /* jbe: below or equal (unsigned <=) */

loc_003E8FAD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + edi * 4 + -4;
    ebx = edi;

loc_003E8FB6: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    goto loc_003E8FC0;

    /* nop */

loc_003E8FC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E901D; /* je: equal / zero */

loc_003E8FC4: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8FCF; /* je: equal / zero */

loc_003E8FCA: ;
    eax = MEM32(eax + 4);
    goto loc_003E8FC0;

loc_003E8FCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E901D; /* je: equal / zero */

loc_003E8FD3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8FDF; /* jne: not equal / not zero */

loc_003E8FD7: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E8FE8;

loc_003E8FDF: ;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;

loc_003E8FE8: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8FF5; /* jne: not equal / not zero */

loc_003E8FED: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    goto loc_003E8FFE;

loc_003E8FF5: ;
    edx = MEM32(eax + 4);
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;

loc_003E8FFE: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9017; /* jne: not equal / not zero */

loc_003E9012: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_003E901A;

loc_003E9017: ;
    MEM32(edx + 8) = eax;

loc_003E901A: ;
    MEM32(ecx + 8) = eax;

loc_003E901D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E8FB6; /* jne: not equal / not zero */

loc_003E9023: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E902A: ;
    edx = MEM32(eax + edi * 4 + -4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E9060
 * Original: 0x003E9060 - 0x003E90D0 (112 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9060: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 8);
    eax = edx;
    /* nop */

loc_003E9070: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E907D; /* je: equal / zero */

loc_003E9074: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E907D; /* je: equal / zero */

loc_003E9078: ;
    eax = MEM32(eax + 4);
    goto loc_003E9070;

loc_003E907D: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9089; /* jne: not equal / not zero */

loc_003E9082: ;
    MEM32(esi + 0x10) = 0;

loc_003E9089: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003E9095; /* jne: not equal / not zero */

loc_003E9090: ;
    MEM32(esi + 8) = ecx;
    goto loc_003E909B;

loc_003E9095: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;

loc_003E909B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003E90B8; /* jne: not equal / not zero */

loc_003E90A3: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x003E90ACu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E90AC: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E90B8: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x003E90C4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E90C4: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E90F0
 * Original: 0x003E90F0 - 0x003E914C (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E90F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E90F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = ecx;
    PUSH32(esp, 0x003E90FEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E90FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E911C; /* je: equal / zero */

loc_003E9105: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_003E911E;

loc_003E911C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E911E: ;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 8) = edx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9131; /* jne: not equal / not zero */

loc_003E912C: ;
    MEM32(esi + 8) = eax;
    goto loc_003E9137;

loc_003E9131: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 4) = eax;

loc_003E9137: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E9142; /* jne: not equal / not zero */

loc_003E913F: ;
    MEM32(esi + 0x10) = eax;

loc_003E9142: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E9170
 * Original: 0x003E9170 - 0x003E91EE (126 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9170: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    goto loc_003E9180;

    /* nop */

loc_003E9180: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9191; /* je: equal / zero */

loc_003E9184: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E918D; /* je: equal / zero */

loc_003E9188: ;
    eax = MEM32(eax + 4);
    goto loc_003E9180;

loc_003E918D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E91AD; /* jne: not equal / not zero */

loc_003E9191: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003E9199u); RECOMP_ABI_CALL(0x00014A8Eu, sub_00014A8E); /* call 0x00014A8E */

loc_003E9199: ;
    eax = MEM32(edi + 8);
    /* nop */

loc_003E91A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E91AD; /* je: equal / zero */

loc_003E91A4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E91AD; /* je: equal / zero */

loc_003E91A8: ;
    eax = MEM32(eax + 4);
    goto loc_003E91A0;

loc_003E91AD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003E91DF; /* jne: not equal / not zero */

loc_003E91D3: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_003E91DF: ;
    edx = MEM32(eax + 0x14);
    MEM32(edx + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9210
 * Original: 0x003E9210 - 0x003E9228 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9210(void)
{

loc_003E9210: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E9225u); RECOMP_ABI_CALL(0x00024547u, sub_00024547); /* call 0x00024547 */

loc_003E9225: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E9230
 * Original: 0x003E9230 - 0x003E92C5 (149 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E9230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E92BA; /* jbe: below or equal (unsigned <=) */

loc_003E923D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + edi * 4 + -4;
    ebx = edi;

loc_003E9246: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    goto loc_003E9250;

    /* nop */

loc_003E9250: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E92AD; /* je: equal / zero */

loc_003E9254: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E925F; /* je: equal / zero */

loc_003E925A: ;
    eax = MEM32(eax + 4);
    goto loc_003E9250;

loc_003E925F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E92AD; /* je: equal / zero */

loc_003E9263: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E926F; /* jne: not equal / not zero */

loc_003E9267: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E9278;

loc_003E926F: ;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;

loc_003E9278: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9285; /* jne: not equal / not zero */

loc_003E927D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    goto loc_003E928E;

loc_003E9285: ;
    edx = MEM32(eax + 4);
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;

loc_003E928E: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E92A7; /* jne: not equal / not zero */

loc_003E92A2: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_003E92AA;

loc_003E92A7: ;
    MEM32(edx + 8) = eax;

loc_003E92AA: ;
    MEM32(ecx + 8) = eax;

loc_003E92AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E9246; /* jne: not equal / not zero */

loc_003E92B3: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E92BA: ;
    edx = MEM32(eax + edi * 4 + -4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E92F0
 * Original: 0x003E92F0 - 0x003E9360 (112 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E92F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E92F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 8);
    eax = edx;
    /* nop */

loc_003E9300: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E930D; /* je: equal / zero */

loc_003E9304: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E930D; /* je: equal / zero */

loc_003E9308: ;
    eax = MEM32(eax + 4);
    goto loc_003E9300;

loc_003E930D: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9319; /* jne: not equal / not zero */

loc_003E9312: ;
    MEM32(esi + 0x10) = 0;

loc_003E9319: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003E9325; /* jne: not equal / not zero */

loc_003E9320: ;
    MEM32(esi + 8) = ecx;
    goto loc_003E932B;

loc_003E9325: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;

loc_003E932B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003E9348; /* jne: not equal / not zero */

loc_003E9333: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x003E933Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E933C: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E9348: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x003E9354u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E9354: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E9380
 * Original: 0x003E9380 - 0x003E93DC (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9380: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = ecx;
    PUSH32(esp, 0x003E938Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E938E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E93AC; /* je: equal / zero */

loc_003E9395: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_003E93AE;

loc_003E93AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E93AE: ;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 8) = edx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E93C1; /* jne: not equal / not zero */

loc_003E93BC: ;
    MEM32(esi + 8) = eax;
    goto loc_003E93C7;

loc_003E93C1: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 4) = eax;

loc_003E93C7: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E93D2; /* jne: not equal / not zero */

loc_003E93CF: ;
    MEM32(esi + 0x10) = eax;

loc_003E93D2: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E9400
 * Original: 0x003E9400 - 0x003E947E (126 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9400: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    goto loc_003E9410;

    /* nop */

loc_003E9410: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9421; /* je: equal / zero */

loc_003E9414: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E941D; /* je: equal / zero */

loc_003E9418: ;
    eax = MEM32(eax + 4);
    goto loc_003E9410;

loc_003E941D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E943D; /* jne: not equal / not zero */

loc_003E9421: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003E9429u); RECOMP_ABI_CALL(0x0003149Au, sub_0003149A); /* call 0x0003149A */

loc_003E9429: ;
    eax = MEM32(edi + 8);
    /* nop */

loc_003E9430: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E943D; /* je: equal / zero */

loc_003E9434: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E943D; /* je: equal / zero */

loc_003E9438: ;
    eax = MEM32(eax + 4);
    goto loc_003E9430;

loc_003E943D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003E946F; /* jne: not equal / not zero */

loc_003E9463: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_003E946F: ;
    edx = MEM32(eax + 0x14);
    MEM32(edx + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E94A0
 * Original: 0x003E94A0 - 0x003E94B8 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E94A0(void)
{

loc_003E94A0: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E94B5u); RECOMP_ABI_CALL(0x0002A208u, sub_0002A208); /* call 0x0002A208 */

loc_003E94B5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E94C0
 * Original: 0x003E94C0 - 0x003E9555 (149 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E94C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E94C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E954A; /* jbe: below or equal (unsigned <=) */

loc_003E94CD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + edi * 4 + -4;
    ebx = edi;

loc_003E94D6: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    goto loc_003E94E0;

    /* nop */

loc_003E94E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E953D; /* je: equal / zero */

loc_003E94E4: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E94EF; /* je: equal / zero */

loc_003E94EA: ;
    eax = MEM32(eax + 4);
    goto loc_003E94E0;

loc_003E94EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E953D; /* je: equal / zero */

loc_003E94F3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E94FF; /* jne: not equal / not zero */

loc_003E94F7: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E9508;

loc_003E94FF: ;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;

loc_003E9508: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9515; /* jne: not equal / not zero */

loc_003E950D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    goto loc_003E951E;

loc_003E9515: ;
    edx = MEM32(eax + 4);
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;

loc_003E951E: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9537; /* jne: not equal / not zero */

loc_003E9532: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_003E953A;

loc_003E9537: ;
    MEM32(edx + 8) = eax;

loc_003E953A: ;
    MEM32(ecx + 8) = eax;

loc_003E953D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E94D6; /* jne: not equal / not zero */

loc_003E9543: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E954A: ;
    edx = MEM32(eax + edi * 4 + -4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E9580
 * Original: 0x003E9580 - 0x003E95F0 (112 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9580: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 8);
    eax = edx;
    /* nop */

loc_003E9590: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E959D; /* je: equal / zero */

loc_003E9594: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E959D; /* je: equal / zero */

loc_003E9598: ;
    eax = MEM32(eax + 4);
    goto loc_003E9590;

loc_003E959D: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E95A9; /* jne: not equal / not zero */

loc_003E95A2: ;
    MEM32(esi + 0x10) = 0;

loc_003E95A9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003E95B5; /* jne: not equal / not zero */

loc_003E95B0: ;
    MEM32(esi + 8) = ecx;
    goto loc_003E95BB;

loc_003E95B5: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;

loc_003E95BB: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003E95D8; /* jne: not equal / not zero */

loc_003E95C3: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x003E95CCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E95CC: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E95D8: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x003E95E4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E95E4: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E9610
 * Original: 0x003E9610 - 0x003E966C (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9610: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = ecx;
    PUSH32(esp, 0x003E961Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E961E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E963C; /* je: equal / zero */

loc_003E9625: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_003E963E;

loc_003E963C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E963E: ;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 8) = edx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9651; /* jne: not equal / not zero */

loc_003E964C: ;
    MEM32(esi + 8) = eax;
    goto loc_003E9657;

loc_003E9651: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 4) = eax;

loc_003E9657: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E9662; /* jne: not equal / not zero */

loc_003E965F: ;
    MEM32(esi + 0x10) = eax;

loc_003E9662: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E9690
 * Original: 0x003E9690 - 0x003E970E (126 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9690: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    goto loc_003E96A0;

    /* nop */

loc_003E96A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E96B1; /* je: equal / zero */

loc_003E96A4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E96AD; /* je: equal / zero */

loc_003E96A8: ;
    eax = MEM32(eax + 4);
    goto loc_003E96A0;

loc_003E96AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E96CD; /* jne: not equal / not zero */

loc_003E96B1: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003E96B9u); RECOMP_ABI_CALL(0x00032061u, sub_00032061); /* call 0x00032061 */

loc_003E96B9: ;
    eax = MEM32(edi + 8);
    /* nop */

loc_003E96C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E96CD; /* je: equal / zero */

loc_003E96C4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E96CD; /* je: equal / zero */

loc_003E96C8: ;
    eax = MEM32(eax + 4);
    goto loc_003E96C0;

loc_003E96CD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003E96FF; /* jne: not equal / not zero */

loc_003E96F3: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_003E96FF: ;
    edx = MEM32(eax + 0x14);
    MEM32(edx + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9730
 * Original: 0x003E9730 - 0x003E9748 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9730(void)
{

loc_003E9730: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E9745u); RECOMP_ABI_CALL(0x00036DEBu, sub_00036DEB); /* call 0x00036DEB */

loc_003E9745: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E9750
 * Original: 0x003E9750 - 0x003E97E5 (149 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E9750: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E97DA; /* jbe: below or equal (unsigned <=) */

loc_003E975D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + edi * 4 + -4;
    ebx = edi;

loc_003E9766: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    goto loc_003E9770;

    /* nop */

loc_003E9770: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E97CD; /* je: equal / zero */

loc_003E9774: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E977F; /* je: equal / zero */

loc_003E977A: ;
    eax = MEM32(eax + 4);
    goto loc_003E9770;

loc_003E977F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E97CD; /* je: equal / zero */

loc_003E9783: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E978F; /* jne: not equal / not zero */

loc_003E9787: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E9798;

loc_003E978F: ;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;

loc_003E9798: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E97A5; /* jne: not equal / not zero */

loc_003E979D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    goto loc_003E97AE;

loc_003E97A5: ;
    edx = MEM32(eax + 4);
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;

loc_003E97AE: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E97C7; /* jne: not equal / not zero */

loc_003E97C2: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_003E97CA;

loc_003E97C7: ;
    MEM32(edx + 8) = eax;

loc_003E97CA: ;
    MEM32(ecx + 8) = eax;

loc_003E97CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E9766; /* jne: not equal / not zero */

loc_003E97D3: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E97DA: ;
    edx = MEM32(eax + edi * 4 + -4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E9810
 * Original: 0x003E9810 - 0x003E9880 (112 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9810: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 8);
    eax = edx;
    /* nop */

loc_003E9820: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E982D; /* je: equal / zero */

loc_003E9824: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E982D; /* je: equal / zero */

loc_003E9828: ;
    eax = MEM32(eax + 4);
    goto loc_003E9820;

loc_003E982D: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9839; /* jne: not equal / not zero */

loc_003E9832: ;
    MEM32(esi + 0x10) = 0;

loc_003E9839: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003E9845; /* jne: not equal / not zero */

loc_003E9840: ;
    MEM32(esi + 8) = ecx;
    goto loc_003E984B;

loc_003E9845: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;

loc_003E984B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003E9868; /* jne: not equal / not zero */

loc_003E9853: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x003E985Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E985C: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E9868: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x003E9874u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E9874: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E98A0
 * Original: 0x003E98A0 - 0x003E98FC (92 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E98A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E98A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = ecx;
    PUSH32(esp, 0x003E98AEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003E98AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E98CC; /* je: equal / zero */

loc_003E98B5: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_003E98CE;

loc_003E98CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E98CE: ;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 8) = edx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E98E1; /* jne: not equal / not zero */

loc_003E98DC: ;
    MEM32(esi + 8) = eax;
    goto loc_003E98E7;

loc_003E98E1: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 4) = eax;

loc_003E98E7: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E98F2; /* jne: not equal / not zero */

loc_003E98EF: ;
    MEM32(esi + 0x10) = eax;

loc_003E98F2: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E9920
 * Original: 0x003E9920 - 0x003E999E (126 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9920: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    goto loc_003E9930;

    /* nop */

loc_003E9930: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9941; /* je: equal / zero */

loc_003E9934: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E993D; /* je: equal / zero */

loc_003E9938: ;
    eax = MEM32(eax + 4);
    goto loc_003E9930;

loc_003E993D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E995D; /* jne: not equal / not zero */

loc_003E9941: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003E9949u); RECOMP_ABI_CALL(0x00034541u, sub_00034541); /* call 0x00034541 */

loc_003E9949: ;
    eax = MEM32(edi + 8);
    /* nop */

loc_003E9950: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E995D; /* je: equal / zero */

loc_003E9954: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E995D; /* je: equal / zero */

loc_003E9958: ;
    eax = MEM32(eax + 4);
    goto loc_003E9950;

loc_003E995D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003E998F; /* jne: not equal / not zero */

loc_003E9983: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_003E998F: ;
    edx = MEM32(eax + 0x14);
    MEM32(edx + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E99C0
 * Original: 0x003E99C0 - 0x003E99D8 (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E99C0(void)
{

loc_003E99C0: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E99D5u); RECOMP_ABI_CALL(0x000130A8u, sub_000130A8); /* call 0x000130A8 */

loc_003E99D5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E99E0
 * Original: 0x003E99E0 - 0x003E9A75 (149 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E99E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E99E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E9A6A; /* jbe: below or equal (unsigned <=) */

loc_003E99ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + edi * 4 + -4;
    ebx = edi;

loc_003E99F6: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    goto loc_003E9A00;

    /* nop */

loc_003E9A00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9A5D; /* je: equal / zero */

loc_003E9A04: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9A0F; /* je: equal / zero */

loc_003E9A0A: ;
    eax = MEM32(eax + 4);
    goto loc_003E9A00;

loc_003E9A0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9A5D; /* je: equal / zero */

loc_003E9A13: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9A1F; /* jne: not equal / not zero */

loc_003E9A17: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    goto loc_003E9A28;

loc_003E9A1F: ;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;

loc_003E9A28: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9A35; /* jne: not equal / not zero */

loc_003E9A2D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    goto loc_003E9A3E;

loc_003E9A35: ;
    edx = MEM32(eax + 4);
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;

loc_003E9A3E: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9A57; /* jne: not equal / not zero */

loc_003E9A52: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_003E9A5A;

loc_003E9A57: ;
    MEM32(edx + 8) = eax;

loc_003E9A5A: ;
    MEM32(ecx + 8) = eax;

loc_003E9A5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E99F6; /* jne: not equal / not zero */

loc_003E9A63: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E9A6A: ;
    edx = MEM32(eax + edi * 4 + -4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E9AA0
 * Original: 0x003E9AA0 - 0x003E9B10 (112 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 8);
    eax = edx;
    /* nop */

loc_003E9AB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9ABD; /* je: equal / zero */

loc_003E9AB4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9ABD; /* je: equal / zero */

loc_003E9AB8: ;
    eax = MEM32(eax + 4);
    goto loc_003E9AB0;

loc_003E9ABD: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9AC9; /* jne: not equal / not zero */

loc_003E9AC2: ;
    MEM32(esi + 0x10) = 0;

loc_003E9AC9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003E9AD5; /* jne: not equal / not zero */

loc_003E9AD0: ;
    MEM32(esi + 8) = ecx;
    goto loc_003E9ADB;

loc_003E9AD5: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;

loc_003E9ADB: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003E9AF8; /* jne: not equal / not zero */

loc_003E9AE3: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x003E9AECu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E9AEC: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003E9AF8: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x003E9B04u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003E9B04: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E9B30
 * Original: 0x003E9B30 - 0x003E9B5B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9B52; /* je: equal / zero */

loc_003E9B3D: ;
    /* nop */

loc_003E9B40: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9B4Du); RECOMP_ABI_CALL(0x00028DFEu, sub_00028DFE); /* call 0x00028DFE */

loc_003E9B4D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9B40; /* jne: not equal / not zero */

loc_003E9B52: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9B70
 * Original: 0x003E9B70 - 0x003E9B9B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9B92; /* je: equal / zero */

loc_003E9B7D: ;
    /* nop */

loc_003E9B80: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9B8Du); RECOMP_ABI_CALL(0x0001BEE7u, sub_0001BEE7); /* call 0x0001BEE7 */

loc_003E9B8D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9B80; /* jne: not equal / not zero */

loc_003E9B92: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9BB0
 * Original: 0x003E9BB0 - 0x003E9BDB (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9BD2; /* je: equal / zero */

loc_003E9BBD: ;
    /* nop */

loc_003E9BC0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9BCDu); RECOMP_ABI_CALL(0x000367C4u, sub_000367C4); /* call 0x000367C4 */

loc_003E9BCD: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9BC0; /* jne: not equal / not zero */

loc_003E9BD2: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9BF0
 * Original: 0x003E9BF0 - 0x003E9C1B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9C12; /* je: equal / zero */

loc_003E9BFD: ;
    /* nop */

loc_003E9C00: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9C0Du); RECOMP_ABI_CALL(0x00015CEAu, sub_00015CEA); /* call 0x00015CEA */

loc_003E9C0D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9C00; /* jne: not equal / not zero */

loc_003E9C12: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9C30
 * Original: 0x003E9C30 - 0x003E9C5B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9C52; /* je: equal / zero */

loc_003E9C3D: ;
    /* nop */

loc_003E9C40: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9C4Du); RECOMP_ABI_CALL(0x0001B631u, sub_0001B631); /* call 0x0001B631 */

loc_003E9C4D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9C40; /* jne: not equal / not zero */

loc_003E9C52: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9C70
 * Original: 0x003E9C70 - 0x003E9C9B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9C92; /* je: equal / zero */

loc_003E9C7D: ;
    /* nop */

loc_003E9C80: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9C8Du); RECOMP_ABI_CALL(0x0001B942u, sub_0001B942); /* call 0x0001B942 */

loc_003E9C8D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9C80; /* jne: not equal / not zero */

loc_003E9C92: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9CB0
 * Original: 0x003E9CB0 - 0x003E9CDB (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9CD2; /* je: equal / zero */

loc_003E9CBD: ;
    /* nop */

loc_003E9CC0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9CCDu); RECOMP_ABI_CALL(0x0001C70Cu, sub_0001C70C); /* call 0x0001C70C */

loc_003E9CCD: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9CC0; /* jne: not equal / not zero */

loc_003E9CD2: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9CF0
 * Original: 0x003E9CF0 - 0x003E9D1B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9D12; /* je: equal / zero */

loc_003E9CFD: ;
    /* nop */

loc_003E9D00: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9D0Du); RECOMP_ABI_CALL(0x00018F85u, sub_00018F85); /* call 0x00018F85 */

loc_003E9D0D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9D00; /* jne: not equal / not zero */

loc_003E9D12: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9D30
 * Original: 0x003E9D30 - 0x003E9D5B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9D52; /* je: equal / zero */

loc_003E9D3D: ;
    /* nop */

loc_003E9D40: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9D4Du); RECOMP_ABI_CALL(0x00028DFEu, sub_00028DFE); /* call 0x00028DFE */

loc_003E9D4D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9D40; /* jne: not equal / not zero */

loc_003E9D52: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9D70
 * Original: 0x003E9D70 - 0x003E9D9B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9D92; /* je: equal / zero */

loc_003E9D7D: ;
    /* nop */

loc_003E9D80: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9D8Du); RECOMP_ABI_CALL(0x0001BEE7u, sub_0001BEE7); /* call 0x0001BEE7 */

loc_003E9D8D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9D80; /* jne: not equal / not zero */

loc_003E9D92: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9DB0
 * Original: 0x003E9DB0 - 0x003E9DDB (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9DD2; /* je: equal / zero */

loc_003E9DBD: ;
    /* nop */

loc_003E9DC0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9DCDu); RECOMP_ABI_CALL(0x000367C4u, sub_000367C4); /* call 0x000367C4 */

loc_003E9DCD: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9DC0; /* jne: not equal / not zero */

loc_003E9DD2: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9DF0
 * Original: 0x003E9DF0 - 0x003E9E1B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9E12; /* je: equal / zero */

loc_003E9DFD: ;
    /* nop */

loc_003E9E00: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9E0Du); RECOMP_ABI_CALL(0x00015CEAu, sub_00015CEA); /* call 0x00015CEA */

loc_003E9E0D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9E00; /* jne: not equal / not zero */

loc_003E9E12: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9E30
 * Original: 0x003E9E30 - 0x003E9E5B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9E52; /* je: equal / zero */

loc_003E9E3D: ;
    /* nop */

loc_003E9E40: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9E4Du); RECOMP_ABI_CALL(0x0001B631u, sub_0001B631); /* call 0x0001B631 */

loc_003E9E4D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9E40; /* jne: not equal / not zero */

loc_003E9E52: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9E70
 * Original: 0x003E9E70 - 0x003E9E9B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9E92; /* je: equal / zero */

loc_003E9E7D: ;
    /* nop */

loc_003E9E80: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9E8Du); RECOMP_ABI_CALL(0x0001B942u, sub_0001B942); /* call 0x0001B942 */

loc_003E9E8D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9E80; /* jne: not equal / not zero */

loc_003E9E92: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9EB0
 * Original: 0x003E9EB0 - 0x003E9EDB (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9ED2; /* je: equal / zero */

loc_003E9EBD: ;
    /* nop */

loc_003E9EC0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9ECDu); RECOMP_ABI_CALL(0x0001C70Cu, sub_0001C70C); /* call 0x0001C70C */

loc_003E9ECD: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9EC0; /* jne: not equal / not zero */

loc_003E9ED2: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9EF0
 * Original: 0x003E9EF0 - 0x003E9F1B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9EF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9F12; /* je: equal / zero */

loc_003E9EFD: ;
    /* nop */

loc_003E9F00: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003E9F0Du); RECOMP_ABI_CALL(0x00018F85u, sub_00018F85); /* call 0x00018F85 */

loc_003E9F0D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9F00; /* jne: not equal / not zero */

loc_003E9F12: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9F30
 * Original: 0x003E9F30 - 0x003E9F7C (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9F30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    edx = MEM32(esp);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003E9F90
 * Original: 0x003E9F90 - 0x003E9F9C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9F90(void)
{

loc_003E9F90: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 0x48) = LO8(eax);
    MEM8(ecx + 0x90) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9FA0
 * Original: 0x003E9FA0 - 0x003EA0BA (282 bytes, 75 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003E9FA0(void)
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

loc_003E9FA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x8362A0)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(ebx) = 0x8362B0;
    ecx = MEM32(0x87DA6C);
    eax = ebx + 0x10;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x87DA6C);
    edx = ebx + 0x1C;
    MEM32(edx) = eax;
    ecx = MEM32(0x87DA70);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x87DA74);
    MEM32(edx + 8) = eax;
    MEMF(ebx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x83629C)); /* movss */
    PUSH32(esp, esi);
    MEMF(ebx + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8362A4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebx + 0x38) = eax;
    MEM32(ebx + 0x3C) = eax;
    MEMF(ebx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8362A8)); /* movss */
    SET_LO8(eax, 1);
    MEMF(ebx + 0x34) = xmm0.f[0]; /* movss */
    MEM32(ebx + 0x40) = 0x280;
    MEM32(ebx + 0x44) = 0x1E0;
    MEM8(ebx + 0x48) = LO8(eax);
    edi = ebx + 0x50;
    ecx = 0x10;
    esi = 0x87DB50;
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
    MEM8(ebx + 0x90) = LO8(eax);
    edi = ebx + 0xA0;
    ecx = 0x10;
    esi = 0x87DB50;
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
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003EA06Bu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003EA06B: ;
    ecx = eax;
    PUSH32(esp, 0x003EA072u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_003EA072: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x003EA07Bu); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_003EA07B: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ebx + 0x40) = eax;
    PUSH32(esp, 0x003EA087u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_003EA087: ;
    fp_push((double)SMEM32(ebx + 0x40)); /* fild */
    ecx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebx + 0x44) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA09A; /* jge: greater or equal (signed >=) */

loc_003EA094: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003EA09A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003EA0AC; /* jge: greater or equal (signed >=) */

loc_003EA0A6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003EA0AC: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEMF(ebx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003EA100
 * Original: 0x003EA100 - 0x003EA107 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA100(void)
{

loc_003EA100: ;
    MEM32(ecx) = 0x8362B0;
    esp += 4; return; /* ret */

}

/**
 * sub_003EA110
 * Original: 0x003EA110 - 0x003EA432 (802 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EA110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003EA110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003EA42B; /* je: equal / zero */

loc_003EA12C: ;
    fp_push(MEMF(ebx + 0x1C)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x110) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    MEMF(esp + 0x114) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    MEMF(esp + 0x118) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0xE0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x104) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x108) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x11C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18); /* subss */
    fp_top() = cos(fp_top()); /* fcos */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x78) = eax;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(0x8CFA50)); /* fld float */
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x20)); /* fadd dword ptr [ebx + 0x20] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_top() = cos(fp_top()); /* fcos */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0xA4;
    MEM32(esp + 0xA8) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x1E8;
    PUSH32(esp, ecx);
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xAC) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA3ACu); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_003EA3AC: ;
    esi = eax;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = 0x10;
    edi = esp + 0x130;
    eax = esp + 0x130;
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
    PUSH32(esp, eax);
    ecx = esp + 0x174;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA3D6u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_003EA3D6: ;
    esi = eax;
    edx = esp + 0xF8;
    PUSH32(esp, edx);
    ecx = 0x10;
    edi = esp + 0x1BC;
    eax = esp + 0x1BC;
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
    PUSH32(esp, eax);
    ecx = esp + 0x180;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA403u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_003EA403: ;
    ecx = 0x10;
    esi = eax;
    edi = esp + 0x144;
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
    edi = ebx + 0x50;
    ecx = 0x10;
    esi = esp + 0x144;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    MEM8(ebx + 0x48) = 0;

loc_003EA42B: ;
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
 * sub_003EA500
 * Original: 0x003EA500 - 0x003EA888 (904 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EA500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003EA500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x224) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x224;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003EA881; /* je: equal / zero */

loc_003EA51F: ;
    fp_push(MEMF(ebx + 0x1C)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = -fp_top(); /* fchs */
    xmm1 = xmm0; /* movaps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x10); /* subss */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x14); /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x18); /* subss */
    MEM32(esp + 0x24) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x120) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x28) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x124) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x128) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0xF0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x104) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x110) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x114) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x118) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x11C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x12C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xEC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x10); /* subss */
    fp_top() = cos(fp_top()); /* fcos */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0xD4) = xmm2.f[0]; /* movss */
    MEM32(esp + 0xC8) = eax;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(esp + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_push(MEMF(0x8CFA50)); /* fld float */
    MEMF(esp + 0xD8) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x20)); /* fadd dword ptr [ebx + 0x20] */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = -fp_top(); /* fchs */
    edx = esp + 0xB0;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edx);
    fp_top() = sin(fp_top()); /* fsin */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(esp + 0x7C) = ecx;
    ecx = esp + 0x1F8;
    PUSH32(esp, ecx);
    MEMF(esp + 0x7C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA7FCu); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_003EA7FC: ;
    esi = eax;
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    ecx = 0x10;
    edi = esp + 0x140;
    eax = esp + 0x140;
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
    PUSH32(esp, eax);
    ecx = esp + 0x184;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA826u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_003EA826: ;
    esi = eax;
    edx = esp + 0x1C8;
    PUSH32(esp, edx);
    ecx = 0x10;
    edi = esp + 0x1CC;
    eax = esp + 0x10C;
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
    PUSH32(esp, eax);
    ecx = esp + 0x190;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA853u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_003EA853: ;
    ecx = 0x10;
    esi = eax;
    edi = esp + 0x154;
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
    edi = ebx + 0xA0;
    ecx = 0x10;
    esi = esp + 0x154;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    MEM8(ebx + 0x90) = 0;

loc_003EA881: ;
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
 * sub_003EA970
 * Original: 0x003EA970 - 0x003EA995 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EA970: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 0x48) = LO8(eax);
    MEM8(ecx + 0x90) = LO8(eax);
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EA9A0
 * Original: 0x003EA9A0 - 0x003EA9CF (47 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA9A0(void)
{

loc_003EA9A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    SET_LO8(eax, 1);
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM8(ecx + 0x48) = LO8(eax);
    MEM8(ecx + 0x90) = LO8(eax);
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EA9E0
 * Original: 0x003EA9E0 - 0x003EAA05 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA9E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EA9E0: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 0x48) = LO8(eax);
    MEM8(ecx + 0x90) = LO8(eax);
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EAA10
 * Original: 0x003EAA10 - 0x003EAA3F (47 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAA10(void)
{

loc_003EAA10: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    SET_LO8(eax, 1);
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM8(ecx + 0x48) = LO8(eax);
    MEM8(ecx + 0x90) = LO8(eax);
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EAA50
 * Original: 0x003EAA50 - 0x003EAA69 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAA50(void)
{

loc_003EAA50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    SET_LO8(eax, 1);
    MEM8(ecx + 0x48) = LO8(eax);
    MEM8(ecx + 0x90) = LO8(eax);
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EAA70
 * Original: 0x003EAA70 - 0x003EAA89 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAA70(void)
{

loc_003EAA70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    SET_LO8(eax, 1);
    MEM8(ecx + 0x48) = LO8(eax);
    MEM8(ecx + 0x90) = LO8(eax);
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EAA90
 * Original: 0x003EAA90 - 0x003EAAA9 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAA90(void)
{

loc_003EAA90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    SET_LO8(eax, 1);
    MEM8(ecx + 0x48) = LO8(eax);
    MEM8(ecx + 0x90) = LO8(eax);
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EAAB0
 * Original: 0x003EAAB0 - 0x003EAABE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAAB0(void)
{

loc_003EAAB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EAAD0
 * Original: 0x003EAAD0 - 0x003EAADE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAAD0(void)
{

loc_003EAAD0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EAAF0
 * Original: 0x003EAAF0 - 0x003EAB09 (25 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAAF0(void)
{

loc_003EAAF0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EAB10
 * Original: 0x003EAB10 - 0x003EAB2F (31 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAB10(void)
{

loc_003EAB10: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x38) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x3C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003EAB40
 * Original: 0x003EAB40 - 0x003EAB4D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAB40(void)
{

loc_003EAB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003EAB48u); RECOMP_ABI_CALL(0x0003785Eu, sub_0003785E); /* call 0x0003785E */

loc_003EAB48: ;
    eax = esi + 0x50;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EAB50
 * Original: 0x003EAB50 - 0x003EAB60 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAB50(void)
{

loc_003EAB50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003EAB58u); RECOMP_ABI_CALL(0x00030414u, sub_00030414); /* call 0x00030414 */

loc_003EAB58: ;
    eax = esi + 0xA0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EAB70
 * Original: 0x003EAB70 - 0x003EAB8F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EAB70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8362B0;
    if (TEST_Z(_fa, _fb)) goto loc_003EAB89; /* je: equal / zero */

loc_003EAB80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EAB86u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003EAB86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EAB89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EABA0
 * Original: 0x003EABA0 - 0x003EABA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EABA0(void)
{

loc_003EABA0: ;
    MEM32(ecx) = 0x836294;
    esp += 4; return; /* ret */

}

/**
 * sub_003EABB0
 * Original: 0x003EABB0 - 0x003EABB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EABB0(void)
{

loc_003EABB0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EABC0
 * Original: 0x003EABC0 - 0x003EABC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EABC0(void)
{

loc_003EABC0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EABD0
 * Original: 0x003EABD0 - 0x003EABD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EABD0(void)
{

loc_003EABD0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EABE0
 * Original: 0x003EABE0 - 0x003EABE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EABE0(void)
{

loc_003EABE0: ;
    eax = MEM32(ecx + 0x58);
    esp += 4; return; /* ret */

}

/**
 * sub_003EABF0
 * Original: 0x003EABF0 - 0x003EABFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EABF0(void)
{

loc_003EABF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x58) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EAC00
 * Original: 0x003EAC00 - 0x003EAC04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAC00(void)
{

loc_003EAC00: ;
    SET_LO8(eax, MEM8(ecx + 0x45));
    esp += 4; return; /* ret */

}

/**
 * sub_003EAC10
 * Original: 0x003EAC10 - 0x003EAC14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAC10(void)
{

loc_003EAC10: ;
    SET_LO8(eax, MEM8(ecx + 0x46));
    esp += 4; return; /* ret */

}

/**
 * sub_003EAC20
 * Original: 0x003EAC20 - 0x003EAC23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAC20(void)
{

loc_003EAC20: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EAC30
 * Original: 0x003EAC30 - 0x003EAC7F (79 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EAC30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003EAC46u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003EAC46: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi + 0x560;
    PUSH32(esp, 0x003EAC57u); RECOMP_ABI_CALL(0x0002D5B6u, sub_0002D5B6); /* call 0x0002D5B6 */

loc_003EAC57: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EAC61u); RECOMP_ABI_CALL(0x00020280u, sub_00020280); /* call 0x00020280 */

loc_003EAC61: ;
    ecx = esp + 8;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x003EAC6Cu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EAC6C: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003EAC75u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EAC75: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EACA0
 * Original: 0x003EACA0 - 0x003EACB2 (18 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EACA0(void)
{

loc_003EACA0: ;
    eax = ecx;
    MEM32(eax) = 0x8362B8;
    MEM32(eax + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EACC0
 * Original: 0x003EACC0 - 0x003EACDF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EACC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EACC0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8362B8;
    if (TEST_Z(_fa, _fb)) goto loc_003EACD9; /* je: equal / zero */

loc_003EACD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EACD6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003EACD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EACD9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EACF0
 * Original: 0x003EACF0 - 0x003EACF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EACF0(void)
{

loc_003EACF0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EAD00
 * Original: 0x003EAD00 - 0x003EAD20 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAD00(void)
{

loc_003EAD00: ;
    eax = ecx;
    ecx = 1;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = 0x32;
    esp += 4; return; /* ret */

}

/**
 * sub_003EAD30
 * Original: 0x003EAD30 - 0x003EAE8D (349 bytes, 122 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EAD30: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003EAD40u); RECOMP_ABI_CALL(0x00030293u, sub_00030293); /* call 0x00030293 */

loc_003EAD40: ;
    SET_LO8(eax, 1);
    ecx = esi + 0x1C;
    MEM32(esi) = 0x8362BC;
    MEM8(esi + 0x18) = LO8(eax);
    MEM8(esi + 0x19) = LO8(eax);
    MEM8(esi + 0x1A) = LO8(eax);
    PUSH32(esp, 0x003EAD59u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_003EAD59: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x003EAD61u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_003EAD61: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0x34;
    ecx = ebp;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    PUSH32(esp, 0x003EAD73u); RECOMP_ABI_CALL(0x0002B0BDu, sub_0002B0BD); /* call 0x0002B0BD */

loc_003EAD73: ;
    ecx = esi + 0x48;
    PUSH32(esp, 0x003EAD7Bu); RECOMP_ABI_CALL(0x0001842Cu, sub_0001842C); /* call 0x0001842C */

loc_003EAD7B: ;
    ecx = esi + 0x5C;
    PUSH32(esp, 0x003EAD83u); RECOMP_ABI_CALL(0x0003370Eu, sub_0003370E); /* call 0x0003370E */

loc_003EAD83: ;
    ecx = esi + 0x70;
    PUSH32(esp, 0x003EAD8Bu); RECOMP_ABI_CALL(0x00033312u, sub_00033312); /* call 0x00033312 */

loc_003EAD8B: ;
    ecx = esi + 0x84;
    PUSH32(esp, 0x003EAD96u); RECOMP_ABI_CALL(0x000251A4u, sub_000251A4); /* call 0x000251A4 */

loc_003EAD96: ;
    ecx = esi + 0x98;
    PUSH32(esp, 0x003EADA1u); RECOMP_ABI_CALL(0x0002B333u, sub_0002B333); /* call 0x0002B333 */

loc_003EADA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = ebx;
    PUSH32(esp, 0x003EADB5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003EADB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EADC7; /* je: equal / zero */

loc_003EADBC: ;
    MEM32(eax) = 0x8362B8;
    MEM32(eax + 4) = ebx;
    goto loc_003EADC9;

loc_003EADC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003EADC9: ;
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EADE7; /* jbe: below or equal (unsigned <=) */

loc_003EADD7: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x003EADDFu); RECOMP_ABI_CALL(0x0002AC3Au, sub_0002AC3A); /* call 0x0002AC3A */

loc_003EADDF: ;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EADD7; /* jb: below (unsigned <) */

loc_003EADE7: ;
    eax = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EAE01; /* jbe: below or equal (unsigned <=) */

loc_003EADF0: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x48;
    PUSH32(esp, 0x003EADF9u); RECOMP_ABI_CALL(0x000189BDu, sub_000189BD); /* call 0x000189BD */

loc_003EADF9: ;
    eax = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EADF0; /* jb: below (unsigned <) */

loc_003EAE01: ;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EAE20; /* jbe: below or equal (unsigned <=) */

loc_003EAE09: ;
    /* nop */

loc_003EAE10: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x5C;
    PUSH32(esp, 0x003EAE19u); RECOMP_ABI_CALL(0x00037953u, sub_00037953); /* call 0x00037953 */

loc_003EAE19: ;
    eax = MEM32(edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EAE10; /* jb: below (unsigned <) */

loc_003EAE20: ;
    eax = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EAE41; /* jbe: below or equal (unsigned <=) */

loc_003EAE29: ;
    /* nop */

loc_003EAE30: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x70;
    PUSH32(esp, 0x003EAE39u); RECOMP_ABI_CALL(0x0001F434u, sub_0001F434); /* call 0x0001F434 */

loc_003EAE39: ;
    eax = MEM32(edi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EAE30; /* jb: below (unsigned <) */

loc_003EAE41: ;
    eax = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EAE64; /* jbe: below or equal (unsigned <=) */

loc_003EAE4A: ;
    /* nop */

loc_003EAE50: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x84;
    PUSH32(esp, 0x003EAE5Cu); RECOMP_ABI_CALL(0x00014A8Eu, sub_00014A8E); /* call 0x00014A8E */

loc_003EAE5C: ;
    eax = MEM32(edi + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EAE50; /* jb: below (unsigned <) */

loc_003EAE64: ;
    eax = MEM32(edi + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EAE84; /* jbe: below or equal (unsigned <=) */

loc_003EAE6D: ;
    /* nop */

loc_003EAE70: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x98;
    PUSH32(esp, 0x003EAE7Cu); RECOMP_ABI_CALL(0x0003149Au, sub_0003149A); /* call 0x0003149A */

loc_003EAE7C: ;
    eax = MEM32(edi + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EAE70; /* jb: below (unsigned <) */

loc_003EAE84: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EAEF0
 * Original: 0x003EAEF0 - 0x003EAF93 (163 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EAEF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x8362BC;
    if (CMP_EQ(_fa, _fb)) goto loc_003EAF09; /* je: equal / zero */

loc_003EAF03: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003EAF09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAF07u); } /* indirect call */
    }

loc_003EAF09: ;
    edi = esi + 0x34;
    ecx = edi;
    PUSH32(esp, 0x003EAF13u); RECOMP_ABI_CALL(0x00012838u, sub_00012838); /* call 0x00012838 */

loc_003EAF13: ;
    ebx = esi + 0x48;
    ecx = ebx;
    PUSH32(esp, 0x003EAF1Du); RECOMP_ABI_CALL(0x0002F14Au, sub_0002F14A); /* call 0x0002F14A */

loc_003EAF1D: ;
    ebp = esi + 0x5C;
    ecx = ebp;
    PUSH32(esp, 0x003EAF27u); RECOMP_ABI_CALL(0x0001CAD1u, sub_0001CAD1); /* call 0x0001CAD1 */

loc_003EAF27: ;
    ecx = esi + 0x70;
    PUSH32(esp, 0x003EAF2Fu); RECOMP_ABI_CALL(0x00025DEDu, sub_00025DED); /* call 0x00025DED */

loc_003EAF2F: ;
    ecx = esi + 0x84;
    PUSH32(esp, 0x003EAF3Au); RECOMP_ABI_CALL(0x0002A2C1u, sub_0002A2C1); /* call 0x0002A2C1 */

loc_003EAF3A: ;
    ecx = esi + 0x98;
    PUSH32(esp, 0x003EAF45u); RECOMP_ABI_CALL(0x0001B4DDu, sub_0001B4DD); /* call 0x0001B4DD */

loc_003EAF45: ;
    ecx = esi + 0x98;
    PUSH32(esp, 0x003EAF50u); RECOMP_ABI_CALL(0x0001A1B4u, sub_0001A1B4); /* call 0x0001A1B4 */

loc_003EAF50: ;
    ecx = esi + 0x84;
    PUSH32(esp, 0x003EAF5Bu); RECOMP_ABI_CALL(0x0001E624u, sub_0001E624); /* call 0x0001E624 */

loc_003EAF5B: ;
    ecx = esi + 0x70;
    PUSH32(esp, 0x003EAF63u); RECOMP_ABI_CALL(0x00034951u, sub_00034951); /* call 0x00034951 */

loc_003EAF63: ;
    ecx = ebp;
    PUSH32(esp, 0x003EAF6Au); RECOMP_ABI_CALL(0x0002DB29u, sub_0002DB29); /* call 0x0002DB29 */

loc_003EAF6A: ;
    ecx = ebx;
    PUSH32(esp, 0x003EAF71u); RECOMP_ABI_CALL(0x0001349Fu, sub_0001349F); /* call 0x0001349F */

loc_003EAF71: ;
    ecx = edi;
    PUSH32(esp, 0x003EAF78u); RECOMP_ABI_CALL(0x00023F7Au, sub_00023F7A); /* call 0x00023F7A */

loc_003EAF78: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x003EAF80u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EAF80: ;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x003EAF88u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EAF88: ;
    POP32(esp, edi);
    MEM32(esi) = 0x836294;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EAFC0
 * Original: 0x003EAFC0 - 0x003EAFE2 (34 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAFC0(void)
{

loc_003EAFC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x003EAFCFu); RECOMP_ABI_CALL(0x00031184u, sub_00031184); /* call 0x00031184 */

loc_003EAFCF: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = edi + 0x98;
    PUSH32(esp, 0x003EAFDDu); RECOMP_ABI_CALL(0x0002A208u, sub_0002A208); /* call 0x0002A208 */

loc_003EAFDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EAFF0
 * Original: 0x003EAFF0 - 0x003EAFFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EAFF0: ;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x98;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00032DC2(); return; /* tail jmp 0x00032DC2 */

}

/**
 * sub_003EB000
 * Original: 0x003EB000 - 0x003EB022 (34 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB000(void)
{

loc_003EB000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x003EB00Fu); RECOMP_ABI_CALL(0x00031184u, sub_00031184); /* call 0x00031184 */

loc_003EB00F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = edi + 0x84;
    PUSH32(esp, 0x003EB01Du); RECOMP_ABI_CALL(0x00024547u, sub_00024547); /* call 0x00024547 */

loc_003EB01D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB030
 * Original: 0x003EB030 - 0x003EB03B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB030: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000190C5(); return; /* tail jmp 0x000190C5 */

}

/**
 * sub_003EB040
 * Original: 0x003EB040 - 0x003EB05F (31 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB040(void)
{

loc_003EB040: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x003EB04Fu); RECOMP_ABI_CALL(0x00031184u, sub_00031184); /* call 0x00031184 */

loc_003EB04F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = edi + 0x70;
    PUSH32(esp, 0x003EB05Au); RECOMP_ABI_CALL(0x00027BA2u, sub_00027BA2); /* call 0x00027BA2 */

loc_003EB05A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB070
 * Original: 0x003EB070 - 0x003EB078 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB070: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014CA0(); return; /* tail jmp 0x00014CA0 */

}

/**
 * sub_003EB080
 * Original: 0x003EB080 - 0x003EB09F (31 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB080(void)
{

loc_003EB080: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x003EB08Fu); RECOMP_ABI_CALL(0x00031184u, sub_00031184); /* call 0x00031184 */

loc_003EB08F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = edi + 0x5C;
    PUSH32(esp, 0x003EB09Au); RECOMP_ABI_CALL(0x00024E11u, sub_00024E11); /* call 0x00024E11 */

loc_003EB09A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB0B0
 * Original: 0x003EB0B0 - 0x003EB0B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB0B0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001F69B(); return; /* tail jmp 0x0001F69B */

}

/**
 * sub_003EB0C0
 * Original: 0x003EB0C0 - 0x003EB0C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB0C0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00021EB4(); return; /* tail jmp 0x00021EB4 */

}

/**
 * sub_003EB0D0
 * Original: 0x003EB0D0 - 0x003EB0D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB0D0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002761B(); return; /* tail jmp 0x0002761B */

}

/**
 * sub_003EB0E0
 * Original: 0x003EB0E0 - 0x003EB0FF (31 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB0E0(void)
{

loc_003EB0E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x003EB0EFu); RECOMP_ABI_CALL(0x00031184u, sub_00031184); /* call 0x00031184 */

loc_003EB0EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = edi + 0x34;
    PUSH32(esp, 0x003EB0FAu); RECOMP_ABI_CALL(0x0001BA05u, sub_0001BA05); /* call 0x0001BA05 */

loc_003EB0FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB110
 * Original: 0x003EB110 - 0x003EB12F (31 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB110(void)
{

loc_003EB110: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x003EB11Fu); RECOMP_ABI_CALL(0x00031184u, sub_00031184); /* call 0x00031184 */

loc_003EB11F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = edi + 0x48;
    PUSH32(esp, 0x003EB12Au); RECOMP_ABI_CALL(0x0001A650u, sub_0001A650); /* call 0x0001A650 */

loc_003EB12A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB140
 * Original: 0x003EB140 - 0x003EB148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB140: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000283A9(); return; /* tail jmp 0x000283A9 */

}

/**
 * sub_003EB150
 * Original: 0x003EB150 - 0x003EB158 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB150: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002F64F(); return; /* tail jmp 0x0002F64F */

}

/**
 * sub_003EB160
 * Original: 0x003EB160 - 0x003EB199 (57 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB160: ;
    eax = MEM32(ecx + 0xAC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003EB182; /* jne: not equal / not zero */

loc_003EB170: ;
    MEM32(ecx + 0xAC) = eax;
    MEM32(ecx + 0xB0) = eax;
    MEM32(eax + 0x58) = edx;
    esp += 8; return; /* ret 4 */

loc_003EB182: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xB0);
    MEM32(esi + 0x58) = eax;
    MEM32(ecx + 0xB0) = eax;
    POP32(esp, esi);
    MEM32(eax + 0x58) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB1B0
 * Original: 0x003EB1B0 - 0x003EB20E (94 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB1B0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB1E0; /* jne: not equal / not zero */

loc_003EB1C1: ;
    eax = MEM32(edx + 0x58);
    MEM32(esi + 0xAC) = eax;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB20A; /* jne: not equal / not zero */

loc_003EB1D2: ;
    MEM32(esi + 0xB0) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003EB1E0: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edi);

loc_003EB1E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB209; /* je: equal / zero */

loc_003EB1E7: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB202; /* jne: not equal / not zero */

loc_003EB1EC: ;
    edi = MEM32(edx + 0x58);
    MEM32(eax + 0x58) = edi;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), edx (32-bit) */
    SET_LO8(ecx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_003EB202; /* jne: not equal / not zero */

loc_003EB1FC: ;
    MEM32(esi + 0xB0) = eax;

loc_003EB202: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(eax + 0x58);
    if (CMP_EQ(_fa, _fb)) goto loc_003EB1E3; /* je: equal / zero */

loc_003EB209: ;
    POP32(esp, edi);

loc_003EB20A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB230
 * Original: 0x003EB230 - 0x003EB25B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB230: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x003EB23Bu); RECOMP_ABI_CALL(0x0001DDBEu, sub_0001DDBE); /* call 0x0001DDBE */

loc_003EB23B: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x003EB243u); RECOMP_ABI_CALL(0x0001DDBEu, sub_0001DDBE); /* call 0x0001DDBE */

loc_003EB243: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EB254u); RECOMP_ABI_CALL(0x00011596u, sub_00011596); /* call 0x00011596 */

loc_003EB254: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB270
 * Original: 0x003EB270 - 0x003EB277 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB270(void)
{

loc_003EB270: ;
    eax = MEM32(ecx + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB280
 * Original: 0x003EB280 - 0x003EB28A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB280(void)
{

loc_003EB280: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x58);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB290
 * Original: 0x003EB290 - 0x003EB2B2 (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB290: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx + 0x24;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003EB2A1u); RECOMP_ABI_CALL(0x0002CC47u, sub_0002CC47); /* call 0x0002CC47 */

loc_003EB2A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB2AD; /* je: equal / zero */

loc_003EB2A5: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003EB2ADu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003EB2AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB2C0
 * Original: 0x003EB2C0 - 0x003EB2C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB2C0(void)
{

loc_003EB2C0: ;
    eax = ecx + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB2D0
 * Original: 0x003EB2D0 - 0x003EB2D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB2D0(void)
{

loc_003EB2D0: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB2E0
 * Original: 0x003EB2E0 - 0x003EB334 (84 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB2E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    ebp = MEM32(eax + 4);
    SET_LO8(eax, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003EB2FB; /* je: equal / zero */

loc_003EB2F3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB2FB; /* je: equal / zero */

loc_003EB2F7: ;
    SET_LO8(ebx, 1);
    goto loc_003EB2FD;

loc_003EB2FB: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003EB2FD: ;
    edi = esi + 0x1C;
    ecx = edi;
    PUSH32(esp, 0x003EB307u); RECOMP_ABI_CALL(0x00013B2Au, sub_00013B2A); /* call 0x00013B2A */

loc_003EB307: ;
    ecx = esi + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003EB310u); RECOMP_ABI_CALL(0x0002ECA4u, sub_0002ECA4); /* call 0x0002ECA4 */

loc_003EB310: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB32F; /* je: equal / zero */

loc_003EB317: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x003EB31Fu); RECOMP_ABI_CALL(0x00030F8Bu, sub_00030F8B); /* call 0x00030F8B */

loc_003EB31F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB32F; /* je: equal / zero */

loc_003EB323: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x003EB32Fu); RECOMP_ABI_CALL(0x0001EFA2u, sub_0001EFA2); /* call 0x0001EFA2 */

loc_003EB32F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB350
 * Original: 0x003EB350 - 0x003EB3BB (107 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB350: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003EB364u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003EB364: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003EB375u); RECOMP_ABI_CALL(0x0001FCBDu, sub_0001FCBD); /* call 0x0001FCBD */

loc_003EB375: ;
    ecx = eax;
    PUSH32(esp, 0x003EB37Cu); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_003EB37C: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003EB385u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EB385: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB39A; /* je: equal / zero */

loc_003EB38C: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = edi + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EB39Au); RECOMP_ABI_CALL(0x00012D79u, sub_00012D79); /* call 0x00012D79 */

loc_003EB39A: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x84;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x003EB3A7u); RECOMP_ABI_CALL(0x0001420Fu, sub_0001420F); /* call 0x0001420F */

loc_003EB3A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0x003EB3B3u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EB3B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB3E0
 * Original: 0x003EB3E0 - 0x003EB3E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB3E0(void)
{

loc_003EB3E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB3F0
 * Original: 0x003EB3F0 - 0x003EB3F3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB3F0(void)
{

loc_003EB3F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB400
 * Original: 0x003EB400 - 0x003EB45D (93 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB400: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xAC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB45A; /* je: equal / zero */

loc_003EB40E: ;
    edi = edi;

loc_003EB410: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB453; /* je: equal / zero */

loc_003EB417: ;
    SET_LO8(eax, MEM8(esi + 0x45));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB426; /* je: equal / zero */

loc_003EB41E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003EB426u); RECOMP_ABI_CALL(0x0002D273u, sub_0002D273); /* call 0x0002D273 */

loc_003EB426: ;
    eax = MEM32(0x907D08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB435; /* je: equal / zero */

loc_003EB42F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EB432u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EB430u); } /* indirect call */
    }

loc_003EB432: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB435: ;
    SET_LO8(eax, MEM8(esi + 0x46));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB444; /* je: equal / zero */

loc_003EB43C: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003EB444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB441u); } /* indirect call */
    }

loc_003EB444: ;
    eax = MEM32(0x907D0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB453; /* je: equal / zero */

loc_003EB44D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EB450u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EB44Eu); } /* indirect call */
    }

loc_003EB450: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB453: ;
    esi = MEM32(esi + 0x58);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB410; /* jne: not equal / not zero */

loc_003EB45A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB480
 * Original: 0x003EB480 - 0x003EB4CE (78 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xAC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB4CB; /* je: equal / zero */

loc_003EB48E: ;
    edi = edi;

loc_003EB490: ;
    eax = MEM32(0x907D10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB49F; /* je: equal / zero */

loc_003EB499: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EB49Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EB49Au); } /* indirect call */
    }

loc_003EB49C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB49F: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB4B5; /* je: equal / zero */

loc_003EB4A6: ;
    SET_LO8(eax, MEM8(esi + 0x46));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB4B5; /* je: equal / zero */

loc_003EB4AD: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003EB4B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB4B2u); } /* indirect call */
    }

loc_003EB4B5: ;
    eax = MEM32(0x907D14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB4C4; /* je: equal / zero */

loc_003EB4BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EB4C1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EB4BFu); } /* indirect call */
    }

loc_003EB4C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB4C4: ;
    esi = MEM32(esi + 0x58);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB490; /* jne: not equal / not zero */

loc_003EB4CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB4F0
 * Original: 0x003EB4F0 - 0x003EB504 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB4F0(void)
{

loc_003EB4F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x907D08) = eax;
    MEM32(0x907D0C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB510
 * Original: 0x003EB510 - 0x003EB524 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB510(void)
{

loc_003EB510: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x907D10) = eax;
    MEM32(0x907D14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB530
 * Original: 0x003EB530 - 0x003EB544 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB530: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003EB53Eu); RECOMP_ABI_CALL(0x00015286u, sub_00015286); /* call 0x00015286 */

loc_003EB53E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB550
 * Original: 0x003EB550 - 0x003EB564 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB550: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003EB55Eu); RECOMP_ABI_CALL(0x00021C93u, sub_00021C93); /* call 0x00021C93 */

loc_003EB55E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB570
 * Original: 0x003EB570 - 0x003EB578 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB570: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00035C5C(); return; /* tail jmp 0x00035C5C */

}

/**
 * sub_003EB580
 * Original: 0x003EB580 - 0x003EB588 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB580: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002C666(); return; /* tail jmp 0x0002C666 */

}

/**
 * sub_003EB590
 * Original: 0x003EB590 - 0x003EB598 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB590: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001306C(); return; /* tail jmp 0x0001306C */

}

/**
 * sub_003EB5A0
 * Original: 0x003EB5A0 - 0x003EB5A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB5A0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0003769C(); return; /* tail jmp 0x0003769C */

}

/**
 * sub_003EB5B0
 * Original: 0x003EB5B0 - 0x003EB5BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB5B0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00037C82(); return; /* tail jmp 0x00037C82 */

}

/**
 * sub_003EB5C0
 * Original: 0x003EB5C0 - 0x003EB5CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB5C0: ;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x98;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00037C50(); return; /* tail jmp 0x00037C50 */

}

/**
 * sub_003EB5D0
 * Original: 0x003EB5D0 - 0x003EB5D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB5D0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002AB7C(); return; /* tail jmp 0x0002AB7C */

}

/**
 * sub_003EB5E0
 * Original: 0x003EB5E0 - 0x003EB5E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB5E0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001A5A6(); return; /* tail jmp 0x0001A5A6 */

}

/**
 * sub_003EB5F0
 * Original: 0x003EB5F0 - 0x003EB60E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB5F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003EB5F8u); RECOMP_ABI_CALL(0x00021932u, sub_00021932); /* call 0x00021932 */

loc_003EB5F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB608; /* je: equal / zero */

loc_003EB5FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EB605u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003EB605: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB608: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB620
 * Original: 0x003EB620 - 0x003EB62A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB620(void)
{

loc_003EB620: ;
    eax = ecx;
    MEM32(eax + 4) = 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB630
 * Original: 0x003EB630 - 0x003EB645 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB630: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003EB63Du); RECOMP_ABI_CALL(0x00025A1Eu, sub_00025A1E); /* call 0x00025A1E */

loc_003EB63D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002E40C(); return; /* tail jmp 0x0002E40C */

}

/**
 * sub_003EB650
 * Original: 0x003EB650 - 0x003EB651 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB650(void)
{

loc_003EB650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB660
 * Original: 0x003EB660 - 0x003EB661 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB660(void)
{

loc_003EB660: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB670
 * Original: 0x003EB670 - 0x003EB69D (45 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB670(void)
{

loc_003EB670: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003EB684u); RECOMP_ABI_CALL(0x00031887u, sub_00031887); /* call 0x00031887 */

loc_003EB684: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8362D0;
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, 0x003EB697u); RECOMP_ABI_CALL(0x00037F25u, sub_00037F25); /* call 0x00037F25 */

loc_003EB697: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB6B0
 * Original: 0x003EB6B0 - 0x003EB6D1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB6B0(void)
{

loc_003EB6B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8362D0;
    PUSH32(esp, 0x003EB6C2u); RECOMP_ABI_CALL(0x00015344u, sub_00015344); /* call 0x00015344 */

loc_003EB6C2: ;
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0x836294;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB6E0
 * Original: 0x003EB6E0 - 0x003EB738 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB6E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003EB6EDu); RECOMP_ABI_CALL(0x0002325Fu, sub_0002325F); /* call 0x0002325F */

loc_003EB6ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB735; /* je: equal / zero */

loc_003EB6F3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    goto loc_003EB700;

    /* nop */

loc_003EB700: ;
    eax = MEM32(0x907D1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB70F; /* je: equal / zero */

loc_003EB709: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EB70Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EB70Au); } /* indirect call */
    }

loc_003EB70C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB70F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003EB717u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB714u); } /* indirect call */
    }

loc_003EB717: ;
    eax = MEM32(0x907D20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB726; /* je: equal / zero */

loc_003EB720: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EB723u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EB721u); } /* indirect call */
    }

loc_003EB723: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB726: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003EB72Eu); RECOMP_ABI_CALL(0x000230E3u, sub_000230E3); /* call 0x000230E3 */

loc_003EB72E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB700; /* jne: not equal / not zero */

loc_003EB734: ;
    POP32(esp, edi);

loc_003EB735: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB750
 * Original: 0x003EB750 - 0x003EB764 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB750(void)
{

loc_003EB750: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x907D1C) = eax;
    MEM32(0x907D20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB770
 * Original: 0x003EB770 - 0x003EB79D (45 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB770(void)
{

loc_003EB770: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003EB784u); RECOMP_ABI_CALL(0x00031887u, sub_00031887); /* call 0x00031887 */

loc_003EB784: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8362DC;
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, 0x003EB797u); RECOMP_ABI_CALL(0x000335CEu, sub_000335CE); /* call 0x000335CE */

loc_003EB797: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB7B0
 * Original: 0x003EB7B0 - 0x003EB7D1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB7B0(void)
{

loc_003EB7B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8362DC;
    PUSH32(esp, 0x003EB7C2u); RECOMP_ABI_CALL(0x000276A7u, sub_000276A7); /* call 0x000276A7 */

loc_003EB7C2: ;
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0x836294;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB7E0
 * Original: 0x003EB7E0 - 0x003EB838 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB7E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003EB7EDu); RECOMP_ABI_CALL(0x00029BFFu, sub_00029BFF); /* call 0x00029BFF */

loc_003EB7ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB835; /* je: equal / zero */

loc_003EB7F3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    goto loc_003EB800;

    /* nop */

loc_003EB800: ;
    eax = MEM32(0x907D24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB80F; /* je: equal / zero */

loc_003EB809: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EB80Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EB80Au); } /* indirect call */
    }

loc_003EB80C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB80F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003EB817u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB814u); } /* indirect call */
    }

loc_003EB817: ;
    eax = MEM32(0x907D28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB826; /* je: equal / zero */

loc_003EB820: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EB823u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EB821u); } /* indirect call */
    }

loc_003EB823: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB826: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003EB82Eu); RECOMP_ABI_CALL(0x00013F94u, sub_00013F94); /* call 0x00013F94 */

loc_003EB82E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB800; /* jne: not equal / not zero */

loc_003EB834: ;
    POP32(esp, edi);

loc_003EB835: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB850
 * Original: 0x003EB850 - 0x003EB864 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB850(void)
{

loc_003EB850: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x907D24) = eax;
    MEM32(0x907D28) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB870
 * Original: 0x003EB870 - 0x003EB8A5 (53 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB870: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8362D0;
    PUSH32(esp, 0x003EB882u); RECOMP_ABI_CALL(0x00015344u, sub_00015344); /* call 0x00015344 */

loc_003EB882: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0x836294;
    if (TEST_Z(_fa, _fb)) goto loc_003EB89F; /* je: equal / zero */

loc_003EB896: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EB89Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003EB89C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB89F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB8C0
 * Original: 0x003EB8C0 - 0x003EB8F5 (53 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB8C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8362DC;
    PUSH32(esp, 0x003EB8D2u); RECOMP_ABI_CALL(0x000276A7u, sub_000276A7); /* call 0x000276A7 */

loc_003EB8D2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0x836294;
    if (TEST_Z(_fa, _fb)) goto loc_003EB8EF; /* je: equal / zero */

loc_003EB8E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EB8ECu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003EB8EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB8EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB910
 * Original: 0x003EB910 - 0x003EB926 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003EB910: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(esp + 4);
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
 * sub_003EB930
 * Original: 0x003EB930 - 0x003EB942 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB930: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax) = MEM32(eax) | edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_003EB950
 * Original: 0x003EB950 - 0x003EB968 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB950: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB970
 * Original: 0x003EB970 - 0x003EB98A (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB970: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB986; /* je: equal / zero */

loc_003EB982: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB986: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB990
 * Original: 0x003EB990 - 0x003EB995 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB990(void)
{

loc_003EB990: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003EB9A0
 * Original: 0x003EB9A0 - 0x003EB9AF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB9A0: ;
    eax = MEM32(esp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 8))); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB9AE; /* je: equal / zero */

loc_003EB9AD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EB9AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB9C0
 * Original: 0x003EB9C0 - 0x003EB9C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB9C0(void)
{

loc_003EB9C0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB9D0
 * Original: 0x003EB9D0 - 0x003EB9E3 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB9D0(void)
{

loc_003EB9D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003EB9DDu); RECOMP_ABI_CALL(0x0001BD34u, sub_0001BD34); /* call 0x0001BD34 */

loc_003EB9DD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EB9F0
 * Original: 0x003EB9F0 - 0x003EB9F9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB9F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBA00
 * Original: 0x003EBA00 - 0x003EBA04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA00(void)
{

loc_003EBA00: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003EBA10
 * Original: 0x003EBA10 - 0x003EBA1B (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003EBA10: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EBA20
 * Original: 0x003EBA20 - 0x003EBA2B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA20(void)
{

loc_003EBA20: ;
    eax = MEM32(ecx + 0x14);
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBA30
 * Original: 0x003EBA30 - 0x003EBA3C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBA30: ;
    edx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_003EBA40
 * Original: 0x003EBA40 - 0x003EBA4E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBA40: ;
    edx = MEM32(ecx + 0xBC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_003EBA60
 * Original: 0x003EBA60 - 0x003EBA65 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBA60: ;
    eax = MEM32(ecx + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003EBA70
 * Original: 0x003EBA70 - 0x003EBA80 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA70(void)
{

loc_003EBA70: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBA90
 * Original: 0x003EBA90 - 0x003EBAA0 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA90(void)
{

loc_003EBA90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EBAB0
 * Original: 0x003EBAB0 - 0x003EBABD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBAB0(void)
{

loc_003EBAB0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBAC0
 * Original: 0x003EBAC0 - 0x003EBAC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBAC0(void)
{

loc_003EBAC0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EBAD0
 * Original: 0x003EBAD0 - 0x003EBADB (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBAD0(void)
{

loc_003EBAD0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EBAE0
 * Original: 0x003EBAE0 - 0x003EBAF5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBAE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBB00
 * Original: 0x003EBB00 - 0x003EBB1E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBB00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EBB30
 * Original: 0x003EBB30 - 0x003EBB42 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBB30(void)
{

loc_003EBB30: ;
    edx = MEM32(ecx + 0x20);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x24);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EBB50
 * Original: 0x003EBB50 - 0x003EBB54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBB50(void)
{

loc_003EBB50: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_003EBB60
 * Original: 0x003EBB60 - 0x003EBB8C (44 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBB60(void)
{

loc_003EBB60: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0x1388;
    MEM32(eax + 8) = 0x7D000;
    MEM32(eax + 0xC) = 0x32000;
    MEM32(eax + 0x10) = 1;
    MEM32(eax + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBBA0
 * Original: 0x003EBBA0 - 0x003EBBD6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EBBA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x584);
    edx = MEM32(esi + 0x28);
    MEM32(esi) = 0x8362E8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003EBBB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EBBB5u); } /* indirect call */
    }

loc_003EBBB8: ;
    ecx = esi + 0x560;
    MEM32(esi + 0x28) = 0;
    PUSH32(esp, 0x003EBBCAu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EBBCA: ;
    ecx = esi + 0x540;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_003EBBF0
 * Original: 0x003EBBF0 - 0x003EBC7F (143 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBBF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003EBC57; /* jne: not equal / not zero */

loc_003EBBFD: ;
    ecx = MEM32(esi + 0x550);
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx) = LO8(edx);
    ecx = MEM32(esi + 0x550);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x550) = ecx;
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx) = LO8(edx);
    edi = MEM32(esi + 0x550);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x550) = edi;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM8(ecx) = LO8(edx);
    ecx = MEM32(esi + 0x550);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x550) = ecx;
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(ecx) = LO8(eax);
    eax = MEM32(esi + 0x550);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x550) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003EBC57: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x550);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003EBC69u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003EBC69: ;
    eax = MEM32(esi + 0x550);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x550) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EBCB0
 * Original: 0x003EBCB0 - 0x003EBD81 (209 bytes, 72 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EBCB0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003EBCD3; /* jne: not equal / not zero */

loc_003EBCC4: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_003EBCD3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    ecx = ebx;
    PUSH32(esp, 0x003EBCDFu); RECOMP_ABI_CALL(0x00029650u, sub_00029650); /* call 0x00029650 */

loc_003EBCDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EBCF3; /* jge: greater or equal (signed >=) */

loc_003EBCE3: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_003EBCF3: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003EBCFFu); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003EBCFF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    PUSH32(esp, 0x003EBD0Bu); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003EBD0B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x003EBD1Eu); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_003EBD1E: ;
    ecx = eax;
    PUSH32(esp, 0x003EBD25u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_003EBD25: ;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esi + 0x18)); /* fidiv dword ptr [esi + 0x18] */
    ecx = esp + 0x20;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x003EBD35u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EBD35: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003EBD46u); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_003EBD46: ;
    ecx = eax;
    PUSH32(esp, 0x003EBD4Du); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_003EBD4D: ;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esi + 0x18)); /* fidiv dword ptr [esi + 0x18] */
    ecx = esp + 0x20;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x003EBD5Du); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EBD5D: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003EBD66u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EBD66: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003EBD6Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EBD6F: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x34)); /* fdiv dword ptr [esp + 0x34] */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003EBDC0
 * Original: 0x003EBDC0 - 0x003EBDFB (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBDC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x56C);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBDDE; /* jne: not equal / not zero */

loc_003EBDD0: ;
    eax = MEM32(eax + 0xC4);
    MEM32(esi + 0x550) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003EBDDE: ;
    SET_LO8(eax, MEM8(esi + 0x57C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBDF9; /* je: equal / zero */

loc_003EBDE8: ;
    ecx = MEM32(esi + 0x578);
    PUSH32(esp, 0x003EBDF3u); RECOMP_ABI_CALL(0x00036134u, sub_00036134); /* call 0x00036134 */

loc_003EBDF3: ;
    MEM32(esi + 0x550) = eax;

loc_003EBDF9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EBE10
 * Original: 0x003EBE10 - 0x003EBE65 (85 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBE10: ;
    SET_LO8(eax, MEM8(ecx + 0x57C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBE2D; /* jne: not equal / not zero */

loc_003EBE1A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0x2C);
    esp += 8; return; /* ret 4 */

loc_003EBE2D: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(edx);
    if (CMP_NE(_fa, _fb)) goto loc_003EBE40; /* jne: not equal / not zero */

loc_003EBE3A: ;
    eax = MEM32(edx + 0x2C);
    esp += 8; return; /* ret 4 */

loc_003EBE40: ;
    eax = eax + eax * 4;
    PUSH32(esp, esi);
    esi = edx + eax * 4 + 0x1C;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBE5B; /* jne: not equal / not zero */

loc_003EBE4F: ;
    ecx = MEM32(ecx + 0x578);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003EBE5Bu); RECOMP_ABI_CALL(0x0002D64Cu, sub_0002D64C); /* call 0x0002D64C */

loc_003EBE5B: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EBE80
 * Original: 0x003EBE80 - 0x003EBEB6 (54 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBE80: ;
    _fa = (uint32_t)(MEM32(ecx + 0x54C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x54C), 1 (32-bit) */
    eax = MEM32(ecx + 0x554);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003EBE9C; /* jne: not equal / not zero */

loc_003EBE90: ;
    edx = MEM32(ecx + 0x53C);
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003EBE9C: ;
    ecx = MEM32(ecx + 0x18);
    esi = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003EBEB0u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003EBEB0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EBED0
 * Original: 0x003EBED0 - 0x003EBEFA (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBED0: ;
    eax = MEM32(ecx + 0x558);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x568) = 2;
    edx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003EBEEC; /* je: equal / zero */

loc_003EBEE9: ;
    MEM32(eax + 4) = edx;

loc_003EBEEC: ;
    ecx = MEM32(ecx + 0x55C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBEF9; /* je: equal / zero */

loc_003EBEF6: ;
    MEM32(ecx + 4) = edx;

loc_003EBEF9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBF10
 * Original: 0x003EBF10 - 0x003EBF52 (66 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBF10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x003EBF1Fu); RECOMP_ABI_CALL(0x0002534Du, sub_0002534D); /* call 0x0002534D */

loc_003EBF1F: ;
    eax = MEM32(esi + 0x2C);
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBF2F; /* je: equal / zero */

loc_003EBF2C: ;
    MEM32(eax + 0x10) = edi;

loc_003EBF2F: ;
    MEM32(esi + 0x2C) = edi;
    MEM32(edi + 0xC0) = 1;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(esi + 0x34);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x30) = ecx;
    ecx = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x34) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EBF70
 * Original: 0x003EBF70 - 0x003EBF8E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBF70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EBF75: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBF81; /* jne: not equal / not zero */

loc_003EBF7C: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBF8D; /* je: equal / zero */

loc_003EBF81: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EBF75; /* jl: less (signed <) */

loc_003EBF8A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003EBF8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBFA0
 * Original: 0x003EBFA0 - 0x003EBFCE (46 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBFA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003EBFADu); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_003EBFAD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBFC8; /* je: equal / zero */

loc_003EBFB6: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003EBFC2u); RECOMP_ABI_CALL(0x0001BD34u, sub_0001BD34); /* call 0x0001BD34 */

loc_003EBFC2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003EBFC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EBFE0
 * Original: 0x003EBFE0 - 0x003EC054 (116 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBFE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x907D3C);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x580);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x003EC002u); RECOMP_ABI_CALL(0x0002A767u, sub_0002A767); /* call 0x0002A767 */

loc_003EC002: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xC8);
    MEM32(esi + 0x580) = eax;
    PUSH32(esp, 0x003EC017u); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_003EC017: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC02E; /* je: equal / zero */

loc_003EC01E: ;
    ecx = MEM32(esi + 0x56C);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003EC02Cu); RECOMP_ABI_CALL(0x0003825Eu, sub_0003825E); /* call 0x0003825E */

loc_003EC02C: ;
    goto loc_003EC030;

loc_003EC02E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003EC030: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x56C) = eax;
    MEM32(eax + 0x18) = edx;
    eax = MEM32(esi + 0x56C);
    ecx = MEM32(eax + 0xC4);
    MEM32(esi + 0x550) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EC080
 * Original: 0x003EC080 - 0x003EC0AF (47 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 8;

loc_003EC091: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC0A3; /* je: equal / zero */

loc_003EC097: ;
    ecx = MEM32(ebx + 0x578);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EC0A3u); RECOMP_ABI_CALL(0x00025AE6u, sub_00025AE6); /* call 0x00025AE6 */

loc_003EC0A3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EC091; /* jne: not equal / not zero */

loc_003EC0A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EC0C0
 * Original: 0x003EC0C0 - 0x003EC19B (219 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC0C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    ecx = MEM32(esi + 0x580);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x003EC0E4u); RECOMP_ABI_CALL(0x0001ECB9u, sub_0001ECB9); /* call 0x0001ECB9 */

loc_003EC0E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EC138; /* je: equal / zero */

loc_003EC0EC: ;
    /* nop */

loc_003EC0F0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003EC0FCu); RECOMP_ABI_CALL(0x0002E48Eu, sub_0002E48E); /* call 0x0002E48E */

loc_003EC0FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC125; /* je: equal / zero */

loc_003EC100: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EC10Fu); RECOMP_ABI_CALL(0x00033E52u, sub_00033E52); /* call 0x00033E52 */

loc_003EC10F: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    MEM32(esi + 0x580) = ecx;
    PUSH32(esp, 0x003EC123u); RECOMP_ABI_CALL(0x0001ECB9u, sub_0001ECB9); /* call 0x0001ECB9 */

loc_003EC123: ;
    goto loc_003EC12C;

loc_003EC125: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);

loc_003EC12C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EC0F0; /* jne: not equal / not zero */

loc_003EC134: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC169; /* jne: not equal / not zero */

loc_003EC138: ;
    ecx = MEM32(esi + 0x580);
    PUSH32(esp, 0x003EC143u); RECOMP_ABI_CALL(0x0001ECB9u, sub_0001ECB9); /* call 0x0001ECB9 */

loc_003EC143: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EC18F; /* je: equal / zero */

loc_003EC14F: ;
    /* nop */

loc_003EC150: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_BE(_fa, _fb)) goto loc_003EC163; /* jbe: below or equal (unsigned <=) */

loc_003EC157: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC179; /* je: equal / zero */

loc_003EC15B: ;
    eax = edx;
    MEM32(esp + 8) = eax;
    goto loc_003EC150;

loc_003EC163: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EC169u); RECOMP_ABI_CALL(0x0002E82Bu, sub_0002E82B); /* call 0x0002E82B */

loc_003EC169: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x580) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003EC179: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EC17Fu); RECOMP_ABI_CALL(0x000374EEu, sub_000374EE); /* call 0x000374EE */

loc_003EC17F: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x580) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003EC18F: ;
    MEM32(esi + 0x580) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EC1E0
 * Original: 0x003EC1E0 - 0x003EC31E (318 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EC1E0: ;
    PUSH32(esp, ecx);
    edx = ecx;
    eax = MEM32(edx + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC1F3; /* jl: less (signed <) */

loc_003EC1EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003EC1F3: ;
    eax = MEM32(edx + 0x538);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x30);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC2EA; /* je: equal / zero */

loc_003EC209: ;
    ebx = 2;
    eax = edx + 0x40;
    MEM32(esp + 0xC) = 8;
    PUSH32(esp, ebp);
    /* nop */

loc_003EC220: ;
    ecx = ebx + -2;
    ebp = 1;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + 0x538);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC24C; /* je: equal / zero */

loc_003EC234: ;
    SET_LO8(ecx, MEM8(eax + -8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC24C; /* je: equal / zero */

loc_003EC23B: ;
    ebp = MEM32(eax);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(edx + 4);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EC24C: ;
    ecx = ebx + -1;
    ebp = 1;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + 0x538);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC279; /* je: equal / zero */

loc_003EC260: ;
    SET_LO8(ecx, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC279; /* je: equal / zero */

loc_003EC267: ;
    ebp = MEM32(eax + 0x28);
    ecx = MEM32(eax + 0x2C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(edx + 4);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EC279: ;
    ecx = ebx;
    ebp = 1;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + 0x538);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC2A5; /* je: equal / zero */

loc_003EC28C: ;
    SET_LO8(ecx, MEM8(eax + 0x48));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC2A5; /* je: equal / zero */

loc_003EC293: ;
    ebp = MEM32(eax + 0x50);
    ecx = MEM32(eax + 0x54);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(edx + 4);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EC2A5: ;
    ecx = ebx + 1;
    ebp = 1;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + 0x538);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC2D2; /* je: equal / zero */

loc_003EC2B9: ;
    SET_LO8(ecx, MEM8(eax + 0x70));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC2D2; /* je: equal / zero */

loc_003EC2C0: ;
    ebp = MEM32(eax + 0x78);
    ecx = MEM32(eax + 0x7C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(edx + 4);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EC2D2: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_003EC220; /* jne: not equal / not zero */

loc_003EC2E9: ;
    POP32(esp, ebp);

loc_003EC2EA: ;
    ebx = MEM32(edx + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC2F8; /* jl: less (signed <) */

loc_003EC2F1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003EC2F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC30B; /* jne: not equal / not zero */

loc_003EC2FC: ;
    ecx = MEM32(edx + 4);
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003EC30B: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    ecx = eax;
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EC370
 * Original: 0x003EC370 - 0x003EC3A5 (53 bytes, 14 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC370: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(ecx) = LO8(edx);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = 0;
    MEM32(ecx + 0x10) = 0;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = eax;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003EC3C0
 * Original: 0x003EC3C0 - 0x003EC3EB (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC3C0: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_003EC3D5; /* jns: not sign (positive) */

loc_003EC3D0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EC3D5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if ((ecx != 0)) goto loc_003EC3E1; /* jne: not equal / not zero */

loc_003EC3D8: ;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_003EC3E1: ;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003EC400
 * Original: 0x003EC400 - 0x003EC412 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC400(void)
{

loc_003EC400: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EC420
 * Original: 0x003EC420 - 0x003EC43D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC420: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EC450
 * Original: 0x003EC450 - 0x003EC49B (75 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC450: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x584);
    edx = MEM32(esi + 0x28);
    MEM32(esi) = 0x8362E8;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003EC468u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC465u); } /* indirect call */
    }

loc_003EC468: ;
    ecx = esi + 0x560;
    MEM32(esi + 0x28) = 0;
    PUSH32(esp, 0x003EC47Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EC47A: ;
    ecx = esi + 0x540;
    PUSH32(esp, 0x003EC485u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EC485: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC495; /* je: equal / zero */

loc_003EC48C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EC492u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003EC492: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EC495: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EC4B0
 * Original: 0x003EC4B0 - 0x003EC63D (397 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EC4B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0xDEADFEEBu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003EC4C9u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_003EC4C9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    MEM32(esi + 0x54C) = ebx;
    MEM32(esi + 0x56C) = ebx;
    MEM32(esi + 0x53C) = ebx;
    PUSH32(esp, 0x003EC4EBu); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003EC4EB: ;
    PUSH32(esp, eax);
    ecx = esi + 0x540;
    PUSH32(esp, 0x003EC4F7u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003EC4F7: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003EC500u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EC500: ;
    MEM8(esi + 0x548) = LO8(ebx);
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x538) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x48;
    /* nop */

loc_003EC520: ;
    MEM32(eax) = ebx;
    MEM32(eax + -4) = ebx;
    MEM32(eax + -8) = ebx;
    MEM32(eax + -12) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 4) = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC520; /* jl: less (signed <) */

loc_003EC53D: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    MEM8(esi + 0x57C) = 1;
    PUSH32(esp, 0x003EC554u); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_003EC554: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC569; /* je: equal / zero */

loc_003EC55D: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x003EC565u); RECOMP_ABI_CALL(0x0001BD34u, sub_0001BD34); /* call 0x0001BD34 */

loc_003EC565: ;
    ecx = edi;
    goto loc_003EC56B;

loc_003EC569: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003EC56B: ;
    eax = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x15);
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x128;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    edx = edx & 0x8000000Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x580) = ecx;
    if ((_fas >= 0)) goto loc_003EC58B; /* jns: not sign (positive) */

loc_003EC586: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EC58B: ;
    if ((edx == 0)) goto loc_003EC596; /* je: equal / zero */

loc_003EC58D: ;
    edi = 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EC596: ;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x003EC5A5u); RECOMP_ABI_CALL(0x0002A767u, sub_0002A767); /* call 0x0002A767 */

loc_003EC5A5: ;
    MEM32(esi + 0x580) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x57C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x57C), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_003EC5E8; /* je: equal / zero */

loc_003EC5B5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x128);
    PUSH32(esp, 0x003EC5C4u); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_003EC5C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC5DE; /* je: equal / zero */

loc_003EC5CB: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003EC5D6u); RECOMP_ABI_CALL(0x00031F44u, sub_00031F44); /* call 0x00031F44 */

loc_003EC5D6: ;
    MEM32(esi + 0x578) = eax;
    goto loc_003EC5EE;

loc_003EC5DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x578) = eax;
    goto loc_003EC5EE;

loc_003EC5E8: ;
    MEM32(esi + 0x578) = ebx;

loc_003EC5EE: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0x003EC5FFu); RECOMP_ABI_CALL(0x0001402Fu, sub_0001402F); /* call 0x0001402F */

loc_003EC5FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    MEM32(esi + 0x554) = ebx;
    MEM32(esi + 0x55C) = ebx;
    MEM32(esi + 0x558) = ebx;
    PUSH32(esp, 0x003EC61Cu); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003EC61C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x560;
    PUSH32(esp, 0x003EC628u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003EC628: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003EC631u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EC631: ;
    MEM32(esi + 0x568) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003EC6A0
 * Original: 0x003EC6A0 - 0x003ECA2B (907 bytes, 288 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EC6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003EC6A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC6B6u); RECOMP_ABI_CALL(0x0002AB7Cu, sub_0002AB7C); /* call 0x0002AB7C */

loc_003EC6B6: ;
    ebx = MEM32(ebp + 0xC);
    ecx = ebx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC6C4u); RECOMP_ABI_CALL(0x00029650u, sub_00029650); /* call 0x00029650 */

loc_003EC6C4: ;
    ecx = MEM32(esi + 0x56C);
    edx = MEM32(esi + 0x554);
    edi = eax;
    eax = MEM32(ecx + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x54C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54C), 2 (32-bit) */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EC6F2; /* jne: not equal / not zero */

loc_003EC6EF: ;
    edx = MEM32(ecx + 0x14);

loc_003EC6F2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECA22; /* je: equal / zero */

loc_003EC6FA: ;
    edx = MEM32(0x907D30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC712; /* je: equal / zero */

loc_003EC704: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x003EC707u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC705u); } /* indirect call */
    }

loc_003EC707: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EC712: ;
    edx = MEM32(esi + 0x53C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_003EC78B; /* jne: not equal / not zero */

loc_003EC725: ;
    _fa = (uint32_t)(MEM8(esi + 0x548)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x548), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC78B; /* jne: not equal / not zero */

loc_003EC72D: ;
    edx = eax + eax * 4;
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4 + 0x24), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EC754; /* jle: less or equal (signed <=) */

loc_003EC736: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC73Fu); RECOMP_ABI_CALL(0x0001970Fu, sub_0001970F); /* call 0x0001970F */

loc_003EC73F: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0x2C);
    if (CMP_EQ(_fa, _fb)) goto loc_003EC754; /* je: equal / zero */

loc_003EC74B: ;
    edx = eax + eax * 4;
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4 + 0x24), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EC736; /* jg: greater (signed >) */

loc_003EC754: ;
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x30;
    MEM32(esp + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC765u); RECOMP_ABI_CALL(0x0001DBD4u, sub_0001DBD4); /* call 0x0001DBD4 */

loc_003EC765: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    eax = eax + eax * 4;
    edx = MEM32(ecx + eax * 4 + 0x24);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    eax = eax + eax * 4;
    edx = MEM32(ecx + eax * 4 + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    goto loc_003EC8AF;

loc_003EC78B: ;
    _fa = (uint32_t)(MEM32(esi + 0x54C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54C), 1 (32-bit) */
    eax = MEM32(esi + 0x554);
    if (CMP_NE(_fa, _fb)) goto loc_003EC7A0; /* jne: not equal / not zero */

loc_003EC79A: ;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003EC7A0: ;
    ecx = MEM32(esi + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC7B2u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003EC7B2: ;
    edx = esp + 0x18;
    edi = esi + 0x540;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC7C4u); RECOMP_ABI_CALL(0x0002CC47u, sub_0002CC47); /* call 0x0002CC47 */

loc_003EC7C4: ;
    ecx = esp + 0x18;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC7CFu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EC7CF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC7F0; /* je: equal / zero */

loc_003EC7D3: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC7DFu); RECOMP_ABI_CALL(0x00034136u, sub_00034136); /* call 0x00034136 */

loc_003EC7DF: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC7E7u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003EC7E7: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC7F0u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EC7F0: ;
    eax = MEM32(esi + 0x53C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC808; /* je: equal / zero */

loc_003EC7FA: ;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x2C) = edx;

loc_003EC808: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC80Fu); RECOMP_ABI_CALL(0x00029650u, sub_00029650); /* call 0x00029650 */

loc_003EC80F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x18)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x18))); }
    edx = eax;
    eax = MEM32(esi + 0x554);
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x54C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54C), 1 (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003EC83C; /* jne: not equal / not zero */

loc_003EC82C: ;
    ecx = MEM32(esi + 0x53C);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;

loc_003EC83C: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EC862; /* jle: less or equal (signed <=) */

loc_003EC849: ;
    edi = eax;
    goto loc_003EC850;

    /* nop */

loc_003EC850: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC859u); RECOMP_ABI_CALL(0x0001970Fu, sub_0001970F); /* call 0x0001970F */

loc_003EC859: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC85F; /* jne: not equal / not zero */

loc_003EC85D: ;
    SET_LO8(ebx, 1);

loc_003EC85F: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EC850; /* jne: not equal / not zero */

loc_003EC862: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    edx = ecx;
    edi = eax;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003EC885; /* je: equal / zero */

loc_003EC87A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_003EC8CA;

loc_003EC885: ;
    ebx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC8C6; /* jge: greater or equal (signed >=) */

loc_003EC892: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC89Bu); RECOMP_ABI_CALL(0x0001DBD4u, sub_0001DBD4); /* call 0x0001DBD4 */

loc_003EC89B: ;
    eax = MEM32(esi + 0x18);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = esi + 0x540;
    PUSH32(esp, eax);

loc_003EC8AF: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC8B6u); RECOMP_ABI_CALL(0x00035D56u, sub_00035D56); /* call 0x00035D56 */

loc_003EC8B6: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x34);

loc_003EC8C6: ;
    edx = MEM32(esp + 0x30);

loc_003EC8CA: ;
    ebx = eax + eax * 4;
    _fa = (uint32_t)(MEM32(ecx + ebx * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx * 4 + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC8DB; /* je: equal / zero */

loc_003EC8D4: ;
    ebx = 1;
    goto loc_003EC8EA;

loc_003EC8DB: ;
    ebx = edi + edi * 4;
    _fa = (uint32_t)(MEM32(edx + ebx * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ebx * 4 + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC94D; /* je: equal / zero */

loc_003EC8E5: ;
    ebx = 2;

loc_003EC8EA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_003EC8F3: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC8FCu); RECOMP_ABI_CALL(0x0001DBD4u, sub_0001DBD4); /* call 0x0001DBD4 */

loc_003EC8FC: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0x2C);
    if (CMP_EQ(_fa, _fb)) goto loc_003EC945; /* je: equal / zero */

loc_003EC908: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ecx;
    edi = eax;
    MEM32(esp + 0x18) = ebx;
    ebx = eax + eax * 4;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edi;
    _fa = (uint32_t)(MEM32(ecx + ebx * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx * 4 + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC92A; /* je: equal / zero */

loc_003EC923: ;
    ebx = 1;
    goto loc_003EC8F3;

loc_003EC92A: ;
    ebx = edi + edi * 4;
    _fa = (uint32_t)(MEM32(edx + ebx * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ebx * 4 + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC93B; /* je: equal / zero */

loc_003EC934: ;
    ebx = 2;
    goto loc_003EC8F3;

loc_003EC93B: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC8F3; /* jne: not equal / not zero */

loc_003EC943: ;
    goto loc_003EC94D;

loc_003EC945: ;
    edi = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);

loc_003EC94D: ;
    ebx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x57C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC968; /* jne: not equal / not zero */

loc_003EC95F: ;
    eax = eax + eax * 4;
    ecx = MEM32(ecx + eax * 4 + 0x2C);
    goto loc_003EC999;

loc_003EC968: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC971; /* jne: not equal / not zero */

loc_003EC96C: ;
    ecx = MEM32(ecx + 0x2C);
    goto loc_003EC999;

loc_003EC971: ;
    eax = eax + eax * 4;
    ebx = ecx + eax * 4 + 0x1C;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC993; /* jne: not equal / not zero */

loc_003EC97F: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x578);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC98Bu); RECOMP_ABI_CALL(0x0002D64Cu, sub_0002D64C); /* call 0x0002D64C */

loc_003EC98B: ;
    edi = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);

loc_003EC993: ;
    ecx = MEM32(ebx + 0xC);
    ecx = MEM32(ecx + 8);

loc_003EC999: ;
    SET_LO8(eax, MEM8(esi + 0x57C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003EC9B0; /* jne: not equal / not zero */

loc_003EC9A7: ;
    eax = edi + edi * 4;
    edx = MEM32(edx + eax * 4 + 0x2C);
    goto loc_003EC9DA;

loc_003EC9B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC9B9; /* jne: not equal / not zero */

loc_003EC9B4: ;
    edx = MEM32(edx + 0x2C);
    goto loc_003EC9DA;

loc_003EC9B9: ;
    ecx = edi + edi * 4;
    eax = MEM32(edx + ecx * 4 + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = edx + ecx * 4 + 0x1C;
    if (CMP_NE(_fa, _fb)) goto loc_003EC9D4; /* jne: not equal / not zero */

loc_003EC9C8: ;
    ecx = MEM32(esi + 0x578);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC9D4u); RECOMP_ABI_CALL(0x0002D64Cu, sub_0002D64C); /* call 0x0002D64C */

loc_003EC9D4: ;
    edx = MEM32(edi + 0xC);
    edx = MEM32(edx + 8);

loc_003EC9DA: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003ECA13; /* je: equal / zero */

loc_003EC9E6: ;
    ebx = MEM32(esp + 0xC);
    goto loc_003EC9F0;

loc_003EC9EC: ;
    edi = MEM32(esp + 0x14);

loc_003EC9F0: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003ECA02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC9FFu); } /* indirect call */
    }

loc_003ECA02: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ECA0Bu); RECOMP_ABI_CALL(0x0001A5A6u, sub_0001A5A6); /* call 0x0001A5A6 */

loc_003ECA0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EC9EC; /* jne: not equal / not zero */

loc_003ECA13: ;
    eax = MEM32(0x907D34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECA22; /* je: equal / zero */

loc_003ECA1C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003ECA1Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003ECA1Du); } /* indirect call */
    }

loc_003ECA1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ECA22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003ECB10
 * Original: 0x003ECB10 - 0x003ECB5A (74 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ECB10: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x34);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi + 0x30) = edx;
    eax = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), edi (32-bit) */
    MEM32(esi + 0x34) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003ECB34; /* jne: not equal / not zero */

loc_003ECB2E: ;
    ecx = MEM32(edi + 0xC);
    MEM32(esi + 0x2C) = ecx;

loc_003ECB34: ;
    ecx = edi;
    PUSH32(esp, 0x003ECB3Bu); RECOMP_ABI_CALL(0x0002534Du, sub_0002534D); /* call 0x0002534D */

loc_003ECB3B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003ECB43u); RECOMP_ABI_CALL(0x00026CEDu, sub_00026CED); /* call 0x00026CED */

loc_003ECB43: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(edi + 0xC0) = 0;
    PUSH32(esp, 0x003ECB55u); RECOMP_ABI_CALL(0x0001F1FFu, sub_0001F1FF); /* call 0x0001F1FF */

loc_003ECB55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ECB70
 * Original: 0x003ECB70 - 0x003ECC4D (221 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ECB70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = ecx;
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003ECC47; /* je: equal / zero */

loc_003ECB87: ;
    ecx = MEM32(edi + 0x14);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x538);
    PUSH32(esp, esi);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x538) = ecx;
    esi = MEM32(edi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECC34; /* je: equal / zero */

loc_003ECBAD: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    if ((_fas >= 0)) goto loc_003ECBC5; /* jns: not sign (positive) */

loc_003ECBC0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ECBC5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if ((ecx != 0)) goto loc_003ECBD4; /* jne: not equal / not zero */

loc_003ECBC8: ;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((3) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_003ECBDF;

loc_003ECBD4: ;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((3) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ECBDF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_003ECC33; /* jle: less or equal (signed <=) */

loc_003ECBE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECC33; /* je: equal / zero */

loc_003ECBEB: ;
    ecx = MEM32(edi + 0x14);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(esi + 0xBC);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xBC) = ecx;
    ebx = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_003ECC22; /* jne: not equal / not zero */

loc_003ECC0E: ;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECC22; /* je: equal / zero */

loc_003ECC18: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003ECC22u); RECOMP_ABI_CALL(0x00027D7Du, sub_00027D7D); /* call 0x00027D7D */

loc_003ECC22: ;
    eax = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003ECBE7; /* jl: less (signed <) */

loc_003ECC33: ;
    POP32(esp, ebp);

loc_003ECC34: ;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x24) = ebx;
    POP32(esp, esi);

loc_003ECC47: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ECC90
 * Original: 0x003ECC90 - 0x003ECD12 (130 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ECC90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x7FFFFFFF;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 2;
    edx = ecx + 0x50;

loc_003ECCA3: ;
    edi = MEM32(edx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECCB5; /* je: equal / zero */

loc_003ECCAA: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ECCB5; /* jge: greater or equal (signed >=) */

loc_003ECCB0: ;
    eax = edi;
    ebx = esi + -2;

loc_003ECCB5: ;
    edi = MEM32(edx + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECCC8; /* je: equal / zero */

loc_003ECCBC: ;
    edi = MEM32(edx + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ECCC8; /* jge: greater or equal (signed >=) */

loc_003ECCC3: ;
    eax = edi;
    ebx = esi + -1;

loc_003ECCC8: ;
    edi = MEM32(edx + 0x58);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECCDA; /* je: equal / zero */

loc_003ECCCF: ;
    edi = MEM32(edx + 0x50);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ECCDA; /* jge: greater or equal (signed >=) */

loc_003ECCD6: ;
    eax = edi;
    ebx = esi;

loc_003ECCDA: ;
    edi = MEM32(edx + 0x80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECCF0; /* je: equal / zero */

loc_003ECCE4: ;
    edi = MEM32(edx + 0x78);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ECCF0; /* jge: greater or equal (signed >=) */

loc_003ECCEB: ;
    eax = edi;
    ebx = esi + 1;

loc_003ECCF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + -2;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ECCA3; /* jl: less (signed <) */

loc_003ECD01: ;
    eax = ebx + ebx * 4;
    edx = ecx + eax * 8 + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003ECD0Eu); RECOMP_ABI_CALL(0x0002BA09u, sub_0002BA09); /* call 0x0002BA09 */

loc_003ECD0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECD40
 * Original: 0x003ECD40 - 0x003ECD8E (78 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ECD40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003ECD89; /* je: equal / zero */

loc_003ECD50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003ECD52: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + 0x38;

loc_003ECD57: ;
    ecx = edi;
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM32(ebx + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0xBC), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ECD77; /* je: equal / zero */

loc_003ECD68: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECD77; /* jne: not equal / not zero */

loc_003ECD6D: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x003ECD75u); RECOMP_ABI_CALL(0x0002BA09u, sub_0002BA09); /* call 0x0002BA09 */

loc_003ECD75: ;
    SET_LO8(eax, 1);

loc_003ECD77: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ECD57; /* jl: less (signed <) */

loc_003ECD80: ;
    ebx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECD52; /* jne: not equal / not zero */

loc_003ECD87: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003ECD89: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ECDB0
 * Original: 0x003ECDB0 - 0x003ECE23 (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ECDB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x56C);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003ECDD8; /* je: equal / zero */

loc_003ECDC4: ;
    esi = MEM32(eax + 0xBC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) edx = eax; /* cmovne */
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECDC4; /* jne: not equal / not zero */

loc_003ECDD8: ;
    esi = MEM32(edi + 0x56C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECE08; /* je: equal / zero */

loc_003ECDE2: ;
    eax = MEM32(edx + 0xBC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003ECDF0: ;
    ebx = 1;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ECE0E; /* jne: not equal / not zero */

loc_003ECDFB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ECDF0; /* jl: less (signed <) */

loc_003ECE01: ;
    edx = MEM32(edx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECDE2; /* jne: not equal / not zero */

loc_003ECE08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003ECE0E: ;
    eax = ecx + ecx * 4;
    ecx = edi + eax * 8 + 0x38;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003ECE1Du); RECOMP_ABI_CALL(0x0002BA09u, sub_0002BA09); /* call 0x0002BA09 */

loc_003ECE1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECE40
 * Original: 0x003ECE40 - 0x003ECF6C (300 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ECE40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x56C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x554);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFF8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx;
    MEM32(esi + 0x554) = edi;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECE6D; /* je: equal / zero */

loc_003ECE64: ;
    ebx = eax;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECE64; /* jne: not equal / not zero */

loc_003ECE6D: ;
    eax = MEM32(ebx + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECEAB; /* je: equal / zero */

loc_003ECE77: ;
    ebx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECEA1; /* jne: not equal / not zero */

loc_003ECE7E: ;
    ecx = esi;
    PUSH32(esp, 0x003ECE85u); RECOMP_ABI_CALL(0x000160FAu, sub_000160FA); /* call 0x000160FA */

loc_003ECE85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECED9; /* je: equal / zero */

loc_003ECE89: ;
    ecx = MEM32(esi + 0x56C);
    ebx = ecx;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECEA1; /* je: equal / zero */

loc_003ECE98: ;
    ebx = eax;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECE98; /* jne: not equal / not zero */

loc_003ECEA1: ;
    eax = MEM32(ebx + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECE77; /* jne: not equal / not zero */

loc_003ECEAB: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECF55; /* je: equal / zero */

loc_003ECEB7: ;
    eax = MEM32(ebp + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECF55; /* je: equal / zero */

loc_003ECEC5: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x003ECECDu); RECOMP_ABI_CALL(0x0001B05Au, sub_0001B05A); /* call 0x0001B05A */

loc_003ECECD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECEE7; /* je: equal / zero */

loc_003ECED1: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ECED9: ;
    ecx = esi;
    PUSH32(esp, 0x003ECEE0u); RECOMP_ABI_CALL(0x0002C1A7u, sub_0002C1A7); /* call 0x0002C1A7 */

loc_003ECEE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ECEE7: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_003ECF00; /* je: equal / zero */

loc_003ECEF0: ;
    edi = eax;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECEF0; /* jne: not equal / not zero */

loc_003ECEF9: ;
    /* nop */

loc_003ECF00: ;
    eax = MEM32(edi + 0x10);
    ecx = edi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x003ECF0Eu); RECOMP_ABI_CALL(0x0002534Du, sub_0002534D); /* call 0x0002534D */

loc_003ECF0E: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 0xC) = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECF1E; /* je: equal / zero */

loc_003ECF1B: ;
    MEM32(eax + 0x10) = edi;

loc_003ECF1E: ;
    MEM32(esi + 0x2C) = edi;
    MEM32(edi + 0xC0) = 1;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(esi + 0x34);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi);
    ecx = MEM32(esi + 0x554);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x554) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003ECF55; /* je: equal / zero */

loc_003ECF4F: ;
    edi = MEM32(esp + 0x10);
    goto loc_003ECF00;

loc_003ECF55: ;
    ecx = ebx;
    PUSH32(esp, 0x003ECF5Cu); RECOMP_ABI_CALL(0x0002534Du, sub_0002534D); /* call 0x0002534D */

loc_003ECF5C: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003ECF64u); RECOMP_ABI_CALL(0x00026CEDu, sub_00026CED); /* call 0x00026CED */

loc_003ECF64: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECFC0
 * Original: 0x003ECFC0 - 0x003ED01A (90 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ECFC0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    MEM32(ecx + 0x24) = eax;
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & 0x80000007u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x20) = edi;
    if ((_fas >= 0)) goto loc_003ECFF0; /* jns: not sign (positive) */

loc_003ECFE4: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_003ECFF0: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED000; /* je: equal / zero */

loc_003ECFFF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ED000: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED013; /* jge: greater or equal (signed >=) */

loc_003ED004: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED013; /* je: equal / zero */

loc_003ED008: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + edx;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edi + 0xC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003ECFF0;

loc_003ED013: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ED030
 * Original: 0x003ED030 - 0x003ED101 (209 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED030: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8362E8;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = 0x186A0;
    ecx = MEM32(ebx + 8);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(ebx + 0xC);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(ebx + 0x10);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x28) = edi;
    eax = esi + 0x5C;
    ecx = 0x20;
    edi = edi;

loc_003ED070: ;
    MEM32(eax + -4) = edi;
    MEM32(eax) = edi;
    MEM32(eax + -20) = edi;
    MEM32(eax + -24) = edi;
    MEM32(eax + -28) = edi;
    MEM32(eax + -32) = edi;
    MEM32(eax + -4) = edi;
    MEM32(eax) = edi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED070; /* jne: not equal / not zero */

loc_003ED08C: ;
    ecx = esi + 0x540;
    PUSH32(esp, 0x003ED097u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_003ED097: ;
    ecx = esi + 0x560;
    PUSH32(esp, 0x003ED0A2u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_003ED0A2: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x584) = ecx;
    edx = MEM32(ecx);
    PUSH32(esp, 0x8362EC);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003ED0BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003ED0B7u); } /* indirect call */
    }

loc_003ED0BA: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x28) = eax;
    ecx = ecx * 8 + 0xC8;
    eax = ecx;
    eax = eax & 0x8000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_003ED0D5; /* jns: not sign (positive) */

loc_003ED0D0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ED0D5: ;
    if ((eax == 0)) goto loc_003ED0E0; /* je: equal / zero */

loc_003ED0D7: ;
    edx = 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ED0E0: ;
    MEM32(0x907D3C) = ecx;
    ecx = esi;
    MEM32(0x907D30) = edi;
    MEM32(0x907D34) = edi;
    PUSH32(esp, 0x003ED0F9u); RECOMP_ABI_CALL(0x0002F98Du, sub_0002F98D); /* call 0x0002F98D */

loc_003ED0F9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ED140
 * Original: 0x003ED140 - 0x003ED1D5 (149 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED140: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_003ED143: ;
    ecx = MEM32(esi + 0x580);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED157; /* je: equal / zero */

loc_003ED14D: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x907D3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x907D3C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003ED1D3; /* jg: greater (signed >) */

loc_003ED157: ;
    PUSH32(esp, 0x003ED15Cu); RECOMP_ABI_CALL(0x0001ECB9u, sub_0001ECB9); /* call 0x0001ECB9 */

loc_003ED15C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED171; /* je: equal / zero */

loc_003ED160: ;
    ecx = MEM32(0x907D3C);

loc_003ED166: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003ED1CD; /* jg: greater (signed >) */

loc_003ED16A: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED166; /* jne: not equal / not zero */

loc_003ED171: ;
    ecx = MEM32(esi + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB);
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esi + 0x34);
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ecx = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_003ED1A3; /* jle: less or equal (signed <=) */

loc_003ED191: ;
    PUSH32(esp, 0x003ED196u); RECOMP_ABI_CALL(0x000160FAu, sub_000160FA); /* call 0x000160FA */

loc_003ED196: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED143; /* jne: not equal / not zero */

loc_003ED19A: ;
    ecx = esi;
    PUSH32(esp, 0x003ED1A1u); RECOMP_ABI_CALL(0x0002C1A7u, sub_0002C1A7); /* call 0x0002C1A7 */

loc_003ED1A1: ;
    goto loc_003ED143;

loc_003ED1A3: ;
    edx = MEM32(esi + 0x56C);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED1B7; /* jne: not equal / not zero */

loc_003ED1B0: ;
    PUSH32(esp, 0x003ED1B5u); RECOMP_ABI_CALL(0x0002C1A7u, sub_0002C1A7); /* call 0x0002C1A7 */

loc_003ED1B5: ;
    goto loc_003ED143;

loc_003ED1B7: ;
    PUSH32(esp, 0x003ED1BCu); RECOMP_ABI_CALL(0x000335C9u, sub_000335C9); /* call 0x000335C9 */

loc_003ED1BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED143; /* je: equal / zero */

loc_003ED1C0: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003ED1C8u); RECOMP_ABI_CALL(0x0001F1FFu, sub_0001F1FF); /* call 0x0001F1FF */

loc_003ED1C8: ;
    goto loc_003ED143;

loc_003ED1CD: ;
    MEM32(esi + 0x580) = eax;

loc_003ED1D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED200
 * Original: 0x003ED200 - 0x003ED2EF (239 bytes, 89 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ED200: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x14);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x538);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x538) = ecx;
    eax = MEM32(eax + 0x56C);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED24E; /* jne: not equal / not zero */

loc_003ED234: ;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x24) = ebx;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003ED24E: ;
    eax = MEM32(ecx + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003ED271; /* jle: less or equal (signed <=) */

loc_003ED263: ;
    esi = eax;

loc_003ED265: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003ED26Eu); RECOMP_ABI_CALL(0x0001970Fu, sub_0001970F); /* call 0x0001970F */

loc_003ED26E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED265; /* jne: not equal / not zero */

loc_003ED271: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_003ED28C; /* jns: not sign (positive) */

loc_003ED287: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ED28C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if ((ecx != 0)) goto loc_003ED299; /* jne: not equal / not zero */

loc_003ED28F: ;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_003ED2A2;

loc_003ED299: ;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ED2A2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003ED2D5; /* jle: less or equal (signed <=) */

loc_003ED2A8: ;
    PUSH32(esp, ebp);
    /* nop */

loc_003ED2B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED2D4; /* je: equal / zero */

loc_003ED2B4: ;
    ecx = MEM32(edi + 0x14);
    ebp = 1;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(esi + 0xBC);
    ecx = ecx | ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esi + 0xBC) = ecx;
    esi = MEM32(esi + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_003ED2B0; /* jl: less (signed <) */

loc_003ED2D4: ;
    POP32(esp, ebp);

loc_003ED2D5: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003ED2E6u); RECOMP_ABI_CALL(0x00025DDEu, sub_00025DDE); /* call 0x00025DDE */

loc_003ED2E6: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ED330
 * Original: 0x003ED330 - 0x003ED4E0 (432 bytes, 110 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ED330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED330: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED352; /* jne: not equal / not zero */

loc_003ED342: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x53C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x53C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED425; /* je: equal / zero */

loc_003ED352: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED42A; /* jne: not equal / not zero */

loc_003ED35B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED42F; /* je: equal / zero */

loc_003ED363: ;
    eax = MEM32(esi + 0x558);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x568) = ebp;
    ecx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003ED37B; /* je: equal / zero */

loc_003ED378: ;
    MEM32(eax + 4) = ecx;

loc_003ED37B: ;
    eax = MEM32(esi + 0x55C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED388; /* je: equal / zero */

loc_003ED385: ;
    MEM32(eax + 4) = ecx;

loc_003ED388: ;
    edx = MEM32(esi + 0x550);
    eax = MEM32(esi + 0x56C);
    ecx = esi;
    MEM32(esi + 0x574) = edx;
    MEM32(esi + 0x570) = eax;
    PUSH32(esp, 0x003ED3A7u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_003ED3A7: ;
    ecx = MEM32(0x907D3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x580);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x003ED3C6u); RECOMP_ABI_CALL(0x0002A767u, sub_0002A767); /* call 0x0002A767 */

loc_003ED3C6: ;
    MEM32(esi + 0x580) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x003ED3DBu); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_003ED3DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED3ED; /* je: equal / zero */

loc_003ED3E2: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x003ED3EBu); RECOMP_ABI_CALL(0x0003825Eu, sub_0003825E); /* call 0x0003825E */

loc_003ED3EB: ;
    goto loc_003ED3EF;

loc_003ED3ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003ED3EF: ;
    ecx = eax;
    MEM32(esi + 0x56C) = eax;
    PUSH32(esp, 0x003ED3FCu); RECOMP_ABI_CALL(0x000145BBu, sub_000145BB); /* call 0x000145BB */

loc_003ED3FC: ;
    ecx = MEM32(esi + 0x56C);
    edx = MEM32(ecx + 0xC4);
    MEM32(esi + 0x550) = edx;
    MEM8(esi + 0x57C) = 0;

loc_003ED415: ;
    MEM32(esi + 0x53C) = 0;
    MEM32(esi + 0x54C) = ebp;

loc_003ED425: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003ED42A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED48B; /* jne: not equal / not zero */

loc_003ED42F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED48B; /* je: equal / zero */

loc_003ED434: ;
    eax = MEM32(esi + 0x56C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003ED442u); RECOMP_ABI_CALL(0x0001F1FFu, sub_0001F1FF); /* call 0x0001F1FF */

loc_003ED442: ;
    ecx = MEM32(esi + 0x574);
    eax = MEM32(esi + 0x558);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esi + 0x570);
    MEM32(esi + 0x550) = ecx;
    MEM32(esi + 0x56C) = edx;
    MEM32(esi + 0x568) = 2;
    ecx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003ED476; /* je: equal / zero */

loc_003ED473: ;
    MEM32(eax + 4) = ecx;

loc_003ED476: ;
    eax = MEM32(esi + 0x55C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED483; /* je: equal / zero */

loc_003ED480: ;
    MEM32(eax + 4) = ecx;

loc_003ED483: ;
    MEM8(esi + 0x57C) = LO8(ecx);
    goto loc_003ED4BA;

loc_003ED48B: ;
    ecx = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED4A6; /* jne: not equal / not zero */

loc_003ED494: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED4AA; /* je: equal / zero */

loc_003ED498: ;
    eax = MEM32(esi + 0x56C);
    MEM32(esi + 0x570) = eax;
    goto loc_003ED4C2;

loc_003ED4A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED4BA; /* jne: not equal / not zero */

loc_003ED4AA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED4C2; /* je: equal / zero */

loc_003ED4AE: ;
    edx = MEM32(esi + 0x570);
    MEM32(esi + 0x56C) = edx;

loc_003ED4BA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED415; /* jne: not equal / not zero */

loc_003ED4C2: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x53C) = eax;
    eax = MEM32(eax + 0x20);
    MEM32(esi + 0x54C) = ebp;
    MEM32(esi + 0x56C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ED550
 * Original: 0x003ED550 - 0x003ED5FF (175 bytes, 68 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ED550: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x44;
    PUSH32(esp, esi);

loc_003ED558: ;
    esi = MEM32(edx + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED564; /* jne: not equal / not zero */

loc_003ED55F: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED573; /* je: equal / zero */

loc_003ED564: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ED558; /* jl: less (signed <) */

loc_003ED56D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_003ED573: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED57E; /* jne: not equal / not zero */

loc_003ED578: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_003ED57E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = ecx + ecx * 4;
    esi = eax + edx * 8 + 0x38;
    edx = MEM32(eax + 0x24);
    MEM32(edi) = edx;
    edx = MEM32(eax + 0x24);
    edi = edx + 1;
    MEM32(eax + 0x24) = edi;
    edi = MEM32(eax + 0x1C);
    MEM32(esi + 8) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x20));
    MEM8(esi) = LO8(ebx);
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003ED5EB; /* jle: less or equal (signed <=) */

loc_003ED5CD: ;
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x538);
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x538) = ecx;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_003ED5EB: ;
    ebp = (uint32_t)(-(int32_t)ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003ED5F6u); RECOMP_ABI_CALL(0x0003591Eu, sub_0003591E); /* call 0x0003591E */

loc_003ED5F6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003ED630
 * Original: 0x003ED630 - 0x003ED850 (544 bytes, 176 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ED630: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, ebx);
    ecx = esi + 0x560;
    PUSH32(esp, 0x003ED644u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003ED644: ;
    eax = MEM32(esi + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED65A; /* je: equal / zero */

loc_003ED64E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x568) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003ED65A: ;
    eax = MEM32(0x907D30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED669; /* je: equal / zero */

loc_003ED663: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003ED666u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003ED664u); } /* indirect call */
    }

loc_003ED666: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ED669: ;
    _fa = (uint32_t)(MEM32(esi + 0x54C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54C), 2 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003ED687; /* jne: not equal / not zero */

loc_003ED674: ;
    ecx = MEM32(esi + 0x56C);
    PUSH32(esp, 0x003ED67Fu); RECOMP_ABI_CALL(0x00019C19u, sub_00019C19); /* call 0x00019C19 */

loc_003ED67F: ;
    MEM32(esi + 0x550) = eax;
    goto loc_003ED6FF;

loc_003ED687: ;
    edi = MEM32(esi + 0x554);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x56C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x554) = edi;
    MEM32(esi + 0x1C) = edx;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ED6FF; /* jl: less (signed <) */

loc_003ED6A7: ;
    edi = eax;
    ecx = eax;
    PUSH32(esp, 0x003ED6B0u); RECOMP_ABI_CALL(0x0001DDF0u, sub_0001DDF0); /* call 0x0001DDF0 */

loc_003ED6B0: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_003ED6C1; /* jns: not sign (positive) */

loc_003ED6BC: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ED6C1: ;
    if ((ecx == 0)) goto loc_003ED6CC; /* je: equal / zero */

loc_003ED6C3: ;
    edx = 0x10;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ED6CC: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003ED6D4u); RECOMP_ABI_CALL(0x00036F99u, sub_00036F99); /* call 0x00036F99 */

loc_003ED6D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED6E0; /* je: equal / zero */

loc_003ED6D8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003ED6E0u); RECOMP_ABI_CALL(0x0001F1FFu, sub_0001F1FF); /* call 0x0001F1FF */

loc_003ED6E0: ;
    ecx = esi;
    PUSH32(esp, 0x003ED6E7u); RECOMP_ABI_CALL(0x00030EF0u, sub_00030EF0); /* call 0x00030EF0 */

loc_003ED6E7: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003ED6F2u); RECOMP_ABI_CALL(0x0001402Fu, sub_0001402F); /* call 0x0001402F */

loc_003ED6F2: ;
    ecx = MEM32(esi + 0x56C);
    MEM32(ecx + 0x14) = 0;

loc_003ED6FF: ;
    eax = MEM32(esi + 0x56C);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED71A; /* jne: not equal / not zero */

loc_003ED70C: ;
    edx = MEM32(eax + 0xC4);
    MEM32(esi + 0x550) = edx;
    goto loc_003ED735;

loc_003ED71A: ;
    SET_LO8(eax, MEM8(esi + 0x57C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED735; /* je: equal / zero */

loc_003ED724: ;
    ecx = MEM32(esi + 0x578);
    PUSH32(esp, 0x003ED72Fu); RECOMP_ABI_CALL(0x00036134u, sub_00036134); /* call 0x00036134 */

loc_003ED72F: ;
    MEM32(esi + 0x550) = eax;

loc_003ED735: ;
    ecx = ebx;
    PUSH32(esp, 0x003ED73Cu); RECOMP_ABI_CALL(0x00029650u, sub_00029650); /* call 0x00029650 */

loc_003ED73C: ;
    ecx = MEM32(esi + 0x56C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x550);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003ED74Fu); RECOMP_ABI_CALL(0x0002C1CFu, sub_0002C1CF); /* call 0x0002C1CF */

loc_003ED74F: ;
    ecx = MEM32(esi + 0x558);
    eax = MEM32(esi + 0x56C);
    ebx = MEM32(esp + 0x14);
    ebp = MEM32(esi + 0x550);
    MEM32(esi + 0x55C) = ecx;
    ecx = MEM32(eax + 0x14);
    edx = ecx + ecx * 4;
    eax = eax + edx * 4 + 0x1C;
    ecx = ebx;
    MEM32(esi + 0x558) = eax;
    PUSH32(esp, 0x003ED782u); RECOMP_ABI_CALL(0x0002AB7Cu, sub_0002AB7C); /* call 0x0002AB7C */

loc_003ED782: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED79E; /* je: equal / zero */

loc_003ED788: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003ED790u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003ED78Du); } /* indirect call */
    }

loc_003ED790: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x003ED798u); RECOMP_ABI_CALL(0x0001A5A6u, sub_0001A5A6); /* call 0x0001A5A6 */

loc_003ED798: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED788; /* jne: not equal / not zero */

loc_003ED79E: ;
    SET_LO8(eax, MEM8(esi + 0x57C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x56C);
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_003ED7C4; /* je: equal / zero */

loc_003ED7AF: ;
    eax = MEM32(esi + 0x550);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x578);
    PUSH32(esp, 0x003ED7C2u); RECOMP_ABI_CALL(0x0003716Au, sub_0003716A); /* call 0x0003716A */

loc_003ED7C2: ;
    goto loc_003ED7D0;

loc_003ED7C4: ;
    edx = MEM32(esi + 0x550);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003ED7D0u); RECOMP_ABI_CALL(0x00035F31u, sub_00035F31); /* call 0x00035F31 */

loc_003ED7D0: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) eax = ecx; /* cmovge */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x538);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED83A; /* je: equal / zero */

loc_003ED7F0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x3C;

loc_003ED7F5: ;
    ecx = ebx;
    eax = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM32(esi + 0x538)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x538), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ED831; /* je: equal / zero */

loc_003ED806: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003ED831; /* je: equal / zero */

loc_003ED815: ;
    ecx = MEM32(esi + 0x56C);
    edx = MEM32(ecx + 0x14);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED831; /* jne: not equal / not zero */

loc_003ED821: ;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0);
    eax = edi + -4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003ED831u); RECOMP_ABI_CALL(0x0003591Eu, sub_0003591E); /* call 0x0003591E */

loc_003ED831: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ED7F5; /* jl: less (signed <) */

loc_003ED83A: ;
    eax = MEM32(0x907D34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_003ED84B; /* je: equal / zero */

loc_003ED845: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003ED848u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003ED846u); } /* indirect call */
    }

loc_003ED848: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ED84B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ED8E0
 * Original: 0x003ED8E0 - 0x003ED8F7 (23 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED8E0(void)
{

loc_003ED8E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = 0;
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ED900
 * Original: 0x003ED900 - 0x003ED918 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED900: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax) = LO16(ecx);
    MEM16(eax + 2) = LO16(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003ED920
 * Original: 0x003ED920 - 0x003ED949 (41 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED920: ;
    eax = MEM32(ecx + 0x114);
    SET_LO8(edx, MEM8(esp + 4));
    MEM8(eax) = LO8(edx);
    edx = MEM32(ecx + 0x114);
    eax = MEM32(ecx + 0x120);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = edx;
    MEM32(ecx + 0x120) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ED960
 * Original: 0x003ED960 - 0x003ED99B (59 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED960: ;
    edx = MEM32(ecx + 0x114);
    SET_LO16(eax, MEM16(esp + 4));
    MEM8(edx) = LO8(eax);
    edx = MEM32(ecx + 0x114);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = edx;
    MEM8(edx) = HI8(eax);
    edx = MEM32(ecx + 0x114);
    eax = MEM32(ecx + 0x120);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x114) = edx;
    MEM32(ecx + 0x120) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ED9B0
 * Original: 0x003ED9B0 - 0x003EDA3B (139 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED9B0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    edx = MEM32(ecx + 0x114);
    PUSH32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_003EDA17; /* jle: less or equal (signed <=) */

loc_003ED9C0: ;
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(edx) = LO8(ebx);
    ebx = MEM32(ecx + 0x114);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x120);
    MEM32(ecx + 0x114) = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ebx;
    MEM32(ecx + 0x120) = esi;
    MEM8(edx) = LO8(eax);
    ebx = MEM32(ecx + 0x114);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = ebx;
    edx = ebx;
    MEM8(edx) = HI8(eax);
    edx = MEM32(ecx + 0x114);
    eax = MEM32(ecx + 0x120);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ecx + 0x114) = edx;
    MEM32(ecx + 0x120) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003EDA17: ;
    _fb = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edx) = LO8(eax);
    edx = MEM32(ecx + 0x114);
    eax = MEM32(ecx + 0x120);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = edx;
    MEM32(ecx + 0x120) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDA60
 * Original: 0x003EDA60 - 0x003EDA70 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDA60: ;
    edx = MEM32(ecx + 0x118);
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EDA80
 * Original: 0x003EDA80 - 0x003EDAA6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDA80: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x118);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = eax;
    MEM8(esp) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 1) = LO8(edx);
    MEM32(ecx + 0x118) = eax;
    SET_LO16(eax, MEM16(esp));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EDAB0
 * Original: 0x003EDAB0 - 0x003EDAD6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDAB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x11C);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x11C) = eax;
    MEM8(esp) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 1) = LO8(edx);
    MEM32(ecx + 0x11C) = eax;
    SET_LO16(eax, MEM16(esp));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EDAE0
 * Original: 0x003EDAE0 - 0x003EDB48 (104 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDAE0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx + 8) = edx;
    edi = edx + eax;
    MEM32(ecx + 0x14) = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + eax * 2;
    MEM32(ecx + 0x20) = edi;
    edi = edx + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x2C) = edi;
    MEM32(ecx + 4) = esi;
    MEM32(ecx) = esi;
    edi = edx + eax * 4;
    MEM32(ecx + 0x38) = edi;
    MEM32(ecx + 0x10) = esi;
    MEM32(ecx + 0xC) = esi;
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0x18) = esi;
    edi = edx + eax * 4;
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x24) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x34) = esi;
    MEM32(ecx + 0x30) = esi;
    MEM32(ecx + 0x44) = edi;
    eax = eax + eax * 2;
    MEM32(ecx + 0x40) = esi;
    MEM32(ecx + 0x3C) = esi;
    edx = edx + eax * 2;
    POP32(esp, edi);
    MEM32(ecx + 0x4C) = esi;
    MEM32(ecx + 0x48) = esi;
    MEM32(ecx + 0x50) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDB70
 * Original: 0x003EDB70 - 0x003EDB97 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDB70: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_003EDB80: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDB92; /* je: equal / zero */

loc_003EDB84: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EDB80; /* jl: less (signed <) */

loc_003EDB8D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_003EDB92: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EDBA0
 * Original: 0x003EDBA0 - 0x003EDBBA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDBA0: ;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDBB7; /* je: equal / zero */

loc_003EDBAA: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDBB7; /* je: equal / zero */

loc_003EDBB1: ;
    MEM32(eax + 0xC) = edx;
    MEM32(ecx + 4) = edx;

loc_003EDBB7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EDBC0
 * Original: 0x003EDBC0 - 0x003EDBF9 (57 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDBC0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_003EDBD0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDBF6; /* je: equal / zero */

loc_003EDBD4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EDBD0; /* jl: less (signed <) */

loc_003EDBDD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDBF6; /* je: equal / zero */

loc_003EDBE1: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDBF6; /* je: equal / zero */

loc_003EDBE8: ;
    MEM32(eax + 0xC) = 0;
    MEM32(edx + 4) = 0;

loc_003EDBF6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EDC10
 * Original: 0x003EDC10 - 0x003EDC56 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDC10: ;
    eax = MEM32(ecx + 0x10C);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    esi = ecx + eax * 4 + 0xB8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003EDC35; /* je: equal / zero */

loc_003EDC28: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDC35; /* je: equal / zero */

loc_003EDC2F: ;
    MEM32(eax + 0xC) = edx;
    MEM32(esi + 4) = edx;

loc_003EDC35: ;
    eax = MEM32(ecx + 0x10C);
    MEM32(ecx + 0x110) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    MEM32(ecx + 0x10C) = edx;
    eax = MEM32(esi + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EDC70
 * Original: 0x003EDC70 - 0x003EDC7B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDC70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003EDC80
 * Original: 0x003EDC80 - 0x003EDF95 (789 bytes, 244 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EDC80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), ebp (32-bit) */
    edi = 0x907D40;
    ecx = ecx + eax * 2;
    edx = edx + eax * 2;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x18) = edi;
    MEM32(0x907D48) = ebp;
    MEM32(0x907D44) = ebp;
    MEM32(0x907D40) = ebp;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003EDD70; /* jle: less or equal (signed <=) */

loc_003EDCD4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    goto loc_003EDCE0;

loc_003EDCDC: ;
    eax = MEM32(esp + 0x2C);

loc_003EDCE0: ;
    ebp = MEM32(esp + 0x34);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    edx = 2;
    if (CMP_GE(_fas, _fbs)) goto loc_003EDD1A; /* jge: greater or equal (signed >=) */

loc_003EDCEF: ;
    SET_LO16(eax, MEM16(ecx));
    ebp = MEM32(esp + 0x28);
    _fb = (uint32_t)(MEM16(ecx + ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(ecx + ebp));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EDD07; /* jne: not equal / not zero */

loc_003EDD03: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003EDD1C;

loc_003EDD07: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7F (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EDD1C; /* jg: greater (signed >) */

loc_003EDD0D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF81) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF81 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EDD1C; /* jl: less (signed <) */

loc_003EDD13: ;
    edx = 1;
    goto loc_003EDD1C;

loc_003EDD1A: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003EDD1C: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDD5F; /* je: equal / zero */

loc_003EDD25: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EDD32; /* jge: greater or equal (signed >=) */

loc_003EDD2A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x907DAC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x907DAC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EDD36; /* jl: less (signed <) */

loc_003EDD32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EDD70; /* jne: not equal / not zero */

loc_003EDD36: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003EDD3E; /* je: equal / zero */

loc_003EDD39: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003EDD43; /* je: equal / zero */

loc_003EDD3C: ;
    goto loc_003EDD5B;

loc_003EDD3E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDD5B; /* je: equal / zero */

loc_003EDD43: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edi;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 4) = ebp;
    MEM32(edi) = ebp;

loc_003EDD5B: ;
    MEM32(esp + 0x14) = edx;

loc_003EDD5F: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax + edx * 4) = MEM32(eax + edx * 4) + 1;
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x30) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EDCDC; /* jl: less (signed <) */

loc_003EDD70: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EDF81; /* jl: less (signed <) */

loc_003EDD88: ;
    eax = 0x907D48;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ecx;

loc_003EDD96: ;
    ebx = MEM32(eax + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebp = MEM32(eax + -4);
    eax = MEM32(eax);
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003EDE95; /* jl: less (signed <) */

loc_003EDDAA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EDE91; /* jg: greater (signed >) */

loc_003EDDB3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EDE91; /* jl: less (signed <) */

loc_003EDDBB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EDE91; /* jg: greater (signed >) */

loc_003EDDC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EDE91; /* jl: less (signed <) */

loc_003EDDCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EDE91; /* jg: greater (signed >) */

loc_003EDDD5: ;
    edx = ebp + ebx * 4;
    eax = eax + edx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x003EDDE6u); RECOMP_ABI_CALL(0x00015439u, sub_00015439); /* call 0x00015439 */

loc_003EDDE6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(esp + 0x2C);
    if (CMP_EQ(_fa, _fb)) goto loc_003EDDF8; /* je: equal / zero */

loc_003EDDEE: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;

loc_003EDDF8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EDE35; /* jle: less or equal (signed <=) */

loc_003EDDFC: ;
    /* nop */

loc_003EDE00: ;
    SET_LO8(ecx, MEM8(edi));
    SET_LO8(ebx, MEM8(eax));
    edx = MEM32(esi + 0x114);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(edx) = LO8(ecx);
    edx = MEM32(esi + 0x114);
    ecx = MEM32(esi + 0x120);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x114) = edx;
    MEM32(esi + 0x120) = ecx;
    if ((_fa != 0)) goto loc_003EDE00; /* jne: not equal / not zero */

loc_003EDE31: ;
    MEM32(esp + 0x2C) = eax;

loc_003EDE35: ;
    ebx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDF67; /* je: equal / zero */

loc_003EDE41: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003EDF5C; /* jle: less or equal (signed <=) */

loc_003EDE47: ;
    edx = ebx;
    /* nop */

loc_003EDE50: ;
    SET_LO16(eax, MEM16(edi));
    ecx = MEM32(esi + 0x114);
    MEM8(ecx) = LO8(eax);
    ecx = MEM32(esi + 0x114);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x114) = ecx;
    MEM8(ecx) = HI8(eax);
    eax = MEM32(esi + 0x114);
    ebp = MEM32(esi + 0x120);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x120) = ebp;
    if ((_fa != 0)) goto loc_003EDE50; /* jne: not equal / not zero */

loc_003EDE8C: ;
    goto loc_003EDF5C;

loc_003EDE91: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDEB1; /* je: equal / zero */

loc_003EDE95: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40);
    ecx = esi;
    PUSH32(esp, 0x003EDE9Fu); RECOMP_ABI_CALL(0x00015439u, sub_00015439); /* call 0x00015439 */

loc_003EDE9F: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x30);

loc_003EDEB1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDF01; /* je: equal / zero */

loc_003EDEB5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x80);
    ecx = esi;
    PUSH32(esp, 0x003EDEC2u); RECOMP_ABI_CALL(0x00015439u, sub_00015439); /* call 0x00015439 */

loc_003EDEC2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EDEFD; /* jle: less or equal (signed <=) */

loc_003EDEC6: ;
    SET_LO8(ecx, MEM8(edi));
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x114);
    MEM8(edx) = LO8(ecx);
    ecx = MEM32(esi + 0x114);
    ebx = MEM32(esi + 0x120);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x114) = ecx;
    MEM32(esi + 0x120) = ebx;
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_003EDEC6; /* jne: not equal / not zero */

loc_003EDEFD: ;
    eax = MEM32(esp + 0x30);

loc_003EDF01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EDF67; /* je: equal / zero */

loc_003EDF05: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0);
    ecx = esi;
    PUSH32(esp, 0x003EDF12u); RECOMP_ABI_CALL(0x00015439u, sub_00015439); /* call 0x00015439 */

loc_003EDF12: ;
    ebx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EDF5C; /* jle: less or equal (signed <=) */

loc_003EDF1A: ;
    edx = ebx;
    /* nop */

loc_003EDF20: ;
    SET_LO16(eax, MEM16(edi));
    ecx = MEM32(esi + 0x114);
    MEM8(ecx) = LO8(eax);
    ecx = MEM32(esi + 0x114);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x114) = ecx;
    MEM8(ecx) = HI8(eax);
    eax = MEM32(esi + 0x114);
    ebp = MEM32(esi + 0x120);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x120) = ebp;
    if ((_fa != 0)) goto loc_003EDF20; /* jne: not equal / not zero */

loc_003EDF5C: ;
    edx = MEM32(esp + 0x2C);
    eax = edx + ebx * 2;
    MEM32(esp + 0x2C) = eax;

loc_003EDF67: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ecx;
    if ((_fa != 0)) goto loc_003EDD96; /* jne: not equal / not zero */

loc_003EDF81: ;
    edx = MEM32(esp + 0x1C);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003EE060
 * Original: 0x003EE060 - 0x003EE0E3 (131 bytes, 52 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EE060: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(ebx + 0x120) = 0;
    ecx = MEM32(eax + 0x10);
    MEM32(ebx + 0x114) = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_003EE0C1; /* jle: less or equal (signed <=) */

loc_003EE09B: ;
    goto loc_003EE0A0;

    /* nop */

loc_003EE0A0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003EE0B7u); RECOMP_ABI_CALL(0x00035BC6u, sub_00035BC6); /* call 0x00035BC6 */

loc_003EE0B7: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EE0A0; /* jg: greater (signed >) */

loc_003EE0C1: ;
    SET_LO16(edx, MEM16(ebx + 0x120));
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM16(eax) = LO16(edx);
    SET_LO16(edx, MEM16(ecx));
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 0xC) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003EE110
 * Original: 0x003EE110 - 0x003EE418 (776 bytes, 235 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EE110: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x118);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx));
    PUSH32(esp, esi);
    esi = edx + 1;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ecx + 0x118) = esi;
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_003EE14E; /* jne: not equal / not zero */

loc_003EE12F: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = esi;
    MEM8(esp + 4) = LO8(eax);
    SET_LO8(eax, MEM8(esi));
    MEM8(esp + 5) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = esi;

loc_003EE14E: ;
    edx = ZX8(LO8(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003EE415; /* ja: above (unsigned >) */

loc_003EE15D: ;
    edx = ZX8(MEM8(edx + 0x3EE42C));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(edx * 4 + 0x3EE418); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003EE16Eu) goto loc_003EE16E;
    if (_jt == 0x003EE2C1u) goto loc_003EE2C1;
    if (_jt == 0x003EE325u) goto loc_003EE325;
    if (_jt == 0x003EE395u) goto loc_003EE395;
    if (_jt == 0x003EE412u) goto loc_003EE412;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003EE16E: ;
    edx = eax;
    edi = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ebp = eax;
    MEM32(esp + 0x10) = ebp;
    esi = 2;
    if (CMP_LE(_fas, _fbs)) goto loc_003EE1E3; /* jle: less or equal (signed <=) */

loc_003EE190: ;
    ebp = edx;

loc_003EE192: ;
    eax = MEM32(ecx + 0x11C);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x11C) = eax;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x11C) = eax;
    eax = MEM32(ecx + 0x114);
    MEM8(eax) = LO8(edx);
    eax = MEM32(ecx + 0x114);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = eax;
    MEM8(eax) = LO8(ebx);
    ebx = MEM32(ecx + 0x114);
    edx = MEM32(ecx + 0x120);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = ebx;
    MEM32(ecx + 0x120) = edx;
    if ((_fa != 0)) goto loc_003EE192; /* jne: not equal / not zero */

loc_003EE1DF: ;
    ebp = MEM32(esp + 0x10);

loc_003EE1E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EE255; /* jle: less or equal (signed <=) */

loc_003EE1E7: ;
    eax = MEM32(ecx + 0x11C);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x11C) = eax;
    MEM8(esp + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x11C) = eax;
    eax = MEM32(ecx + 0x118);
    MEM8(esp + 0x11) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    ebx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = eax;
    SET_LO16(eax, SX8(LO8(edx)));
    edx = MEM32(ecx + 0x114);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx) = LO8(eax);
    edx = MEM32(ecx + 0x114);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = edx;
    MEM8(edx) = HI8(eax);
    ebx = MEM32(ecx + 0x114);
    edx = MEM32(ecx + 0x120);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = ebx;
    MEM32(ecx + 0x120) = edx;
    if ((_fa != 0)) goto loc_003EE1E7; /* jne: not equal / not zero */

loc_003EE255: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EE412; /* jle: less or equal (signed <=) */

loc_003EE25D: ;
    edi = ebp;
    /* nop */

loc_003EE260: ;
    eax = MEM32(ecx + 0x118);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = eax;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = eax;
    eax = MEM32(ecx + 0x114);
    MEM8(eax) = LO8(edx);
    eax = MEM32(ecx + 0x114);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = eax;
    MEM8(eax) = LO8(ebx);
    ebp = MEM32(ecx + 0x114);
    ebx = MEM32(ecx + 0x120);
    edx = MEM32(ecx + 0x11C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = ebp;
    MEM32(ecx + 0x120) = ebx;
    MEM32(ecx + 0x11C) = edx;
    if ((_fa != 0)) goto loc_003EE260; /* jne: not equal / not zero */

loc_003EE2BB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003EE2C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EE412; /* jle: less or equal (signed <=) */

loc_003EE2C9: ;
    edi = eax;
    esi = 2;

loc_003EE2D0: ;
    eax = MEM32(ecx + 0x11C);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x11C) = eax;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x11C) = eax;
    eax = MEM32(ecx + 0x114);
    MEM8(eax) = LO8(edx);
    ebp = MEM32(ecx + 0x114);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = ebp;
    eax = ebp;
    MEM8(eax) = LO8(ebx);
    ebx = MEM32(ecx + 0x114);
    edx = MEM32(ecx + 0x120);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = ebx;
    MEM32(ecx + 0x120) = edx;
    if ((_fa != 0)) goto loc_003EE2D0; /* jne: not equal / not zero */

loc_003EE31F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003EE325: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EE412; /* jle: less or equal (signed <=) */

loc_003EE32D: ;
    edi = eax;
    esi = 2;

loc_003EE334: ;
    eax = MEM32(ecx + 0x118);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = eax;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = eax;
    eax = MEM32(ecx + 0x114);
    MEM8(eax) = LO8(edx);
    eax = MEM32(ecx + 0x114);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = eax;
    MEM8(eax) = LO8(ebx);
    ebp = MEM32(ecx + 0x114);
    ebx = MEM32(ecx + 0x120);
    edx = MEM32(ecx + 0x11C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = ebp;
    MEM32(ecx + 0x120) = ebx;
    MEM32(ecx + 0x11C) = edx;
    if ((_fa != 0)) goto loc_003EE334; /* jne: not equal / not zero */

loc_003EE38F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003EE395: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EE412; /* jle: less or equal (signed <=) */

loc_003EE39D: ;
    edi = eax;
    esi = 2;

loc_003EE3A4: ;
    eax = MEM32(ecx + 0x11C);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x11C) = eax;
    MEM8(esp + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x11C) = eax;
    eax = MEM32(ecx + 0x118);
    MEM8(esp + 0x11) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x118) = eax;
    SET_LO16(eax, SX8(LO8(edx)));
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x114);
    MEM8(edx) = LO8(eax);
    ebp = MEM32(ecx + 0x114);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = ebp;
    edx = ebp;
    MEM8(edx) = HI8(eax);
    ebx = MEM32(ecx + 0x114);
    edx = MEM32(ecx + 0x120);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x114) = ebx;
    MEM32(ecx + 0x120) = edx;
    if ((_fa != 0)) goto loc_003EE3A4; /* jne: not equal / not zero */

loc_003EE412: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003EE415: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EE5F0
 * Original: 0x003EE5F0 - 0x003EE655 (101 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE5F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x11C) = eax;
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 0x118) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(esi + 0x114) = edx;
    MEM32(esi + 0x120) = 0;
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 2), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EE643; /* jle: less or equal (signed <=) */

loc_003EE62A: ;
    /* nop */

loc_003EE630: ;
    ecx = esi;
    PUSH32(esp, 0x003EE637u); RECOMP_ABI_CALL(0x00028886u, sub_00028886); /* call 0x00028886 */

loc_003EE637: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 2);
    _fa = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x120), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EE630; /* jl: less (signed <) */

loc_003EE643: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 2);
    MEM32(ebx + 4) = edi;
    MEM32(ebx) = ecx;
    MEM32(edi + 0xC) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EE670
 * Original: 0x003EE670 - 0x003EE681 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE670: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EE690
 * Original: 0x003EE690 - 0x003EE6AD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE690: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE6AA; /* je: equal / zero */

loc_003EE6A7: ;
    MEM32(eax + 4) = ecx;

loc_003EE6AA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EE6C0
 * Original: 0x003EE6C0 - 0x003EE6DD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE6C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE6DA; /* je: equal / zero */

loc_003EE6D7: ;
    MEM32(eax + 8) = ecx;

loc_003EE6DA: ;
    esp += 8; return; /* ret 4 */

}
