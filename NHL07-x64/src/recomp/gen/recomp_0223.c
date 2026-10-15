/**
 * nhl_07_recomp - Recompiled code chunk 223
 * Functions: 250 (0x004D9564 - 0x004DBEBD)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004D9564
 * Original: 0x004D9564 - 0x004D9583 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9564(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9564: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D9570u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D9570: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D957D; /* je: equal / zero */

loc_004D9577: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D957Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D957Bu); } /* indirect call */
    }

loc_004D957D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9583
 * Original: 0x004D9583 - 0x004D95BD (58 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9583(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9583: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D9597u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D9597: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004CBC89(); return; /* tail jmp 0x004CBC89 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004CBC37(); return; /* tail jmp 0x004CBC37 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C1EC1(); return; /* tail jmp 0x004C1EC1 */

}

/**
 * sub_004D95BD
 * Original: 0x004D95BD - 0x004D95DE (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D95BD(void)
{

loc_004D95BD: ;
    PUSH32(esp, 0x004D95C2u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D95C2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D95C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D95C6u); } /* indirect call */
    }

loc_004D95C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D95D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D95D1u); } /* indirect call */
    }

loc_004D95D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D95DAu); RECOMP_ABI_CALL(0x004CBC48u, sub_004CBC48); /* call 0x004CBC48 */

loc_004D95DA: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D95DE
 * Original: 0x004D95DE - 0x004D95F7 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D95DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D95DE: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D95F2; /* je: equal / zero */

loc_004D95E7: ;
    ecx = MEM32(0x90E74C);
    PUSH32(esp, 0x004D95F2u); RECOMP_ABI_CALL(0x004D94FFu, sub_004D94FF); /* call 0x004D94FF */

loc_004D95F2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D95F7
 * Original: 0x004D95F7 - 0x004D961B (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D95F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D95F7: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9608; /* jne: not equal / not zero */

loc_004D9601: ;
    PUSH32(esp, 0x004D9606u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D9606: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D9608: ;
    ecx = MEM32(0x90E74C);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9617u); RECOMP_ABI_CALL(0x004D954Au, sub_004D954A); /* call 0x004D954A */

loc_004D9617: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D961B
 * Original: 0x004D961B - 0x004D9636 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D961B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D961B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9631; /* je: equal / zero */

loc_004D9624: ;
    eax = MEM32(0x90E74C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D9631u); RECOMP_ABI_CALL(0x004CBB34u, sub_004CBB34); /* call 0x004CBB34 */

loc_004D9631: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9636
 * Original: 0x004D9636 - 0x004D9651 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9636(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9636: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D964C; /* je: equal / zero */

loc_004D963F: ;
    eax = MEM32(0x90E74C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D964Cu); RECOMP_ABI_CALL(0x004CBB6Fu, sub_004CBB6F); /* call 0x004CBB6F */

loc_004D964C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9651
 * Original: 0x004D9651 - 0x004D966C (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9651(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9651: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9667; /* je: equal / zero */

loc_004D965A: ;
    eax = MEM32(0x90E74C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D9667u); RECOMP_ABI_CALL(0x004CBBACu, sub_004CBBAC); /* call 0x004CBBAC */

loc_004D9667: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D966C
 * Original: 0x004D966C - 0x004D9685 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D966C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D966C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9680; /* je: equal / zero */

loc_004D9675: ;
    ecx = MEM32(0x90E74C);
    PUSH32(esp, 0x004D9680u); RECOMP_ABI_CALL(0x004D9564u, sub_004D9564); /* call 0x004D9564 */

loc_004D9680: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9685
 * Original: 0x004D9685 - 0x004D96A0 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9685(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9685: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D969B; /* je: equal / zero */

loc_004D968E: ;
    eax = MEM32(0x90E74C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D969Bu); RECOMP_ABI_CALL(0x004CBC57u, sub_004CBC57); /* call 0x004CBC57 */

loc_004D969B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D96A0
 * Original: 0x004D96A0 - 0x004D96BB (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D96A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D96A0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D96B6; /* je: equal / zero */

loc_004D96A9: ;
    eax = MEM32(0x90E74C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D96B6u); RECOMP_ABI_CALL(0x004CBC89u, sub_004CBC89); /* call 0x004CBC89 */

loc_004D96B6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D96BB
 * Original: 0x004D96BB - 0x004D96DE (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D96BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D96BB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D96C9; /* jne: not equal / not zero */

loc_004D96C4: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D96C9: ;
    eax = MEM32(0x90E74C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D96D6u); RECOMP_ABI_CALL(0x004CBC37u, sub_004CBC37); /* call 0x004CBC37 */

loc_004D96D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D96DCu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D96DC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D96DE
 * Original: 0x004D96DE - 0x004D9701 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D96DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D96DE: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D96EC; /* jne: not equal / not zero */

loc_004D96E7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D96EC: ;
    eax = MEM32(0x90E74C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D96F9u); RECOMP_ABI_CALL(0x004C1EC1u, sub_004C1EC1); /* call 0x004C1EC1 */

loc_004D96F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D96FFu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D96FF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9701
 * Original: 0x004D9701 - 0x004D972B (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9701(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9701: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D971E; /* je: equal / zero */

loc_004D970A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9711u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9711: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E74C);
    PUSH32(esp, 0x004D971Eu); RECOMP_ABI_CALL(0x004D95BDu, sub_004D95BD); /* call 0x004D95BD */

loc_004D971E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    ecx = MEM32(ecx + 0x30);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_004D972B
 * Original: 0x004D972B - 0x004D9747 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D972B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D972B: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86BF88;
    if (CMP_EQ(_fa, _fb)) goto loc_004D973F; /* je: equal / zero */

loc_004D973A: ;
    PUSH32(esp, 0x004D973Fu); RECOMP_ABI_CALL(0x004D9564u, sub_004D9564); /* call 0x004D9564 */

loc_004D973F: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9752
 * Original: 0x004D9752 - 0x004D9778 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9752(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9752: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9760; /* jne: not equal / not zero */

loc_004D975B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D9760: ;
    eax = MEM32(0x90E74C);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004D9770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D976Du); } /* indirect call */
    }

loc_004D9770: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9776u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D9776: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9778
 * Original: 0x004D9778 - 0x004D9794 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9778(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9778: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D9780u); RECOMP_ABI_CALL(0x004D972Bu, sub_004D972B); /* call 0x004D972B */

loc_004D9780: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D978E; /* je: equal / zero */

loc_004D9787: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D978Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D978D: ;
    POP32(esp, ecx);

loc_004D978E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9794
 * Original: 0x004D9794 - 0x004D97A7 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9794(void)
{

loc_004D9794: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C000);
    MEM32(0x90E74C) = eax;
    PUSH32(esp, 0x004D97A6u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D97A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D97A7
 * Original: 0x004D97A7 - 0x004D97B4 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D97A7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D97A7: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86C068;
    esp += 4; return; /* ret */

}

/**
 * sub_004D97B4
 * Original: 0x004D97B4 - 0x004D97E9 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D97B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D97B4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D97BCu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D97BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x004D97C8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D97C8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D97DA; /* je: equal / zero */

loc_004D97CF: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D97D8u); RECOMP_ABI_CALL(0x004C6EC4u, sub_004C6EC4); /* call 0x004C6EC4 */

loc_004D97D8: ;
    goto loc_004D97DC;

loc_004D97DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D97DC: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D97E7u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D97E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9801
 * Original: 0x004D9801 - 0x004D9820 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9801(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9801: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D980Du); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D980D: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D981A; /* je: equal / zero */

loc_004D9814: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D981Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9818u); } /* indirect call */
    }

loc_004D981A: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9820
 * Original: 0x004D9820 - 0x004D983A (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9820: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D9834u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D9834: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D983A
 * Original: 0x004D983A - 0x004D9848 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D983A(void)
{

loc_004D983A: ;
    PUSH32(esp, 0x004D983Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D983F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D9846u); RECOMP_ABI_CALL(0x004DBDC4u, sub_004DBDC4); /* call 0x004DBDC4 */

loc_004D9846: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9848
 * Original: 0x004D9848 - 0x004D9864 (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9848(void)
{

loc_004D9848: ;
    PUSH32(esp, 0x004D984Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D984D: ;
    PUSH32(esp, 0x004D9852u); RECOMP_ABI_CALL(0x004DBE3Du, sub_004DBE3D); /* call 0x004DBE3D */

loc_004D9852: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9858u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D9858: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9864
 * Original: 0x004D9864 - 0x004D9885 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9864(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9864: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D986Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D986C: ;
    PUSH32(esp, 0x004D9871u); RECOMP_ABI_CALL(0x004DBE37u, sub_004DBE37); /* call 0x004DBE37 */

loc_004D9871: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D987Au); RECOMP_ABI_CALL(0x004C7162u, sub_004C7162); /* call 0x004C7162 */

loc_004D987A: ;
    PUSH32(esp, 0x004D987Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D987F: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DBE43(); return; /* tail jmp 0x004DBE43 */

}

/**
 * sub_004D9885
 * Original: 0x004D9885 - 0x004D989E (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9885(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9885: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9899; /* je: equal / zero */

loc_004D988E: ;
    ecx = MEM32(0x90E750);
    PUSH32(esp, 0x004D9899u); RECOMP_ABI_CALL(0x004D97B4u, sub_004D97B4); /* call 0x004D97B4 */

loc_004D9899: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D989E
 * Original: 0x004D989E - 0x004D98B9 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D989E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D989E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D98B4; /* je: equal / zero */

loc_004D98A7: ;
    eax = MEM32(0x90E750);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D98B4u); RECOMP_ABI_CALL(0x004C70BAu, sub_004C70BA); /* call 0x004C70BA */

loc_004D98B4: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D98B9
 * Original: 0x004D98B9 - 0x004D98D4 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D98B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D98B9: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D98CF; /* je: equal / zero */

loc_004D98C2: ;
    eax = MEM32(0x90E750);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D98CFu); RECOMP_ABI_CALL(0x004C70F2u, sub_004C70F2); /* call 0x004C70F2 */

loc_004D98CF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D98D4
 * Original: 0x004D98D4 - 0x004D98EF (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D98D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D98D4: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D98EA; /* je: equal / zero */

loc_004D98DD: ;
    eax = MEM32(0x90E750);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D98EAu); RECOMP_ABI_CALL(0x004C7128u, sub_004C7128); /* call 0x004C7128 */

loc_004D98EA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D98EF
 * Original: 0x004D98EF - 0x004D9908 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D98EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D98EF: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9903; /* je: equal / zero */

loc_004D98F8: ;
    ecx = MEM32(0x90E750);
    PUSH32(esp, 0x004D9903u); RECOMP_ABI_CALL(0x004D9801u, sub_004D9801); /* call 0x004D9801 */

loc_004D9903: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9908
 * Original: 0x004D9908 - 0x004D9929 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9908(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9908: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9916; /* jne: not equal / not zero */

loc_004D9911: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D9916: ;
    ecx = MEM32(0x90E750);
    PUSH32(esp, 0x004D9921u); RECOMP_ABI_CALL(0x004D983Au, sub_004D983A); /* call 0x004D983A */

loc_004D9921: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9927u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D9927: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9929
 * Original: 0x004D9929 - 0x004D994D (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9929(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9929: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D993A; /* jne: not equal / not zero */

loc_004D9933: ;
    PUSH32(esp, 0x004D9938u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D9938: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D993A: ;
    ecx = MEM32(0x90E750);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9949u); RECOMP_ABI_CALL(0x004D9848u, sub_004D9848); /* call 0x004D9848 */

loc_004D9949: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D994D
 * Original: 0x004D994D - 0x004D996A (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D994D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D994D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9961; /* je: equal / zero */

loc_004D9956: ;
    ecx = MEM32(0x90E750);
    PUSH32(esp, 0x004D9961u); RECOMP_ABI_CALL(0x004D9864u, sub_004D9864); /* call 0x004D9864 */

loc_004D9961: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_004D996A
 * Original: 0x004D996A - 0x004D9986 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D996A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D996A: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86C068;
    if (CMP_EQ(_fa, _fb)) goto loc_004D997E; /* je: equal / zero */

loc_004D9979: ;
    PUSH32(esp, 0x004D997Eu); RECOMP_ABI_CALL(0x004D9801u, sub_004D9801); /* call 0x004D9801 */

loc_004D997E: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9986
 * Original: 0x004D9986 - 0x004D99A3 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9986(void)
{

loc_004D9986: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D9991u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D998Eu); } /* indirect call */
    }

loc_004D9991: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9997u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D9997: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D99A3
 * Original: 0x004D99A3 - 0x004D99C0 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D99A3(void)
{

loc_004D99A3: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004D99AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D99ABu); } /* indirect call */
    }

loc_004D99AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D99B4u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D99B4: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D99C0
 * Original: 0x004D99C0 - 0x004D99E5 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D99C0(void)
{

loc_004D99C0: ;
    PUSH32(esp, 0x004D99C5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D99C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D99CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D99C9u); } /* indirect call */
    }

loc_004D99CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D99D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D99D4u); } /* indirect call */
    }

loc_004D99D7: ;
    PUSH32(esp, eax);
    ecx = 0x90E448;
    PUSH32(esp, 0x004D99E2u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004D99E2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D99E5
 * Original: 0x004D99E5 - 0x004D9A09 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D99E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D99E5: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D99F6; /* jne: not equal / not zero */

loc_004D99EF: ;
    PUSH32(esp, 0x004D99F4u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D99F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D99F6: ;
    ecx = MEM32(0x90E750);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9A05u); RECOMP_ABI_CALL(0x004D9986u, sub_004D9986); /* call 0x004D9986 */

loc_004D9A05: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9A09
 * Original: 0x004D9A09 - 0x004D9A2D (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9A09(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9A09: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9A1A; /* jne: not equal / not zero */

loc_004D9A13: ;
    PUSH32(esp, 0x004D9A18u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D9A18: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D9A1A: ;
    ecx = MEM32(0x90E750);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9A29u); RECOMP_ABI_CALL(0x004D99A3u, sub_004D99A3); /* call 0x004D99A3 */

loc_004D9A29: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9A2D
 * Original: 0x004D9A2D - 0x004D9A4F (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9A2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9A2D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9A4A; /* je: equal / zero */

loc_004D9A36: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9A3Du); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9A3D: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E750);
    PUSH32(esp, 0x004D9A4Au); RECOMP_ABI_CALL(0x004D99C0u, sub_004D99C0); /* call 0x004D99C0 */

loc_004D9A4A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9A4F
 * Original: 0x004D9A4F - 0x004D9A6B (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9A4F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9A4F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D9A57u); RECOMP_ABI_CALL(0x004D996Au, sub_004D996A); /* call 0x004D996A */

loc_004D9A57: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D9A65; /* je: equal / zero */

loc_004D9A5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D9A64u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D9A64: ;
    POP32(esp, ecx);

loc_004D9A65: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9A6B
 * Original: 0x004D9A6B - 0x004D9A7E (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9A6B(void)
{

loc_004D9A6B: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C108);
    MEM32(0x90E750) = eax;
    PUSH32(esp, 0x004D9A7Du); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D9A7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D9A7E
 * Original: 0x004D9A7E - 0x004D9A88 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9A7E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9A7E: ;
    eax = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004D9A88
 * Original: 0x004D9A88 - 0x004D9A89 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9A88(void)
{

loc_004D9A88: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D9A89
 * Original: 0x004D9A89 - 0x004D9B46 (189 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9A89(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9A89: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004D9AE0; /* je: equal / zero */

loc_004D9A98: ;
    PUSH32(esp, 0x004D9A9Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D9A9D: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004D9AA7u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D9AA7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9ABA; /* je: equal / zero */

loc_004D9AAE: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x004D9AB8u); RECOMP_ABI_CALL(0x004C4C0Fu, sub_004C4C0F); /* call 0x004C4C0F */

loc_004D9AB8: ;
    goto loc_004D9ABC;

loc_004D9ABA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D9ABC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86ABE8);
    esi = edi + 4;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    MEM32(edi + 0x10) = eax;
    PUSH32(esp, 0x004D9AD0u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D9AD0: ;
    ecx = MEM32(edi + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D9ADCu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D9ADC: ;
    eax = esi;
    goto loc_004D9B40;

loc_004D9AE0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi + 0x20;

loc_004D9AE6: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9AF5; /* je: equal / zero */

loc_004D9AEA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D9AE6; /* jb: below (unsigned <) */

loc_004D9AF3: ;
    goto loc_004D9B40;

loc_004D9AF5: ;
    PUSH32(esp, 0x004D9AFAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D9AFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004D9B04u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D9B04: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9B17; /* je: equal / zero */

loc_004D9B0B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004D9B15u); RECOMP_ABI_CALL(0x004C4C0Fu, sub_004C4C0F); /* call 0x004C4C0F */

loc_004D9B15: ;
    goto loc_004D9B19;

loc_004D9B17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D9B19: ;
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86ABE8);
    ebx = esi + 4;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x004D9B32u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D9B32: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D9B3Eu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D9B3E: ;
    eax = ebx;

loc_004D9B40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9B46
 * Original: 0x004D9B46 - 0x004D9B94 (78 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9B46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9B46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 4;

loc_004D9B50: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004D9B5Au); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004D9B5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004D9B6B; /* je: equal / zero */

loc_004D9B60: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D9B50; /* jb: below (unsigned <) */

loc_004D9B69: ;
    goto loc_004D9B8E;

loc_004D9B6B: ;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D9B79u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D9B79: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9B86; /* je: equal / zero */

loc_004D9B80: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D9B86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9B84u); } /* indirect call */
    }

loc_004D9B86: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 4) = 0;

loc_004D9B8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9B94
 * Original: 0x004D9B94 - 0x004D9BA7 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9B94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9B94: ;
    PUSH32(esp, 0x004D9B99u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D9B99: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004D9BA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9B9Du); } /* indirect call */
    }

loc_004D9BA0: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_004D9BA7
 * Original: 0x004D9BA7 - 0x004D9BBA (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9BA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9BA7: ;
    PUSH32(esp, 0x004D9BACu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D9BAC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004D9BB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9BB0u); } /* indirect call */
    }

loc_004D9BB3: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004D9BBA
 * Original: 0x004D9BBA - 0x004D9BDC (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9BBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9BBA: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D9BCEu); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D9BCE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D9BDC
 * Original: 0x004D9BDC - 0x004D9C13 (55 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9BDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9BDC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 4;

loc_004D9BE9: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004D9BF3u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004D9BF3: ;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004D9C04; /* je: equal / zero */

loc_004D9BFA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D9BE9; /* jb: below (unsigned <) */

loc_004D9C02: ;
    goto loc_004D9C0A;

loc_004D9C04: ;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebp = MEM32(edi + esi);

loc_004D9C0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9C13
 * Original: 0x004D9C13 - 0x004D9CF1 (222 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D9C13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9C13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C21u); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D9C21: ;
    POP32(esp, ecx);
    ecx = ebp + -4;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C2Cu); RECOMP_ABI_CALL(0x00504C30u, sub_00504C30); /* call 0x00504C30 */

loc_004D9C2C: ;
    PUSH32(esp, 0x86C184);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C39u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D9C39: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C45u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D9C45: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C4Du); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D9C4D: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D9C57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9C54u); } /* indirect call */
    }

loc_004D9C57: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C5Du); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D9C5D: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C68u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D9C68: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86C174);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C78u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D9C78: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C84u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D9C84: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C8Cu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D9C8C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D9C93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9C90u); } /* indirect call */
    }

loc_004D9C93: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9C99u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D9C99: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9CA4u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D9CA4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86C168);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9CB4u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D9CB4: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9CC0u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D9CC0: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9CC8u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D9CC8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D9CCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9CCCu); } /* indirect call */
    }

loc_004D9CCF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9CD5u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D9CD5: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9CE0u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D9CE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9CEBu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D9CEB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D9CF1
 * Original: 0x004D9CF1 - 0x004D9D1B (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9CF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9CF1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9CFF; /* jne: not equal / not zero */

loc_004D9CFA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D9CFF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9D06u); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D9D06: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E754);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9D13u); RECOMP_ABI_CALL(0x004D9A89u, sub_004D9A89); /* call 0x004D9A89 */

loc_004D9D13: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9D19u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D9D19: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9D1B
 * Original: 0x004D9D1B - 0x004D9D3D (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9D1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9D1B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9D38; /* je: equal / zero */

loc_004D9D24: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9D2Bu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9D2B: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E754);
    PUSH32(esp, 0x004D9D38u); RECOMP_ABI_CALL(0x004D9B46u, sub_004D9B46); /* call 0x004D9B46 */

loc_004D9D38: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9D3D
 * Original: 0x004D9D3D - 0x004D9D67 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9D3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9D3D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9D4B; /* jne: not equal / not zero */

loc_004D9D46: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D9D4B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9D52u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9D52: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E754);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9D5Fu); RECOMP_ABI_CALL(0x004D9B94u, sub_004D9B94); /* call 0x004D9B94 */

loc_004D9D5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9D65u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D9D65: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9D67
 * Original: 0x004D9D67 - 0x004D9D9A (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9D67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9D67: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9D75; /* jne: not equal / not zero */

loc_004D9D70: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D9D75: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D9D7Cu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D9D7C: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9D85u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9D85: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E754);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9D92u); RECOMP_ABI_CALL(0x004D9BA7u, sub_004D9BA7); /* call 0x004D9BA7 */

loc_004D9D92: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9D98u); RECOMP_ABI_CALL(0x004D9C13u, sub_004D9C13); /* call 0x004D9C13 */

loc_004D9D98: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9D9A
 * Original: 0x004D9D9A - 0x004D9DB9 (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9D9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9D9A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9DB0; /* je: equal / zero */

loc_004D9DA3: ;
    eax = MEM32(0x90E754);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x004D9DB0u); RECOMP_ABI_CALL(0x004C4CBBu, sub_004C4CBB); /* call 0x004C4CBB */

loc_004D9DB0: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9DB9
 * Original: 0x004D9DB9 - 0x004D9DD8 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9DB9(void)
{

loc_004D9DB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4D9A7E);
    esi = ecx;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(esi) = 0x86C18C;
    PUSH32(esp, 0x004D9DD4u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004D9DD4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9DD8
 * Original: 0x004D9DD8 - 0x004D9E17 (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9DD8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9DD8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 2);
    MEM32(esi) = 0x86C18C;
    edi = esi + 0x10;
    POP32(esp, ebx);

loc_004D9DE9: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9DF5; /* je: equal / zero */

loc_004D9DEF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D9DF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9DF3u); } /* indirect call */
    }

loc_004D9DF5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004D9DE9; /* jne: not equal / not zero */

loc_004D9DFB: ;
    PUSH32(esp, 0x4D9A88);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9E0Du); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004D9E0D: ;
    POP32(esp, edi);
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9E17
 * Original: 0x004D9E17 - 0x004D9E3A (35 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9E17(void)
{

loc_004D9E17: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004D9E20u); RECOMP_ABI_CALL(0x004D9BDCu, sub_004D9BDC); /* call 0x004D9BDC */

loc_004D9E20: ;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D9E28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9E25u); } /* indirect call */
    }

loc_004D9E28: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9E2Eu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D9E2E: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D9E3A
 * Original: 0x004D9E3A - 0x004D9E51 (23 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9E3A(void)
{

loc_004D9E3A: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D9E43u); RECOMP_ABI_CALL(0x004D9BDCu, sub_004D9BDC); /* call 0x004D9BDC */

loc_004D9E43: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, 0x004D9E4Eu); RECOMP_ABI_CALL(0x004C4C94u, sub_004C4C94); /* call 0x004C4C94 */

loc_004D9E4E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D9E51
 * Original: 0x004D9E51 - 0x004D9E93 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9E51(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9E51: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9E70; /* jne: not equal / not zero */

loc_004D9E5B: ;
    PUSH32(esp, 0x004D9E60u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D9E60: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004D9E67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9E64u); } /* indirect call */
    }

loc_004D9E67: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004D9E6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9E6Bu); } /* indirect call */
    }

loc_004D9E6E: ;
    esi = eax;

loc_004D9E70: ;
    PUSH32(esp, 0x004D9E75u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D9E75: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D9E7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9E79u); } /* indirect call */
    }

loc_004D9E7C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D9E84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9E81u); } /* indirect call */
    }

loc_004D9E84: ;
    PUSH32(esp, eax);
    ecx = 0x90E44C;
    PUSH32(esp, 0x004D9E8Fu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004D9E8F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9E93
 * Original: 0x004D9E93 - 0x004D9EC1 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9E93(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9E93: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9EA4; /* jne: not equal / not zero */

loc_004D9E9D: ;
    PUSH32(esp, 0x004D9EA2u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D9EA2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D9EA4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9EABu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9EAB: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E754);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9EBDu); RECOMP_ABI_CALL(0x004D9E17u, sub_004D9E17); /* call 0x004D9E17 */

loc_004D9EBD: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9EC1
 * Original: 0x004D9EC1 - 0x004D9EEC (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9EC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9EC1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9EE7; /* je: equal / zero */

loc_004D9ECA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D9ED1u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9ED1: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9EDAu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9EDA: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E754);
    PUSH32(esp, 0x004D9EE7u); RECOMP_ABI_CALL(0x004D9E3Au, sub_004D9E3A); /* call 0x004D9E3A */

loc_004D9EE7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9EEC
 * Original: 0x004D9EEC - 0x004D9F0E (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9EEC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9EEC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9F09; /* je: equal / zero */

loc_004D9EF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9EFCu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9EFC: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E754);
    PUSH32(esp, 0x004D9F09u); RECOMP_ABI_CALL(0x004D9E51u, sub_004D9E51); /* call 0x004D9E51 */

loc_004D9F09: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9F0E
 * Original: 0x004D9F0E - 0x004D9F2A (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9F0E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9F0E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D9F16u); RECOMP_ABI_CALL(0x004D9DD8u, sub_004D9DD8); /* call 0x004D9DD8 */

loc_004D9F16: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D9F24; /* je: equal / zero */

loc_004D9F1D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D9F23u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D9F23: ;
    POP32(esp, ecx);

loc_004D9F24: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9F2A
 * Original: 0x004D9F2A - 0x004D9F3D (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9F2A(void)
{

loc_004D9F2A: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C1E0);
    MEM32(0x90E754) = eax;
    PUSH32(esp, 0x004D9F3Cu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D9F3C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D9F3D
 * Original: 0x004D9F3D - 0x004D9F64 (39 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9F3D(void)
{

loc_004D9F3D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004D9F4Bu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D9F4B: ;
    PUSH32(esp, edi);
    ecx = esi + 4;
    PUSH32(esp, 0x004D9F54u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D9F54: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, 0x004D9F5Du); RECOMP_ABI_CALL(0x004DB780u, sub_004DB780); /* call 0x004DB780 */

loc_004D9F5D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9F64
 * Original: 0x004D9F64 - 0x004D9F71 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9F64(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9F64: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86C228;
    esp += 4; return; /* ret */

}

/**
 * sub_004D9F71
 * Original: 0x004D9F71 - 0x004D9FA1 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9F71(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9F71: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D9F79u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D9F79: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x004D9F88u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D9F88: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9F9A; /* je: equal / zero */

loc_004D9F8F: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D9F98u); RECOMP_ABI_CALL(0x004C9C96u, sub_004C9C96); /* call 0x004C9C96 */

loc_004D9F98: ;
    goto loc_004D9F9C;

loc_004D9F9A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D9F9C: ;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9FA1
 * Original: 0x004D9FA1 - 0x004D9FB7 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9FA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9FA1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9FB1; /* je: equal / zero */

loc_004D9FAB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D9FB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9FAFu); } /* indirect call */
    }

loc_004D9FB1: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9FBF
 * Original: 0x004D9FBF - 0x004D9FCC (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9FBF(void)
{

loc_004D9FBF: ;
    ecx = MEM32(ecx + 4);
    eax = ecx + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9FCBu); RECOMP_ABI_CALL(0x004C1635u, sub_004C1635); /* call 0x004C1635 */

loc_004D9FCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D9FCC
 * Original: 0x004D9FCC - 0x004DA00C (64 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D9FCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9FCC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9FDEu); RECOMP_ABI_CALL(0x004C165Du, sub_004C165D); /* call 0x004C165D */

loc_004D9FDE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9FE9; /* jne: not equal / not zero */

loc_004D9FE2: ;
    eax = 0x7B891F;
    goto loc_004DA007;

loc_004D9FE9: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ecx + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA004u); RECOMP_ABI_CALL(0x004C1647u, sub_004C1647); /* call 0x004C1647 */

loc_004DA004: ;
    eax = MEM32(ebp + -4);

loc_004DA007: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA00C
 * Original: 0x004DA00C - 0x004DA032 (38 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DA00C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA00C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    eax = ecx + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA02Bu); RECOMP_ABI_CALL(0x004C1647u, sub_004C1647); /* call 0x004C1647 */

loc_004DA02B: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA032
 * Original: 0x004DA032 - 0x004DA0C8 (150 bytes, 61 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DA032(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA032: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    edx = ebp + -40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = eax;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = ecx + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA065u); RECOMP_ABI_CALL(0x004C1647u, sub_004C1647); /* call 0x004C1647 */

loc_004DA065: ;
    PUSH32(esp, MEM32(ebp + -44));
    eax = ebp + -36;
    PUSH32(esp, 0x86C22C);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA078u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004DA078: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA080u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004DA080: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004DA087u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DA084u); } /* indirect call */
    }

loc_004DA087: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004DA08Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DA08Bu); } /* indirect call */
    }

loc_004DA08E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    edi = esi + 8;
    PUSH32(esp, edi);
    esi = 0x7B891F;
    PUSH32(esp, esi);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004DA0A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DA0A5u); } /* indirect call */
    }

loc_004DA0A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA0AFu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004DA0AF: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_004DA0BA; /* jne: not equal / not zero */

loc_004DA0B7: ;
    eax = MEM32(ebp + -40);

loc_004DA0BA: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA0C4u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004DA0C4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA0C8
 * Original: 0x004DA0C8 - 0x004DA0EE (38 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DA0C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA0C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    eax = ecx + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA0E7u); RECOMP_ABI_CALL(0x004C1647u, sub_004C1647); /* call 0x004C1647 */

loc_004DA0E7: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA0EE
 * Original: 0x004DA0EE - 0x004DA155 (103 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DA0EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA0EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = ecx + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA104u); RECOMP_ABI_CALL(0x004C1635u, sub_004C1635); /* call 0x004C1635 */

loc_004DA104: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004DA145; /* jbe: below or equal (unsigned <=) */

loc_004DA115: ;
    ecx = MEM32(esi + 4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ecx + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA12Eu); RECOMP_ABI_CALL(0x004C1647u, sub_004C1647); /* call 0x004C1647 */

loc_004DA12E: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA139u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004DA139: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004DA150; /* je: equal / zero */

loc_004DA13F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DA115; /* jb: below (unsigned <) */

loc_004DA145: ;
    eax = 0x7B891F;

loc_004DA14A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_004DA150: ;
    eax = MEM32(ebp + -8);
    goto loc_004DA14A;

}

/**
 * sub_004DA155
 * Original: 0x004DA155 - 0x004DA16E (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA155(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA155: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA169; /* je: equal / zero */

loc_004DA15E: ;
    ecx = MEM32(0x90E758);
    PUSH32(esp, 0x004DA169u); RECOMP_ABI_CALL(0x004D9F71u, sub_004D9F71); /* call 0x004D9F71 */

loc_004DA169: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA16E
 * Original: 0x004DA16E - 0x004DA187 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA16E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA16E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA182; /* je: equal / zero */

loc_004DA177: ;
    ecx = MEM32(0x90E758);
    PUSH32(esp, 0x004DA182u); RECOMP_ABI_CALL(0x004D9FA1u, sub_004D9FA1); /* call 0x004D9FA1 */

loc_004DA182: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA187
 * Original: 0x004DA187 - 0x004DA1AB (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA187(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA187: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA1A6; /* je: equal / zero */

loc_004DA190: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA197u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA197: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E758);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DA1A6u); RECOMP_ABI_CALL(0x004C161Du, sub_004C161D); /* call 0x004C161D */

loc_004DA1A6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA1AB
 * Original: 0x004DA1AB - 0x004DA1CC (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA1AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA1AB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA1B9; /* jne: not equal / not zero */

loc_004DA1B4: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DA1B9: ;
    ecx = MEM32(0x90E758);
    PUSH32(esp, 0x004DA1C4u); RECOMP_ABI_CALL(0x004D9FBFu, sub_004D9FBF); /* call 0x004D9FBF */

loc_004DA1C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA1CAu); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004DA1CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA1CC
 * Original: 0x004DA1CC - 0x004DA1F6 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA1CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA1CC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA1DA; /* jne: not equal / not zero */

loc_004DA1D5: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DA1DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA1E1u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DA1E1: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E758);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA1EEu); RECOMP_ABI_CALL(0x004D9FCCu, sub_004D9FCC); /* call 0x004D9FCC */

loc_004DA1EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA1F4u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA1F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA1F6
 * Original: 0x004DA1F6 - 0x004DA220 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA1F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA1F6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA204; /* jne: not equal / not zero */

loc_004DA1FF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DA204: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA20Bu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DA20B: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E758);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA218u); RECOMP_ABI_CALL(0x004DA00Cu, sub_004DA00C); /* call 0x004DA00C */

loc_004DA218: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA21Eu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DA21E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA220
 * Original: 0x004DA220 - 0x004DA24A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA220: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA22E; /* jne: not equal / not zero */

loc_004DA229: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DA22E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA235u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DA235: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E758);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA242u); RECOMP_ABI_CALL(0x004DA032u, sub_004DA032); /* call 0x004DA032 */

loc_004DA242: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA248u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA248: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA24A
 * Original: 0x004DA24A - 0x004DA274 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA24A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA24A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA258; /* jne: not equal / not zero */

loc_004DA253: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DA258: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA25Fu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DA25F: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E758);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA26Cu); RECOMP_ABI_CALL(0x004DA0C8u, sub_004DA0C8); /* call 0x004DA0C8 */

loc_004DA26C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA272u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA272: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA274
 * Original: 0x004DA274 - 0x004DA29E (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA274(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA274: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA282; /* jne: not equal / not zero */

loc_004DA27D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DA282: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA289u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA289: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E758);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA296u); RECOMP_ABI_CALL(0x004DA0EEu, sub_004DA0EE); /* call 0x004DA0EE */

loc_004DA296: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA29Cu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA29C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA29E
 * Original: 0x004DA29E - 0x004DA31E (128 bytes, 42 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DA29E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA29E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA2ACu); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004DA2AC: ;
    ecx = ebp + -12;
    esi = eax;
    MEM32(esp) = 0x86C25C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA2BDu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA2BD: ;
    PUSH32(esp, 0x86C24C);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA2CAu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA2CA: ;
    PUSH32(esp, 0x86C23C);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA2D7u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA2D7: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA2E4u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA2E4: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA2F1u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA2F1: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA2FEu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA2FE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA309u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DA309: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA311u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DA311: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA319u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DA319: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004DA31E
 * Original: 0x004DA31E - 0x004DA330 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA31E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA31E: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    MEM32(ecx) = 0x86C228;
    if (CMP_EQ(_fa, _fb)) goto loc_004DA32F; /* je: equal / zero */

loc_004DA32A: ;
    g_seh_ebp = ebp; sub_004D9FA1(); return; /* tail jmp 0x004D9FA1 */

loc_004DA32F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DA349
 * Original: 0x004DA349 - 0x004DA365 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA349(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA349: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DA351u); RECOMP_ABI_CALL(0x004DA31Eu, sub_004DA31E); /* call 0x004DA31E */

loc_004DA351: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DA35F; /* je: equal / zero */

loc_004DA358: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DA35Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DA35E: ;
    POP32(esp, ecx);

loc_004DA35F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA365
 * Original: 0x004DA365 - 0x004DA455 (240 bytes, 85 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DA365(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA365: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0xA);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA379u); RECOMP_ABI_CALL(0x004D9F3Du, sub_004D9F3D); /* call 0x004D9F3D */

loc_004DA379: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA384u); RECOMP_ABI_CALL(0x004C17BCu, sub_004C17BC); /* call 0x004C17BC */

loc_004DA384: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004DA41E;

loc_004DA38B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004DA429; /* jae: above or equal (unsigned >=) */

loc_004DA394: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA3A1u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004DA3A1: ;
    ecx = MEM32(esi + 4);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA3BCu); RECOMP_ABI_CALL(0x004C17E0u, sub_004C17E0); /* call 0x004C17E0 */

loc_004DA3BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA3EA; /* je: equal / zero */

loc_004DA3C0: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA3CDu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004DA3CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004DA412; /* jae: above or equal (unsigned >=) */

loc_004DA3D2: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -12) = eax;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA3E8u); RECOMP_ABI_CALL(0x004DB7A2u, sub_004DB7A2); /* call 0x004DB7A2 */

loc_004DA3E8: ;
    goto loc_004DA412;

loc_004DA3EA: ;
    PUSH32(esp, MEM32(0x8654F8));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA3F8u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004DA3F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004DA412; /* jne: not equal / not zero */

loc_004DA3FE: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -20;
    MEM32(ebp + -12) = 0x86C264;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA412u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004DA412: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA41Eu); RECOMP_ABI_CALL(0x004C17BCu, sub_004C17BC); /* call 0x004C17BC */

loc_004DA41E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004DA38B; /* jne: not equal / not zero */

loc_004DA429: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA43Bu); RECOMP_ABI_CALL(0x004DB7A2u, sub_004DB7A2); /* call 0x004DB7A2 */

loc_004DA43B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -16);
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DA455
 * Original: 0x004DA455 - 0x004DA484 (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA455(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA455: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA463; /* jne: not equal / not zero */

loc_004DA45E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DA463: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA46Au); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA46A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x90E758);
    PUSH32(esp, 0x004DA47Bu); RECOMP_ABI_CALL(0x004DA365u, sub_004DA365); /* call 0x004DA365 */

loc_004DA47B: ;
    PUSH32(esp, 0x004DA480u); RECOMP_ABI_CALL(0x004DA29Eu, sub_004DA29E); /* call 0x004DA29E */

loc_004DA480: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004DA484
 * Original: 0x004DA484 - 0x004DA497 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA484(void)
{

loc_004DA484: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C328);
    MEM32(0x90E758) = eax;
    PUSH32(esp, 0x004DA496u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004DA496: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DA497
 * Original: 0x004DA497 - 0x004DA4A4 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA497(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA497: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86C380;
    esp += 4; return; /* ret */

}

/**
 * sub_004DA4A4
 * Original: 0x004DA4A4 - 0x004DA4D1 (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA4A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA4A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DA4ACu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DA4AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004DA4B8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DA4B8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA4CA; /* je: equal / zero */

loc_004DA4BF: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004DA4C8u); RECOMP_ABI_CALL(0x004C6C21u, sub_004C6C21); /* call 0x004C6C21 */

loc_004DA4C8: ;
    goto loc_004DA4CC;

loc_004DA4CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DA4CC: ;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA4D1
 * Original: 0x004DA4D1 - 0x004DA4E7 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA4D1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA4D1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA4E1; /* je: equal / zero */

loc_004DA4DB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DA4E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DA4DFu); } /* indirect call */
    }

loc_004DA4E1: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA4E7
 * Original: 0x004DA4E7 - 0x004DA507 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DA4E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA4E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA500u); RECOMP_ABI_CALL(0x004C136Bu, sub_004C136B); /* call 0x004C136B */

loc_004DA500: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA507
 * Original: 0x004DA507 - 0x004DA52A (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DA507(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_004DA507: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = 0x7B891F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA523u); RECOMP_ABI_CALL(0x004C136Bu, sub_004C136B); /* call 0x004C136B */

loc_004DA523: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA52A
 * Original: 0x004DA52A - 0x004DA543 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA52A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA52A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA53E; /* je: equal / zero */

loc_004DA533: ;
    ecx = MEM32(0x90E75C);
    PUSH32(esp, 0x004DA53Eu); RECOMP_ABI_CALL(0x004DA4A4u, sub_004DA4A4); /* call 0x004DA4A4 */

loc_004DA53E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA543
 * Original: 0x004DA543 - 0x004DA55C (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA543(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA543: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA557; /* je: equal / zero */

loc_004DA54C: ;
    ecx = MEM32(0x90E75C);
    PUSH32(esp, 0x004DA557u); RECOMP_ABI_CALL(0x004DA4D1u, sub_004DA4D1); /* call 0x004DA4D1 */

loc_004DA557: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA55C
 * Original: 0x004DA55C - 0x004DA586 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA55C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA55C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA56A; /* jne: not equal / not zero */

loc_004DA565: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DA56A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA571u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA571: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E75C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA57Eu); RECOMP_ABI_CALL(0x004DA4E7u, sub_004DA4E7); /* call 0x004DA4E7 */

loc_004DA57E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA584u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004DA584: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA586
 * Original: 0x004DA586 - 0x004DA5B0 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA586(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA586: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA594; /* jne: not equal / not zero */

loc_004DA58F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DA594: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA59Bu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA59B: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E75C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA5A8u); RECOMP_ABI_CALL(0x004DA507u, sub_004DA507); /* call 0x004DA507 */

loc_004DA5A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA5AEu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA5AE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA5B0
 * Original: 0x004DA5B0 - 0x004DA5C2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA5B0: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    MEM32(ecx) = 0x86C380;
    if (CMP_EQ(_fa, _fb)) goto loc_004DA5C1; /* je: equal / zero */

loc_004DA5BC: ;
    g_seh_ebp = ebp; sub_004DA4D1(); return; /* tail jmp 0x004DA4D1 */

loc_004DA5C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DA5C2
 * Original: 0x004DA5C2 - 0x004DA5D5 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA5C2(void)
{

loc_004DA5C2: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C3D8);
    MEM32(0x90E75C) = eax;
    PUSH32(esp, 0x004DA5D4u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004DA5D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DA5D5
 * Original: 0x004DA5D5 - 0x004DA5F1 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA5D5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA5D5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DA5DDu); RECOMP_ABI_CALL(0x004DA5B0u, sub_004DA5B0); /* call 0x004DA5B0 */

loc_004DA5DD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DA5EB; /* je: equal / zero */

loc_004DA5E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DA5EAu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DA5EA: ;
    POP32(esp, ecx);

loc_004DA5EB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA5F1
 * Original: 0x004DA5F1 - 0x004DA5FE (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA5F1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA5F1: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86C400;
    esp += 4; return; /* ret */

}

/**
 * sub_004DA5FE
 * Original: 0x004DA5FE - 0x004DA631 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA5FE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA5FE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DA606u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DA606: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004DA612u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DA612: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA622; /* je: equal / zero */

loc_004DA619: ;
    ecx = eax;
    PUSH32(esp, 0x004DA620u); RECOMP_ABI_CALL(0x004C5E1Bu, sub_004C5E1B); /* call 0x004C5E1B */

loc_004DA620: ;
    goto loc_004DA624;

loc_004DA622: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DA624: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004DA62Fu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004DA62F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA631
 * Original: 0x004DA631 - 0x004DA650 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA631(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA631: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DA63Du); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004DA63D: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA64A; /* je: equal / zero */

loc_004DA644: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DA64Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DA648u); } /* indirect call */
    }

loc_004DA64A: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA650
 * Original: 0x004DA650 - 0x004DA68A (58 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA650: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004DA664u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004DA664: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C5EF7(); return; /* tail jmp 0x004C5EF7 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C5F5C(); return; /* tail jmp 0x004C5F5C */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C10B3(); return; /* tail jmp 0x004C10B3 */

}

/**
 * sub_004DA68A
 * Original: 0x004DA68A - 0x004DA6A4 (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA68A(void)
{

loc_004DA68A: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004DA692u); RECOMP_ABI_CALL(0x004C10A0u, sub_004C10A0); /* call 0x004C10A0 */

loc_004DA692: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA698u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA698: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA6A4
 * Original: 0x004DA6A4 - 0x004DA6BE (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA6A4(void)
{

loc_004DA6A4: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004DA6ACu); RECOMP_ABI_CALL(0x004C10A7u, sub_004C10A7); /* call 0x004C10A7 */

loc_004DA6AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA6B2u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA6B2: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA6BE
 * Original: 0x004DA6BE - 0x004DA6D8 (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA6BE(void)
{

loc_004DA6BE: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004DA6C6u); RECOMP_ABI_CALL(0x004C10AFu, sub_004C10AF); /* call 0x004C10AF */

loc_004DA6C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA6CCu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA6CC: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA6D8
 * Original: 0x004DA6D8 - 0x004DA6F1 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA6D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA6D8: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA6EC; /* je: equal / zero */

loc_004DA6E1: ;
    ecx = MEM32(0x90E760);
    PUSH32(esp, 0x004DA6ECu); RECOMP_ABI_CALL(0x004DA5FEu, sub_004DA5FE); /* call 0x004DA5FE */

loc_004DA6EC: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA6F1
 * Original: 0x004DA6F1 - 0x004DA70A (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA6F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA6F1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA705; /* je: equal / zero */

loc_004DA6FA: ;
    ecx = MEM32(0x90E760);
    PUSH32(esp, 0x004DA705u); RECOMP_ABI_CALL(0x004DA631u, sub_004DA631); /* call 0x004DA631 */

loc_004DA705: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA70A
 * Original: 0x004DA70A - 0x004DA73B (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA70A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA70A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA736; /* je: equal / zero */

loc_004DA713: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DA71Bu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA71B: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA724u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA724: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E760);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DA735u); RECOMP_ABI_CALL(0x004C5EB1u, sub_004C5EB1); /* call 0x004C5EB1 */

loc_004DA735: ;
    POP32(esp, esi);

loc_004DA736: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA73B
 * Original: 0x004DA73B - 0x004DA75F (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA73B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA73B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA75A; /* je: equal / zero */

loc_004DA744: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA74Bu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA74B: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E760);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DA75Au); RECOMP_ABI_CALL(0x004C5EF7u, sub_004C5EF7); /* call 0x004C5EF7 */

loc_004DA75A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA75F
 * Original: 0x004DA75F - 0x004DA79D (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA75F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA75F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA798; /* je: equal / zero */

loc_004DA768: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x004DA771u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA771: ;
    esi = eax;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DA77Au); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA77A: ;
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA783u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA783: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E760);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DA796u); RECOMP_ABI_CALL(0x004C5F5Cu, sub_004C5F5C); /* call 0x004C5F5C */

loc_004DA796: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004DA798: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA79D
 * Original: 0x004DA79D - 0x004DA7CE (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA79D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DA79D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DA7C9; /* je: equal / zero */

loc_004DA7A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DA7AEu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA7AE: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DA7B7u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DA7B7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E760);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DA7C8u); RECOMP_ABI_CALL(0x004C10B3u, sub_004C10B3); /* call 0x004C10B3 */

loc_004DA7C8: ;
    POP32(esp, esi);

loc_004DA7C9: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DA7CE
 * Original: 0x004DA7CE - 0x004DA7F2 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA7CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA7CE: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA7DF; /* jne: not equal / not zero */

loc_004DA7D8: ;
    PUSH32(esp, 0x004DA7DDu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DA7DD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DA7DF: ;
    ecx = MEM32(0x90E760);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA7EEu); RECOMP_ABI_CALL(0x004DA68Au, sub_004DA68A); /* call 0x004DA68A */

loc_004DA7EE: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA7F2
 * Original: 0x004DA7F2 - 0x004DA816 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA7F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA7F2: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA803; /* jne: not equal / not zero */

loc_004DA7FC: ;
    PUSH32(esp, 0x004DA801u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DA801: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DA803: ;
    ecx = MEM32(0x90E760);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA812u); RECOMP_ABI_CALL(0x004DA6A4u, sub_004DA6A4); /* call 0x004DA6A4 */

loc_004DA812: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA816
 * Original: 0x004DA816 - 0x004DA83A (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA816(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA816: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DA827; /* jne: not equal / not zero */

loc_004DA820: ;
    PUSH32(esp, 0x004DA825u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DA825: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DA827: ;
    ecx = MEM32(0x90E760);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DA836u); RECOMP_ABI_CALL(0x004DA6BEu, sub_004DA6BE); /* call 0x004DA6BE */

loc_004DA836: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA83A
 * Original: 0x004DA83A - 0x004DA856 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA83A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA83A: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86C400;
    if (CMP_EQ(_fa, _fb)) goto loc_004DA84E; /* je: equal / zero */

loc_004DA849: ;
    PUSH32(esp, 0x004DA84Eu); RECOMP_ABI_CALL(0x004DA631u, sub_004DA631); /* call 0x004DA631 */

loc_004DA84E: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DA856
 * Original: 0x004DA856 - 0x004DA869 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA856(void)
{

loc_004DA856: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C4A0);
    MEM32(0x90E760) = eax;
    PUSH32(esp, 0x004DA868u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004DA868: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DA869
 * Original: 0x004DA869 - 0x004DA885 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA869(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA869: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DA871u); RECOMP_ABI_CALL(0x004DA83Au, sub_004DA83A); /* call 0x004DA83A */

loc_004DA871: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DA87F; /* je: equal / zero */

loc_004DA878: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DA87Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DA87E: ;
    POP32(esp, ecx);

loc_004DA87F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DA885
 * Original: 0x004DA885 - 0x004DA88F (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA885(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA885: ;
    eax = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004DA88F
 * Original: 0x004DA88F - 0x004DA890 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DA88F(void)
{

loc_004DA88F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DA890
 * Original: 0x004DA890 - 0x004DAA94 (516 bytes, 161 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DA890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DA890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA89Fu); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004DA89F: ;
    ecx = ebp + -48;
    edi = eax;
    MEM32(esp) = 0x86C670;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA8B0u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA8B0: ;
    PUSH32(esp, 0x86C668);
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA8BDu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA8BD: ;
    PUSH32(esp, 0x86C664);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA8CAu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA8CA: ;
    PUSH32(esp, 0x86C660);
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA8D7u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA8D7: ;
    PUSH32(esp, 0x86C658);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA8E4u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA8E4: ;
    PUSH32(esp, 0x86C64C);
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA8F1u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA8F1: ;
    PUSH32(esp, 0x86C640);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA8FEu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA8FE: ;
    PUSH32(esp, 0x86C638);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA90Bu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA90B: ;
    PUSH32(esp, 0x86C630);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA918u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA918: ;
    PUSH32(esp, 0x86C628);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA925u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA925: ;
    PUSH32(esp, 0x86C61C);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA932u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA932: ;
    PUSH32(esp, 0x86C610);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA93Fu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004DA93F: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA949u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA949: ;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA954u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA954: ;
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA95Cu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DA95C: ;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA967u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA967: ;
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA96Fu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DA96F: ;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA97Au); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA97A: ;
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA982u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DA982: ;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA98Du); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA98D: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA998u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DA998: ;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9A3u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA9A3: ;
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9ABu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DA9AB: ;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9B6u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA9B6: ;
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9BEu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA9BE: ;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9C9u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA9C9: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9D1u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA9D1: ;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9DCu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA9DC: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9E7u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA9E7: ;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9F2u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DA9F2: ;
    PUSH32(esp, MEM32(esi + 0x24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DA9FAu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DA9FA: ;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA05u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DAA05: ;
    PUSH32(esp, MEM32(esi + 0x28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA0Du); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DAA0D: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA18u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DAA18: ;
    PUSH32(esp, MEM32(esi + 0x2C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA20u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DAA20: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA2Bu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004DAA2B: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA36u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA36: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA3Eu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA3E: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA46u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA46: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA4Eu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA4E: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA56u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA56: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA5Eu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA5E: ;
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA66u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA66: ;
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA6Eu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA6E: ;
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA76u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA76: ;
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA7Eu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA7E: ;
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA86u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA86: ;
    ecx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAA8Eu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004DAA8E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004DAA94
 * Original: 0x004DAA94 - 0x004DAAF6 (98 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAA94(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAA94: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x10;

loc_004DAA9F: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAAAF; /* je: equal / zero */

loc_004DAAA4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DAA9F; /* jb: below (unsigned <) */

loc_004DAAAD: ;
    goto loc_004DAAF3;

loc_004DAAAF: ;
    PUSH32(esp, 0x004DAAB4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DAAB4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004DAAC0u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DAAC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAAD2; /* je: equal / zero */

loc_004DAAC7: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004DAAD0u); RECOMP_ABI_CALL(0x004C641Bu, sub_004C641B); /* call 0x004C641B */

loc_004DAAD0: ;
    goto loc_004DAAD4;

loc_004DAAD2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DAAD4: ;
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = esi + edi;
    PUSH32(esp, 0x86ABE8);
    esi = ecx + 4;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0x004DAAEEu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004DAAEE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

loc_004DAAF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAAF6
 * Original: 0x004DAAF6 - 0x004DAB4C (86 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAAF6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAAF6: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x84), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAB4A; /* je: equal / zero */

loc_004DAB02: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 4;

loc_004DAB09: ;
    PUSH32(esp, MEM32(edi + 0x84));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004DAB15u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004DAB15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004DAB26; /* je: equal / zero */

loc_004DAB1B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DAB09; /* jb: below (unsigned <) */

loc_004DAB24: ;
    goto loc_004DAB48;

loc_004DAB26: ;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DAB33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAB30u); } /* indirect call */
    }

loc_004DAB33: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAB40; /* je: equal / zero */

loc_004DAB3A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DAB40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAB3Eu); } /* indirect call */
    }

loc_004DAB40: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 4) = 0;

loc_004DAB48: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004DAB4A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAB59
 * Original: 0x004DAB59 - 0x004DAB90 (55 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAB59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DAB59: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 4;

loc_004DAB66: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004DAB70u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004DAB70: ;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004DAB81; /* je: equal / zero */

loc_004DAB77: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DAB66; /* jb: below (unsigned <) */

loc_004DAB7F: ;
    goto loc_004DAB87;

loc_004DAB81: ;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebp = MEM32(edi + esi);

loc_004DAB87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DAB90
 * Original: 0x004DAB90 - 0x004DABA2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DAB90: ;
    PUSH32(esp, MEM32(ecx + 0x84));
    PUSH32(esp, 0x004DAB9Bu); RECOMP_ABI_CALL(0x004DAB59u, sub_004DAB59); /* call 0x004DAB59 */

loc_004DAB9B: ;
    ecx = eax + 0x18;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_004DABA2
 * Original: 0x004DABA2 - 0x004DABF8 (86 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DABA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DABA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, MEM32(ecx + 0x84));
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DABBEu); RECOMP_ABI_CALL(0x004DAB59u, sub_004DAB59); /* call 0x004DAB59 */

loc_004DABBE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    edx = ebp + -260;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax + 0x18;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DABD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DABD5u); } /* indirect call */
    }

loc_004DABD8: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DABE4u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DABE4: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DABF4u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004DABF4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DABF8
 * Original: 0x004DABF8 - 0x004DAC0A (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DABF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DABF8: ;
    PUSH32(esp, MEM32(ecx + 0x84));
    PUSH32(esp, 0x004DAC03u); RECOMP_ABI_CALL(0x004DAB59u, sub_004DAB59); /* call 0x004DAB59 */

loc_004DAC03: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004C1269(); return; /* tail jmp 0x004C1269 */

}

/**
 * sub_004DAC0A
 * Original: 0x004DAC0A - 0x004DAC2B (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAC0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DAC0A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DAC18; /* jne: not equal / not zero */

loc_004DAC13: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DAC18: ;
    ecx = MEM32(0x90E764);
    PUSH32(esp, 0x004DAC23u); RECOMP_ABI_CALL(0x004DAA94u, sub_004DAA94); /* call 0x004DAA94 */

loc_004DAC23: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DAC29u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DAC29: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAC2B
 * Original: 0x004DAC2B - 0x004DAC44 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAC2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DAC2B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAC3F; /* je: equal / zero */

loc_004DAC34: ;
    ecx = MEM32(0x90E764);
    PUSH32(esp, 0x004DAC3Fu); RECOMP_ABI_CALL(0x004DAAF6u, sub_004DAAF6); /* call 0x004DAAF6 */

loc_004DAC3F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DAC44
 * Original: 0x004DAC44 - 0x004DAC66 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAC44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DAC44: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAC61; /* je: equal / zero */

loc_004DAC4D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DAC54u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DAC54: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E764);
    MEM32(ecx + 0x84) = eax;

loc_004DAC61: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DAC66
 * Original: 0x004DAC66 - 0x004DAC96 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAC66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DAC66: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DAC74; /* jne: not equal / not zero */

loc_004DAC6F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DAC74: ;
    eax = MEM32(0x90E764);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DAC83u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DAC83: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E764);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x004DAC8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAC8Bu); } /* indirect call */
    }

loc_004DAC8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DAC93u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004DAC93: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAC96
 * Original: 0x004DAC96 - 0x004DACD4 (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAC96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAC96: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DACA7; /* jne: not equal / not zero */

loc_004DACA0: ;
    PUSH32(esp, 0x004DACA5u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DACA5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DACA7: ;
    eax = MEM32(0x90E764);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DACB6u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DACB6: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DACBFu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DACBF: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E764);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x004DACCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DACCCu); } /* indirect call */
    }

loc_004DACCF: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DACD4
 * Original: 0x004DACD4 - 0x004DAD07 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DACD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DACD4: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DACE2; /* jne: not equal / not zero */

loc_004DACDD: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DACE2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DACE9u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DACE9: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DACF2u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DACF2: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E764);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DACFFu); RECOMP_ABI_CALL(0x004DABF8u, sub_004DABF8); /* call 0x004DABF8 */

loc_004DACFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DAD05u); RECOMP_ABI_CALL(0x004DA890u, sub_004DA890); /* call 0x004DA890 */

loc_004DAD05: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAD07
 * Original: 0x004DAD07 - 0x004DAD26 (31 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAD07(void)
{

loc_004DAD07: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4DA885);
    esi = ecx;
    PUSH32(esp, 8);
    PUSH32(esp, 0x10);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(esi) = 0x86C678;
    PUSH32(esp, 0x004DAD22u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004DAD22: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAD26
 * Original: 0x004DAD26 - 0x004DAD61 (59 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAD26(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAD26: ;
    PUSH32(esp, edi);
    edi = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ecx) = 0x86C678;
    if (CMP_EQ(_fa, _fb)) goto loc_004DAD50; /* je: equal / zero */

loc_004DAD34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx + 0x10;
    POP32(esp, ebx);

loc_004DAD3C: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAD48; /* je: equal / zero */

loc_004DAD42: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DAD48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAD46u); } /* indirect call */
    }

loc_004DAD48: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004DAD3C; /* jne: not equal / not zero */

loc_004DAD4E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004DAD50: ;
    PUSH32(esp, 0x4DA88F);
    PUSH32(esp, 8);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004DAD5Fu); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004DAD5F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAD61
 * Original: 0x004DAD61 - 0x004DADC7 (102 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DAD61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAD61: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx + 0x84));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAD74u); RECOMP_ABI_CALL(0x004DAB59u, sub_004DAB59); /* call 0x004DAB59 */

loc_004DAD74: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = eax + 0x18;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004DAD84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAD81u); } /* indirect call */
    }

loc_004DAD84: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DAD8Fu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004DAD8F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004DADB8; /* jbe: below or equal (unsigned <=) */

loc_004DAD95: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004DADA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DADA0u); } /* indirect call */
    }

loc_004DADA3: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DADB3u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004DADB3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DAD95; /* jb: below (unsigned <) */

loc_004DADB8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DADC7
 * Original: 0x004DADC7 - 0x004DAE05 (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DADC7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DADC7: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DADD8; /* jne: not equal / not zero */

loc_004DADD1: ;
    PUSH32(esp, 0x004DADD6u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DADD6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DADD8: ;
    eax = MEM32(0x90E764);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DADE7u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DADE7: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DADF0u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DADF0: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E764);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x004DAE00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DADFDu); } /* indirect call */
    }

loc_004DAE00: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAE05
 * Original: 0x004DAE05 - 0x004DAE21 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAE05(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAE05: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DAE0Du); RECOMP_ABI_CALL(0x004DAD26u, sub_004DAD26); /* call 0x004DAD26 */

loc_004DAE0D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DAE1B; /* je: equal / zero */

loc_004DAE14: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DAE1Au); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DAE1A: ;
    POP32(esp, ecx);

loc_004DAE1B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DAE21
 * Original: 0x004DAE21 - 0x004DAE34 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAE21(void)
{

loc_004DAE21: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C6F0);
    MEM32(0x90E764) = eax;
    PUSH32(esp, 0x004DAE33u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004DAE33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DAE34
 * Original: 0x004DAE34 - 0x004DAE41 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAE34(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAE34: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86C730;
    esp += 4; return; /* ret */

}

/**
 * sub_004DAE41
 * Original: 0x004DAE41 - 0x004DAE74 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAE41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAE41: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DAE49u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DAE49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004DAE55u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DAE55: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAE65; /* je: equal / zero */

loc_004DAE5C: ;
    ecx = eax;
    PUSH32(esp, 0x004DAE63u); RECOMP_ABI_CALL(0x004C1DA8u, sub_004C1DA8); /* call 0x004C1DA8 */

loc_004DAE63: ;
    goto loc_004DAE67;

loc_004DAE65: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DAE67: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004DAE72u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004DAE72: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAE74
 * Original: 0x004DAE74 - 0x004DAE97 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAE74(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAE74: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAE84; /* je: equal / zero */

loc_004DAE7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DAE84u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004DAE84: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DAE91; /* je: equal / zero */

loc_004DAE8B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DAE91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAE8Fu); } /* indirect call */
    }

loc_004DAE91: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAEAF
 * Original: 0x004DAEAF - 0x004DAEC9 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAEAF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAEAF: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004DAEC3u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004DAEC3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DAEC9
 * Original: 0x004DAEC9 - 0x004DAED9 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAEC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DAEC9: ;
    ecx = MEM32(0x90E768);
    PUSH32(esp, 0x004DAED4u); RECOMP_ABI_CALL(0x004DAE41u, sub_004DAE41); /* call 0x004DAE41 */

loc_004DAED4: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DAED9
 * Original: 0x004DAED9 - 0x004DAEE9 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAED9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DAED9: ;
    ecx = MEM32(0x90E768);
    PUSH32(esp, 0x004DAEE4u); RECOMP_ABI_CALL(0x004DAE74u, sub_004DAE74); /* call 0x004DAE74 */

loc_004DAEE4: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DAEE9
 * Original: 0x004DAEE9 - 0x004DAEFE (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAEE9(void)
{

loc_004DAEE9: ;
    eax = MEM32(0x90E768);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DAEF6u); RECOMP_ABI_CALL(0x004C1E2Cu, sub_004C1E2C); /* call 0x004C1E2C */

loc_004DAEF6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DAEFCu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DAEFC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAEFE
 * Original: 0x004DAEFE - 0x004DAF13 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAEFE(void)
{

loc_004DAEFE: ;
    eax = MEM32(0x90E768);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DAF0Bu); RECOMP_ABI_CALL(0x004C1E3Du, sub_004C1E3D); /* call 0x004C1E3D */

loc_004DAF0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DAF11u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DAF11: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAF13
 * Original: 0x004DAF13 - 0x004DAF28 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAF13(void)
{

loc_004DAF13: ;
    eax = MEM32(0x90E768);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DAF20u); RECOMP_ABI_CALL(0x004C1E4Eu, sub_004C1E4E); /* call 0x004C1E4E */

loc_004DAF20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DAF26u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DAF26: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAF28
 * Original: 0x004DAF28 - 0x004DAF44 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAF28(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAF28: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86C730;
    if (CMP_EQ(_fa, _fb)) goto loc_004DAF3C; /* je: equal / zero */

loc_004DAF37: ;
    PUSH32(esp, 0x004DAF3Cu); RECOMP_ABI_CALL(0x004DAE74u, sub_004DAE74); /* call 0x004DAE74 */

loc_004DAF3C: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DAF44
 * Original: 0x004DAF44 - 0x004DAF57 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAF44(void)
{

loc_004DAF44: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C794);
    MEM32(0x90E768) = eax;
    PUSH32(esp, 0x004DAF56u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004DAF56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DAF57
 * Original: 0x004DAF57 - 0x004DAF73 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAF57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAF57: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DAF5Fu); RECOMP_ABI_CALL(0x004DAF28u, sub_004DAF28); /* call 0x004DAF28 */

loc_004DAF5F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DAF6D; /* je: equal / zero */

loc_004DAF66: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DAF6Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DAF6C: ;
    POP32(esp, ecx);

loc_004DAF6D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DAF73
 * Original: 0x004DAF73 - 0x004DAFD3 (96 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAF73(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAF73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DAF79u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004DAF79: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004DAF80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAF7Du); } /* indirect call */
    }

loc_004DAF80: ;
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx * 4 + 0x90E770));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004DAF98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAF95u); } /* indirect call */
    }

loc_004DAF98: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004DAFA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAF9Eu); } /* indirect call */
    }

loc_004DAFA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DAFBC; /* jne: not equal / not zero */

loc_004DAFA5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004DAFACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DAFA9u); } /* indirect call */
    }

loc_004DAFAC: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DAFB6u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004DAFB6: ;
    eax = MEM32(esp + 8);
    goto loc_004DAFCF;

loc_004DAFBC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x004DAFC6u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DAFC6: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = ecx;

loc_004DAFCF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DAFD3
 * Original: 0x004DAFD3 - 0x004DB001 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DAFD3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DAFD3: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DAFE4; /* jne: not equal / not zero */

loc_004DAFDD: ;
    PUSH32(esp, 0x004DAFE2u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DAFE2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DAFE4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DAFEBu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DAFEB: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E76C);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DAFFDu); RECOMP_ABI_CALL(0x004DAF73u, sub_004DAF73); /* call 0x004DAF73 */

loc_004DAFFD: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB001
 * Original: 0x004DB001 - 0x004DB014 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB001(void)
{

loc_004DB001: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C7D4);
    MEM32(0x90E76C) = eax;
    PUSH32(esp, 0x004DB013u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004DB013: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DB014
 * Original: 0x004DB014 - 0x004DB021 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB014(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB014: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86C7E4;
    esp += 4; return; /* ret */

}

/**
 * sub_004DB021
 * Original: 0x004DB021 - 0x004DB056 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB021(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB021: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DB029u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DB029: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004DB035u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DB035: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB047; /* je: equal / zero */

loc_004DB03C: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004DB045u); RECOMP_ABI_CALL(0x004CA2C5u, sub_004CA2C5); /* call 0x004CA2C5 */

loc_004DB045: ;
    goto loc_004DB049;

loc_004DB047: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DB049: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004DB054u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004DB054: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB066
 * Original: 0x004DB066 - 0x004DB085 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB066(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB066: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DB072u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004DB072: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB07F; /* je: equal / zero */

loc_004DB079: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DB07Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DB07Du); } /* indirect call */
    }

loc_004DB07F: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB085
 * Original: 0x004DB085 - 0x004DB09F (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB085(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB085: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004DB099u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004DB099: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DB09F
 * Original: 0x004DB09F - 0x004DB0B8 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB09F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB09F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB0B3; /* je: equal / zero */

loc_004DB0A8: ;
    ecx = MEM32(0x90E794);
    PUSH32(esp, 0x004DB0B3u); RECOMP_ABI_CALL(0x004DB021u, sub_004DB021); /* call 0x004DB021 */

loc_004DB0B3: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB0B8
 * Original: 0x004DB0B8 - 0x004DB0DC (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB0B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB0B8: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB0D7; /* je: equal / zero */

loc_004DB0C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB0C8u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DB0C8: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E794);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB0D7u); RECOMP_ABI_CALL(0x004CA1E2u, sub_004CA1E2); /* call 0x004CA1E2 */

loc_004DB0D7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB0DC
 * Original: 0x004DB0DC - 0x004DB0F7 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB0DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB0DC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB0F2; /* je: equal / zero */

loc_004DB0E5: ;
    eax = MEM32(0x90E794);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB0F2u); RECOMP_ABI_CALL(0x004CA22Cu, sub_004CA22C); /* call 0x004CA22C */

loc_004DB0F2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB0F7
 * Original: 0x004DB0F7 - 0x004DB110 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB0F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB0F7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB10B; /* je: equal / zero */

loc_004DB100: ;
    ecx = MEM32(0x90E794);
    PUSH32(esp, 0x004DB10Bu); RECOMP_ABI_CALL(0x004DB066u, sub_004DB066); /* call 0x004DB066 */

loc_004DB10B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB110
 * Original: 0x004DB110 - 0x004DB12C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB110: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86C7E4;
    if (CMP_EQ(_fa, _fb)) goto loc_004DB124; /* je: equal / zero */

loc_004DB11F: ;
    PUSH32(esp, 0x004DB124u); RECOMP_ABI_CALL(0x004DB066u, sub_004DB066); /* call 0x004DB066 */

loc_004DB124: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB12C
 * Original: 0x004DB12C - 0x004DB13F (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB12C(void)
{

loc_004DB12C: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C814);
    MEM32(0x90E794) = eax;
    PUSH32(esp, 0x004DB13Eu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004DB13E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DB13F
 * Original: 0x004DB13F - 0x004DB15B (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB13F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB13F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DB147u); RECOMP_ABI_CALL(0x004DB110u, sub_004DB110); /* call 0x004DB110 */

loc_004DB147: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DB155; /* je: equal / zero */

loc_004DB14E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DB154u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DB154: ;
    POP32(esp, ecx);

loc_004DB155: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB163
 * Original: 0x004DB163 - 0x004DB170 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB163(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB163: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86C83C;
    esp += 4; return; /* ret */

}

/**
 * sub_004DB170
 * Original: 0x004DB170 - 0x004DB18A (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB170: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004DB184u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004DB184: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DB18A
 * Original: 0x004DB18A - 0x004DB1BD (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB18A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB18A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DB192u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DB192: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x004DB19Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DB19E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB1AE; /* je: equal / zero */

loc_004DB1A5: ;
    ecx = eax;
    PUSH32(esp, 0x004DB1ACu); RECOMP_ABI_CALL(0x004C9D16u, sub_004C9D16); /* call 0x004C9D16 */

loc_004DB1AC: ;
    goto loc_004DB1B0;

loc_004DB1AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DB1B0: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004DB1BBu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004DB1BB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB1BD
 * Original: 0x004DB1BD - 0x004DB1DC (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB1BD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB1BD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DB1C9u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004DB1C9: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB1D6; /* je: equal / zero */

loc_004DB1D0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DB1D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DB1D4u); } /* indirect call */
    }

loc_004DB1D6: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB214
 * Original: 0x004DB214 - 0x004DB232 (30 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB214(void)
{

loc_004DB214: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004DB220u); RECOMP_ABI_CALL(0x004CDEF4u, sub_004CDEF4); /* call 0x004CDEF4 */

loc_004DB220: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB226u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DB226: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DB242
 * Original: 0x004DB242 - 0x004DB295 (83 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DB242(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB242: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DB260u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004DB260: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DB277u); RECOMP_ABI_CALL(0x004CDF0Fu, sub_004CDF0F); /* call 0x004CDF0F */

loc_004DB277: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DB280u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DB280: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DB291u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004DB291: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DB295
 * Original: 0x004DB295 - 0x004DB2B3 (30 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB295(void)
{

loc_004DB295: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004DB2A1u); RECOMP_ABI_CALL(0x004C1AA6u, sub_004C1AA6); /* call 0x004C1AA6 */

loc_004DB2A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB2A7u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DB2A7: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DB2BB
 * Original: 0x004DB2BB - 0x004DB2D9 (30 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB2BB(void)
{

loc_004DB2BB: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004DB2C7u); RECOMP_ABI_CALL(0x004C1ACAu, sub_004C1ACA); /* call 0x004C1ACA */

loc_004DB2C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB2CDu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DB2CD: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DB2E1
 * Original: 0x004DB2E1 - 0x004DB2FA (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB2E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB2E1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB2F5; /* je: equal / zero */

loc_004DB2EA: ;
    ecx = MEM32(0x90E798);
    PUSH32(esp, 0x004DB2F5u); RECOMP_ABI_CALL(0x004DB18Au, sub_004DB18A); /* call 0x004DB18A */

loc_004DB2F5: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB2FA
 * Original: 0x004DB2FA - 0x004DB313 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB2FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB2FA: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB30E; /* je: equal / zero */

loc_004DB303: ;
    ecx = MEM32(0x90E798);
    PUSH32(esp, 0x004DB30Eu); RECOMP_ABI_CALL(0x004DB1BDu, sub_004DB1BD); /* call 0x004DB1BD */

loc_004DB30E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB313
 * Original: 0x004DB313 - 0x004DB344 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB313(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB313: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB33F; /* je: equal / zero */

loc_004DB31C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DB324u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DB324: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB32Du); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB32D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB33Eu); RECOMP_ABI_CALL(0x004CDF3Eu, sub_004CDF3E); /* call 0x004CDF3E */

loc_004DB33E: ;
    POP32(esp, esi);

loc_004DB33F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB344
 * Original: 0x004DB344 - 0x004DB375 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB344(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB344: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB370; /* je: equal / zero */

loc_004DB34D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DB355u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DB355: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB35Eu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DB35E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB36Fu); RECOMP_ABI_CALL(0x004CA110u, sub_004CA110); /* call 0x004CA110 */

loc_004DB36F: ;
    POP32(esp, esi);

loc_004DB370: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB375
 * Original: 0x004DB375 - 0x004DB390 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB375(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB375: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB38B; /* je: equal / zero */

loc_004DB37E: ;
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB38Bu); RECOMP_ABI_CALL(0x004C9EA9u, sub_004C9EA9); /* call 0x004C9EA9 */

loc_004DB38B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB390
 * Original: 0x004DB390 - 0x004DB3AB (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB390: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB3A6; /* je: equal / zero */

loc_004DB399: ;
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB3A6u); RECOMP_ABI_CALL(0x004C9F38u, sub_004C9F38); /* call 0x004C9F38 */

loc_004DB3A6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB3AB
 * Original: 0x004DB3AB - 0x004DB3D7 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB3AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB3AB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB3B9; /* jne: not equal / not zero */

loc_004DB3B4: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DB3B9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB3C0u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB3C0: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB3CFu); RECOMP_ABI_CALL(0x004CA0AFu, sub_004CA0AF); /* call 0x004CA0AF */

loc_004DB3CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB3D5u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004DB3D5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB3D7
 * Original: 0x004DB3D7 - 0x004DB403 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB3D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB3D7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB3E5; /* jne: not equal / not zero */

loc_004DB3E0: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DB3E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB3ECu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB3EC: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB3FBu); RECOMP_ABI_CALL(0x004CDED4u, sub_004CDED4); /* call 0x004CDED4 */

loc_004DB3FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB401u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DB401: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB403
 * Original: 0x004DB403 - 0x004DB431 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB403(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB403: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB414; /* jne: not equal / not zero */

loc_004DB40D: ;
    PUSH32(esp, 0x004DB412u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DB412: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DB414: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB41Bu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB41B: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E798);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB42Du); RECOMP_ABI_CALL(0x004DB214u, sub_004DB214); /* call 0x004DB214 */

loc_004DB42D: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB431
 * Original: 0x004DB431 - 0x004DB454 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB431(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB431: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB43F; /* jne: not equal / not zero */

loc_004DB43A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DB43F: ;
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB44Cu); RECOMP_ABI_CALL(0x004C9E9Bu, sub_004C9E9B); /* call 0x004C9E9B */

loc_004DB44C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB452u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004DB452: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB454
 * Original: 0x004DB454 - 0x004DB477 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB454(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB454: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB462; /* jne: not equal / not zero */

loc_004DB45D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DB462: ;
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB46Fu); RECOMP_ABI_CALL(0x004C1A95u, sub_004C1A95); /* call 0x004C1A95 */

loc_004DB46F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB475u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004DB475: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB477
 * Original: 0x004DB477 - 0x004DB4AE (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB477(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB477: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB488; /* jne: not equal / not zero */

loc_004DB481: ;
    PUSH32(esp, 0x004DB486u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DB486: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DB488: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DB48Fu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB48F: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB498u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB498: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E798);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB4AAu); RECOMP_ABI_CALL(0x004DB242u, sub_004DB242); /* call 0x004DB242 */

loc_004DB4AA: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB4AE
 * Original: 0x004DB4AE - 0x004DB4DC (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB4AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB4AE: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB4BF; /* jne: not equal / not zero */

loc_004DB4B8: ;
    PUSH32(esp, 0x004DB4BDu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DB4BD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DB4BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB4C6u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB4C6: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E798);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB4D8u); RECOMP_ABI_CALL(0x004DB295u, sub_004DB295); /* call 0x004DB295 */

loc_004DB4D8: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB4DC
 * Original: 0x004DB4DC - 0x004DB508 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB4DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB4DC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB4EA; /* jne: not equal / not zero */

loc_004DB4E5: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004DB4EA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB4F1u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB4F1: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB500u); RECOMP_ABI_CALL(0x004C1AB8u, sub_004C1AB8); /* call 0x004C1AB8 */

loc_004DB500: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB506u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004DB506: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB508
 * Original: 0x004DB508 - 0x004DB536 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB508(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB508: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB519; /* jne: not equal / not zero */

loc_004DB512: ;
    PUSH32(esp, 0x004DB517u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DB517: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DB519: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB520u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB520: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E798);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB532u); RECOMP_ABI_CALL(0x004DB2BBu, sub_004DB2BB); /* call 0x004DB2BB */

loc_004DB532: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB536
 * Original: 0x004DB536 - 0x004DB567 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB536(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB536: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB562; /* je: equal / zero */

loc_004DB53F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004DB547u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB547: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB550u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004DB550: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB561u); RECOMP_ABI_CALL(0x004CDF81u, sub_004CDF81); /* call 0x004CDF81 */

loc_004DB561: ;
    POP32(esp, esi);

loc_004DB562: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB567
 * Original: 0x004DB567 - 0x004DB582 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB567(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB567: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB57D; /* je: equal / zero */

loc_004DB570: ;
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB57Du); RECOMP_ABI_CALL(0x004C1ADCu, sub_004C1ADC); /* call 0x004C1ADC */

loc_004DB57D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB582
 * Original: 0x004DB582 - 0x004DB59D (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB582(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB582: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB598; /* je: equal / zero */

loc_004DB58B: ;
    eax = MEM32(0x90E798);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB598u); RECOMP_ABI_CALL(0x004CA1C8u, sub_004CA1C8); /* call 0x004CA1C8 */

loc_004DB598: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB59D
 * Original: 0x004DB59D - 0x004DB5B9 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB59D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB59D: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86C83C;
    if (CMP_EQ(_fa, _fb)) goto loc_004DB5B1; /* je: equal / zero */

loc_004DB5AC: ;
    PUSH32(esp, 0x004DB5B1u); RECOMP_ABI_CALL(0x004DB1BDu, sub_004DB1BD); /* call 0x004DB1BD */

loc_004DB5B1: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB5B9
 * Original: 0x004DB5B9 - 0x004DB5CC (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB5B9(void)
{

loc_004DB5B9: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86C948);
    MEM32(0x90E798) = eax;
    PUSH32(esp, 0x004DB5CBu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004DB5CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DB5CC
 * Original: 0x004DB5CC - 0x004DB5E8 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB5CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB5CC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DB5D4u); RECOMP_ABI_CALL(0x004DB59Du, sub_004DB59D); /* call 0x004DB59D */

loc_004DB5D4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DB5E2; /* je: equal / zero */

loc_004DB5DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DB5E1u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DB5E1: ;
    POP32(esp, ecx);

loc_004DB5E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB5E8
 * Original: 0x004DB5E8 - 0x004DB5F5 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB5E8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB5E8: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86C9E0;
    esp += 4; return; /* ret */

}

/**
 * sub_004DB5F5
 * Original: 0x004DB5F5 - 0x004DB62A (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB5F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB5F5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DB5FDu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DB5FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004DB609u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004DB609: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB61B; /* je: equal / zero */

loc_004DB610: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004DB619u); RECOMP_ABI_CALL(0x004CBE18u, sub_004CBE18); /* call 0x004CBE18 */

loc_004DB619: ;
    goto loc_004DB61D;

loc_004DB61B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DB61D: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004DB628u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004DB628: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB62A
 * Original: 0x004DB62A - 0x004DB649 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB62A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB62A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DB636u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004DB636: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB643; /* je: equal / zero */

loc_004DB63D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DB643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DB641u); } /* indirect call */
    }

loc_004DB643: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB649
 * Original: 0x004DB649 - 0x004DB66B (34 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB649(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB649: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004DB65Du); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004DB65D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DB66B
 * Original: 0x004DB66B - 0x004DB684 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB66B(void)
{

loc_004DB66B: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004DB673u); RECOMP_ABI_CALL(0x004CBF14u, sub_004CBF14); /* call 0x004CBF14 */

loc_004DB673: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB67Du); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004DB67D: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB684
 * Original: 0x004DB684 - 0x004DB69D (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB684(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB684: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB698; /* je: equal / zero */

loc_004DB68D: ;
    ecx = MEM32(0x90E79C);
    PUSH32(esp, 0x004DB698u); RECOMP_ABI_CALL(0x004DB5F5u, sub_004DB5F5); /* call 0x004DB5F5 */

loc_004DB698: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB69D
 * Original: 0x004DB69D - 0x004DB6B6 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB69D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB69D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB6B1; /* je: equal / zero */

loc_004DB6A6: ;
    ecx = MEM32(0x90E79C);
    PUSH32(esp, 0x004DB6B1u); RECOMP_ABI_CALL(0x004DB62Au, sub_004DB62A); /* call 0x004DB62A */

loc_004DB6B1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB6B6
 * Original: 0x004DB6B6 - 0x004DB6DA (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB6B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB6B6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB6D5; /* je: equal / zero */

loc_004DB6BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB6C6u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004DB6C6: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E79C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004DB6D5u); RECOMP_ABI_CALL(0x004CBEADu, sub_004CBEAD); /* call 0x004CBEAD */

loc_004DB6D5: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004DB6DA
 * Original: 0x004DB6DA - 0x004DB6FE (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB6DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB6DA: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DB6EB; /* jne: not equal / not zero */

loc_004DB6E4: ;
    PUSH32(esp, 0x004DB6E9u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004DB6E9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004DB6EB: ;
    ecx = MEM32(0x90E79C);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DB6FAu); RECOMP_ABI_CALL(0x004DB66Bu, sub_004DB66B); /* call 0x004DB66B */

loc_004DB6FA: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB6FE
 * Original: 0x004DB6FE - 0x004DB71A (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB6FE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB6FE: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86C9E0;
    if (CMP_EQ(_fa, _fb)) goto loc_004DB712; /* je: equal / zero */

loc_004DB70D: ;
    PUSH32(esp, 0x004DB712u); RECOMP_ABI_CALL(0x004DB62Au, sub_004DB62A); /* call 0x004DB62A */

loc_004DB712: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB71A
 * Original: 0x004DB71A - 0x004DB72D (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB71A(void)
{

loc_004DB71A: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86CA10);
    MEM32(0x90E79C) = eax;
    PUSH32(esp, 0x004DB72Cu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004DB72C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DB72D
 * Original: 0x004DB72D - 0x004DB749 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB72D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB72D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DB735u); RECOMP_ABI_CALL(0x004DB6FEu, sub_004DB6FE); /* call 0x004DB6FE */

loc_004DB735: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DB743; /* je: equal / zero */

loc_004DB73C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DB742u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DB742: ;
    POP32(esp, ecx);

loc_004DB743: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB749
 * Original: 0x004DB749 - 0x004DB760 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB749(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB749: ;
    PUSH32(esp, 0x1BF);
    PUSH32(esp, 0x86CA38);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004DB75Cu); RECOMP_ABI_CALL(0x00506060u, sub_00506060); /* call 0x00506060 */

loc_004DB75C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004DB780
 * Original: 0x004DB780 - 0x004DB7A2 (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB780: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x004DB78Au); RECOMP_ABI_CALL(0x004DB749u, sub_004DB749); /* call 0x004DB749 */

loc_004DB78A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004DB798; /* je: equal / zero */

loc_004DB78F: ;
    ecx = eax;
    PUSH32(esp, 0x004DB796u); RECOMP_ABI_CALL(0x005101C0u, sub_005101C0); /* call 0x005101C0 */

loc_004DB796: ;
    goto loc_004DB79A;

loc_004DB798: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DB79A: ;
    MEM32(esi) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB7A2
 * Original: 0x004DB7A2 - 0x004DB7C1 (31 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB7A2(void)
{

loc_004DB7A2: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax));
    esi = ecx;
    PUSH32(esp, 0x004DB7B0u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DB7B0: ;
    POP32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004DB7BDu); RECOMP_ABI_CALL(0x0050F6C0u, sub_0050F6C0); /* call 0x0050F6C0 */

loc_004DB7BD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DB7C1
 * Original: 0x004DB7C1 - 0x004DB7E4 (35 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB7C1(void)
{

loc_004DB7C1: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x004DB7D5u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004DB7D5: ;
    POP32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004DB7DFu); RECOMP_ABI_CALL(0x0050F6C0u, sub_0050F6C0); /* call 0x0050F6C0 */

loc_004DB7DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB7E4
 * Original: 0x004DB7E4 - 0x004DB7FC (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB7E4(void)
{

loc_004DB7E4: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx);
    PUSH32(esp, 0x004DB7EFu); RECOMP_ABI_CALL(0x0050F720u, sub_0050F720); /* call 0x0050F720 */

loc_004DB7EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004DB7F7u); RECOMP_ABI_CALL(0x004D079Au, sub_004D079A); /* call 0x004D079A */

loc_004DB7F7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB7FC
 * Original: 0x004DB7FC - 0x004DB81E (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB7FC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB7FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x004DB806u); RECOMP_ABI_CALL(0x004DB749u, sub_004DB749); /* call 0x004DB749 */

loc_004DB806: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004DB814; /* je: equal / zero */

loc_004DB80B: ;
    ecx = eax;
    PUSH32(esp, 0x004DB812u); RECOMP_ABI_CALL(0x005101C0u, sub_005101C0); /* call 0x005101C0 */

loc_004DB812: ;
    goto loc_004DB816;

loc_004DB814: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004DB816: ;
    MEM32(esi) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB81E
 * Original: 0x004DB81E - 0x004DB83D (31 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB81E(void)
{

loc_004DB81E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax));
    esi = ecx;
    PUSH32(esp, 0x004DB82Cu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DB82C: ;
    POP32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004DB839u); RECOMP_ABI_CALL(0x0050F6C0u, sub_0050F6C0); /* call 0x0050F6C0 */

loc_004DB839: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DB83D
 * Original: 0x004DB83D - 0x004DB860 (35 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB83D(void)
{

loc_004DB83D: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x004DB851u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004DB851: ;
    POP32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004DB85Bu); RECOMP_ABI_CALL(0x0050F6C0u, sub_0050F6C0); /* call 0x0050F6C0 */

loc_004DB85B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB87D
 * Original: 0x004DB87D - 0x004DB8A2 (37 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB87D(void)
{

loc_004DB87D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 4);
    PUSH32(esp, 0x004DB88Fu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004DB88F: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi) = 0x86CA88;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004DB8A2
 * Original: 0x004DB8A2 - 0x004DB8C3 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB8A2(void)
{

loc_004DB8A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004DB8B0u); RECOMP_ABI_CALL(0x004DD6ADu, sub_004DD6AD); /* call 0x004DD6AD */

loc_004DB8B0: ;
    MEM32(esi) = 0x86CA88;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB8C3
 * Original: 0x004DB8C3 - 0x004DB8CE (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB8C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DB8C3: ;
    MEM32(ecx) = 0x86CA88;
    g_seh_ebp = ebp; sub_004DD70A(); return; /* tail jmp 0x004DD70A */

}

/**
 * sub_004DB8CE
 * Original: 0x004DB8CE - 0x004DB8DC (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB8CE(void)
{

loc_004DB8CE: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004DB8D7u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004DB8D7: ;
    eax = MEM32(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB8DC
 * Original: 0x004DB8DC - 0x004DB91C (64 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB8DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB8DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = ecx;
    PUSH32(esp, 0x004DB8E9u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004DB8E9: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB907; /* je: equal / zero */

loc_004DB8F3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB8FC; /* je: equal / zero */

loc_004DB8F7: ;
    PUSH32(esp, 0x004DB8FCu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DB8FC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB907; /* je: equal / zero */

loc_004DB900: ;
    ecx = esi;
    PUSH32(esp, 0x004DB907u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004DB907: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, 0x004DB917u); RECOMP_ABI_CALL(0x004DD734u, sub_004DD734); /* call 0x004DD734 */

loc_004DB917: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DB91C
 * Original: 0x004DB91C - 0x004DB93C (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB91C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB91C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB92C; /* je: equal / zero */

loc_004DB927: ;
    PUSH32(esp, 0x004DB92Cu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DB92C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004DB938u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004DB938: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB93C
 * Original: 0x004DB93C - 0x004DB960 (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB93C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB93C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB94C; /* je: equal / zero */

loc_004DB947: ;
    PUSH32(esp, 0x004DB94Cu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DB94C: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x004DB95Cu); RECOMP_ABI_CALL(0x004DD774u, sub_004DD774); /* call 0x004DD774 */

loc_004DB95C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DB960
 * Original: 0x004DB960 - 0x004DB98E (46 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004DB986; /* jbe: below or equal (unsigned <=) */

loc_004DB96E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004DB976u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004DB976: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB981; /* je: equal / zero */

loc_004DB97A: ;
    ecx = eax;
    PUSH32(esp, 0x004DB981u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004DB981: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DB96E; /* jb: below (unsigned <) */

loc_004DB986: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004DB98E
 * Original: 0x004DB98E - 0x004DB9B4 (38 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB98E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB98E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004DB99Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004DB99A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB9A5; /* je: equal / zero */

loc_004DB99E: ;
    ecx = eax;
    PUSH32(esp, 0x004DB9A5u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004DB9A5: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004DB9B0u); RECOMP_ABI_CALL(0x004DD85Au, sub_004DD85A); /* call 0x004DD85A */

loc_004DB9B0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DB9B4
 * Original: 0x004DB9B4 - 0x004DB9F8 (68 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB9B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB9B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004DB9EC; /* jbe: below or equal (unsigned <=) */

loc_004DB9C2: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004DB9CAu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004DB9CA: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DB9E1; /* je: equal / zero */

loc_004DB9D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004DB9DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DB9DAu); } /* indirect call */
    }

loc_004DB9DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    goto loc_004DB9E5;

loc_004DB9E1: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */

loc_004DB9E5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_004DB9F4; /* je: equal / zero */

loc_004DB9E7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DB9C2; /* jb: below (unsigned <) */

loc_004DB9EC: ;
    eax = edi;

loc_004DB9EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004DB9F4: ;
    eax = ebx;
    goto loc_004DB9EE;

}

/**
 * sub_004DB9F8
 * Original: 0x004DB9F8 - 0x004DBA12 (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DB9F8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DB9F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004DBA05u); RECOMP_ABI_CALL(0x004DB9B4u, sub_004DB9B4); /* call 0x004DB9B4 */

loc_004DBA05: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DBA12
 * Original: 0x004DBA12 - 0x004DBA38 (38 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBA12(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBA12: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004DBA1Eu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004DBA1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBA29; /* je: equal / zero */

loc_004DBA22: ;
    ecx = eax;
    PUSH32(esp, 0x004DBA29u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004DBA29: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004DBA34u); RECOMP_ABI_CALL(0x004DD7BFu, sub_004DD7BF); /* call 0x004DD7BF */

loc_004DBA34: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DBA38
 * Original: 0x004DBA38 - 0x004DBA5A (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBA38(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBA38: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CA88;
    PUSH32(esp, 0x004DBA46u); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004DBA46: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004DBA54; /* je: equal / zero */

loc_004DBA4D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DBA53u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004DBA53: ;
    POP32(esp, ecx);

loc_004DBA54: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DBA5A
 * Original: 0x004DBA5A - 0x004DBA77 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBA5A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBA5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004DBA66u); RECOMP_ABI_CALL(0x004DB9B4u, sub_004DB9B4); /* call 0x004DB9B4 */

loc_004DBA66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBA73; /* je: equal / zero */

loc_004DBA6B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004DBA73u); RECOMP_ABI_CALL(0x004DBA12u, sub_004DBA12); /* call 0x004DBA12 */

loc_004DBA73: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DBA87
 * Original: 0x004DBA87 - 0x004DBAC9 (66 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBA87(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBA87: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86CA8C;
    if (TEST_Z(_fa, _fb)) goto loc_004DBA9E; /* je: equal / zero */

loc_004DBA97: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DBA9Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004DBA9D: ;
    POP32(esp, ecx);

loc_004DBA9E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DBAC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBAC6u); } /* indirect call */
    }

loc_004DBAC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DBAC9
 * Original: 0x004DBAC9 - 0x004DBB44 (123 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBAC9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBAC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004DBAD3u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004DBAD3: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 8) = 0x863F20;
    PUSH32(esp, 0x696E676D);
    MEM32(esi) = 0x86CAA4;
    MEM32(esi + 8) = 0x86CA94;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x14) = 1;
    PUSH32(esp, 0x004DBAFCu); RECOMP_ABI_CALL(0x004580C0u, sub_004580C0); /* call 0x004580C0 */

loc_004DBAFC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004DBB04u); RECOMP_ABI_CALL(0x00457E80u, sub_00457E80); /* call 0x00457E80 */

loc_004DBB04: ;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004DBB0Cu); RECOMP_ABI_CALL(0x004580E0u, sub_004580E0); /* call 0x004580E0 */

loc_004DBB0C: ;
    PUSH32(esp, 0x004DBB11u); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_004DBB11: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    edi = esi + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x004DBB24u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004DBB24: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004DBB32u); RECOMP_ABI_CALL(0x00457F70u, sub_00457F70); /* call 0x00457F70 */

loc_004DBB32: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x004DBB3Cu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004DBB3C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004DBB44
 * Original: 0x004DBB44 - 0x004DBB6C (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBB44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004DBB44: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x18));
    MEM32(esi) = 0x86CAA4;
    MEM32(esi + 8) = 0x86CA94;
    PUSH32(esp, 0x004DBB5Cu); RECOMP_ABI_CALL(0x00457EB0u, sub_00457EB0); /* call 0x00457EB0 */

loc_004DBB5C: ;
    POP32(esp, ecx);
    MEM32(esi + 8) = 0x863F20;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004DBB6C
 * Original: 0x004DBB6C - 0x004DBBC5 (89 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBB6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBB6C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004DBB75u); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_004DBB75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004DBB8A; /* jb: below (unsigned <) */

loc_004DBB7A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBBAB; /* je: equal / zero */

loc_004DBB81: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DBB88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBB85u); } /* indirect call */
    }

loc_004DBB88: ;
    goto loc_004DBBAB;

loc_004DBB8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x004DBB98u); RECOMP_ABI_CALL(0x00457FB0u, sub_00457FB0); /* call 0x00457FB0 */

loc_004DBB98: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004DBBAF; /* jle: less or equal (signed <=) */

loc_004DBB9F: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBBAB; /* je: equal / zero */

loc_004DBBA6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004DBBABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBBA9u); } /* indirect call */
    }

loc_004DBBAB: ;
    MEM8(esi + 0xC) = 0;

loc_004DBBAF: ;
    SET_LO8(ebx, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBBBE; /* jne: not equal / not zero */

loc_004DBBB6: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004DBBBEu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004DBBBE: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DBBC5
 * Original: 0x004DBBC5 - 0x004DBBD0 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBBC5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBBC5: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ecx + 0xC) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DBBD0
 * Original: 0x004DBBD0 - 0x004DBBE9 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBBD0(void)
{

loc_004DBBD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004DBBDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBBDAu); } /* indirect call */
    }

loc_004DBBDD: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004DBBE5u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004DBBE5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004DBBF9
 * Original: 0x004DBBF9 - 0x004DBC0E (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBBF9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBBF9: ;
    ecx = MEM32(0x90E7AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBC0D; /* je: equal / zero */

loc_004DBC03: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x004DBC0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBC07u); } /* indirect call */
    }

loc_004DBC0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DBC0E
 * Original: 0x004DBC0E - 0x004DBC14 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBC0E(void)
{

loc_004DBC0E: ;
    eax = MEM32(0x90E7AC);
    esp += 4; return; /* ret */

}

/**
 * sub_004DBC20
 * Original: 0x004DBC20 - 0x004DBCD4 (180 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DBC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBC20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(0x90E7AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90E7AC), 0 (32-bit) */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004DBC54; /* je: equal / zero */

loc_004DBC3C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696E676D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x696E676D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBC4D; /* jne: not equal / not zero */

loc_004DBC44: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DBC49u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004DBC49: ;
    esi = eax;
    goto loc_004DBC5A;

loc_004DBC4D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DBC52u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DBC52: ;
    goto loc_004DBC49;

loc_004DBC54: ;
    esi = MEM32(0x90E7B0);

loc_004DBC5A: ;
    PUSH32(esp, 0x40);
    eax = ebp + -68;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DBC67u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004DBC67: ;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0x18) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = SX8(LO8(ecx));
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x18) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = SX8(LO8(ecx));
    PUSH32(esp, ecx);
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x86CAA8);
    eax = ebp + -68;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DBCB4u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004DBCB4: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004DBCC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBCC6u); } /* indirect call */
    }

loc_004DBCC8: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DBCD2u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004DBCD2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004DBCD4
 * Original: 0x004DBCD4 - 0x004DBD0D (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBCD4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBCD4: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBD0C; /* je: equal / zero */

loc_004DBCDB: ;
    _fa = (uint32_t)(MEM32(0x90E7AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x90E7AC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBCFC; /* je: equal / zero */

loc_004DBCE4: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696E676D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x696E676D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBCF5; /* jne: not equal / not zero */

loc_004DBCEE: ;
    PUSH32(esp, 0x004DBCF3u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004DBCF3: ;
    goto loc_004DBD01;

loc_004DBCF5: ;
    PUSH32(esp, 0x004DBCFAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004DBCFA: ;
    goto loc_004DBD01;

loc_004DBCFC: ;
    eax = MEM32(0x90E7B0);

loc_004DBD01: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004DBD0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBD09u); } /* indirect call */
    }

loc_004DBD0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004DBD0D
 * Original: 0x004DBD0D - 0x004DBD6A (93 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DBD0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBD0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    MEM8(ebp + -1) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_004DBD64; /* jle: less or equal (signed <=) */

loc_004DBD1E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004DBD62; /* je: equal / zero */

loc_004DBD30: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86CAC0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DBD3Eu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004DBD3E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBD58; /* jne: not equal / not zero */

loc_004DBD45: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBD55; /* jne: not equal / not zero */

loc_004DBD4A: ;
    ecx = MEM32(ebp + 0x10);
    eax = esi + 1;
    MEM32(ecx) = eax;
    MEM8(ebp + -1) = LO8(ebx);

loc_004DBD55: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004DBD58: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBD30; /* jne: not equal / not zero */

loc_004DBD62: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004DBD64: ;
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004DBD6A
 * Original: 0x004DBD6A - 0x004DBDC4 (90 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DBD6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBD6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    MEM8(ebp + -1) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_004DBDBE; /* jle: less or equal (signed <=) */

loc_004DBD7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBDBC; /* je: equal / zero */

loc_004DBD8A: ;
    PUSH32(esp, 1);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86CAC0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DBD99u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004DBD99: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBDB2; /* jne: not equal / not zero */

loc_004DBDA0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBDB1; /* jne: not equal / not zero */

loc_004DBDA5: ;
    ecx = MEM32(ebp + 0x10);
    eax = esi + 1;
    MEM32(ecx) = eax;
    MEM8(ebp + -1) = 1;

loc_004DBDB1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004DBDB2: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBD8A; /* jne: not equal / not zero */

loc_004DBDBC: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004DBDBE: ;
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004DBDC4
 * Original: 0x004DBDC4 - 0x004DBE37 (115 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004DBDC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBDC4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x90E7B8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x90E7B8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBE32; /* je: equal / zero */

loc_004DBDD5: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBE30; /* je: equal / zero */

loc_004DBDDA: ;
    _fa = (uint32_t)(MEM8(0x90E7D0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x90E7D0), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBDFD; /* je: equal / zero */

loc_004DBDE2: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004DBDEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBDEAu); } /* indirect call */
    }

loc_004DBDED: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x90E7D0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004DBDF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004DBDF6u); } /* indirect call */
    }

loc_004DBDF9: ;
    SET_LO8(ebx, LO8(eax));
    goto loc_004DBE32;

loc_004DBDFD: ;
    PUSH32(esp, 0xC);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x78756964);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004DBE0Du); RECOMP_ABI_CALL(0x00453B10u, sub_00453B10); /* call 0x00453B10 */

loc_004DBE0D: ;
    eax = MEM32(0x90E7A0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBE32; /* jne: not equal / not zero */

loc_004DBE1A: ;
    eax = MEM32(0x90E7A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004DBE32; /* jne: not equal / not zero */

loc_004DBE24: ;
    eax = MEM32(0x90E7A8);
    eax = eax ^ MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004DBE32; /* jne: not equal / not zero */

loc_004DBE30: ;
    SET_LO8(ebx, 1);

loc_004DBE32: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004DBE37
 * Original: 0x004DBE37 - 0x004DBE3D (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBE37(void)
{

loc_004DBE37: ;
    eax = 0x90E7B8;
    esp += 4; return; /* ret */

}

/**
 * sub_004DBE3D
 * Original: 0x004DBE3D - 0x004DBE43 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBE3D(void)
{

loc_004DBE3D: ;
    eax = 0x90E7C0;
    esp += 4; return; /* ret */

}

/**
 * sub_004DBE43
 * Original: 0x004DBE43 - 0x004DBE55 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBE43(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBE43: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x90E7B8) = LO8(eax);
    MEM8(0x90E7C0) = LO8(eax);
    MEM8(0x90E7D0) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_004DBE55
 * Original: 0x004DBE55 - 0x004DBE89 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBE55(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBE55: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x90E7B8);
    PUSH32(esp, 0x004DBE67u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004DBE67: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, 0x90E7C0);
    PUSH32(esp, 0x004DBE77u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004DBE77: ;
    esi = esp + 0x2C;
    edi = 0x90E7A0;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004DBEBD
 * Original: 0x004DBEBD - 0x004DBEFC (63 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004DBEBD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004DBEBD: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 0x1C) = eax;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004DBED6u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004DBED6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004DBEF4; /* je: equal / zero */

loc_004DBEE0: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x41;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004DBEEFu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004DBEEF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004DBEF8;

loc_004DBEF4: ;
    MEM8(esi + 0x41) = 0;

loc_004DBEF8: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}
