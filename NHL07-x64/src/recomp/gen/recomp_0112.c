/**
 * nhl_07_recomp - Recompiled code chunk 112
 * Functions: 250 (0x0013B520 - 0x00141740)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0013B520
 * Original: 0x0013B520 - 0x0013B551 (49 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B520(void)
{

loc_0013B520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B532u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_0013B532: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(esp + 0xC);
    edx = esi + ecx * 4 + 0x10;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B560
 * Original: 0x0013B560 - 0x0013B5B7 (87 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B560: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    edx = SX16(LO16(eax));
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM8(edi + edx * 8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + edx * 8), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013B5A5; /* je: equal / zero */

loc_0013B577: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B57Fu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_0013B57F: ;
    edx = MEM32(esp + 0x10);
    eax = ZX16(LO16(eax));
    ecx = esi + eax * 4 + 0x10;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    MEM32(edx + 8) = eax;
    ecx = MEM32(ecx + 0xC);
    POP32(esp, esi);
    MEM32(edx + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

loc_0013B5A5: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B5B2u); RECOMP_ABI_CALL(0x0057BB56u, sub_0057BB56); /* call 0x0057BB56 */

loc_0013B5B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B5D0
 * Original: 0x0013B5D0 - 0x0013B5D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B5D0: ;
    g_seh_ebp = ebp; sub_0002978B(); return; /* tail jmp 0x0002978B */

}

/**
 * sub_0013B5E0
 * Original: 0x0013B5E0 - 0x0013B617 (55 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5E0(void)
{

loc_0013B5E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B5F2u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_0013B5F2: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(esp + 0xC);
    edx = esi + ecx * 4 + 0x10;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B630
 * Original: 0x0013B630 - 0x0013B651 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B630: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B64E; /* je: equal / zero */

loc_0013B637: ;
    eax = MEM32(eax + 0xFC);
    edx = MEM32(eax + 0x94);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_0013B64E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013B660
 * Original: 0x0013B660 - 0x0013B678 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B660: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B674; /* je: equal / zero */

loc_0013B667: ;
    eax = MEM32(eax + 0xFC);
    eax = MEM32(eax + 0x94);
    esp += 4; return; /* ret */

loc_0013B674: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013B680
 * Original: 0x0013B680 - 0x0013B69B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B680(void)
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

loc_0013B680: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B694; /* je: equal / zero */

loc_0013B687: ;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x100C);
    fp_push(MEMF(edx + ecx * 4)); /* fld float */
    esp += 4; return; /* ret */

loc_0013B694: ;
    fp_push(MEMF(0x7AACB4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B6B0
 * Original: 0x0013B6B0 - 0x0013B6D1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6B0(void)
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

loc_0013B6B0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B6CA; /* je: equal / zero */

loc_0013B6B7: ;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x100C);
    fp_push(MEMF(edx + ecx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    esp += 4; return; /* ret */

loc_0013B6CA: ;
    fp_push(MEMF(0x7AACB4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B6E0
 * Original: 0x0013B6E0 - 0x0013B706 (38 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6E0(void)
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

loc_0013B6E0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B6FD; /* je: equal / zero */

loc_0013B6E7: ;
    eax = MEM32(eax + 0x100C);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + ecx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    esp += 8; return; /* ret 4 */

loc_0013B6FD: ;
    fp_push(MEMF(0x7AACB4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B710
 * Original: 0x0013B710 - 0x0013B735 (37 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B710: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B732; /* je: equal / zero */

loc_0013B717: ;
    eax = MEM32(eax + 0x100);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B732; /* je: equal / zero */

loc_0013B724: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x478) = xmm0.f[0]; /* movss */

loc_0013B732: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B740
 * Original: 0x0013B740 - 0x0013B777 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B740(void)
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

loc_0013B740: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B76F; /* je: equal / zero */

loc_0013B748: ;
    eax = MEM32(eax + 0x100);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B765; /* je: equal / zero */

loc_0013B75D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x478)); /* movss */

loc_0013B765: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013B76F: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B790
 * Original: 0x0013B790 - 0x0013B79F (15 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B790: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B79C; /* je: equal / zero */

loc_0013B797: ;
    g_seh_ebp = ebp; sub_0001C4EB(); return; /* tail jmp 0x0001C4EB */

loc_0013B79C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B7B0
 * Original: 0x0013B7B0 - 0x0013B7CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B7B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DE280;
    if (TEST_Z(_fa, _fb)) goto loc_0013B7C9; /* je: equal / zero */

loc_0013B7C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013B7C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013B7C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013B7C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B7E0
 * Original: 0x0013B7E0 - 0x0013B807 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0013B7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B7E0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013B804; /* jne: not equal / not zero */

loc_0013B7E7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0013B7F0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013B7F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B804; /* je: equal / zero */

loc_0013B7F7: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0013B803u); RECOMP_ABI_CALL(0x0003623Du, sub_0003623D); /* call 0x0003623D */

loc_0013B803: ;
    esp += 4; return; /* ret */

loc_0013B804: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013B810
 * Original: 0x0013B810 - 0x0013B827 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B810: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4 + 0x10);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00019331(); return; /* tail jmp 0x00019331 */

}

/**
 * sub_0013B830
 * Original: 0x0013B830 - 0x0013B84E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B830: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0013B838u); RECOMP_ABI_CALL(0x00016807u, sub_00016807); /* call 0x00016807 */

loc_0013B838: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013B848; /* je: equal / zero */

loc_0013B83F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013B845u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013B845: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013B848: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B860
 * Original: 0x0013B860 - 0x0013BB23 (707 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B860: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF4);
    esi = ecx;
    PUSH32(esp, 0x0013B873u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013B873: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA0);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0013B882u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013B882: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF4);
    MEM32(esi + 0x1014) = eax;
    PUSH32(esp, 0x0013B894u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013B894: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x100C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0013B8A0: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + ecx) = 0xFFFFFFFFu;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013B8A0; /* jl: less (signed <) */

loc_0013B8B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013B8C0;

    /* nop */
    /* nop */

loc_0013B8C0: ;
    edx = MEM32(esi + 0x1014);
    MEM16(eax + edx) = 0xFFFF;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013B8C0; /* jb: below (unsigned <) */

loc_0013B8D6: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013B8E0: ;
    ecx = MEM32(esi + 0x100C);
    MEMF(eax + ecx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013B8E0; /* jl: less (signed <) */

loc_0013B8F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x10;
    ecx = 0x3FD;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x1004);
    PUSH32(esp, 0x7DD1DC);
    PUSH32(esp, 0x0013B911u); RECOMP_ABI_CALL(0x0001FA1Au, sub_0001FA1A); /* call 0x0001FA1A */

loc_0013B911: ;
    edi = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B928; /* jne: not equal / not zero */

loc_0013B91A: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0013B925u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0013B925: ;
    MEM32(edi + 8) = eax;

loc_0013B928: ;
    edi = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0xB (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1010) = eax;
    MEM8(eax + 0xD) = 0;
    eax = MEM32(esi + 0x1010);
    edi = MEM32(eax + 0x14);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B960; /* jne: not equal / not zero */

loc_0013B952: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0013B95Du); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0013B95D: ;
    MEM32(edi + 8) = eax;

loc_0013B960: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esi + 0x1008);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    PUSH32(esp, ebx);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edx;
    ebx = MEM32(edi + 0x54);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0013B98Bu); RECOMP_ABI_CALL(0x00014B2Eu, sub_00014B2E); /* call 0x00014B2E */

loc_0013B98B: ;
    ecx = eax;
    PUSH32(esp, 0x0013B992u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0013B992: ;
    PUSH32(esp, 0x0013B997u); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_0013B997: ;
    eax = MEM32(eax + 0x28);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0013BAEB; /* jle: less or equal (signed <=) */

loc_0013B9AC: ;
    PUSH32(esp, ebp);
    goto loc_0013B9B7;

loc_0013B9AF: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_0013B9B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013B9C8; /* jl: less (signed <) */

loc_0013B9BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013B9C8; /* jge: greater or equal (signed >=) */

loc_0013B9C0: ;
    ecx = MEM32(edi + 0x58);
    edi = ecx + eax * 4;
    goto loc_0013B9CB;

loc_0013B9C8: ;
    edi = MEM32(edi + 0x58);

loc_0013B9CB: ;
    edi = MEM32(edi);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B9E2; /* jne: not equal / not zero */

loc_0013B9D4: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0013B9DFu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0013B9DF: ;
    MEM32(edi + 8) = eax;

loc_0013B9E2: ;
    eax = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx;
    ebp = MEM32(edi + 0x34);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BA0C; /* jne: not equal / not zero */

loc_0013B9FE: ;
    edx = ebp + 4;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0013BA09u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0013BA09: ;
    MEM32(ebp + 8) = eax;

loc_0013BA0C: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0013BA2Au); RECOMP_ABI_CALL(0x00015D26u, sub_00015D26); /* call 0x00015D26 */

loc_0013BA2A: ;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0013BA30: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + ebp * 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013BA3Du); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0013BA3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BA50; /* je: equal / zero */

loc_0013BA44: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013BA30; /* jl: less (signed <) */

loc_0013BA4D: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013BA50: ;
    ebx = MEM32(edi + 0x34);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BA68; /* jne: not equal / not zero */

loc_0013BA5A: ;
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0013BA65u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0013BA65: ;
    MEM32(ebx + 8) = eax;

loc_0013BA68: ;
    eax = MEM32(ebx + 8);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x24); /* addss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7A9980); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    if (CMP_L(_fas, _fbs)) goto loc_0013BABD; /* jl: less (signed <) */

loc_0013BA9C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013BABD; /* jge: greater or equal (signed >=) */

loc_0013BAA4: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + ebp * 4) = ecx;
    edx = MEM32(esi + 0x100C);
    MEMF(edx + ebp * 4) = xmm0.f[0]; /* movss */
    MEM32(esi + ebp * 4 + 0x10) = edi;

loc_0013BABD: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013BAD5; /* jae: above or equal (unsigned >=) */

loc_0013BACB: ;
    ecx = MEM32(esi + 0x1014);
    MEM16(ecx + eax * 2) = LO16(ebp);

loc_0013BAD5: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0013B9AF; /* jl: less (signed <) */

loc_0013BAEA: ;
    POP32(esp, ebp);

loc_0013BAEB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    edi = edi;

loc_0013BAF0: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edi + edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013BAFCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013BAFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013BAF0; /* jl: less (signed <) */

loc_0013BB0A: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013BB13u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013BB13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013BBE0
 * Original: 0x0013BBE0 - 0x0013BBF0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013BBE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0013BBE8u); RECOMP_ABI_CALL(0x00034BEAu, sub_00034BEA); /* call 0x00034BEA */

loc_0013BBE8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00033D8A(); return; /* tail jmp 0x00033D8A */

}

/**
 * sub_0013BC00
 * Original: 0x0013BC00 - 0x0013BC9A (154 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013BC00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x7DE4F8;
    if (CMP_EQ(_fa, _fb)) goto loc_0013BC3D; /* je: equal / zero */

loc_0013BC12: ;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BC24; /* je: equal / zero */

loc_0013BC20: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BC3D; /* jne: not equal / not zero */

loc_0013BC24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BC2F; /* je: equal / zero */

loc_0013BC28: ;
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013BC31;

loc_0013BC2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013BC31: ;
    PUSH32(esp, eax);
    ecx = esi + 0x370;
    PUSH32(esp, 0x0013BC3Du); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_0013BC3D: ;
    ebx = esi + 0x110;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BC4F; /* je: equal / zero */

loc_0013BC47: ;
    eax = esi + 0x2F0;
    goto loc_0013BC51;

loc_0013BC4F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013BC51: ;
    edi = esi + 0x370;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0013BC5Fu); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_0013BC5F: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BC6C; /* je: equal / zero */

loc_0013BC66: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013BC6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013BC6Au); } /* indirect call */
    }

loc_0013BC6C: ;
    ecx = edi;
    MEM32(edi) = 0x7DE1B8;
    PUSH32(esp, 0x0013BC79u); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_0013BC79: ;
    ecx = ebx;
    MEM32(ebx) = 0x7DE370;
    MEM32(ebx + 0x1E0) = 0x7DE368;
    PUSH32(esp, 0x0013BC90u); RECOMP_ABI_CALL(0x0002C530u, sub_0002C530); /* call 0x0002C530 */

loc_0013BC90: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0001CABD(); return; /* tail jmp 0x0001CABD */

}

/**
 * sub_0013BCC0
 * Original: 0x0013BCC0 - 0x0013BCDE (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BCC0(void)
{

loc_0013BCC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esi + 0x37C) = eax;
    PUSH32(esp, 0x0013BCD3u); RECOMP_ABI_CALL(0x0002F2BCu, sub_0002F2BC); /* call 0x0002F2BC */

loc_0013BCD3: ;
    MEM8(esi + 0x382) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013BCF0
 * Original: 0x0013BCF0 - 0x0013BD17 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013BCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013BCF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0013BCFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013BCF8u); } /* indirect call */
    }

loc_0013BCFB: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) / fp_top()); /* fdivr dword ptr [esp + 0xc] */
    ecx = MEM32(esi + 0xFC);
    edx = MEM32(ecx);
    POP32(esp, esi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013BD20
 * Original: 0x0013BD20 - 0x0013BD56 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BD20(void)
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

loc_0013BD20: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x100);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BD38; /* je: equal / zero */

loc_0013BD2E: ;
    edx = MEM32(eax + 0x208);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BD40; /* jne: not equal / not zero */

loc_0013BD38: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013BD40: ;
    edx = MEM32(eax + 0x1C0);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    MEM32(esp) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0013BD51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013BD4Eu); } /* indirect call */
    }

loc_0013BD51: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013BD70
 * Original: 0x0013BD70 - 0x0013BDA9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BD70(void)
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

loc_0013BD70: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x100);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BD88; /* je: equal / zero */

loc_0013BD7E: ;
    edx = MEM32(eax + 0x208);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BD90; /* jne: not equal / not zero */

loc_0013BD88: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013BD90: ;
    edx = MEM32(eax + 0x1C8);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(ecx + 0x44);
    edx = MEM32(ecx);
    MEM32(esp) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0013BDA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013BDA1u); } /* indirect call */
    }

loc_0013BDA4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013BDC0
 * Original: 0x0013BDC0 - 0x0013BE11 (81 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BDC0(void)
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

loc_0013BDC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xFC);
    ecx = MEM32(eax + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BE0C; /* je: equal / zero */

loc_0013BDD4: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0013BDDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013BDD9u); } /* indirect call */
    }

loc_0013BDDC: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x100);
    eax = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 4); /* divss */
    MEM8(eax + 0x50A) = 1;
    MEMF(eax + 0x1C0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1BC) = xmm0.f[0]; /* movss */

loc_0013BE0C: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013BE30
 * Original: 0x0013BE30 - 0x0013BF2A (250 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013BE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BE30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xD4);
    edx = MEM32(eax + 0x3C);
    eax = MEM32(ecx + 0xFC);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC4);
    eax = MEM32(0x8AED04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BE9E; /* je: equal / zero */

loc_0013BE63: ;
    eax = MEM32(0x8F0684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BE91; /* jne: not equal / not zero */

loc_0013BE6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BE77u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013BE77: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BE8A; /* je: equal / zero */

loc_0013BE7E: ;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = 0;
    goto loc_0013BE8C;

loc_0013BE8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013BE8C: ;
    MEM32(0x8F0684) = eax;

loc_0013BE91: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BE9Eu); RECOMP_ABI_CALL(0x00031567u, sub_00031567); /* call 0x00031567 */

loc_0013BE9E: ;
    eax = MEM32(0x8F0684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BECC; /* jne: not equal / not zero */

loc_0013BEA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013BEB2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013BEB2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BEC5; /* je: equal / zero */

loc_0013BEB9: ;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = 0;
    goto loc_0013BEC7;

loc_0013BEC5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013BEC7: ;
    MEM32(0x8F0684) = eax;

loc_0013BECC: ;
    ecx = MEM32(0x8F0688);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BF25; /* je: equal / zero */

loc_0013BED6: ;
    eax = MEM32(eax + 0xBC);
    xmm0 = XMM_SCALAR(MEMF(0x8AED20)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x8AED20)); /* movss */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x8AED20)); /* movss */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */

loc_0013BF25: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013BF70
 * Original: 0x0013BF70 - 0x0013BFE5 (117 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BF70: ;
    eax = MEM32(ecx + 0x110);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0013BF81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013BF7Eu); } /* indirect call */
    }

loc_0013BF81: ;
    esi = MEM32(eax + 0xC4);
    eax = MEM32(eax + 0xC0);
    PUSH32(esp, 0x7DE51C);
    ecx = eax;
    PUSH32(esp, 0x0013BF99u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_0013BF99: ;
    ecx = MEM32(0x8F0684);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0013BFDB; /* jne: not equal / not zero */

loc_0013BFA5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0013BFB0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013BFB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BFD3; /* je: equal / zero */

loc_0013BFB7: ;
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = 0;
    PUSH32(esp, esi);
    MEM32(0x8F0684) = ecx;
    PUSH32(esp, 0x0013BFD0u); RECOMP_ABI_CALL(0x00018BD4u, sub_00018BD4); /* call 0x00018BD4 */

loc_0013BFD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013BFD3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F0684) = ecx;

loc_0013BFDB: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013BFE2u); RECOMP_ABI_CALL(0x00018BD4u, sub_00018BD4); /* call 0x00018BD4 */

loc_0013BFE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C010
 * Original: 0x0013C010 - 0x0013C0DD (205 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C010(void)
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

loc_0013C010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0013C01Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C019u); } /* indirect call */
    }

loc_0013C01C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C0D3; /* je: equal / zero */

loc_0013C025: ;
    ecx = MEM32(esi + 0x100);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C037; /* jne: not equal / not zero */

loc_0013C032: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0013C066;

loc_0013C037: ;
    ecx = MEM32(eax + 0x208);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C046; /* jne: not equal / not zero */

loc_0013C041: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0013C066;

loc_0013C046: ;
    edx = MEM32(eax + 0x1C0);
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0013C058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C055u); } /* indirect call */
    }

loc_0013C058: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_0013C066: ;
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0013C07Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C07Au); } /* indirect call */
    }

loc_0013C07D: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    eax = MEM32(ecx);
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0013C0D6; /* jl: less (signed <) */

loc_0013C091: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0013C096u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C093u); } /* indirect call */
    }

loc_0013C096: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013C09Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C09Bu); } /* indirect call */
    }

loc_0013C09E: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0013C0A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C0A3u); } /* indirect call */
    }

loc_0013C0A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013C0BD; /* je: equal / zero */

loc_0013C0AA: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0013C0B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C0B1u); } /* indirect call */
    }

loc_0013C0B4: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0013C0BDu); RECOMP_ABI_CALL(0x0001766Cu, sub_0001766C); /* call 0x0001766C */

loc_0013C0BD: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0013C0C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C0C2u); } /* indirect call */
    }

loc_0013C0C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013C0D3; /* je: equal / zero */

loc_0013C0C9: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0013C0D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C0D0u); } /* indirect call */
    }

loc_0013C0D3: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013C0D6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013C110
 * Original: 0x0013C110 - 0x0013C257 (327 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013C110: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esi + 0x37C) = eax;
    PUSH32(esp, 0x0013C126u); RECOMP_ABI_CALL(0x0002F2BCu, sub_0002F2BC); /* call 0x0002F2BC */

loc_0013C126: ;
    eax = MEM32(esi + 0x100);
    MEM8(esi + 0x382) = 1;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C14A; /* je: equal / zero */

loc_0013C13A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x488) = xmm0.f[0]; /* movss */

loc_0013C14A: ;
    ecx = MEM32(esi + 0xFC);
    eax = MEM32(ecx + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C194; /* je: equal / zero */

loc_0013C15A: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0013C162u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C15Fu); } /* indirect call */
    }

loc_0013C162: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x100);
    eax = MEM32(eax + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x14); /* divss */
    MEM8(eax + 0x50A) = 1;
    MEMF(eax + 0x1C0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1BC) = xmm1.f[0]; /* movss */
    goto loc_0013C197;

loc_0013C194: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0013C197: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7AA820); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013C242; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013C1BA: ;
    goto loc_0013C1C0;

loc_0013C1BC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    /* nop */

loc_0013C1C0: ;
    edx = MEM32(esi + 0xD4);
    ecx = esp + 4;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x0013C1E5u); RECOMP_ABI_CALL(0x0002E862u, sub_0002E862); /* call 0x0002E862 */

loc_0013C1E5: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AED30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013C1FA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013C1F5: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0013C20A;

loc_0013C1FA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0013C20A; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0013C206: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0013C20A: ;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax + 0x20);
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013C21Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013C21Cu); } /* indirect call */
    }

loc_0013C21F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0013C1BC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013C242: ;
    MEM8(esi + 0x380) = 0;
    MEM8(esi + 0x381) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013C2B0
 * Original: 0x0013C2B0 - 0x0013C2DE (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C2B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DE370;
    MEM32(esi + 0x1E0) = 0x7DE368;
    PUSH32(esp, 0x0013C2C8u); RECOMP_ABI_CALL(0x0002C530u, sub_0002C530); /* call 0x0002C530 */

loc_0013C2C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013C2D8; /* je: equal / zero */

loc_0013C2CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013C2D5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013C2D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013C2D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013C2F0
 * Original: 0x0013C2F0 - 0x0013C31F (47 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C2F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x7DE3D4;
    PUSH32(esp, 0x0013C305u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013C305: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013C319; /* je: equal / zero */

loc_0013C310: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013C316u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013C316: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013C319: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013C330
 * Original: 0x0013C330 - 0x0013C365 (53 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C330: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C361; /* jne: not equal / not zero */

loc_0013C33A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x0013C346u); RECOMP_ABI_CALL(0x0002A4ECu, sub_0002A4EC); /* call 0x0002A4EC */

loc_0013C346: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0xDC) = eax;
    PUSH32(esp, 0x0013C354u); RECOMP_ABI_CALL(0x0002AB27u, sub_0002AB27); /* call 0x0002AB27 */

loc_0013C354: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013C35Cu); RECOMP_ABI_CALL(0x00016357u, sub_00016357); /* call 0x00016357 */

loc_0013C35C: ;
    MEM8(esi + 0x10) = 1;
    POP32(esp, edi);

loc_0013C361: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013C380
 * Original: 0x0013C380 - 0x0013C3BB (59 bytes, 21 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C380: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C3A0; /* jne: not equal / not zero */

loc_0013C389: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013C39Du); RECOMP_ABI_CALL(0x0002065Eu, sub_0002065E); /* call 0x0002065E */

loc_0013C39D: ;
    esp += 20; return; /* ret 16 */

loc_0013C3A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C3B8; /* jne: not equal / not zero */

loc_0013C3A4: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013C3B8u); RECOMP_ABI_CALL(0x00029C2Cu, sub_00029C2C); /* call 0x00029C2C */

loc_0013C3B8: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0013C3D0
 * Original: 0x0013C3D0 - 0x0013C561 (401 bytes, 89 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013C3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C3D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    xmm3 = XMM_SCALAR(MEMF(0x8AED18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x8AED14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x8AED10)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + edx * 4 + 0xA0);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_MEM(esp + 0x10); /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm3 = XMM_ADD(xmm3, xmm0); /* addps */
    esi = MEM32(ebp + 8);
    eax = eax + esi + 0x30;
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    XMM_STORE(esp + 0x10, xmm3); /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + edx * 4 + 0xA8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(eax + esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(eax + esi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + esi + 0x34); /* addss */
    eax = eax + esi + 0x30;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + edx * 4 + 0xB0);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(ecx + esi + 0x34)); /* movss */
    edx = MEM32(ecx + esi + 0x30);
    eax = ecx + esi + 0x30;
    ecx = MEM32(eax + 8);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013C5D0
 * Original: 0x0013C5D0 - 0x0013C605 (53 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C5D0: ;
    eax = MEM32(0x8AED08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C602; /* je: equal / zero */

loc_0013C5D9: ;
    edx = MEM32(ecx + 0xC0);
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0xBC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013C5FFu); RECOMP_ABI_CALL(0x0001548Eu, sub_0001548E); /* call 0x0001548E */

loc_0013C5FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013C602: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013C620
 * Original: 0x0013C620 - 0x0013C6CA (170 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C620: ;
    eax = MEM32(0x8F0688);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013C6C3; /* je: equal / zero */

loc_0013C633: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0xBC));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0013C663u); RECOMP_ABI_CALL(0x00028B47u, sub_00028B47); /* call 0x00028B47 */

loc_0013C663: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AED20)); /* movss */
    edi = (uint32_t)(int32_t)SMEM16(edi + 0xBC);
    ecx = MEM32(esi + 0xC);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0013C6A7u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_0013C6A7: ;
    ecx = MEM32(esp + 8);
    edx = ZX16(LO16(eax));
    eax = esi + edx * 4 + 0x10;
    edx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);

loc_0013C6C3: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013C700
 * Original: 0x0013C700 - 0x0013C838 (312 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013C700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C700: ;
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
    ebx = ecx;
    eax = MEM32(ebx + 0xDC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0013C82F; /* jle: less or equal (signed <=) */

loc_0013C71E: ;
    edi = MEM32(ebp + 8);

loc_0013C721: ;
    eax = MEM32(0x8F068C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C73A; /* jne: not equal / not zero */

loc_0013C72A: ;
    eax = MEM32(ebx + 0xE0);
    _fa = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + esi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C820; /* je: equal / zero */

loc_0013C73A: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx + 0xC);
    edx = SX16(LO16(esi));
    _fa = (uint32_t)(MEM8(eax + edx * 8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + edx * 8), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013C820; /* je: equal / zero */

loc_0013C74D: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C755u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_0013C755: ;
    ecx = ZX16(LO16(eax));
    edx = edi + ecx * 4 + 0x10;
    eax = MEM32(edx);
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(edx + 4);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x14) = ecx;
    eax = MEM32(edx + 8);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(edx + 0xC);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x1C) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = MEM32(edi + 0xC);
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    PUSH32(esp, 8);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013C7FEu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_0013C7FE: ;
    ecx = MEM32(esp + 0x10);
    edx = ZX16(LO16(eax));
    eax = edi + edx * 4 + 0x10;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;

loc_0013C820: ;
    eax = MEM32(ebx + 0xDC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013C721; /* jl: less (signed <) */

loc_0013C82F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013C890
 * Original: 0x0013C890 - 0x0013C960 (208 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C890: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM8(eax + 0x4D) = LO8(ecx);
    MEM8(eax + 0x4E) = LO8(ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x8B5500);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(0x8B5504);
    MEM32(edx + 4) = esi;
    esi = MEM32(0x8B5508);
    MEM32(edx + 8) = esi;
    esi = MEM32(0x8B550C);
    MEM32(edx + 0xC) = esi;
    edx = MEM32(0x8B54C0);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(0x8B54C4);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(0x8B54C8);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(0x8B54CC);
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x3C) = ecx;
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x4C) = 1;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C9A0
 * Original: 0x0013C9A0 - 0x0013CB82 (482 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013C9A0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    xmm3 = XMM_SCALAR(MEMF(0x8AED40)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x14); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013CB3E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0013CB35: ;
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */

loc_0013CB3E: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DDD4C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013CB59; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0013CB50: ;
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + 0x28) = xmm4.f[0]; /* movss */

loc_0013CB59: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013CB67; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0013CB5E: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */

loc_0013CB67: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013CB7A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013CB71: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */

loc_0013CB7A: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000199D5(); return; /* tail jmp 0x000199D5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013CC00
 * Original: 0x0013CC00 - 0x0013CD56 (342 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013CC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013CC00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x4C));
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AACB4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013CC23; /* jp: parity */

loc_0013CC1E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0013CC2D;

loc_0013CC23: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x38); /* subss */

loc_0013CC2D: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013CC4B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013CC3A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x4D) = 1;

loc_0013CC4B: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC59; /* je: equal / zero */

loc_0013CC52: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC91; /* je: equal / zero */

loc_0013CC59: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    eax = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x48, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CC8Au); RECOMP_ABI_CALL(0x0059FAC6u, sub_0059FAC6); /* call 0x0059FAC6 */

loc_0013CC8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x4C) = 0;

loc_0013CC91: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CCAB; /* je: equal / zero */

loc_0013CC98: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0013CCA4; /* je: equal / zero */

loc_0013CC9D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CCA4u); RECOMP_ABI_CALL(0x0001A8E4u, sub_0001A8E4); /* call 0x0001A8E4 */

loc_0013CCA4: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013CCABu); RECOMP_ABI_CALL(0x000216B2u, sub_000216B2); /* call 0x000216B2 */

loc_0013CCAB: ;
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEM8(esi + 0x4D) = 0;
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013CD4F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0013CD13: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */

loc_0013CD4F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013CDB0
 * Original: 0x0013CDB0 - 0x0013CDB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CDB0: ;
    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_0001210D(); return; /* tail jmp 0x0001210D */

}

/**
 * sub_0013CDC0
 * Original: 0x0013CDC0 - 0x0013CE0A (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CDC0(void)
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

loc_0013CDC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CE02; /* je: equal / zero */

loc_0013CDC8: ;
    eax = MEM32(ecx + 0x100);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CDE2; /* jne: not equal / not zero */

loc_0013CDD5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013CDE2: ;
    edx = MEM32(eax + 0x208);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CDD5; /* je: equal / zero */

loc_0013CDEC: ;
    edx = MEM32(eax + 0x1C0);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    MEM32(esp) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0013CDFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013CDFAu); } /* indirect call */
    }

loc_0013CDFD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013CE02: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013CE20
 * Original: 0x0013CE20 - 0x0013CE6D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE20(void)
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

loc_0013CE20: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CE65; /* je: equal / zero */

loc_0013CE28: ;
    eax = MEM32(ecx + 0x100);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CE42; /* jne: not equal / not zero */

loc_0013CE35: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013CE42: ;
    edx = MEM32(eax + 0x208);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CE35; /* je: equal / zero */

loc_0013CE4C: ;
    edx = MEM32(eax + 0x1C8);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(ecx + 0x44);
    edx = MEM32(ecx);
    MEM32(esp) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0013CE60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013CE5Du); } /* indirect call */
    }

loc_0013CE60: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013CE65: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013CE80
 * Original: 0x0013CE80 - 0x0013CF7F (255 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013CE80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CF74; /* je: equal / zero */

loc_0013CE91: ;
    eax = MEM32(ecx + 0x100);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CEA9; /* jne: not equal / not zero */

loc_0013CE9E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    goto loc_0013CEDB;

loc_0013CEA9: ;
    edx = MEM32(eax + 0x208);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CEBE; /* jne: not equal / not zero */

loc_0013CEB3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0013CED8;

loc_0013CEBE: ;
    edx = MEM32(eax + 0x1C0);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    MEM32(esp + 8) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0013CED0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013CECDu); } /* indirect call */
    }

loc_0013CED0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0013CED8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_0013CEDB: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x100);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CEF0; /* jne: not equal / not zero */

loc_0013CEEB: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0013CF25;

loc_0013CEF0: ;
    edx = MEM32(eax + 0x208);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CEFF; /* jne: not equal / not zero */

loc_0013CEFA: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0013CF25;

loc_0013CEFF: ;
    eax = MEM32(eax + 0x1C8);
    edx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    MEM32(esp + 8) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0013CF14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013CF11u); } /* indirect call */
    }

loc_0013CF14: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_0013CF25: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm2; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0013CF62; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013CF3D: ;
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013CF5D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0013CF4A: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013CF5D: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013CF68; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013CF62: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_0013CF68: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013CF74: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, esi);
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
 * sub_0013CFC0
 * Original: 0x0013CFC0 - 0x0013CFDC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CFC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(edx + 4);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00015BF0(); return; /* tail jmp 0x00015BF0 */

}

/**
 * sub_0013CFF0
 * Original: 0x0013CFF0 - 0x0013D0AA (186 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0013CFF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(edi + 0x14);
    MEM32(esi + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D08C; /* je: equal / zero */

loc_0013D010: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D0A0; /* je: equal / zero */

loc_0013D01B: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D025u); RECOMP_ABI_CALL(0x0002CD69u, sub_0002CD69); /* call 0x0002CD69 */

loc_0013D025: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 4);
    edx = MEM32(edi);
    eax = MEM32(eax + edx * 4);
    ebx = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebx + 0x37C) = eax;
    PUSH32(esp, 0x0013D041u); RECOMP_ABI_CALL(0x0002F2BCu, sub_0002F2BC); /* call 0x0002F2BC */

loc_0013D041: ;
    MEM8(ebx + 0x382) = 1;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x100);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0013D06E; /* je: equal / zero */

loc_0013D059: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(eax + 0x488) = xmm0.f[0]; /* movss */

loc_0013D06E: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013D096; /* jnp: not parity */

loc_0013D080: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D08Cu); RECOMP_ABI_CALL(0x0001766Cu, sub_0001766C); /* call 0x0001766C */

loc_0013D08C: ;
    ecx = MEM32(edi);
    POP32(esp, edi);
    MEM32(esi + 0x28) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0013D096: ;
    edx = MEM32(edi);
    POP32(esp, edi);
    MEM32(esi + 0x28) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0013D0A0: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D0E0
 * Original: 0x0013D0E0 - 0x0013D13A (90 bytes, 33 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D0E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013D0E0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    eax = eax + edx * 8;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    ecx = MEM32(esi + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x9018A0);
    eax = MEM32(esp + 0x10);
    ebx = MEM32(edx + eax * 4 + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0013D10Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D108u); } /* indirect call */
    }

loc_0013D10B: ;
    edx = MEM32(esp + 0x28);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) / fp_top()); /* fdivr dword ptr [esp + 0x14] */
    ecx = MEM32(esi + 0xFC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0013D134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D131u); } /* indirect call */
    }

loc_0013D134: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013D150
 * Original: 0x0013D150 - 0x0013D1C5 (117 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D150: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x100);
    MEM32(edi) = 0x7DE338;
    MEM32(edi + 0x1004) = eax;
    MEM32(edi + 0x1008) = ecx;
    PUSH32(esp, 0xFF4);
    MEM32(0x8F0680) = edi;
    PUSH32(esp, 0x0013D183u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013D183: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013D190;

    /* nop */

loc_0013D190: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0013D19Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013D19C: ;
    edx = MEM32(edi + 0xC);
    MEM32(esi + edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013D190; /* jl: less (signed <) */

loc_0013D1B0: ;
    ecx = edi;
    PUSH32(esp, 0x0013D1B7u); RECOMP_ABI_CALL(0x00034BEAu, sub_00034BEA); /* call 0x00034BEA */

loc_0013D1B7: ;
    ecx = edi;
    PUSH32(esp, 0x0013D1BEu); RECOMP_ABI_CALL(0x00033D8Au, sub_00033D8A); /* call 0x00033D8A */

loc_0013D1BE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D1F0
 * Original: 0x0013D1F0 - 0x0013D650 (1120 bytes, 271 insns)
 * Category: game_vtable
 * CC: thiscall, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013D1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D1F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D20Du); RECOMP_ABI_CALL(0x00019D31u, sub_00019D31); /* call 0x00019D31 */

loc_0013D20D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi) = 0x7DE4F8;
    MEM32(esi + 0x44) = 0;
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm1.f[0]; /* movss */
    edi = esi + 0x90;
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 4);
    ecx = esi + 0x110;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D2C2u); RECOMP_ABI_CALL(0x00034B18u, sub_00034B18); /* call 0x00034B18 */

loc_0013D2C2: ;
    ebx = esi + 0x370;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D2CFu); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0013D2CF: ;
    MEM32(ebx) = 0x7DE1B8;
    ebx = esi + 0x390;
    ecx = ebx;
    MEM32(esi + 0x37C) = 0xFFFFFFFFu;
    MEM8(esi + 0x380) = 0;
    MEM8(esi + 0x381) = 0;
    MEM8(esi + 0x383) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D301u); RECOMP_ABI_CALL(0x000111DBu, sub_000111DB); /* call 0x000111DB */

loc_0013D301: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x3F0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3F4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3F8) = xmm0.f[0]; /* movss */
    eax = esi + 0x3F0;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x408) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x410) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x408;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8F95C0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    MEM32(eax) = ecx;
    edx = MEM32(0x8F95C4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x8F95C8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x8F95CC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = ecx;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    MEM32(esi + 0xA8) = edx;
    PUSH32(esp, 0x28);
    MEM32(esi + 0xAC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D3B5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013D3B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D3CD; /* je: equal / zero */

loc_0013D3BC: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D3CBu); RECOMP_ABI_CALL(0x0002E335u, sub_0002E335); /* call 0x0002E335 */

loc_0013D3CB: ;
    goto loc_0013D3CF;

loc_0013D3CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013D3CF: ;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(eax + 4);
    MEM32(esi + 0x100) = eax;
    eax = MEM32(eax + 0x18);
    MEM32(esi + 0xFC) = eax;
    edx = MEM32(eax + 0xC0);
    eax = MEM32(0x8F0684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0013D41C; /* jne: not equal / not zero */

loc_0013D3F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D402u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013D402: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D415; /* je: equal / zero */

loc_0013D409: ;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = 0;
    goto loc_0013D417;

loc_0013D415: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013D417: ;
    MEM32(0x8F0684) = eax;

loc_0013D41C: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0013D45A; /* jne: not equal / not zero */

loc_0013D42C: ;
    ecx = MEM32(esp + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D435u); RECOMP_ABI_CALL(0x0002A4ECu, sub_0002A4EC); /* call 0x0002A4EC */

loc_0013D435: ;
    MEM32(edi + 0xDC) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D447u); RECOMP_ABI_CALL(0x0002AB27u, sub_0002AB27); /* call 0x0002AB27 */

loc_0013D447: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D453u); RECOMP_ABI_CALL(0x00016357u, sub_00016357); /* call 0x00016357 */

loc_0013D453: ;
    edx = MEM32(esp + 0x1C);
    MEM8(edx) = 1;

loc_0013D45A: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax + 8);
    edi = MEM32(ebp + 8);
    edx = MEM32(edi);
    MEM32(esp + 0x1C) = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0013D46Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D46Bu); } /* indirect call */
    }

loc_0013D46E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0013D476u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D473u); } /* indirect call */
    }

loc_0013D476: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0013D47Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D47Bu); } /* indirect call */
    }

loc_0013D47E: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xFC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esi + 0x110;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D4ACu); RECOMP_ABI_CALL(0x00011555u, sub_00011555); /* call 0x00011555 */

loc_0013D4AC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D4B8; /* je: equal / zero */

loc_0013D4B0: ;
    eax = esi + 0x2F0;
    goto loc_0013D4BA;

loc_0013D4B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013D4BA: ;
    PUSH32(esp, 0);
    edi = esi + 0x370;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D4CAu); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0013D4CA: ;
    ecx = MEM32(esi + 0x100);
    MEM32(ecx + 0x2C) = edi;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(esi + 0x70) = edx;
    MEM32(esi + 0x74) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x7C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    eax = esi + 0x80;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0xFC);
    ecx = MEM32(eax + 0xC0);
    PUSH32(esp, 0x7DE46C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D57Eu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_0013D57E: ;
    ecx = MEM32(ebp + 0x28);
    edi = eax;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0xFC);
    ecx = MEM32(ecx + 0xC0);
    PUSH32(esp, 0x7DE464);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D59Eu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_0013D59E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(ebp + 0x28);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(ebx + 0x20) = edi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x24) = eax;
    MEM8(esi + 0x3E0) = 0;
    eax = MEM32(0x8B5500);
    edx = esi + 0x430;
    MEM32(edx) = eax;
    ecx = MEM32(0x8B5504);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8B5508);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x8B550C);
    MEM32(edx + 0xC) = ecx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xD8) = eax;
    MEMF(esi + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xDC) = eax;
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xE0) = eax;
    POP32(esp, edi);
    MEMF(esi + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0013D770
 * Original: 0x0013D770 - 0x0013D78E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D770: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0013D778u); RECOMP_ABI_CALL(0x0002AEC9u, sub_0002AEC9); /* call 0x0002AEC9 */

loc_0013D778: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013D788; /* je: equal / zero */

loc_0013D77F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013D785u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013D785: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D788: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D7A0
 * Original: 0x0013D7A0 - 0x0013D7F9 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D7A0: ;
    eax = MEM32(ecx + 0xFC);
    ecx = MEM32(eax + 0xF8);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4 + 0xEC);
    eax = MEM32(0x8F0684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D7EF; /* jne: not equal / not zero */

loc_0013D7BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0013D7C8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013D7C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D7E8; /* je: equal / zero */

loc_0013D7CF: ;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = 0;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(0x8F0684) = eax;
    PUSH32(esp, 0x0013D7E6u); RECOMP_ABI_CALL(0x00034393u, sub_00034393); /* call 0x00034393 */

loc_0013D7E6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013D7E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F0684) = eax;

loc_0013D7EF: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0013D7F7u); RECOMP_ABI_CALL(0x00034393u, sub_00034393); /* call 0x00034393 */

loc_0013D7F7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D810
 * Original: 0x0013D810 - 0x0013D848 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D810(void)
{

loc_0013D810: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xFC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    edx = esi + 0x60;
    PUSH32(esp, edx);
    edx = esi + 0x50;
    PUSH32(esp, edx);
    edx = esi + 0x80;
    PUSH32(esp, edx);
    edx = esi + 0x70;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013D838u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D835u); } /* indirect call */
    }

loc_0013D838: ;
    ecx = esi;
    PUSH32(esp, 0x0013D83Fu); RECOMP_ABI_CALL(0x00027DC3u, sub_00027DC3); /* call 0x00027DC3 */

loc_0013D83F: ;
    MEM8(esi + 0x380) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D860
 * Original: 0x0013D860 - 0x0013D8D7 (119 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D860: ;
    eax = MEM32(0x8AED08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D8D4; /* je: equal / zero */

loc_0013D869: ;
    eax = MEM32(ecx + 0xFC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC4);
    eax = MEM32(0x8F0684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D8A4; /* jne: not equal / not zero */

loc_0013D87F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0013D88Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013D88A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D89D; /* je: equal / zero */

loc_0013D891: ;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = 0;
    goto loc_0013D89F;

loc_0013D89D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013D89F: ;
    MEM32(0x8F0684) = eax;

loc_0013D8A4: ;
    ecx = MEM32(0x8AED08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D8D3; /* je: equal / zero */

loc_0013D8AE: ;
    edx = MEM32(eax + 0xC0);
    eax = MEM32(eax + 0xBC);
    ecx = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D8D0u); RECOMP_ABI_CALL(0x0001548Eu, sub_0001548E); /* call 0x0001548E */

loc_0013D8D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D8D3: ;
    POP32(esp, esi);

loc_0013D8D4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D900
 * Original: 0x0013D900 - 0x0013D953 (83 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D900: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x381));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D945; /* jne: not equal / not zero */

loc_0013D90D: ;
    SET_LO8(eax, MEM8(esi + 0x380));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D91C; /* jne: not equal / not zero */

loc_0013D917: ;
    PUSH32(esp, 0x0013D91Cu); RECOMP_ABI_CALL(0x0002F6D6u, sub_0002F6D6); /* call 0x0002F6D6 */

loc_0013D91C: ;
    ecx = MEM32(esi + 0xFC);
    eax = MEM32(ecx + 0xF8);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D930u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0013D930: ;
    ecx = MEM32(esi + 0xFC);
    MEM8(esi + 0x381) = 1;
    eax = MEM32(ecx + 0xC4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013D945: ;
    edx = MEM32(esi + 0xFC);
    eax = MEM32(edx + 0xC4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D970
 * Original: 0x0013D970 - 0x0013DAF4 (388 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013D970(void)
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

loc_0013D970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, edi);
    edi = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DA30; /* jne: not equal / not zero */

loc_0013D994: ;
    eax = MEM32(eax + 0x20);
    fp_push(MEMF(eax + 0x60)); /* fld float */
    ecx = eax + 0x30;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = MEM32(ecx + 8);
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = MEM32(esp + 0x24);
    edx = esi + 0x10;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(0x8B54DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;

loc_0013DA30: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA3Bu); RECOMP_ABI_CALL(0x0001CDABu, sub_0001CDAB); /* call 0x0001CDAB */

loc_0013DA3B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA42u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0013DA42: ;
    eax = MEM32(0x8AED08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA8F; /* je: equal / zero */

loc_0013DA4B: ;
    eax = MEM32(esi + 0xFC);
    edx = MEM32(eax + 0xF8);
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0xE0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DA8F; /* jne: not equal / not zero */

loc_0013DA60: ;
    eax = MEM32(0x895AB0);
    xmm0.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    PUSH32(esp, ecx);
    edi = esi + 0x390;
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA7Cu); RECOMP_ABI_CALL(0x00013823u, sub_00013823); /* call 0x00013823 */

loc_0013DA7C: ;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DA86u); RECOMP_ABI_CALL(0x00019EBCu, sub_00019EBC); /* call 0x00019EBC */

loc_0013DA86: ;
    PUSH32(esp, 8);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    goto loc_0013DAC7;

loc_0013DA8F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x20;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DAC0u); RECOMP_ABI_CALL(0x00019EBCu, sub_00019EBC); /* call 0x00019EBC */

loc_0013DAC0: ;
    PUSH32(esp, 8);
    eax = esp + 0x18;
    PUSH32(esp, eax);

loc_0013DAC7: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DACEu); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_0013DACE: ;
    SET_LO8(edx, MEM8(esi + 0x3E0));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    edx = esp + 0x17;
    MEM8(esp + 0x17) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DAEBu); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_0013DAEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013DB60
 * Original: 0x0013DB60 - 0x0013DC3D (221 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013DB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0013DB60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8AED00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC34; /* je: equal / zero */

loc_0013DB80: ;
    eax = ecx + 0x20;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    goto loc_0013DBA0;

loc_0013DB95: ;
    eax = MEM32(esp + 0x18);
    /* nop */

loc_0013DBA0: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx);
    edx = MEM32(ebp + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    ecx = 0x10;
    edi = esp + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
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
    edx = esp + 0x60;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DBD3; /* je: equal / zero */

loc_0013DBC5: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DBD1u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_0013DBD1: ;
    goto loc_0013DBF4;

loc_0013DBD3: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DBE2u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_0013DBE2: ;
    ecx = 0x10;
    esi = esp + 0xAC;
    edi = esp + 0x2C;
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

loc_0013DBF4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x54); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013DC14; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x54)) */

loc_0013DC01: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DC14u); RECOMP_ABI_CALL(0x0002ABCCu, sub_0002ABCC); /* call 0x0002ABCC */

loc_0013DC14: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0013DB95; /* jl: less (signed <) */

loc_0013DC34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DC80
 * Original: 0x0013DC80 - 0x0013DE08 (392 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013DC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DC80: ;
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
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE01; /* je: equal / zero */

loc_0013DC99: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DC9Eu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_0013DC9E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B1C)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    edx = MEM32(esi + 0xFC);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x44;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0xD4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0013DCF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DCF0u); } /* indirect call */
    }

loc_0013DCF3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD06; /* je: equal / zero */

loc_0013DCF7: ;
    eax = MEM32(esi + 0xFC);
    MEM8(eax + 0xB8) = 1;
    goto loc_0013DD13;

loc_0013DD06: ;
    ecx = MEM32(esi + 0xFC);
    MEM8(ecx + 0xB8) = 0;

loc_0013DD13: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DD1Au); RECOMP_ABI_CALL(0x00021C6Bu, sub_00021C6B); /* call 0x00021C6B */

loc_0013DD1A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    edi = esi + 0x70;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = edi;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    ebx = esi + 0x80;
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0013DDBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DDBAu); } /* indirect call */
    }

loc_0013DDBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013DDC9; /* jne: not equal / not zero */

loc_0013DDC1: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013DDC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DDC6u); } /* indirect call */
    }

loc_0013DDC9: ;
    ecx = MEM32(esi + 0xFC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013DDE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DDE2u); } /* indirect call */
    }

loc_0013DDE5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DDECu); RECOMP_ABI_CALL(0x00027DC3u, sub_00027DC3); /* call 0x00027DC3 */

loc_0013DDEC: ;
    ecx = esi;
    MEM8(esi + 0x380) = 1;
    MEM8(esi + 0x381) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DE01u); RECOMP_ABI_CALL(0x000164D3u, sub_000164D3); /* call 0x000164D3 */

loc_0013DE01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013DE70
 * Original: 0x0013DE70 - 0x0013DFBA (330 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013DE70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8AED00);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DFB6; /* je: equal / zero */

loc_0013DE84: ;
    eax = MEM32(esi + 0xFC);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xC4);
    _fa = (uint32_t)(MEM8(esi + 0x3EC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x3EC), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DF3B; /* je: equal / zero */

loc_0013DE9D: ;
    ecx = MEM32(esi + 0xD4);
    edx = MEM32(ecx + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0013DEB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DEB4u); } /* indirect call */
    }

loc_0013DEB7: ;
    ecx = MEM32(0x8F0684);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0013DEEA; /* jne: not equal / not zero */

loc_0013DEC3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0013DECEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013DECE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DEE2; /* je: equal / zero */

loc_0013DED5: ;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = LO8(ebx);
    ecx = eax;
    goto loc_0013DEE4;

loc_0013DEE2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013DEE4: ;
    MEM32(0x8F0684) = ecx;

loc_0013DEEA: ;
    eax = MEM32(esi + 0x3E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DF03; /* jne: not equal / not zero */

loc_0013DEF5: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013DF01u); RECOMP_ABI_CALL(0x0002065Eu, sub_0002065E); /* call 0x0002065E */

loc_0013DF01: ;
    goto loc_0013DF13;

loc_0013DF03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DF13; /* jne: not equal / not zero */

loc_0013DF07: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013DF13u); RECOMP_ABI_CALL(0x00029C2Cu, sub_00029C2C); /* call 0x00029C2C */

loc_0013DF13: ;
    eax = MEM32(esi + 0x3E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DF3B; /* je: equal / zero */

loc_0013DF1F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0013DF27u); RECOMP_ABI_CALL(0x00016BCCu, sub_00016BCC); /* call 0x00016BCC */

loc_0013DF27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DF3B; /* jne: not equal / not zero */

loc_0013DF2B: ;
    MEM8(esi + 0x3E0) = LO8(ebx);
    MEM32(esi + 0x3E8) = 0xFFFFFFFFu;

loc_0013DF3B: ;
    eax = MEM32(0x8F0684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DF68; /* jne: not equal / not zero */

loc_0013DF44: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0013DF4Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013DF4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DF61; /* je: equal / zero */

loc_0013DF56: ;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = LO8(ebx);
    goto loc_0013DF63;

loc_0013DF61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013DF63: ;
    MEM32(0x8F0684) = eax;

loc_0013DF68: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0013DF70u); RECOMP_ABI_CALL(0x00036B4Du, sub_00036B4D); /* call 0x00036B4D */

loc_0013DF70: ;
    eax = MEM32(0x8F0684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DFAD; /* jne: not equal / not zero */

loc_0013DF79: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0013DF84u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013DF84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DFA6; /* je: equal / zero */

loc_0013DF8B: ;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = LO8(ebx);
    PUSH32(esp, ebp);
    ecx = eax;
    MEM32(0x8F0684) = eax;
    PUSH32(esp, 0x0013DFA1u); RECOMP_ABI_CALL(0x0001ED86u, sub_0001ED86); /* call 0x0001ED86 */

loc_0013DFA1: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013DFA6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F0684) = eax;

loc_0013DFAD: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0013DFB5u); RECOMP_ABI_CALL(0x0001ED86u, sub_0001ED86); /* call 0x0001ED86 */

loc_0013DFB5: ;
    POP32(esp, ebp);

loc_0013DFB6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E010
 * Original: 0x0013E010 - 0x0013E34C (828 bytes, 228 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013E010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013E010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xFC);
    ecx = MEM32(eax + 0xF8);
    MEM32(eax + ecx * 4 + 0xE0) = 0;
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), 3 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0013E04A; /* je: equal / zero */

loc_0013E041: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E05F; /* jne: not equal / not zero */

loc_0013E04A: ;
    edx = MEM32(esi + 0xFC);
    ecx = MEM32(ebp + 8);
    MEM32(edx + 0x14) = edi;
    eax = MEM32(esi + 0xFC);
    MEM32(eax + 0x10) = ecx;

loc_0013E05F: ;
    eax = MEM32(esi + 0xD4);
    edx = MEM32(eax + 0x28);
    ecx = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E0B3; /* jne: not equal / not zero */

loc_0013E071: ;
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E0B3; /* je: equal / zero */

loc_0013E079: ;
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0013E08Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E084u); } /* indirect call */
    }

loc_0013E08A: ;
    eax = MEM32(esi + 0xFC);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0xFC);
    MEM32(edx + 0x14) = edi;
    ecx = MEM32(esi + 0xFC);
    eax = MEM32(ecx + 0xF8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E0B3u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0013E0B3: ;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax + 0x3C);
    SET_LO8(edx, MEM8(ecx + 0x3B));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E174; /* jne: not equal / not zero */

loc_0013E0CB: ;
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E0E0; /* je: equal / zero */

loc_0013E0D4: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E174; /* jne: not equal / not zero */

loc_0013E0E0: ;
    ecx = MEM32(eax + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22E);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0013E0F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E0EEu); } /* indirect call */
    }

loc_0013E0F4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E0F9u); RECOMP_ABI_CALL(0x000262DEu, sub_000262DE); /* call 0x000262DE */

loc_0013E0F9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ebx = MEM32(ebp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013E11D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx)) */

loc_0013E10E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E113u); RECOMP_ABI_CALL(0x000116D1u, sub_000116D1); /* call 0x000116D1 */

loc_0013E113: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0013E11D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 3);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x8B54DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8B54E4)); /* fmul dword ptr [0x8b54e4] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xFC);
    MEM32(ecx + 0x14) = edi;
    edx = MEM32(esi + 0xFC);
    MEM32(edx + 0x10) = ebx;
    ecx = MEM32(esi + 0xFC);
    eax = MEM32(ecx + 0xF8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E174u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0013E174: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0xFC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ebx = ecx + 0x110;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E1D8; /* jle: less or equal (signed <=) */

loc_0013E1AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E1C3u); RECOMP_ABI_CALL(0x0002DBB0u, sub_0002DBB0); /* call 0x0002DBB0 */

loc_0013E1C3: ;
    eax = MEM32(esi + 0xFC);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0xFC);
    MEM32(edx + 0x14) = edi;

loc_0013E1D8: ;
    MEM32(ebx + 0x40) = 0;
    ecx = MEM32(0x87DA6C);
    eax = ebx + 0x44;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DA6C);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x50;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = edx;
    eax = MEM32(0x87DA70);
    MEM32(ebx + 4) = eax;
    ecx = MEM32(0x87DA74);
    MEM32(ebx + 8) = ecx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E21Fu); RECOMP_ABI_CALL(0x00027DC3u, sub_00027DC3); /* call 0x00027DC3 */

loc_0013E21F: ;
    ecx = MEM32(esi + 0xD4);
    edx = MEM32(ecx + 0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx + 0x3A));
    edx = MEM32(ecx + 0x28);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E244; /* je: equal / zero */

loc_0013E23B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E244; /* je: equal / zero */

loc_0013E240: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0013E246;

loc_0013E244: ;
    SET_LO8(edx, 1);

loc_0013E246: ;
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E2AB; /* je: equal / zero */

loc_0013E24F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E2AB; /* jne: not equal / not zero */

loc_0013E254: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E25E; /* jne: not equal / not zero */

loc_0013E258: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E2AB; /* jne: not equal / not zero */

loc_0013E25E: ;
    eax = MEM32(0x8AED00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E270; /* jne: not equal / not zero */

loc_0013E267: ;
    eax = MEM32(0x8AED08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E2AB; /* je: equal / zero */

loc_0013E270: ;
    ecx = MEM32(esi + 0xFC);
    eax = MEM32(ecx + 0xF8);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E284u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0013E284: ;
    eax = MEM32(0x8AED00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E294; /* je: equal / zero */

loc_0013E28D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E294u); RECOMP_ABI_CALL(0x0001B25Du, sub_0001B25D); /* call 0x0001B25D */

loc_0013E294: ;
    eax = MEM32(0x8AED08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E2AB; /* je: equal / zero */

loc_0013E29D: ;
    ecx = esi + 0x430;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E2ABu); RECOMP_ABI_CALL(0x0001169Fu, sub_0001169F); /* call 0x0001169F */

loc_0013E2AB: ;
    SET_LO8(eax, MEM8(esi + 0x383));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E2D4; /* je: equal / zero */

loc_0013E2B5: ;
    edx = MEM32(esi + 0x110);
    edi = esi + 0x110;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0013E2C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E2C3u); } /* indirect call */
    }

loc_0013E2C6: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E2CDu); RECOMP_ABI_CALL(0x00013CA6u, sub_00013CA6); /* call 0x00013CA6 */

loc_0013E2CD: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0013E2D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E2D1u); } /* indirect call */
    }

loc_0013E2D4: ;
    eax = MEM32(0x8FCB14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E2E4; /* je: equal / zero */

loc_0013E2DD: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E2E4u); RECOMP_ABI_CALL(0x0001AB96u, sub_0001AB96); /* call 0x0001AB96 */

loc_0013E2E4: ;
    SET_LO8(eax, MEM8(esi + 0x383));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E309; /* jne: not equal / not zero */

loc_0013E2EE: ;
    ecx = MEM32(esi + 0xFC);
    edx = MEM32(ecx + 0xF8);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E302u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0013E302: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E309u); RECOMP_ABI_CALL(0x00013CA6u, sub_00013CA6); /* call 0x00013CA6 */

loc_0013E309: ;
    ecx = MEM32(esi + 0xFC);
    eax = MEM32(ecx + 0xF8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E31Du); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0013E31D: ;
    edx = MEM32(esi + 0xFC);
    ecx = esi + 0x10;
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(esi + 0xFC);
    eax = esi + 0x20;
    MEM32(ecx + 0x14) = eax;
    POP32(esp, edi);
    MEM8(esi + 0x380) = 0;
    MEM8(esi + 0x381) = 0;
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
 * sub_0013E420
 * Original: 0x0013E420 - 0x0013E42A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E420(void)
{

loc_0013E420: ;
    eax = MEM32(esp + 4);
    MEM32(0x8F06F4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E430
 * Original: 0x0013E430 - 0x0013E436 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E430(void)
{

loc_0013E430: ;
    eax = MEM32(0x8F06F4);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E440
 * Original: 0x0013E440 - 0x0013E443 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E440(void)
{

loc_0013E440: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E450
 * Original: 0x0013E450 - 0x0013E45D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E450(void)
{

loc_0013E450: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E460
 * Original: 0x0013E460 - 0x0013E464 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E460(void)
{

loc_0013E460: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E470
 * Original: 0x0013E470 - 0x0013E4B7 (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E470: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x8F06F8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(0x8F06FC) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E4AE; /* je: equal / zero */

loc_0013E485: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    /* nop */

loc_0013E490: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013E498u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E496u); } /* indirect call */
    }

loc_0013E498: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E4A3; /* jne: not equal / not zero */

loc_0013E49C: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E490; /* jne: not equal / not zero */

loc_0013E4A3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    MEM8(0x8F06FC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0013E4AE: ;
    POP32(esp, esi);
    MEM8(0x8F06FC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E4D0
 * Original: 0x0013E4D0 - 0x0013E543 (115 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E4D0: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x7DF528);
    ecx = MEM32(0x7DF52C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40C);
    PUSH32(esp, esi);
    esi = MEM32(0x8F06F8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E52C; /* je: equal / zero */

loc_0013E4FF: ;
    /* nop */

loc_0013E500: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013E50Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E50Au); } /* indirect call */
    }

loc_0013E50D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E525; /* je: equal / zero */

loc_0013E511: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x7DF51C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E522u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0013E522: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E525: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E500; /* jne: not equal / not zero */

loc_0013E52C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7DF50C);
    ecx = ebx;
    PUSH32(esp, 0x0013E539u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013E539: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013E560
 * Original: 0x0013E560 - 0x0013E580 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E560: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8F06F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E57E; /* je: equal / zero */

loc_0013E56B: ;
    goto loc_0013E570;

    /* nop */

loc_0013E570: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0013E577u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E574u); } /* indirect call */
    }

loc_0013E577: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E570; /* jne: not equal / not zero */

loc_0013E57E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E590
 * Original: 0x0013E590 - 0x0013E5C2 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E590: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E5B8; /* je: equal / zero */

loc_0013E59D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0013E5A6: ;
    MEM8(edx + eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E5A6; /* jne: not equal / not zero */

loc_0013E5B2: ;
    MEM8(esi + edi) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013E5B8: ;
    eax = MEM32(esp + 8);
    MEM8(esi + eax) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E5D0
 * Original: 0x0013E5D0 - 0x0013E5E8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E5D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013E5D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E5DFu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0013E5DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
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
 * sub_0013E5F0
 * Original: 0x0013E5F0 - 0x0013E652 (98 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E5F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, 0x2E);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E600u); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_0013E600: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E640; /* je: equal / zero */

loc_0013E607: ;
    PUSH32(esp, ebx);
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = edx;
    ebx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = ebp;
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
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    MEM8(edx + ebp) = 0;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);

loc_0013E632: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E632; /* jne: not equal / not zero */

loc_0013E63C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013E640: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM8(ecx) = 0;
    MEM8(edx) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E670
 * Original: 0x0013E670 - 0x0013E743 (211 bytes, 73 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E670: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x114);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x110);
    MEM8(eax) = 0;
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0013E738; /* jle: less or equal (signed <=) */

loc_0013E69A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0013E6A0: ;
    eax = MEM32(esp + 0x120);
    ecx = MEM32(ebp + 8);
    edi = MEM32(ecx + ebx * 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E6D7; /* jle: less or equal (signed <=) */

loc_0013E6B3: ;
    edx = MEM32(esp + 0x11C);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E6C4u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0013E6C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E729; /* je: equal / zero */

loc_0013E6CB: ;
    eax = MEM32(esp + 0x120);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013E6B3; /* jl: less (signed <) */

loc_0013E6D7: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0013E6DFu); RECOMP_ABI_CALL(0x000208DEu, sub_000208DE); /* call 0x000208DE */

loc_0013E6DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x7DF534);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E6F0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0013E6F0: ;
    eax = esp + 0x24;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    /* nop */

loc_0013E700: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E700; /* jne: not equal / not zero */

loc_0013E707: ;
    edi = MEM32(esp + 0x124);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0013E713: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E713; /* jne: not equal / not zero */

loc_0013E71B: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */

loc_0013E729: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013E6A0; /* jl: less (signed <) */

loc_0013E736: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0013E738: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0013E780
 * Original: 0x0013E780 - 0x0013E797 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E780(void)
{

loc_0013E780: ;
    eax = ecx;
    MEM32(eax) = 0x7DF53C;
    ecx = MEM32(0x8F06F8);
    MEM32(eax + 4) = ecx;
    MEM32(0x8F06F8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E7A0
 * Original: 0x0013E7A0 - 0x0013E7A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E7A0(void)
{

loc_0013E7A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E7B0
 * Original: 0x0013E7B0 - 0x0013E7EA (58 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E7B0: ;
    MEM32(ecx) = 0x7DF53C;
    eax = MEM32(0x8F06F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E7C8; /* jne: not equal / not zero */

loc_0013E7BF: ;
    eax = MEM32(ecx + 4);
    MEM32(0x8F06F8) = eax;
    esp += 4; return; /* ret */

loc_0013E7C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E7E9; /* je: equal / zero */

loc_0013E7CC: ;
    /* nop */

loc_0013E7D0: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E7DE; /* je: equal / zero */

loc_0013E7D7: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E7D0; /* jne: not equal / not zero */

loc_0013E7DD: ;
    esp += 4; return; /* ret */

loc_0013E7DE: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E7E9; /* jne: not equal / not zero */

loc_0013E7E3: ;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_0013E7E9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E800
 * Original: 0x0013E800 - 0x0013E850 (80 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E849; /* je: equal / zero */

loc_0013E80B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_0013E810: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E81Du); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0013E81D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E832; /* je: equal / zero */

loc_0013E824: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E810; /* jne: not equal / not zero */

loc_0013E82A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013E832: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 0x104); PUSH32(esp, 0x0013E83Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0013E838u); } /* indirect call */
    }

loc_0013E83E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013E849: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E870
 * Original: 0x0013E870 - 0x0013E875 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E870: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E880
 * Original: 0x0013E880 - 0x0013E8C8 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E880: ;
    eax = MEM32(0x8F0700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E8C7; /* je: equal / zero */

loc_0013E889: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0x0013E896u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013E896: ;
    ecx = MEM32(esp + 0x14);
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    MEM32(esi + 0x104) = eax;
    PUSH32(esp, 0x0013E8B0u); RECOMP_ABI_CALL(0x000220FDu, sub_000220FD); /* call 0x000220FD */

loc_0013E8B0: ;
    eax = MEM32(0x8F0700);
    ecx = MEM32(eax + 8);
    MEM32(esi) = ecx;
    edx = MEM32(0x8F0700);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = esi;
    POP32(esp, esi);

loc_0013E8C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E8E0
 * Original: 0x0013E8E0 - 0x0013E8FC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E8E0: ;
    ecx = MEM32(0x8F0700);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E8FB; /* je: equal / zero */

loc_0013E8EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013E8F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E8EEu); } /* indirect call */
    }

loc_0013E8F1: ;
    MEM32(0x8F0700) = 0;

loc_0013E8FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E910
 * Original: 0x0013E910 - 0x0013E934 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E910(void)
{

loc_0013E910: ;
    eax = ecx;
    MEM32(eax) = 0x7DF53C;
    ecx = MEM32(0x8F06F8);
    MEM32(eax + 4) = ecx;
    MEM32(0x8F06F8) = eax;
    MEM32(eax) = 0x7DF550;
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E940
 * Original: 0x0013E940 - 0x0013E99C (92 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E940: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x7DF550;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E963; /* je: equal / zero */

loc_0013E950: ;
    PUSH32(esp, esi);

loc_0013E951: ;
    esi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E959u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013E959: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0013E951; /* jne: not equal / not zero */

loc_0013E962: ;
    POP32(esp, esi);

loc_0013E963: ;
    MEM32(edi) = 0x7DF53C;
    eax = MEM32(0x8F06F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E97C; /* jne: not equal / not zero */

loc_0013E972: ;
    eax = MEM32(edi + 4);
    MEM32(0x8F06F8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0013E97C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E99A; /* je: equal / zero */

loc_0013E980: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E98F; /* je: equal / zero */

loc_0013E987: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E980; /* jne: not equal / not zero */

loc_0013E98D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0013E98F: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E99A; /* jne: not equal / not zero */

loc_0013E994: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;

loc_0013E99A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E9C0
 * Original: 0x0013E9C0 - 0x0013EA64 (164 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E9C0: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0013E9D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E9CEu); } /* indirect call */
    }

loc_0013E9D1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0013E9DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E9D9u); } /* indirect call */
    }

loc_0013E9DC: ;
    ebp = MEM32(esp + 0x418);
    esi = MEM32(esp + 0x41C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0013E9F3u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013E9F3: ;
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, 0x7DF574);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013EA03u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0013EA03: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013EA13u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013EA13: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013EA55; /* jle: less or equal (signed <=) */

loc_0013EA19: ;
    /* nop */

loc_0013EA20: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    edx = esp + 0x18;
    PUSH32(esp, 0x7DF564);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013EA31u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0013EA31: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0013EA3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013EA3Bu); } /* indirect call */
    }

loc_0013EA3E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x424);
    PUSH32(esp, 0x0013EA50u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013EA50: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013EA20; /* jl: less (signed <) */

loc_0013EA55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013EA90
 * Original: 0x0013EA90 - 0x0013EAE4 (84 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x7DF5A8);
    PUSH32(esp, 0x0013EAA1u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_0013EAA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EACB; /* je: equal / zero */

loc_0013EAA5: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013EAAEu); RECOMP_ABI_CALL(0x00022C2Eu, sub_00022C2E); /* call 0x00022C2E */

loc_0013EAAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EACB; /* je: equal / zero */

loc_0013EAB2: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DF5A0);
    PUSH32(esp, 0x7DF590);
    PUSH32(esp, 0x0013EAC7u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013EAC7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0013EACB: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DF588);
    PUSH32(esp, 0x7DF590);
    PUSH32(esp, 0x0013EAE0u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013EAE0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013EB00
 * Original: 0x0013EB00 - 0x0013EB22 (34 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EB00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0x4B65AF5;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0013EB1Cu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0013EB1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013EB30
 * Original: 0x0013EB30 - 0x0013EB52 (34 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EB30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0x4B640DD;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0013EB4Cu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0013EB4C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013EB60
 * Original: 0x0013EB60 - 0x0013EB82 (34 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EB60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0x4B64ADB;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0013EB7Cu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0013EB7C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013EB90
 * Original: 0x0013EB90 - 0x0013EBB2 (34 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EB90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0x4B64613;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0013EBACu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0013EBAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013EBC0
 * Original: 0x0013EBC0 - 0x0013EBC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EBC0(void)
{

loc_0013EBC0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EBD0
 * Original: 0x0013EBD0 - 0x0013EBE7 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EBD0: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013EBE1; /* jne: not equal / not zero */

loc_0013EBD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013EBDE; /* je: equal / zero */

loc_0013EBDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013EBE1; /* je: equal / zero */

loc_0013EBDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0013EBE1: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0013EBF0
 * Original: 0x0013EBF0 - 0x0013EBFE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013EBF0: ;
    eax = ZX8(MEM8(esp + 4));
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000217E8(); return; /* tail jmp 0x000217E8 */

}

/**
 * sub_0013EC10
 * Original: 0x0013EC10 - 0x0013EC17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC10(void)
{

loc_0013EC10: ;
    eax = MEM32(ecx + 0x20C);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EC20
 * Original: 0x0013EC20 - 0x0013EC2A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC20(void)
{

loc_0013EC20: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x8FC1D5) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EC30
 * Original: 0x0013EC30 - 0x0013EC36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC30(void)
{

loc_0013EC30: ;
    SET_LO8(eax, MEM8(0x8FC1D5));
    esp += 4; return; /* ret */

}

/**
 * sub_0013EC40
 * Original: 0x0013EC40 - 0x0013EC47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC40(void)
{

loc_0013EC40: ;
    eax = MEM32(ecx + 0x1E0);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EC50
 * Original: 0x0013EC50 - 0x0013EC57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC50(void)
{

loc_0013EC50: ;
    eax = MEM32(ecx + 0xF0);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EC60
 * Original: 0x0013EC60 - 0x0013EC6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC60(void)
{

loc_0013EC60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xF0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013EC70
 * Original: 0x0013EC70 - 0x0013EC7D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC70(void)
{

loc_0013EC70: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xFE) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013EC80
 * Original: 0x0013EC80 - 0x0013EC8A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC80(void)
{

loc_0013EC80: ;
    eax = MEM32(esp + 4);
    MEM32(0x8F0704) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013EC90
 * Original: 0x0013EC90 - 0x0013EC9A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC90(void)
{

loc_0013EC90: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x8F0708) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0013ECA0
 * Original: 0x0013ECA0 - 0x0013ECE1 (65 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ECA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013ECA0: ;
    _fa = (uint32_t)(MEM32(0x8F0704)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F0704), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DF5CC);
    PUSH32(esp, 0x0013ECBCu); RECOMP_ABI_CALL(0x00024E8Eu, sub_00024E8E); /* call 0x00024E8E */

loc_0013ECBC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x8F0708));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7DF5B0);
    ecx = esi;
    PUSH32(esp, 0x0013ECD1u); RECOMP_ABI_CALL(0x00024E8Eu, sub_00024E8E); /* call 0x00024E8E */

loc_0013ECD1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F0704) = eax;
    MEM8(0x8F0708) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013ED00
 * Original: 0x0013ED00 - 0x0013ED11 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED00(void)
{

loc_0013ED00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013ED07u); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_0013ED07: ;
    ecx = eax;
    PUSH32(esp, 0x0013ED0Eu); RECOMP_ABI_CALL(0x00031D37u, sub_00031D37); /* call 0x00031D37 */

loc_0013ED0E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013ED20
 * Original: 0x0013ED20 - 0x0013ED31 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED20(void)
{

loc_0013ED20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013ED27u); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_0013ED27: ;
    ecx = eax;
    PUSH32(esp, 0x0013ED2Eu); RECOMP_ABI_CALL(0x00031D37u, sub_00031D37); /* call 0x00031D37 */

loc_0013ED2E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013ED40
 * Original: 0x0013ED40 - 0x0013ED56 (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013ED40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x246F5);
    PUSH32(esp, 0x0013ED50u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_0013ED50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013ED60
 * Original: 0x0013ED60 - 0x0013ED6E (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED60(void)
{

loc_0013ED60: ;
    PUSH32(esp, 0x246F5);
    PUSH32(esp, 0x0013ED6Au); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_0013ED6A: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013ED80
 * Original: 0x0013ED80 - 0x0013ED83 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED80(void)
{

loc_0013ED80: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013ED90
 * Original: 0x0013ED90 - 0x0013EDA5 (21 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED90(void)
{

loc_0013ED90: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    MEM8(ecx + 0xFE) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013EDB0
 * Original: 0x0013EDB0 - 0x0013EDC5 (21 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EDB0(void)
{

loc_0013EDB0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    MEM8(ecx + 0xFE) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013EDD0
 * Original: 0x0013EDD0 - 0x0013EDD3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EDD0(void)
{

loc_0013EDD0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013EDE0
 * Original: 0x0013EDE0 - 0x0013EDE3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EDE0(void)
{

loc_0013EDE0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013EDF0
 * Original: 0x0013EDF0 - 0x0013EE33 (67 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EDF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x8F06F4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EE2C; /* je: equal / zero */

loc_0013EDFE: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x7DF5E0);
    PUSH32(esp, 0x0013EE0Cu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013EE0C: ;
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 8) = 0x4B64613;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0013EE2Cu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0013EE2C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013EE50
 * Original: 0x0013EE50 - 0x0013EEEB (155 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013EE50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013EE5Cu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0013EE5C: ;
    ebp = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0013EED7; /* jbe: below or equal (unsigned <=) */

loc_0013EE71: ;
    ebx = MEM32(esp + 0x20);

loc_0013EE75: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0013EE81u); RECOMP_ABI_CALL(0x000180A8u, sub_000180A8); /* call 0x000180A8 */

loc_0013EE81: ;
    edx = ebx;

loc_0013EE83: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EE83; /* jne: not equal / not zero */

loc_0013EE8D: ;
    eax = MEM32(esp + 0x1C);
    edx = eax;

loc_0013EE93: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EE93; /* jne: not equal / not zero */

loc_0013EE9A: ;
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0013EEA0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EEA0; /* jne: not equal / not zero */

loc_0013EEA8: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = edx;
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
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0013EEC2u); RECOMP_ABI_CALL(0x00025983u, sub_00025983); /* call 0x00025983 */

loc_0013EEC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EEE1; /* jne: not equal / not zero */

loc_0013EEC6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0013EE75; /* jb: below (unsigned <) */

loc_0013EED7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013EEE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EF20
 * Original: 0x0013EF20 - 0x0013F04F (303 bytes, 84 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013EF20: ;
    eax = 0x1028;
    PUSH32(esp, 0x0013EF2Au); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_0013EF2A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0x7DF680;
    ecx = esp + 0x10;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x7DF66C;
    MEM32(esp + 0x1C) = 0x7DF65C;
    MEM32(esp + 0x20) = 0x7DF64C;
    MEM32(esp + 0x24) = 0x7DF63C;
    MEM32(esp + 0x28) = 0x7DF628;
    MEM32(esp + 0x2C) = 0x7DF614;
    MEM32(esp + 0x30) = 0x7DF604;
    MEM32(esp + 0x34) = 0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ecx;

loc_0013EF81: ;
    edx = esp + 0x838;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013EF8Fu); RECOMP_ABI_CALL(0x0002A8EDu, sub_0002A8ED); /* call 0x0002A8ED */

loc_0013EF8F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F01B; /* je: equal / zero */

loc_0013EF9A: ;
    eax = esp + 0x838;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013EFACu); RECOMP_ABI_CALL(0x00598AFDu, sub_00598AFD); /* call 0x00598AFD */

loc_0013EFAC: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F01B; /* je: equal / zero */

loc_0013EFB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013EFBBu); RECOMP_ABI_CALL(0x0059845Bu, sub_0059845B); /* call 0x0059845B */

loc_0013EFBB: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013F009; /* jle: less or equal (signed <=) */

loc_0013EFC6: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013EFD2u); RECOMP_ABI_CALL(0x0059855Du, sub_0059855D); /* call 0x0059855D */

loc_0013EFD2: ;
    PUSH32(esp, ebx);
    edx = esp + 0x448;
    PUSH32(esp, 0x7DF5F8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013EFE5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0013EFE5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x440;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x104C);
    PUSH32(esp, 0x0013F003u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013F003: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013EFC6; /* jl: less (signed <) */

loc_0013F009: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0013F01Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013F018u); } /* indirect call */
    }

loc_0013F01B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EF81; /* jne: not equal / not zero */

loc_0013F030: ;
    ecx = MEM32(esp + 0x1040);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7DF5EC);
    PUSH32(esp, 0x0013F042u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013F042: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1028) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1028;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F0A0
 * Original: 0x0013F0A0 - 0x0013F0A3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F0A0(void)
{

loc_0013F0A0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F0B0
 * Original: 0x0013F0B0 - 0x0013F332 (642 bytes, 122 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013F0B0: ;
    _fb = (uint32_t)(0x2B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2B4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8F06F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013F328; /* je: equal / zero */

loc_0013F0CA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C0);
    PUSH32(esp, 0x7DFA60);
    ecx = edi;
    PUSH32(esp, 0x0013F0DEu); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0013F0DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F327; /* je: equal / zero */

loc_0013F0E6: ;
    PUSH32(esp, 0x7CFB5C);
    ecx = edi;
    PUSH32(esp, 0x0013F0F2u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0013F0F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F327; /* je: equal / zero */

loc_0013F0FA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7CFB5C);
    ecx = edi;
    PUSH32(esp, 0x0013F108u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_0013F108: ;
    esi = eax;
    MEM32(esp + 0x1C) = 0x7DFA50;
    MEM32(esp + 0x20) = 0x7DFA40;
    MEM32(esp + 0x24) = 0x7DFA28;
    MEM32(esp + 0x28) = 0x7DFA18;
    MEM32(esp + 0x2C) = 0x7DFA08;
    MEM32(esp + 0x30) = 0x7DF9F8;
    MEM32(esp + 0x34) = 0x7DF9E4;
    MEM32(esp + 0x38) = 0x7DF9D4;
    MEM32(esp + 0x3C) = 0x7DF9B8;
    MEM32(esp + 0x40) = 0x7DF998;
    MEM32(esp + 0x44) = 0x7DF984;
    MEM32(esp + 0x48) = 0x7DF968;
    MEM32(esp + 0x4C) = 0x7DF950;
    MEM32(esp + 0x50) = 0x7DF93C;
    MEM32(esp + 0x54) = 0x7DF92C;
    MEM32(esp + 0x58) = 0x7DF910;
    MEM32(esp + 0x5C) = 0x7DF8FC;
    MEM32(esp + 0x60) = 0x7DF8E0;
    MEM32(esp + 0x64) = 0x7DF8C8;
    MEM32(esp + 0x68) = 0x7DF8B0;
    MEM32(esp + 0x6C) = 0x7DF89C;
    MEM32(esp + 0x70) = 0x7DF88C;
    MEM32(esp + 0x74) = 0x7DF87C;
    MEM32(esp + 0x78) = 0x7DF864;
    MEM32(esp + 0x7C) = 0x7DF84C;
    MEM32(esp + 0x80) = 0x7DF83C;
    MEM32(esp + 0x84) = 0x7DF828;
    MEM32(esp + 0x88) = 0x7DF810;
    MEM32(esp + 0x8C) = 0x7DF7FC;
    MEM32(esp + 0x90) = 0x7DF7E8;
    MEM32(esp + 0x94) = 0x7DF7C8;
    MEM32(esp + 0x98) = 0x7DF7B0;
    MEM32(esp + 0x9C) = 0x7DF798;
    MEM32(esp + 0xA0) = 0x7DF774;
    MEM32(esp + 0xA4) = 0x7DF750;
    MEM32(esp + 0xA8) = 0x7DF730;
    MEM32(esp + 0xAC) = 0x7DF708;
    MEM32(esp + 0xB0) = 0x7DF6E0;
    MEM32(esp + 0xB4) = 0x7DF6BC;
    MEM32(esp + 0xB8) = 0x7DF6A0;
    MEM32(esp + 0xBC) = 0x7DF690;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013F284: ;
    eax = MEM32(esp + ebx * 4 + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F28Fu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0013F28F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F2A9; /* je: equal / zero */

loc_0013F296: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x29 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013F284; /* jl: less (signed <) */

loc_0013F29C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2B4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0013F2A9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x29 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013F325; /* jge: greater or equal (signed >=) */

loc_0013F2AE: ;
    PUSH32(esp, 0x7DFA60);
    ecx = edi;
    PUSH32(esp, 0x0013F2BAu); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_0013F2BA: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x1C8;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebp;
    esi = eax;
    MEM32(esp + 0x24) = 0x7DFA60;
    MEM32(esp + 0x28) = 0x7CFB5C;
    PUSH32(esp, 0x0013F2E8u); RECOMP_ABI_CALL(0x0001D36Eu, sub_0001D36E); /* call 0x0001D36E */

loc_0013F2E8: ;
    edx = esp + 0xC4;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0013F2F3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F2F3; /* jne: not equal / not zero */

loc_0013F2FD: ;
    ecx = esp + 0x10;
    eax = esp + 0xC0;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0x14) = 0x4B640DD;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0013F325u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0013F325: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0013F327: ;
    POP32(esp, edi);

loc_0013F328: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2B4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F3E0
 * Original: 0x0013F3E0 - 0x0013F3E3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F3E0(void)
{

loc_0013F3E0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F3F0
 * Original: 0x0013F3F0 - 0x0013F408 (24 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F3F0(void)
{

loc_0013F3F0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DFA74);
    PUSH32(esp, 0x7DFA6C);
    PUSH32(esp, 0x0013F405u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013F405: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F410
 * Original: 0x0013F410 - 0x0013F437 (39 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F410: ;
    SET_LO8(eax, MEM8(0x8FC1CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x7DFA84;
    if (CMP_NE(_fa, _fb)) goto loc_0013F423; /* jne: not equal / not zero */

loc_0013F41E: ;
    eax = 0x7DF4D4;

loc_0013F423: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFA78);
    PUSH32(esp, 0x0013F434u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013F434: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F440
 * Original: 0x0013F440 - 0x0013F443 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F440(void)
{

loc_0013F440: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F450
 * Original: 0x0013F450 - 0x0013F453 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F450(void)
{

loc_0013F450: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F460
 * Original: 0x0013F460 - 0x0013F463 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F460(void)
{

loc_0013F460: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F470
 * Original: 0x0013F470 - 0x0013F505 (149 bytes, 52 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013F470: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7DFAC4);
    ecx = esi;
    PUSH32(esp, 0x0013F487u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013F487: ;
    PUSH32(esp, 0x7DFABC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0013F495u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_0013F495: ;
    PUSH32(esp, 0x7DFAB0);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0013F4A3u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013F4A3: ;
    PUSH32(esp, 0x7DFAA8);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0013F4B1u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_0013F4B1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013F4C1u); RECOMP_ABI_CALL(0x00037A0Cu, sub_00037A0C); /* call 0x00037A0C */

loc_0013F4C1: ;
    edx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x7DFAA0);
    ecx = esi;
    PUSH32(esp, 0x0013F4D9u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013F4D9: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFA98);
    ecx = esi;
    PUSH32(esp, 0x0013F4EAu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013F4EA: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7DFA88);
    ecx = esi;
    PUSH32(esp, 0x0013F4FBu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013F4FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F530
 * Original: 0x0013F530 - 0x0013F552 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F530: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x7DFAD0);
    PUSH32(esp, 0x0013F53Eu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013F53E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F54A; /* je: equal / zero */

loc_0013F542: ;
    PUSH32(esp, 0x0013F547u); RECOMP_ABI_CALL(0x005402D0u, sub_005402D0); /* call 0x005402D0 */

loc_0013F547: ;
    esp += 12; return; /* ret 8 */

loc_0013F54A: ;
    PUSH32(esp, 0x0013F54Fu); RECOMP_ABI_CALL(0x005402E0u, sub_005402E0); /* call 0x005402E0 */

loc_0013F54F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F560
 * Original: 0x0013F560 - 0x0013F56E (14 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F560(void)
{

loc_0013F560: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 0x0013F56Bu); RECOMP_ABI_CALL(0x00036422u, sub_00036422); /* call 0x00036422 */

loc_0013F56B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F580
 * Original: 0x0013F580 - 0x0013F583 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F580(void)
{

loc_0013F580: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F590
 * Original: 0x0013F590 - 0x0013F593 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F590(void)
{

loc_0013F590: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F5A0
 * Original: 0x0013F5A0 - 0x0013F5C3 (35 bytes, 8 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F5A0(void)
{

loc_0013F5A0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    edx = MEM32(ecx + 0xF0);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7DFADC);
    PUSH32(esp, 0x0013F5C0u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013F5C0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F5D0
 * Original: 0x0013F5D0 - 0x0013F5F3 (35 bytes, 7 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F5D0(void)
{

loc_0013F5D0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x7DFADC);
    PUSH32(esp, 0x0013F5DEu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013F5DE: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E0);
    MEM32(edx + 0xF0) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F600
 * Original: 0x0013F600 - 0x0013F613 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F600(void)
{

loc_0013F600: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DFAF0);
    PUSH32(esp, 0x0013F610u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013F610: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F620
 * Original: 0x0013F620 - 0x0013F623 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F620(void)
{

loc_0013F620: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F630
 * Original: 0x0013F630 - 0x0013F67D (77 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F630: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7DFB0C);
    PUSH32(esp, 0x0013F63Fu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013F63F: ;
    ebx = eax;
    PUSH32(esp, 0x0013F646u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0013F646: ;
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0013F651u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_0013F651: ;
    SET_LO8(eax, MEM8(eax));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0013F664; /* jne: not equal / not zero */

loc_0013F65A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013F662; /* je: equal / zero */

loc_0013F65E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013F664; /* je: equal / zero */

loc_0013F662: ;
    SET_LO8(ecx, 1);

loc_0013F664: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(esp + 8);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFB00);
    PUSH32(esp, 0x0013F67Au); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013F67A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F690
 * Original: 0x0013F690 - 0x0013F6B6 (38 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F690: ;
    SET_LO8(edx, MEM8(0x8FC1D5));
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFB1C);
    PUSH32(esp, 0x0013F6ACu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013F6AC: ;
    MEM8(0x8FC1D5) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F6C0
 * Original: 0x0013F6C0 - 0x0013F8B0 (496 bytes, 168 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013F6C0: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x11C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7DFB6C);
    ecx = ebp;
    PUSH32(esp, 0x0013F6DDu); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_0013F6DD: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013F6E5u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0013F6E5: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0013F6F3u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0013F6F3: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0013F701u); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_0013F701: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F752; /* jne: not equal / not zero */

loc_0013F705: ;
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, 0x7DFB4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F715u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0013F715: ;
    esi = MEM32(esp + 0x134);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7DFB44);
    ecx = esi;
    PUSH32(esp, 0x0013F732u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013F732: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DFB3C);
    PUSH32(esp, 0x7DFAA8);
    ecx = esi;
    PUSH32(esp, 0x0013F745u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013F745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0013F752: ;
    ebx = MEM32(ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013F862; /* jle: less or equal (signed <=) */

loc_0013F75E: ;
    edi = ebx * 8 + -8;
    PUSH32(esp, 0x100);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013F770u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013F770: ;
    esi = eax;
    ecx = edi;
    edx = esi + ebx * 4 + -4;
    MEM32(esp + 0x20) = edx;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0013F7F0; /* jle: less or equal (signed <=) */

loc_0013F79B: ;
    goto loc_0013F7A0;

    /* nop */

loc_0013F7A0: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + edi * 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7DFB2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F7B6u); RECOMP_ABI_CALL(0x005CC4B1u, sub_005CC4B1); /* call 0x005CC4B1 */

loc_0013F7B6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F7EB; /* jne: not equal / not zero */

loc_0013F7BE: ;
    eax = MEM32(esp + 0x10);
    edx = ebx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013F7EB; /* jge: greater or equal (signed >=) */

loc_0013F7C9: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0013F7D1u); RECOMP_ABI_CALL(0x00021D83u, sub_00021D83); /* call 0x00021D83 */

loc_0013F7D1: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + ecx * 4) = eax;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    MEM32(eax + edx * 4) = 1;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013F7EB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013F7A0; /* jl: less (signed <) */

loc_0013F7F0: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x0013F7FEu); RECOMP_ABI_CALL(0x00016654u, sub_00016654); /* call 0x00016654 */

loc_0013F7FE: ;
    ebx = eax;
    edx = ebx + 1;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013F80Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013F80E: ;
    edi = eax;
    eax = MEM32(esp + 0x18);
    eax = eax + eax * 4;
    ebp = ebx + eax * 8;
    PUSH32(esp, 0x100);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013F825u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013F825: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    ebx = eax;
    PUSH32(esp, 0x0013F83Bu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0013F83B: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F851u); RECOMP_ABI_CALL(0x00015A3Du, sub_00015A3D); /* call 0x00015A3D */

loc_0013F851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F857u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013F857: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013F85Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013F85D: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013F886;

loc_0013F862: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0013F86Au); RECOMP_ABI_CALL(0x00016654u, sub_00016654); /* call 0x00016654 */

loc_0013F86A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F876u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013F876: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0013F886u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0013F886: ;
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7DFAA8);
    PUSH32(esp, 0x0013F89Au); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013F89A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013F8A0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013F8A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F930
 * Original: 0x0013F930 - 0x0013F9A9 (121 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F930: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x108);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7DFB84);
    ecx = esi;
    PUSH32(esp, 0x0013F94Bu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013F94B: ;
    PUSH32(esp, 0x7DFB70);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0013F959u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0013F959: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F974; /* je: equal / zero */

loc_0013F95D: ;
    PUSH32(esp, 0x7DFB70);
    ecx = esi;
    PUSH32(esp, 0x0013F969u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013F969: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    goto loc_0013F97E;

loc_0013F974: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);

loc_0013F97E: ;
    PUSH32(esp, 0x0013F983u); RECOMP_ABI_CALL(0x00016041u, sub_00016041); /* call 0x00016041 */

loc_0013F983: ;
    ecx = MEM32(esp + 0x120);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7DFAA8);
    PUSH32(esp, 0x0013F99Eu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013F99E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F9D0
 * Original: 0x0013F9D0 - 0x0013FA17 (71 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F9D0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x7DFB84);
    PUSH32(esp, 0x0013F9E4u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013F9E4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F9F3u); RECOMP_ABI_CALL(0x00016041u, sub_00016041); /* call 0x00016041 */

loc_0013F9F3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, 0x7DFAA8);
    PUSH32(esp, 0x0013FA0Eu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013FA0E: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013FA30
 * Original: 0x0013FA30 - 0x0013FA98 (104 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FA30(void)
{
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

loc_0013FA30: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10C);
    PUSH32(esp, 0x7DFB9C);
    ecx = esi;
    PUSH32(esp, 0x0013FA4Au); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_0013FA4A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013FA50u); RECOMP_ABI_CALL(0x005CC4EBu, sub_005CC4EB); /* call 0x005CC4EB */

loc_0013FA50: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7DFB8C);
    ecx = esi;
    PUSH32(esp, 0x0013FA63u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013FA63: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013FA73u); RECOMP_ABI_CALL(0x0002D732u, sub_0002D732); /* call 0x0002D732 */

loc_0013FA73: ;
    ecx = MEM32(esp + 0x11C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7DFAA8);
    PUSH32(esp, 0x0013FA8Eu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013FA8E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013FAC0
 * Original: 0x0013FAC0 - 0x0013FB71 (177 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013FAC0: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x214);
    PUSH32(esp, 0x7DFBD4);
    ecx = edi;
    PUSH32(esp, 0x0013FADDu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013FADD: ;
    PUSH32(esp, 0x7DFBD0);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0013FAEBu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013FAEB: ;
    PUSH32(esp, 0x7DFBC4);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x0013FAF9u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013FAF9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    ebp = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0013FB52; /* jg: greater (signed >) */

loc_0013FB01: ;
    PUSH32(esp, edi);
    eax = esp + 0x114;
    PUSH32(esp, 0x7DFBB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013FB14u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0013FB14: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    ecx = esp + 0x18;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013FB2Du); RECOMP_ABI_CALL(0x0002D732u, sub_0002D732); /* call 0x0002D732 */

loc_0013FB2D: ;
    ecx = MEM32(esp + 0x224);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013FB4Bu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013FB4B: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013FB01; /* jle: less or equal (signed <=) */

loc_0013FB52: ;
    ecx = MEM32(esp + 0x218);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7DFBA8);
    PUSH32(esp, 0x0013FB64u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013FB64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013FBA0
 * Original: 0x0013FBA0 - 0x0013FC61 (193 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013FBA0: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x214);
    PUSH32(esp, 0x7DFBD4);
    ecx = edi;
    PUSH32(esp, 0x0013FBBCu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013FBBC: ;
    PUSH32(esp, 0x7DFBD0);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0013FBCAu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013FBCA: ;
    PUSH32(esp, 0x7DFBC4);
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x0013FBD8u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013FBD8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0013FC43; /* jg: greater (signed >) */

loc_0013FBE2: ;
    PUSH32(esp, ebx);

loc_0013FBE3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x1D;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013FBF2u); RECOMP_ABI_CALL(0x00016041u, sub_00016041); /* call 0x00016041 */

loc_0013FBF2: ;
    SET_LO8(eax, MEM8(esp + 0x25));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013FC08; /* jne: not equal / not zero */

loc_0013FBFD: ;
    MEM8(esp + 0x14) = 0x24;
    ebx = esp + 0x14;
    goto loc_0013FC0C;

loc_0013FC08: ;
    ebx = esp + 0x15;

loc_0013FC0C: ;
    PUSH32(esp, edi);
    ecx = esp + 0x118;
    PUSH32(esp, 0x7DFBB8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013FC1Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0013FC1F: ;
    ecx = MEM32(esp + 0x228);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013FC39u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0013FC39: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013FBE3; /* jle: less or equal (signed <=) */

loc_0013FC42: ;
    POP32(esp, ebx);

loc_0013FC43: ;
    ecx = MEM32(esp + 0x218);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7DFBA8);
    PUSH32(esp, 0x0013FC55u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013FC55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013FCA0
 * Original: 0x0013FCA0 - 0x0013FCBC (28 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FCA0(void)
{

loc_0013FCA0: ;
    PUSH32(esp, 0x0013FCA5u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0013FCA5: ;
    PUSH32(esp, 0x0013FCAAu); RECOMP_ABI_CALL(0x0001B339u, sub_0001B339); /* call 0x0001B339 */

loc_0013FCAA: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFBDC);
    PUSH32(esp, 0x0013FCB9u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0013FCB9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013FCD0
 * Original: 0x0013FCD0 - 0x0013FD3A (106 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013FCD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7DFBDC);
    ecx = esi;
    PUSH32(esp, 0x0013FCE5u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0013FCE5: ;
    PUSH32(esp, 0x7DFBDC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0013FCF3u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0013FCF3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FD32; /* je: equal / zero */

loc_0013FCF7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013FD32; /* jge: greater or equal (signed >=) */

loc_0013FCFC: ;
    PUSH32(esp, 0x0013FD01u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0013FD01: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013FD07u); RECOMP_ABI_CALL(0x0002F933u, sub_0002F933); /* call 0x0002F933 */

loc_0013FD07: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    eax = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F06F4);
    MEM32(esp + 0x18) = 0xC;
    MEM32(esp + 0xC) = 0x4B65AF5;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0013FD32u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0013FD32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013FD60
 * Original: 0x0013FD60 - 0x0013FD67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FD60(void)
{

loc_0013FD60: ;
    MEM32(ecx) = 0x7DFBE8;
    esp += 4; return; /* ret */

}

/**
 * sub_0013FD70
 * Original: 0x0013FD70 - 0x0013FD8F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013FD70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DFBE8;
    if (TEST_Z(_fa, _fb)) goto loc_0013FD89; /* je: equal / zero */

loc_0013FD80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013FD86u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013FD86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013FD89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013FDA0
 * Original: 0x0013FDA0 - 0x0013FDA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FDA0(void)
{

loc_0013FDA0: ;
    eax = ZX16(MEM16(ecx + 0x44));
    esp += 4; return; /* ret */

}

/**
 * sub_0013FDB0
 * Original: 0x0013FDB0 - 0x0013FDD4 (36 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FDB0(void)
{

loc_0013FDB0: ;
    SET_LO16(edx, MEM16(esp + 8));
    eax = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(esp + 0xC);
    MEM16(eax + 2) = LO16(edx);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0013FDE0
 * Original: 0x0013FDE0 - 0x0013FDFE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013FDE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0013FDE8u); RECOMP_ABI_CALL(0x00024F1Fu, sub_00024F1F); /* call 0x00024F1F */

loc_0013FDE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013FDF8; /* je: equal / zero */

loc_0013FDEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013FDF5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013FDF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013FDF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013FE10
 * Original: 0x0013FE10 - 0x0013FE30 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013FE10: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8F06F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FE2E; /* je: equal / zero */

loc_0013FE1B: ;
    goto loc_0013FE20;

    /* nop */

loc_0013FE20: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0013FE27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FE24u); } /* indirect call */
    }

loc_0013FE27: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013FE20; /* jne: not equal / not zero */

loc_0013FE2E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013FE40
 * Original: 0x0013FE40 - 0x0014005C (540 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013FE40: ;
    ecx = MEM32(0x8F0700);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FE5A; /* je: equal / zero */

loc_0013FE4D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FE54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FE51u); } /* indirect call */
    }

loc_0013FE54: ;
    MEM32(0x8F0700) = esi;

loc_0013FE5A: ;
    ecx = MEM32(0x8F0748);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013FE6B; /* je: equal / zero */

loc_0013FE64: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013FE6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FE68u); } /* indirect call */
    }

loc_0013FE6B: ;
    ecx = MEM32(0x8F0744);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0748) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FE82; /* je: equal / zero */

loc_0013FE7B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FE82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FE7Fu); } /* indirect call */
    }

loc_0013FE82: ;
    ecx = MEM32(0x8F0738);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0744) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FE99; /* je: equal / zero */

loc_0013FE92: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013FE99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FE96u); } /* indirect call */
    }

loc_0013FE99: ;
    ecx = MEM32(0x8F0714);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0738) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FEB0; /* je: equal / zero */

loc_0013FEA9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FEB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FEADu); } /* indirect call */
    }

loc_0013FEB0: ;
    ecx = MEM32(0x8F0710);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0714) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FEC7; /* je: equal / zero */

loc_0013FEC0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013FEC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FEC4u); } /* indirect call */
    }

loc_0013FEC7: ;
    ecx = MEM32(0x8F070C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0710) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FEDE; /* je: equal / zero */

loc_0013FED7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FEDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FEDBu); } /* indirect call */
    }

loc_0013FEDE: ;
    ecx = MEM32(0x8F0718);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F070C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FEF5; /* je: equal / zero */

loc_0013FEEE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013FEF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FEF2u); } /* indirect call */
    }

loc_0013FEF5: ;
    ecx = MEM32(0x8F071C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0718) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FF0C; /* je: equal / zero */

loc_0013FF05: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FF0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FF09u); } /* indirect call */
    }

loc_0013FF0C: ;
    ecx = MEM32(0x8F0720);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F071C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FF23; /* je: equal / zero */

loc_0013FF1C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013FF23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FF20u); } /* indirect call */
    }

loc_0013FF23: ;
    ecx = MEM32(0x8F0724);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0720) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FF3A; /* je: equal / zero */

loc_0013FF33: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FF3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FF37u); } /* indirect call */
    }

loc_0013FF3A: ;
    ecx = MEM32(0x8F072C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0724) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FF51; /* je: equal / zero */

loc_0013FF4A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013FF51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FF4Eu); } /* indirect call */
    }

loc_0013FF51: ;
    ecx = MEM32(0x8F0730);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F072C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FF68; /* je: equal / zero */

loc_0013FF61: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FF68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FF65u); } /* indirect call */
    }

loc_0013FF68: ;
    ecx = MEM32(0x8F0734);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0730) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FF7F; /* je: equal / zero */

loc_0013FF78: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013FF7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FF7Cu); } /* indirect call */
    }

loc_0013FF7F: ;
    ecx = MEM32(0x8F073C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0734) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FF96; /* je: equal / zero */

loc_0013FF8F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FF96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FF93u); } /* indirect call */
    }

loc_0013FF96: ;
    ecx = MEM32(0x8F074C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F073C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FFAD; /* je: equal / zero */

loc_0013FFA6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013FFADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FFAAu); } /* indirect call */
    }

loc_0013FFAD: ;
    ecx = MEM32(0x8F0750);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F074C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FFC4; /* je: equal / zero */

loc_0013FFBD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FFC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FFC1u); } /* indirect call */
    }

loc_0013FFC4: ;
    ecx = MEM32(0x8F0758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0750) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FFDB; /* je: equal / zero */

loc_0013FFD4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013FFDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FFD8u); } /* indirect call */
    }

loc_0013FFDB: ;
    ecx = MEM32(0x8F075C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0758) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013FFF2; /* je: equal / zero */

loc_0013FFEB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013FFF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013FFEFu); } /* indirect call */
    }

loc_0013FFF2: ;
    ecx = MEM32(0x8F0760);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F075C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00140009; /* je: equal / zero */

loc_00140002: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00140009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140006u); } /* indirect call */
    }

loc_00140009: ;
    ecx = MEM32(0x8F0764);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0760) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00140020; /* je: equal / zero */

loc_00140019: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00140020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014001Du); } /* indirect call */
    }

loc_00140020: ;
    ecx = MEM32(0x8F0768);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0764) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00140037; /* je: equal / zero */

loc_00140030: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00140037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140034u); } /* indirect call */
    }

loc_00140037: ;
    ecx = MEM32(0x8F076C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0768) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0014004E; /* je: equal / zero */

loc_00140047: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0014004Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014004Bu); } /* indirect call */
    }

loc_0014004E: ;
    MEM32(0x8F076C) = esi;
    MEM32(0x8F06F4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00140000
 * Original: 0x00140000 - 0x0014005C (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140000: ;
    if (_flags /* je: equal / zero */) goto loc_00140009;

loc_00140002: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00140009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140006u); } /* indirect call */
    }

loc_00140009: ;
    ecx = MEM32(0x8F0764);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0760) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00140020; /* je: equal / zero */

loc_00140019: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00140020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014001Du); } /* indirect call */
    }

loc_00140020: ;
    ecx = MEM32(0x8F0768);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0764) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00140037; /* je: equal / zero */

loc_00140030: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00140037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140034u); } /* indirect call */
    }

loc_00140037: ;
    ecx = MEM32(0x8F076C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0768) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0014004E; /* je: equal / zero */

loc_00140047: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0014004Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014004Bu); } /* indirect call */
    }

loc_0014004E: ;
    MEM32(0x8F076C) = esi;
    MEM32(0x8F06F4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00140002
 * Original: 0x00140002 - 0x0014005C (90 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140002(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140002: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00140009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140006u); } /* indirect call */
    }

loc_00140009: ;
    ecx = MEM32(0x8F0764);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0760) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00140020; /* je: equal / zero */

loc_00140019: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00140020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014001Du); } /* indirect call */
    }

loc_00140020: ;
    ecx = MEM32(0x8F0768);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0764) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00140037; /* je: equal / zero */

loc_00140030: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00140037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140034u); } /* indirect call */
    }

loc_00140037: ;
    ecx = MEM32(0x8F076C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0768) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0014004E; /* je: equal / zero */

loc_00140047: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0014004Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014004Bu); } /* indirect call */
    }

loc_0014004E: ;
    MEM32(0x8F076C) = esi;
    MEM32(0x8F06F4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001400F0
 * Original: 0x001400F0 - 0x00140157 (103 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001400F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001400F0: ;
    ecx = MEM32(0x8F0730);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140104; /* je: equal / zero */

loc_001400FD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00140104u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140101u); } /* indirect call */
    }

loc_00140104: ;
    ecx = MEM32(0x8F0728);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0730) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0014011B; /* je: equal / zero */

loc_00140114: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0014011Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140118u); } /* indirect call */
    }

loc_0014011B: ;
    ecx = MEM32(0x8F0744);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0728) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00140132; /* je: equal / zero */

loc_0014012B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00140132u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014012Fu); } /* indirect call */
    }

loc_00140132: ;
    ecx = MEM32(0x8F0734);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x8F0744) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00140149; /* je: equal / zero */

loc_00140142: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00140149u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140146u); } /* indirect call */
    }

loc_00140149: ;
    MEM32(0x8F0734) = esi;
    MEM32(0x8F06F4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00140170
 * Original: 0x00140170 - 0x00140186 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140170(void)
{

loc_00140170: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F0754);
    PUSH32(esp, 0x00140185u); RECOMP_ABI_CALL(0x00033786u, sub_00033786); /* call 0x00033786 */

loc_00140185: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00140190
 * Original: 0x00140190 - 0x001402D9 (329 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140190: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x118);
    PUSH32(esp, 0x7DFC44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001401A9u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001401A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001401F1; /* jne: not equal / not zero */

loc_001401B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFC1C);
    PUSH32(esp, 0x001401C1u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_001401C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001401CAu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_001401CA: ;
    ecx = eax;
    PUSH32(esp, 0x001401D1u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_001401D1: ;
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x124);
    PUSH32(esp, 0x7DFC44);
    PUSH32(esp, 0x001401E9u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001401E9: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001401F1: ;
    PUSH32(esp, 0x7DFC10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001401FCu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001401FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001402BD; /* jne: not equal / not zero */

loc_00140207: ;
    PUSH32(esp, 0x0014020Cu); RECOMP_ABI_CALL(0x0001B339u, sub_0001B339); /* call 0x0001B339 */

loc_0014020C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0014029D; /* ja: above (unsigned >) */

loc_00140215: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1402DC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0014021Cu) goto loc_0014021C;
    if (_jt == 0x00140233u) goto loc_00140233;
    if (_jt == 0x0014024Bu) goto loc_0014024B;
    if (_jt == 0x00140259u) goto loc_00140259;
    if (_jt == 0x00140270u) goto loc_00140270;
    if (_jt == 0x00140288u) goto loc_00140288;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014021C: ;
    SET_LO16(edx, MEM16(0x7DFC0C));
    SET_LO8(eax, MEM8(0x7DFC0E));
    MEM16(esp + 4) = LO16(edx);
    MEM8(esp + 6) = LO8(eax);
    goto loc_0014029D;

loc_00140233: ;
    SET_LO16(ecx, MEM16(0x7DFC08));
    SET_LO8(edx, MEM8(0x7DFC0A));
    MEM16(esp + 4) = LO16(ecx);
    MEM8(esp + 6) = LO8(edx);
    goto loc_0014029D;

loc_0014024B: ;
    SET_LO16(eax, MEM16(0x7DFC04));
    SET_LO8(ecx, MEM8(0x7DFC06));
    goto loc_00140294;

loc_00140259: ;
    SET_LO16(edx, MEM16(0x7DFC00));
    SET_LO8(eax, MEM8(0x7DFC02));
    MEM16(esp + 4) = LO16(edx);
    MEM8(esp + 6) = LO8(eax);
    goto loc_0014029D;

loc_00140270: ;
    SET_LO16(ecx, MEM16(0x7DFBFC));
    SET_LO8(edx, MEM8(0x7DFBFE));
    MEM16(esp + 4) = LO16(ecx);
    MEM8(esp + 6) = LO8(edx);
    goto loc_0014029D;

loc_00140288: ;
    SET_LO16(eax, MEM16(0x7DFBF8));
    SET_LO8(ecx, MEM8(0x7DFBFA));

loc_00140294: ;
    MEM16(esp + 4) = LO16(eax);
    MEM8(esp + 6) = LO8(ecx);

loc_0014029D: ;
    ecx = MEM32(esp + 0x11C);
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7DFC10);
    PUSH32(esp, 0x001402B5u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001402B5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001402BD: ;
    eax = MEM32(esp + 0x11C);
    ecx = MEM32(0x8F0754);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001402D1u); RECOMP_ABI_CALL(0x0001A222u, sub_0001A222); /* call 0x0001A222 */

loc_001402D1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00140350
 * Original: 0x00140350 - 0x0014037F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140350: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x00140361u); RECOMP_ABI_CALL(0x0002FFEBu, sub_0002FFEB); /* call 0x0002FFEB */

loc_00140361: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00140370u); RECOMP_ABI_CALL(0x0001AF4Cu, sub_0001AF4C); /* call 0x0001AF4C */

loc_00140370: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, 0x0014037Bu); RECOMP_ABI_CALL(0x00026770u, sub_00026770); /* call 0x00026770 */

loc_0014037B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00140390
 * Original: 0x00140390 - 0x001403CF (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140390: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x0014039Bu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0014039B: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x001403A9u); RECOMP_ABI_CALL(0x0002FFEBu, sub_0002FFEB); /* call 0x0002FFEB */

loc_001403A9: ;
    ecx = esp;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001403B7u); RECOMP_ABI_CALL(0x0001AF4Cu, sub_0001AF4C); /* call 0x0001AF4C */

loc_001403B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, 0x001403C3u); RECOMP_ABI_CALL(0x00026770u, sub_00026770); /* call 0x00026770 */

loc_001403C3: ;
    ecx = esp;
    PUSH32(esp, 0x001403CBu); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_001403CB: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001403E0
 * Original: 0x001403E0 - 0x001403EB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001403E0(void)
{

loc_001403E0: ;
    eax = MEM32(0x8AEDBC);
    MEM32(0x8AF104) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001403F0
 * Original: 0x001403F0 - 0x001403F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001403F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001403F0: ;
    g_seh_ebp = ebp; sub_0001FFA1(); return; /* tail jmp 0x0001FFA1 */

}

/**
 * sub_00140400
 * Original: 0x00140400 - 0x00140405 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140400: ;
    g_seh_ebp = ebp; sub_005A06C1(); return; /* tail jmp 0x005A06C1 */

}

/**
 * sub_00140410
 * Original: 0x00140410 - 0x00140419 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140410: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_00140420
 * Original: 0x00140420 - 0x0014042C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140420: ;
    eax = MEM32(ecx + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_00140430
 * Original: 0x00140430 - 0x00140467 (55 bytes, 21 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140430: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014043D; /* je: equal / zero */

loc_00140438: ;
    edx = MEM32(ecx + 0x38);
    MEM32(eax) = edx;

loc_0014043D: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014044A; /* je: equal / zero */

loc_00140445: ;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax) = edx;

loc_0014044A: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140457; /* je: equal / zero */

loc_00140452: ;
    edx = MEM32(ecx + 0x40);
    MEM32(eax) = edx;

loc_00140457: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140464; /* je: equal / zero */

loc_0014045F: ;
    ecx = MEM32(ecx + 0x44);
    MEM32(eax) = ecx;

loc_00140464: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00140480
 * Original: 0x00140480 - 0x00140492 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140480: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x230);
    eax = MEM32(ecx + 0xC);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001404A0
 * Original: 0x001404A0 - 0x001404A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001404A0(void)
{

loc_001404A0: ;
    eax = MEM32(ecx + 0x9C);
    esp += 4; return; /* ret */

}

/**
 * sub_001404B0
 * Original: 0x001404B0 - 0x001404B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001404B0(void)
{

loc_001404B0: ;
    eax = MEM32(ecx + 0xA0);
    esp += 4; return; /* ret */

}

/**
 * sub_001404C0
 * Original: 0x001404C0 - 0x001404C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001404C0(void)
{

loc_001404C0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001404D0
 * Original: 0x001404D0 - 0x001404D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001404D0(void)
{

loc_001404D0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001404E0
 * Original: 0x001404E0 - 0x001404E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001404E0(void)
{

loc_001404E0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001404F0
 * Original: 0x001404F0 - 0x00140523 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001404F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001404F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014050A; /* je: equal / zero */

loc_001404FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140500u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00140500: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_0014050A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140521; /* je: equal / zero */

loc_00140511: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140517u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00140517: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00140521: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00140530
 * Original: 0x00140530 - 0x00140533 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140530(void)
{

loc_00140530: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00140540
 * Original: 0x00140540 - 0x00140544 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140540(void)
{

loc_00140540: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00140550
 * Original: 0x00140550 - 0x00140554 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140550(void)
{

loc_00140550: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00140560
 * Original: 0x00140560 - 0x00140564 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140560(void)
{

loc_00140560: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00140570
 * Original: 0x00140570 - 0x00140574 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140570(void)
{

loc_00140570: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00140580
 * Original: 0x00140580 - 0x00140584 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140580(void)
{

loc_00140580: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00140590
 * Original: 0x00140590 - 0x001405A5 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140590(void)
{

loc_00140590: ;
    PUSH32(esp, 0x00140595u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00140595: ;
    ecx = eax;
    PUSH32(esp, 0x0014059Cu); RECOMP_ABI_CALL(0x0001C969u, sub_0001C969); /* call 0x0001C969 */

loc_0014059C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001405A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001405A0u); } /* indirect call */
    }

loc_001405A2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001405B0
 * Original: 0x001405B0 - 0x001405C6 (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001405B0(void)
{

loc_001405B0: ;
    PUSH32(esp, 0x001405B5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001405B5: ;
    ecx = eax;
    PUSH32(esp, 0x001405BCu); RECOMP_ABI_CALL(0x0001C969u, sub_0001C969); /* call 0x0001C969 */

loc_001405BC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001405C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001405C0u); } /* indirect call */
    }

loc_001405C3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001405D0
 * Original: 0x001405D0 - 0x00140649 (121 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001405D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001405D0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x7DFC60);
    PUSH32(esp, 0x001405E1u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_001405E1: ;
    PUSH32(esp, 0x7DFC50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001405ECu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001405EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140603; /* jne: not equal / not zero */

loc_001405F3: ;
    PUSH32(esp, 0x001405F8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001405F8: ;
    ecx = eax;
    PUSH32(esp, 0x001405FFu); RECOMP_ABI_CALL(0x0001C969u, sub_0001C969); /* call 0x0001C969 */

loc_001405FF: ;
    PUSH32(esp, 0xB);
    goto loc_00140611;

loc_00140603: ;
    PUSH32(esp, 0x00140608u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00140608: ;
    ecx = eax;
    PUSH32(esp, 0x0014060Fu); RECOMP_ABI_CALL(0x0001C969u, sub_0001C969); /* call 0x0001C969 */

loc_0014060F: ;
    PUSH32(esp, 0xC);

loc_00140611: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00140618u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140615u); } /* indirect call */
    }

loc_00140618: ;
    ecx = MEM32(0x8F06F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140643; /* je: equal / zero */

loc_00140622: ;
    edx = esp;
    eax = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 4) = 0x4B65AF5;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00140643u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00140643: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140670
 * Original: 0x00140670 - 0x00140722 (178 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140670: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001406DF; /* je: equal / zero */

loc_0014067D: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, ebp);
    ebp = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi + ecx * 8;
    if ((_fas < 0)) goto loc_001406C9; /* js: sign (negative) */

loc_0014068D: ;
    esi = ecx + 4;
    ebx = eax + 1;

loc_00140693: ;
    eax = MEM32(esi + -20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001406AD; /* je: equal / zero */

loc_0014069D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001406A3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001406A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_001406AD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001406C2; /* je: equal / zero */

loc_001406B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001406B9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001406B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_001406C2: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00140693; /* jne: not equal / not zero */

loc_001406C5: ;
    SET_LO8(ebx, MEM8(esp + 0x10));

loc_001406C9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001406D7; /* je: equal / zero */

loc_001406CE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001406D4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001406D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001406D7: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001406DF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001406F6; /* je: equal / zero */

loc_001406E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001406ECu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001406EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_001406F6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014070D; /* je: equal / zero */

loc_001406FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140703u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00140703: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_0014070D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014071B; /* je: equal / zero */

loc_00140712: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140718u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00140718: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014071B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140750
 * Original: 0x00140750 - 0x00140818 (200 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140750: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x70);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00140760: ;
    eax = MEM32(0x7DFC7C);
    SET_LO8(ecx, MEM8(0x7DFC80));
    MEM32(esp + 0x4C) = eax;
    SET_LO8(edx, LO8(ebx));
    MEM8(esp + 0x50) = LO8(ecx);
    eax = esp + 0x4C;
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x30);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x54) = LO8(edx);
    MEM8(esp + 0x55) = 0;
    PUSH32(esp, 0x0014078Du); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0014078D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001407E7; /* je: equal / zero */

loc_00140791: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0014079Du); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0014079D: ;
    edx = MEM32(0x7DFC6C);
    ecx = MEM32(0x7DFC70);
    MEM32(esp + 0x2C) = edx;
    SET_LO16(edx, MEM16(0x7DFC74));
    MEM32(esp + 0x30) = ecx;
    SET_LO8(ecx, MEM8(0x7DFC76));
    MEM16(esp + 0x34) = LO16(edx);
    MEM32(esp + esi * 4 + 0x1C) = eax;
    MEM8(esp + 0x36) = LO8(ecx);
    edx = esp + 0x2C;
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = edi;
    MEM8(esp + 0x3A) = LO8(eax);
    MEM8(esp + 0x3B) = 0;
    PUSH32(esp, 0x001407E2u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001407E2: ;
    MEM32(esp + esi * 4 + 0xC) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001407E7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140760; /* jl: less (signed <) */

loc_001407F1: ;
    PUSH32(esp, 0x001407F6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001407F6: ;
    ecx = eax;
    PUSH32(esp, 0x001407FDu); RECOMP_ABI_CALL(0x0001C969u, sub_0001C969); /* call 0x0001C969 */

loc_001407FD: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0014080Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014080Cu); } /* indirect call */
    }

loc_0014080F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140850
 * Original: 0x00140850 - 0x001408F7 (167 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140850: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00140866u); RECOMP_ABI_CALL(0x00021D83u, sub_00021D83); /* call 0x00021D83 */

loc_00140866: ;
    edi = eax;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00140875u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00140875: ;
    ecx = eax;
    PUSH32(esp, 0x0014087Cu); RECOMP_ABI_CALL(0x0001C969u, sub_0001C969); /* call 0x0001C969 */

loc_0014087C: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00140889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140886u); } /* indirect call */
    }

loc_00140889: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001408DF; /* jle: less or equal (signed <=) */

loc_0014088F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x98);
    goto loc_001408A0;

    /* nop */

loc_001408A0: ;
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, 0x7DFC84);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001408B0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001408B0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + esi * 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001408C9u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001408C9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001408D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001408D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001408A0; /* jl: less (signed <) */

loc_001408DE: ;
    POP32(esp, ebx);

loc_001408DF: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001408E9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001408E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140920
 * Original: 0x00140920 - 0x00140962 (66 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140920: ;
    PUSH32(esp, ecx);
    MEM32(esp) = 0;
    PUSH32(esp, 0x0014092Du); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0014092D: ;
    ecx = eax;
    PUSH32(esp, 0x00140934u); RECOMP_ABI_CALL(0x0001C969u, sub_0001C969); /* call 0x0001C969 */

loc_00140934: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0014093Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014093Cu); } /* indirect call */
    }

loc_0014093F: ;
    edx = MEM32(esp);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7DFC98);
    PUSH32(esp, 0x00140953u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00140953: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014095Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0014095C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140980
 * Original: 0x00140980 - 0x00140A15 (149 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140980(void)
{

loc_00140980: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00140987u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00140987: ;
    ecx = eax;
    PUSH32(esp, 0x0014098Eu); RECOMP_ABI_CALL(0x0001C969u, sub_0001C969); /* call 0x0001C969 */

loc_0014098E: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00140999u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140996u); } /* indirect call */
    }

loc_00140999: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFC60);
    ecx = edi;
    PUSH32(esp, 0x001409AAu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001409AA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001409B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001409B0u); } /* indirect call */
    }

loc_001409B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFCDC);
    ecx = edi;
    PUSH32(esp, 0x001409C0u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001409C0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001409C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001409C6u); } /* indirect call */
    }

loc_001409C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFCCC);
    ecx = edi;
    PUSH32(esp, 0x001409D6u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001409D6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001409DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001409DCu); } /* indirect call */
    }

loc_001409DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFCC0);
    ecx = edi;
    PUSH32(esp, 0x001409ECu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001409EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DFCB0);
    ecx = edi;
    PUSH32(esp, 0x001409FAu); RECOMP_ABI_CALL(0x00024E8Eu, sub_00024E8E); /* call 0x00024E8E */

loc_001409FA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00140A03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140A00u); } /* indirect call */
    }

loc_00140A03: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFCA8);
    ecx = edi;
    PUSH32(esp, 0x00140A10u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00140A10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140A40
 * Original: 0x00140A40 - 0x00140B0F (207 bytes, 73 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140A40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00140B09; /* jle: less or equal (signed <=) */

loc_00140A58: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_00140A60: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + ebx * 8);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00140A6Eu); RECOMP_ABI_CALL(0x00021D83u, sub_00021D83); /* call 0x00021D83 */

loc_00140A6E: ;
    PUSH32(esp, 0x7DFC60);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00140A7Fu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00140A7F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140AE1; /* je: equal / zero */

loc_00140A86: ;
    PUSH32(esp, 0x7DFCDC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140A91u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00140A91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140A9F; /* jne: not equal / not zero */

loc_00140A98: ;
    edi = 1;
    goto loc_00140AE1;

loc_00140A9F: ;
    PUSH32(esp, 0x7DFCC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140AAAu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00140AAA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140AB8; /* jne: not equal / not zero */

loc_00140AB1: ;
    edi = 3;
    goto loc_00140AE1;

loc_00140AB8: ;
    PUSH32(esp, 0x7DFCB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140AC3u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00140AC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140AFA; /* je: equal / zero */

loc_00140ACA: ;
    PUSH32(esp, 0x7DFCA8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140AD5u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00140AD5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140AE1; /* jne: not equal / not zero */

loc_00140ADC: ;
    edi = 4;

loc_00140AE1: ;
    PUSH32(esp, 0x00140AE6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00140AE6: ;
    ecx = eax;
    PUSH32(esp, 0x00140AEDu); RECOMP_ABI_CALL(0x0001C969u, sub_0001C969); /* call 0x0001C969 */

loc_00140AED: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00140AFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140AF7u); } /* indirect call */
    }

loc_00140AFA: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140A60; /* jl: less (signed <) */

loc_00140B07: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00140B09: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140B50
 * Original: 0x00140B50 - 0x00140B53 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140B50(void)
{

loc_00140B50: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140B60
 * Original: 0x00140B60 - 0x00140B63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140B60(void)
{

loc_00140B60: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00140B70
 * Original: 0x00140B70 - 0x00140BDE (110 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140B70: ;
    SET_LO8(eax, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140BDB; /* je: equal / zero */

loc_00140B77: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x7DFCE8);
    ecx = esi;
    PUSH32(esp, 0x00140B88u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00140B88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140BDA; /* je: equal / zero */

loc_00140B8C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7DFCE8);
    ecx = esi;
    PUSH32(esp, 0x00140B99u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_00140B99: ;
    edi = eax;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140BD9; /* je: equal / zero */

loc_00140BA0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00140BA2: ;
    eax = MEM32(esi * 8 + 0x8AEDC0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00140BB0u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00140BB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140BC2; /* je: equal / zero */

loc_00140BB7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x23 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140BA2; /* jl: less (signed <) */

loc_00140BBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00140BC2: ;
    ecx = MEM32(esi * 8 + 0x8AEDC4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x00140BD6u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_00140BD6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00140BD9: ;
    POP32(esp, edi);

loc_00140BDA: ;
    POP32(esp, esi);

loc_00140BDB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140C00
 * Original: 0x00140C00 - 0x00140C25 (37 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140C00: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00140C0Au); RECOMP_ABI_CALL(0x0001BBAEu, sub_0001BBAE); /* call 0x0001BBAE */

loc_00140C0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140C18; /* je: equal / zero */

loc_00140C0E: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00140C18u); RECOMP_ABI_CALL(0x0001F64Bu, sub_0001F64B); /* call 0x0001F64B */

loc_00140C18: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00140C22u); RECOMP_ABI_CALL(0x0001D3CDu, sub_0001D3CD); /* call 0x0001D3CD */

loc_00140C22: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140C30
 * Original: 0x00140C30 - 0x00140CAD (125 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140C30: ;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140C3Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00140C3C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00140C43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140C40u); } /* indirect call */
    }

loc_00140C43: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00140C62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140C5Fu); } /* indirect call */
    }

loc_00140C62: ;
    esi = MEM32(esp + 0x134);
    PUSH32(esp, 0);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7DFD00);
    ecx = esi;
    PUSH32(esp, 0x00140C7Cu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00140C7C: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFCF8);
    ecx = esi;
    PUSH32(esp, 0x00140C8Fu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00140C8F: ;
    PUSH32(esp, 0);
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7DFCF0);
    ecx = esi;
    PUSH32(esp, 0x00140CA5u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00140CA5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00140CD0
 * Original: 0x00140CD0 - 0x00140D3A (106 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140CD0: ;
    eax = 0x1018;
    PUSH32(esp, 0x00140CDAu); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_00140CDA: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00140CE3u); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_00140CE3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140CEDu); RECOMP_ABI_CALL(0x0002B0C7u, sub_0002B0C7); /* call 0x0002B0C7 */

loc_00140CED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1000);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    MEM32(esp + 0x1C) = 0x10;
    PUSH32(esp, 0x00140D0Bu); RECOMP_ABI_CALL(0x00017905u, sub_00017905); /* call 0x00017905 */

loc_00140D0B: ;
    ecx = MEM32(0x8F06F4);
    eax = esp;
    edx = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 4) = 0x4B64ADB;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x00140D2Au); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00140D2A: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00140D33u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_00140D33: ;
    _fb = (uint32_t)(0x1018) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1018;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00140D60
 * Original: 0x00140D60 - 0x00140D77 (23 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140D60(void)
{

loc_00140D60: ;
    eax = MEM32(0x8B22D0);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFD08);
    PUSH32(esp, 0x00140D74u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00140D74: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140D80
 * Original: 0x00140D80 - 0x00140DBE (62 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00140D8Eu); RECOMP_ABI_CALL(0x0001DEF4u, sub_0001DEF4); /* call 0x0001DEF4 */

loc_00140D8E: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x50) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140DAD; /* je: equal / zero */

loc_00140D99: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7DFD14);
    PUSH32(esp, 0x00140DA5u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00140DA5: ;
    MEM32(esi + 0x50) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00140DAD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DFD14);
    PUSH32(esp, 0x00140DB9u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00140DB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140DD0
 * Original: 0x00140DD0 - 0x00140DFD (45 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140DD0: ;
    SET_LO8(eax, MEM8(0x8F0779));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x54) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00140DFA; /* jne: not equal / not zero */

loc_00140DDD: ;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00140DEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140DE7u); } /* indirect call */
    }

loc_00140DEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140DF0u); RECOMP_ABI_CALL(0x005CC2D3u, sub_005CC2D3); /* call 0x005CC2D3 */

loc_00140DF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F0779) = 1;

loc_00140DFA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140E10
 * Original: 0x00140E10 - 0x00140E1D (13 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E10(void)
{

loc_00140E10: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00140E1Au); RECOMP_ABI_CALL(0x00032D27u, sub_00032D27); /* call 0x00032D27 */

loc_00140E1A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140E20
 * Original: 0x00140E20 - 0x00140E2D (13 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E20(void)
{

loc_00140E20: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00140E2Au); RECOMP_ABI_CALL(0x00032AEDu, sub_00032AED); /* call 0x00032AED */

loc_00140E2A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140E30
 * Original: 0x00140E30 - 0x00140E49 (25 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E30(void)
{

loc_00140E30: ;
    eax = (uint32_t)(int32_t)SMEM8(0x904B9D);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFD20);
    PUSH32(esp, 0x00140E46u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00140E46: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140E50
 * Original: 0x00140E50 - 0x00140E7B (43 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140E50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00140E62u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00140E62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140E6E; /* jne: not equal / not zero */

loc_00140E66: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00140E6E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00140E76u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00140E76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140E90
 * Original: 0x00140E90 - 0x00140E94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E90(void)
{

loc_00140E90: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00140EA0
 * Original: 0x00140EA0 - 0x00140EA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140EA0(void)
{

loc_00140EA0: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00140EB0
 * Original: 0x00140EB0 - 0x00140EBA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140EB0(void)
{

loc_00140EB0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x90070C) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00140EC0
 * Original: 0x00140EC0 - 0x00140EC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140EC0(void)
{

loc_00140EC0: ;
    SET_LO8(eax, MEM8(0x90070C));
    esp += 4; return; /* ret */

}

/**
 * sub_00140ED0
 * Original: 0x00140ED0 - 0x00140ED9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140ED0(void)
{

loc_00140ED0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140EE0
 * Original: 0x00140EE0 - 0x00140EEA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140EE0(void)
{

loc_00140EE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140EF0
 * Original: 0x00140EF0 - 0x00140EFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140EF0(void)
{

loc_00140EF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x138) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140F00
 * Original: 0x00140F00 - 0x00140F0D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F00(void)
{

loc_00140F00: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x13C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140F10
 * Original: 0x00140F10 - 0x00140F22 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F10(void)
{

loc_00140F10: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x18C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140F30
 * Original: 0x00140F30 - 0x00140F3D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F30(void)
{

loc_00140F30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x140) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140F40
 * Original: 0x00140F40 - 0x00140F52 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F40(void)
{

loc_00140F40: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x144) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140F60
 * Original: 0x00140F60 - 0x00140F72 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F60(void)
{

loc_00140F60: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x14C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140F80
 * Original: 0x00140F80 - 0x00140F9D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140F80: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x19C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00140F90: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140F90; /* jne: not equal / not zero */

loc_00140F9A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140FB0
 * Original: 0x00140FB0 - 0x00140FCD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140FB0: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x1BC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00140FC0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140FC0; /* jne: not equal / not zero */

loc_00140FCA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140FE0
 * Original: 0x00140FE0 - 0x00141001 (33 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140FE0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + ecx + 0x21C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00140FF4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140FF4; /* jne: not equal / not zero */

loc_00140FFE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141010
 * Original: 0x00141010 - 0x00141031 (33 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141010: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + ecx + 0x1DC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00141024: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141024; /* jne: not equal / not zero */

loc_0014102E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141040
 * Original: 0x00141040 - 0x00141061 (33 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141040: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + ecx + 0x25C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00141054: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141054; /* jne: not equal / not zero */

loc_0014105E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141070
 * Original: 0x00141070 - 0x00141091 (33 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141070: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + ecx + 0x35C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00141084: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141084; /* jne: not equal / not zero */

loc_0014108E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001410A0
 * Original: 0x001410A0 - 0x001410AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001410A0(void)
{

loc_001410A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3C0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001410B0
 * Original: 0x001410B0 - 0x001410CD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001410B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001410B0: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x39C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001410C0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001410C0; /* jne: not equal / not zero */

loc_001410CA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001410E0
 * Original: 0x001410E0 - 0x001410ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001410E0(void)
{

loc_001410E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3BC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001410F0
 * Original: 0x001410F0 - 0x0014110D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001410F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001410F0: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x3C4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00141100: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141100; /* jne: not equal / not zero */

loc_0014110A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141120
 * Original: 0x00141120 - 0x0014112D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141120(void)
{

loc_00141120: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3E4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141130
 * Original: 0x00141130 - 0x0014113D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141130(void)
{

loc_00141130: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3E8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141140
 * Original: 0x00141140 - 0x0014114D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141140(void)
{

loc_00141140: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3EC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141150
 * Original: 0x00141150 - 0x0014115D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141150(void)
{

loc_00141150: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3F4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141160
 * Original: 0x00141160 - 0x0014116D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141160(void)
{

loc_00141160: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x40C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141170
 * Original: 0x00141170 - 0x0014117D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141170(void)
{

loc_00141170: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x400) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141180
 * Original: 0x00141180 - 0x0014118D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141180(void)
{

loc_00141180: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x404) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141190
 * Original: 0x00141190 - 0x0014119D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141190(void)
{

loc_00141190: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x408) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001411A0
 * Original: 0x001411A0 - 0x001411A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001411A0(void)
{

loc_001411A0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001411B0
 * Original: 0x001411B0 - 0x001411B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001411B0(void)
{

loc_001411B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001411C0
 * Original: 0x001411C0 - 0x001411C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001411C0(void)
{

loc_001411C0: ;
    eax = MEM32(ecx + 0x138);
    esp += 4; return; /* ret */

}

/**
 * sub_001411D0
 * Original: 0x001411D0 - 0x001411DE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001411D0(void)
{

loc_001411D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x144);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001411F0
 * Original: 0x001411F0 - 0x001411FE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001411F0(void)
{

loc_001411F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x14C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141210
 * Original: 0x00141210 - 0x00141221 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141210: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x21C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141230
 * Original: 0x00141230 - 0x00141237 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141230(void)
{

loc_00141230: ;
    eax = ecx + 0x39C;
    esp += 4; return; /* ret */

}

/**
 * sub_00141240
 * Original: 0x00141240 - 0x00141247 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141240(void)
{

loc_00141240: ;
    eax = MEM32(ecx + 0x3BC);
    esp += 4; return; /* ret */

}

/**
 * sub_00141250
 * Original: 0x00141250 - 0x00141257 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141250(void)
{

loc_00141250: ;
    eax = ecx + 0x3C4;
    esp += 4; return; /* ret */

}

/**
 * sub_00141260
 * Original: 0x00141260 - 0x00141267 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141260(void)
{

loc_00141260: ;
    eax = MEM32(ecx + 0x3E4);
    esp += 4; return; /* ret */

}

/**
 * sub_00141270
 * Original: 0x00141270 - 0x00141277 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141270(void)
{

loc_00141270: ;
    eax = MEM32(ecx + 0x3E8);
    esp += 4; return; /* ret */

}

/**
 * sub_00141280
 * Original: 0x00141280 - 0x00141287 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141280(void)
{

loc_00141280: ;
    eax = MEM32(ecx + 0x400);
    esp += 4; return; /* ret */

}

/**
 * sub_00141290
 * Original: 0x00141290 - 0x00141297 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141290(void)
{

loc_00141290: ;
    eax = MEM32(ecx + 0x404);
    esp += 4; return; /* ret */

}

/**
 * sub_001412A0
 * Original: 0x001412A0 - 0x001412A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001412A0(void)
{

loc_001412A0: ;
    eax = MEM32(ecx + 0x408);
    esp += 4; return; /* ret */

}

/**
 * sub_001412B0
 * Original: 0x001412B0 - 0x001412DC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001412B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001412B0: ;
    PUSH32(esp, 0x001412B5u); RECOMP_ABI_CALL(0x00026996u, sub_00026996); /* call 0x00026996 */

loc_001412B5: ;
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
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001412F0
 * Original: 0x001412F0 - 0x00141314 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001412F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001412F0: ;
    PUSH32(esp, 0x001412F5u); RECOMP_ABI_CALL(0x00026996u, sub_00026996); /* call 0x00026996 */

loc_001412F5: ;
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
    SET_LO16(eax, LO16(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_00141320
 * Original: 0x00141320 - 0x00141331 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141320(void)
{

loc_00141320: ;
    PUSH32(esp, 0x00141325u); RECOMP_ABI_CALL(0x00026996u, sub_00026996); /* call 0x00026996 */

loc_00141325: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(eax, LO16(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_00141340
 * Original: 0x00141340 - 0x00141344 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141340(void)
{

loc_00141340: ;
    eax = ecx + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00141350
 * Original: 0x00141350 - 0x00141364 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141350: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141361; /* je: equal / zero */

loc_00141359: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141361; /* je: equal / zero */

loc_0014135E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00141361: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00141370
 * Original: 0x00141370 - 0x0014143F (207 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141370: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edx));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 8) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00141431; /* je: equal / zero */

loc_00141387: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_00141390: ;
    ecx = esp + 0x14;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00141396: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001413BB; /* je: equal / zero */

loc_0014139C: ;
    /* nop */

loc_001413A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001413B6; /* je: equal / zero */

loc_001413A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001413B6; /* je: equal / zero */

loc_001413A8: ;
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, MEM8(edx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001413A0; /* jne: not equal / not zero */

loc_001413B4: ;
    goto loc_001413BB;

loc_001413B6: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001413D3; /* jne: not equal / not zero */

loc_001413BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001413C9; /* jg: greater (signed >) */

loc_001413C0: ;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00141396;

loc_001413C9: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001413D3; /* jne: not equal / not zero */

loc_001413CE: ;
    MEM8(ecx) = 0x20;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001413D3: ;
    eax = MEM32(esp + 0x58);
    MEM8(ecx) = 0;
    ecx = esi + ebp;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001413F4; /* jl: less (signed <) */

loc_001413E3: ;
    eax = MEM32(esp + 0x10);
    MEM8(edi) = 0xA;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    SET_LO8(ebx, 1);

loc_001413F4: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_0014140D; /* je: equal / zero */

loc_00141402: ;
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141402; /* jne: not equal / not zero */

loc_0014140D: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141426; /* jne: not equal / not zero */

loc_00141412: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141425; /* jne: not equal / not zero */

loc_00141416: ;
    eax = MEM32(esp + 0x10);
    MEM8(edi) = 0xA;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;

loc_00141425: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00141426: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141390; /* jne: not equal / not zero */

loc_0014142F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00141431: ;
    eax = MEM32(esp + 8);
    MEM8(edi) = 0;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00141480
 * Original: 0x00141480 - 0x00141514 (148 bytes, 44 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141480: ;
    eax = MEM32(0x8F06F4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001414FD; /* je: equal / zero */

loc_0014148C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00141493u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00141493: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001414A8; /* je: equal / zero */

loc_0014149A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x001414A1u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_001414A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001414FD; /* je: equal / zero */

loc_001414A8: ;
    PUSH32(esp, 0x001414ADu); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_001414AD: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001414DD; /* je: equal / zero */

loc_001414B4: ;
    ecx = esp + 4;
    eax = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F06F4);
    MEM32(esp + 4) = 6;
    MEM32(esp + 8) = 0x4B65AF5;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x001414DBu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_001414DB: ;
    goto loc_001414FD;

loc_001414DD: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001414EA; /* je: equal / zero */

loc_001414E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001414FD; /* jne: not equal / not zero */

loc_001414EA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DFD2C);
    PUSH32(esp, 0x001414FAu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_001414FA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001414FD: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x00141507u); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_00141507: ;
    ecx = eax;
    PUSH32(esp, 0x0014150Eu); RECOMP_ABI_CALL(0x0002B57Cu, sub_0002B57C); /* call 0x0002B57C */

loc_0014150E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141540
 * Original: 0x00141540 - 0x001415A3 (99 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141540: ;
    eax = MEM32(0x8F06F4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014159D; /* je: equal / zero */

loc_0014154C: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141559; /* je: equal / zero */

loc_00141555: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141565; /* jne: not equal / not zero */

loc_00141559: ;
    PUSH32(esp, 0x0014155Eu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0014155E: ;
    ecx = eax;
    PUSH32(esp, 0x00141565u); RECOMP_ABI_CALL(0x0001E890u, sub_0001E890); /* call 0x0001E890 */

loc_00141565: ;
    ecx = esp + 4;
    eax = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F06F4);
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0x4B65AF5;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0014158Cu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0014158C: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x00141596u); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_00141596: ;
    ecx = eax;
    PUSH32(esp, 0x0014159Du); RECOMP_ABI_CALL(0x0002B57Cu, sub_0002B57C); /* call 0x0002B57C */

loc_0014159D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001415C0
 * Original: 0x001415C0 - 0x001415F4 (52 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001415C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001415C0: ;
    ecx = MEM32(0x8F06F4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001415EE; /* je: equal / zero */

loc_001415CD: ;
    edx = esp + 4;
    eax = esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0xA;
    MEM32(esp + 8) = 0x4B65AF5;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x001415EEu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_001415EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141610
 * Original: 0x00141610 - 0x00141644 (52 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141610: ;
    ecx = MEM32(0x8F06F4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014163E; /* je: equal / zero */

loc_0014161D: ;
    edx = esp + 4;
    eax = esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0xB;
    MEM32(esp + 8) = 0x4B65AF5;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0014163Eu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0014163E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141660
 * Original: 0x00141660 - 0x00141679 (25 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141660(void)
{

loc_00141660: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A67);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFD6C);
    PUSH32(esp, 0x00141676u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00141676: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141680
 * Original: 0x00141680 - 0x001416DE (94 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141680: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E4);
    PUSH32(esp, 0x00141690u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_00141690: ;
    ecx = eax;
    PUSH32(esp, 0x00141697u); RECOMP_ABI_CALL(0x000330B5u, sub_000330B5); /* call 0x000330B5 */

loc_00141697: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001416DB; /* je: equal / zero */

loc_0014169B: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0x1E4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001416AEu); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_001416AE: ;
    ecx = eax;
    PUSH32(esp, 0x001416B5u); RECOMP_ABI_CALL(0x000330B5u, sub_000330B5); /* call 0x000330B5 */

loc_001416B5: ;
    edx = MEM32(eax + 0x40);
    edi = MEM32(esp + 0x10);
    esi = MEM32(eax + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7DFAA0);
    ecx = edi;
    PUSH32(esp, 0x001416CCu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001416CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7DFA98);
    ecx = edi;
    PUSH32(esp, 0x001416D9u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001416D9: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001416DB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141700
 * Original: 0x00141700 - 0x00141728 (40 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141700: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00141709u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_00141709: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141715; /* jne: not equal / not zero */

loc_00141710: ;
    esi = 1;

loc_00141715: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7DFD80);
    PUSH32(esp, 0x00141724u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00141724: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141740
 * Original: 0x00141740 - 0x00141769 (41 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141740: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0014174Au); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0014174A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141756; /* je: equal / zero */

loc_00141751: ;
    esi = 1;

loc_00141756: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7DFD8C);
    PUSH32(esp, 0x00141765u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00141765: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
