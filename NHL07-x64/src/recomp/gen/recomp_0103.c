/**
 * nhl_07_recomp - Recompiled code chunk 103
 * Functions: 250 (0x0010C760 - 0x00111D50)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0010C760
 * Original: 0x0010C760 - 0x0010C764 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C760(void)
{

loc_0010C760: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C770
 * Original: 0x0010C770 - 0x0010C77E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C770: ;
    eax = MEM32(ecx + 0xF0);
    _fa = (uint32_t)(MEM8(eax + 0x51)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x51), 4 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0010C790
 * Original: 0x0010C790 - 0x0010C797 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C790(void)
{

loc_0010C790: ;
    eax = MEM32(ecx + 0x3DC);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C7A0
 * Original: 0x0010C7A0 - 0x0010C7CB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C7A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C7A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 7);
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010C7C0u); RECOMP_ABI_CALL(0x000271B6u, sub_000271B6); /* call 0x000271B6 */

loc_0010C7C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010C7C6u); RECOMP_ABI_CALL(0x0002BF4Au, sub_0002BF4A); /* call 0x0002BF4A */

loc_0010C7C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C7E0
 * Original: 0x0010C7E0 - 0x0010C7FA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C7E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C7E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0010C7EEu); RECOMP_ABI_CALL(0x0001481Du, sub_0001481D); /* call 0x0001481D */

loc_0010C7EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010C7F5u); RECOMP_ABI_CALL(0x00014156u, sub_00014156); /* call 0x00014156 */

loc_0010C7F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C800
 * Original: 0x0010C800 - 0x0010C87F (127 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C800(void)
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

loc_0010C800: ;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 0x0010C811u); RECOMP_ABI_CALL(0x000306F3u, sub_000306F3); /* call 0x000306F3 */

loc_0010C811: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010C87B; /* jge: greater or equal (signed >=) */

loc_0010C815: ;
    ecx = 0x8E9814;
    PUSH32(esp, 0x0010C81Fu); RECOMP_ABI_CALL(0x0002C369u, sub_0002C369); /* call 0x0002C369 */

loc_0010C81F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7A9980)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 0 || g_fp_cmp == 1) /* fcompi */) goto loc_0010C842; /* jae: above or equal (unsigned >=) */

loc_0010C83D: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_0010C842: ;
    ecx = MEM32(0x8E984C);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    PUSH32(esp, 0x14A);
    PUSH32(esp, 0x7D4AD8);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x0010C86Fu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0010C86F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0010C87B; /* jge: greater or equal (signed >=) */

loc_0010C877: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0010C87B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010C8A0
 * Original: 0x0010C8A0 - 0x0010C8DB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C8A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x0010C8B1u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010C8B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C8D9; /* je: equal / zero */

loc_0010C8B5: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(esi + 0x54);
    edx = MEM32(eax);
    edx = edx & 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    PUSH32(esp, 0x0010C8CFu); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0010C8CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = 0xF;

loc_0010C8D9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C8F0
 * Original: 0x0010C8F0 - 0x0010C92B (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C8F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x40C00000);
    ecx = esi;
    PUSH32(esp, 0x0010C901u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010C901: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C929; /* je: equal / zero */

loc_0010C905: ;
    eax = MEM32(esi + 0x54);
    MEM32(esi + 0x2C) = 0xF;
    MEM32(eax + 0xC) = 0;
    eax = MEM32(esi + 0x54);
    edx = MEM32(eax);
    edx = edx & 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    PUSH32(esp, 0x0010C926u); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0010C926: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010C929: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C940
 * Original: 0x0010C940 - 0x0010C9A1 (97 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C940: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x3C);
    esi = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0x30);
    MEM32(esi + 0x94) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0010C95Cu); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_0010C95C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esi;
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010C973u); RECOMP_ABI_CALL(0x000237F5u, sub_000237F5); /* call 0x000237F5 */

loc_0010C973: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010C997; /* jne: not equal / not zero */

loc_0010C979: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    PUSH32(esp, 0x428C0000);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0010C997u); RECOMP_ABI_CALL(0x00028106u, sub_00028106); /* call 0x00028106 */

loc_0010C997: ;
    ecx = MEM32(edi + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000253A7(); return; /* tail jmp 0x000253A7 */

}

/**
 * sub_0010C9C0
 * Original: 0x0010C9C0 - 0x0010C9FF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C9C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010C9FD; /* jge: greater or equal (signed >=) */

loc_0010C9CF: ;
    eax = MEM32(esi + 0x3DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C9FD; /* je: equal / zero */

loc_0010C9D9: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C9EA; /* je: equal / zero */

loc_0010C9DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010C9E5u); RECOMP_ABI_CALL(0x0001836Eu, sub_0001836E); /* call 0x0001836E */

loc_0010C9E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010C9EA: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0010C9F3u); RECOMP_ABI_CALL(0x0001481Du, sub_0001481D); /* call 0x0001481D */

loc_0010C9F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010C9FAu); RECOMP_ABI_CALL(0x00014156u, sub_00014156); /* call 0x00014156 */

loc_0010C9FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010C9FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010CA10
 * Original: 0x0010CA10 - 0x0010CBFE (494 bytes, 146 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CA10: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010CA2Cu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0010CA2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CAA9; /* je: equal / zero */

loc_0010CA30: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0010CA38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CA35u); } /* indirect call */
    }

loc_0010CA38: ;
    _fb = (uint32_t)(0xFFFFFEA0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFEA0u)) >> 32) & 1);
    eax = eax + 0xFFFFFEA0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0010CAA9; /* ja: above (unsigned >) */

loc_0010CA42: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10CC00); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0010CA49u) goto loc_0010CA49;
    if (_jt == 0x0010CA9Bu) goto loc_0010CA9B;
    if (_jt == 0x0010CAA9u) goto loc_0010CAA9;
    if (_jt == 0x0010CAF0u) goto loc_0010CAF0;
    if (_jt == 0x0010CB54u) goto loc_0010CB54;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010CA49: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0010CA51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CA4Eu); } /* indirect call */
    }

loc_0010CA51: ;
    fp_push(MEMF(0x7ABD7C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0010CAA9; /* jb: below (unsigned <) */

loc_0010CA5F: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    xmm0 = XMM_SCALAR(MEMF(0x8E9978)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD440); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 0x0010CA8Bu); RECOMP_ABI_CALL(0x0001DFC1u, sub_0001DFC1); /* call 0x0001DFC1 */

loc_0010CA8B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010CA91u); RECOMP_ABI_CALL(0x00013EE0u, sub_00013EE0); /* call 0x00013EE0 */

loc_0010CA91: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010CA94: ;
    MEM32(esi + 0x2C) = 0xF;

loc_0010CA9B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD314)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0010CAA9: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010CAB5u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010CAB5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CBFA; /* je: equal / zero */

loc_0010CABD: ;
    ecx = MEM32(esi + 0x54);
    xmm0 = XMM_SCALAR(MEMF(0x8AD6C4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0xC) = 0;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, ecx);
    MEM32(eax) = ecx;
    eax = esp;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010CB97; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010CAE8: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0010CBA7;

loc_0010CAF0: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0010CAF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CAF5u); } /* indirect call */
    }

loc_0010CAF8: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0010CAA9; /* jb: below (unsigned <) */

loc_0010CB06: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B40000);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EADA0);
    edi = esp;
    PUSH32(esp, 0x8F95EC);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010CB2Au); RECOMP_ABI_CALL(0x0001DFC1u, sub_0001DFC1); /* call 0x0001DFC1 */

loc_0010CB2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010CB31u); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_0010CB31: ;
    ecx = MEM32(0x8E8F84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010CB3Fu); RECOMP_ABI_CALL(0x0001BAF5u, sub_0001BAF5); /* call 0x0001BAF5 */

loc_0010CB3F: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010CB4Fu); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_0010CB4F: ;
    goto loc_0010CA94;

loc_0010CB54: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0010CB5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CB59u); } /* indirect call */
    }

loc_0010CB5C: ;
    fp_push(MEMF(0x7AD42C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0010CAA9; /* jb: below (unsigned <) */

loc_0010CB6E: ;
    ecx = MEM32(0x8E9978);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EADA0);
    edx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010CB89u); RECOMP_ABI_CALL(0x0001DFC1u, sub_0001DFC1); /* call 0x0001DFC1 */

loc_0010CB89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010CB8Fu); RECOMP_ABI_CALL(0x00013EE0u, sub_00013EE0); /* call 0x00013EE0 */

loc_0010CB8F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010CAA9;

loc_0010CB97: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0010CBA7; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0010CBA3: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0010CBA7: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0010CBB8u); RECOMP_ABI_CALL(0x0001A542u, sub_0001A542); /* call 0x0001A542 */

loc_0010CBB8: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AD6C4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, ecx);
    eax = esp;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010CBD0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010CBCB: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0010CBE0;

loc_0010CBD0: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0010CBE0; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0010CBDC: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0010CBE0: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0010CBF1u); RECOMP_ABI_CALL(0x0001A542u, sub_0001A542); /* call 0x0001A542 */

loc_0010CBF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010CBF7u); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0010CBF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010CBFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010CBFE
 * Original: 0x0010CBFE - 0x0010CCDD (223 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CBFE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0010CBFE: ;
    edi = edi;
    PUSH32(esp, esp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010CCF0
 * Original: 0x0010CCF0 - 0x0010CD46 (86 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CCF0: ;
    eax = MEM32(0x8EADA0);
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CD01; /* jne: not equal / not zero */

loc_0010CCFC: ;
    g_seh_ebp = ebp; sub_000183BE(); return; /* tail jmp 0x000183BE */

loc_0010CD01: ;
    edx = MEM32(0x8E9818);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0010CD14u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010CD14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CD44; /* je: equal / zero */

loc_0010CD18: ;
    eax = MEM32(0x8E9818);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CCF0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0010CD3Du); RECOMP_ABI_CALL(0x0002826Eu, sub_0002826E); /* call 0x0002826E */

loc_0010CD3D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x0010CD43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CD40u); } /* indirect call */
    }

loc_0010CD43: ;
    POP32(esp, edi);

loc_0010CD44: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010CD60
 * Original: 0x0010CD60 - 0x0010CD87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CD60(void)
{

loc_0010CD60: ;
    edx = MEM32(0x8E9818);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CD90);
    PUSH32(esp, 1);
    PUSH32(esp, 0x150);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0010CD86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CD83u); } /* indirect call */
    }

loc_0010CD86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010CD90
 * Original: 0x0010CD90 - 0x0010CDCF (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CD90: ;
    eax = MEM32(0x8E9818);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010CDA2u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010CDA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CDCD; /* je: equal / zero */

loc_0010CDA6: ;
    eax = MEM32(0x8E9818);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CD90);
    PUSH32(esp, 1);
    PUSH32(esp, 0x150);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010CDCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CDCAu); } /* indirect call */
    }

loc_0010CDCD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010CDE0
 * Original: 0x0010CDE0 - 0x0010CE34 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CDE0: ;
    PUSH32(esp, 0x3BB);
    PUSH32(esp, 0x7D4AD8);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0010CDF1u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0010CDF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0010CE0A; /* je: equal / zero */

loc_0010CDF9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0010CE03; /* je: equal / zero */

loc_0010CDFC: ;
    eax = 0x155;
    goto loc_0010CE0F;

loc_0010CE03: ;
    eax = 0x204;
    goto loc_0010CE0F;

loc_0010CE0A: ;
    eax = 0x20C;

loc_0010CE0F: ;
    ecx = MEM32(0x8E9818);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CEC0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010CE33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CE30u); } /* indirect call */
    }

loc_0010CE33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010CE50
 * Original: 0x0010CE50 - 0x0010CEA4 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CE50: ;
    PUSH32(esp, 0x3D1);
    PUSH32(esp, 0x7D4AD8);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x0010CE61u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0010CE61: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0010CE7A; /* je: equal / zero */

loc_0010CE69: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0010CE73; /* je: equal / zero */

loc_0010CE6C: ;
    eax = 0x15B;
    goto loc_0010CE7F;

loc_0010CE73: ;
    eax = 0x204;
    goto loc_0010CE7F;

loc_0010CE7A: ;
    eax = 0x20C;

loc_0010CE7F: ;
    ecx = MEM32(0x8E9818);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CF60);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010CEA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CEA0u); } /* indirect call */
    }

loc_0010CEA3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010CEC0
 * Original: 0x0010CEC0 - 0x0010CF35 (117 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CEC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0010CECCu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0010CECC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CF07; /* jne: not equal / not zero */

loc_0010CED0: ;
    eax = MEM32(0x8EADA0);
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CF1C; /* jne: not equal / not zero */

loc_0010CEDC: ;
    ecx = MEM32(0x8E9818);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010CEEAu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010CEEA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CF07; /* jne: not equal / not zero */

loc_0010CEEE: ;
    PUSH32(esp, 0x3F8);
    PUSH32(esp, 0x7D4AD8);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0010CEFFu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0010CEFF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010CF33; /* jg: greater (signed >) */

loc_0010CF07: ;
    eax = MEM32(esi + 0x54);
    edx = MEM32(eax);
    edx = edx & 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    PUSH32(esp, 0x0010CF17u); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0010CF17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010CF1C: ;
    edx = MEM32(0x8E9818);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0010CF2Au); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010CF2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CF33; /* je: equal / zero */

loc_0010CF2E: ;
    PUSH32(esp, 0x0010CF33u); RECOMP_ABI_CALL(0x0010CDE0u, sub_0010CDE0); /* call 0x0010CDE0 */

loc_0010CF33: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010CF60
 * Original: 0x0010CF60 - 0x0010CFD5 (117 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CF60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0010CF6Cu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0010CF6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CFA7; /* jne: not equal / not zero */

loc_0010CF70: ;
    eax = MEM32(0x8EADA0);
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CFBC; /* jne: not equal / not zero */

loc_0010CF7C: ;
    ecx = MEM32(0x8E9818);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010CF8Au); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010CF8A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CFA7; /* jne: not equal / not zero */

loc_0010CF8E: ;
    PUSH32(esp, 0x41F);
    PUSH32(esp, 0x7D4AD8);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0010CF9Fu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0010CF9F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010CFD3; /* jg: greater (signed >) */

loc_0010CFA7: ;
    eax = MEM32(esi + 0x54);
    edx = MEM32(eax);
    edx = edx & 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    PUSH32(esp, 0x0010CFB7u); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0010CFB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010CFBC: ;
    edx = MEM32(0x8E9818);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0010CFCAu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010CFCA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CFD3; /* je: equal / zero */

loc_0010CFCE: ;
    PUSH32(esp, 0x0010CFD3u); RECOMP_ABI_CALL(0x0010CE50u, sub_0010CE50); /* call 0x0010CE50 */

loc_0010CFD3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D000
 * Original: 0x0010D000 - 0x0010D03C (60 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D000: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 2;
    MEM32(eax) = 0x7D4AF8;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x24) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D050
 * Original: 0x0010D050 - 0x0010D056 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D050(void)
{

loc_0010D050: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D060
 * Original: 0x0010D060 - 0x0010D066 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D060(void)
{

loc_0010D060: ;
    eax = 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D070
 * Original: 0x0010D070 - 0x0010D0B0 (64 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D070: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    edi = ecx;
    PUSH32(esp, 0x0010D07Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0010D07D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D0AB; /* je: equal / zero */

loc_0010D086: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0010D08Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0010D08E: ;
    MEM32(esi) = 0x7D4AF8;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x24);
    POP32(esp, edi);
    MEM32(esi + 0x24) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010D0AB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D0C0
 * Original: 0x0010D0C0 - 0x0010D102 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D0C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x7D4AF8;
    MEM16(eax + 0xC) = 2;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax) = 0x7D4B08;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D120
 * Original: 0x0010D120 - 0x0010D3E6 (710 bytes, 225 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D120: ;
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010D138u); RECOMP_ABI_CALL(0x0002AEA1u, sub_0002AEA1); /* call 0x0002AEA1 */

loc_0010D138: ;
    esi = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EADA0);
    ebp = eax;
    PUSH32(esp, 0x0010D14Eu); RECOMP_ABI_CALL(0x0002AEA1u, sub_0002AEA1); /* call 0x0002AEA1 */

loc_0010D14E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x8E9818)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0010D192; /* ja: above (unsigned >) */

loc_0010D169: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x10D3E8); /* switch: 15 entries, 13 targets */
    if (_jt == 0x0010D170u) goto loc_0010D170;
    if (_jt == 0x0010D1A6u) goto loc_0010D1A6;
    if (_jt == 0x0010D1CAu) goto loc_0010D1CA;
    if (_jt == 0x0010D1F9u) goto loc_0010D1F9;
    if (_jt == 0x0010D228u) goto loc_0010D228;
    if (_jt == 0x0010D26Eu) goto loc_0010D26E;
    if (_jt == 0x0010D2B4u) goto loc_0010D2B4;
    if (_jt == 0x0010D2D4u) goto loc_0010D2D4;
    if (_jt == 0x0010D2FBu) goto loc_0010D2FB;
    if (_jt == 0x0010D31Bu) goto loc_0010D31B;
    if (_jt == 0x0010D345u) goto loc_0010D345;
    if (_jt == 0x0010D374u) goto loc_0010D374;
    if (_jt == 0x0010D39Bu) goto loc_0010D39B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010D170: ;
    edx = MEM32(edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CA10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x162);
    ecx = edi;

loc_0010D18F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D192u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D18Fu); } /* indirect call */
    }

loc_0010D192: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010D3C0; /* ja: above (unsigned >) */

loc_0010D19F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10D404); /* switch: 8 entries, 7 targets */
    if (_jt == 0x0010D2B4u) goto loc_0010D2B4;
    if (_jt == 0x0010D2D4u) goto loc_0010D2D4;
    if (_jt == 0x0010D2FBu) goto loc_0010D2FB;
    if (_jt == 0x0010D31Bu) goto loc_0010D31B;
    if (_jt == 0x0010D345u) goto loc_0010D345;
    if (_jt == 0x0010D374u) goto loc_0010D374;
    if (_jt == 0x0010D39Bu) goto loc_0010D39B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010D1A6: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CA10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x161);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0010D1C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D1C5u); } /* indirect call */
    }

loc_0010D1C8: ;
    goto loc_0010D192;

loc_0010D1CA: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0010D1D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D1CEu); } /* indirect call */
    }

loc_0010D1D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CA10);
    ecx = edi;
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0010D21C; /* je: equal / zero */

loc_0010D1ED: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x163);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0010D1F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D1F4u); } /* indirect call */
    }

loc_0010D1F7: ;
    goto loc_0010D192;

loc_0010D1F9: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0010D200u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D1FDu); } /* indirect call */
    }

loc_0010D200: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CA10);
    ecx = edi;
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0010D1ED; /* je: equal / zero */

loc_0010D21C: ;
    edx = MEM32(edi);
    PUSH32(esp, 0x160);
    goto loc_0010D18F;

loc_0010D228: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CA10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x167);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D24Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D24Bu); } /* indirect call */
    }

loc_0010D24E: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10C8F0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x166);
    goto loc_0010D3B9;

loc_0010D26E: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CA10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x164);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D294u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D291u); } /* indirect call */
    }

loc_0010D294: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10C8F0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x165);
    goto loc_0010D3B9;

loc_0010D2B4: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10C8F0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFC);
    goto loc_0010D3B9;

loc_0010D2D4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10C8A0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x162);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D2F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D2F3u); } /* indirect call */
    }

loc_0010D2F6: ;
    goto loc_0010D3C0;

loc_0010D2FB: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10C8A0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x161);
    goto loc_0010D3B9;

loc_0010D31B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0010D322u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D31Fu); } /* indirect call */
    }

loc_0010D322: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10C8A0);
    ecx = esi;
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0010D368; /* je: equal / zero */

loc_0010D33E: ;
    PUSH32(esp, 0x163);
    goto loc_0010D3BB;

loc_0010D345: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0010D34Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D349u); } /* indirect call */
    }

loc_0010D34C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10C8A0);
    ecx = esi;
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0010D33E; /* je: equal / zero */

loc_0010D368: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x160);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D36Fu); } /* indirect call */
    }

loc_0010D372: ;
    goto loc_0010D3C0;

loc_0010D374: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10C8F0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x167);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D399u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D396u); } /* indirect call */
    }

loc_0010D399: ;
    goto loc_0010D3C0;

loc_0010D39B: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10C8F0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x164);

loc_0010D3B9: ;
    ecx = esi;

loc_0010D3BB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0010D3C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D3BDu); } /* indirect call */
    }

loc_0010D3C0: ;
    ecx = MEM32(edi + 0x54);
    eax = 0xA;
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi + 0x54);
    MEM32(edx + 0xC) = eax;
    edi = MEM32(edi + 0x54);
    MEM32(edi) = MEM32(edi) | 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(esi + 0x54);
    eax = MEM32(esi);
    POP32(esp, edi);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D3E6
 * Original: 0x0010D3E6 - 0x0010D4F0 (266 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D3E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D3E6: ;
    edi = edi;
    if (_flags /* jo: overflow */) { g_seh_ebp = ebp; sub_0010D3BB(); return; }

loc_0010D3EA: ;
    { uint64_t _t = (uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    { uint32_t _rcv = RC_ROT((uint32_t)(MEM32(eax)), (unsigned)(1), &_cf, 32, 1);
      MEM32(eax) = _rcv; } /* rcl */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -47)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + -47) = MEM8(eax + -47) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax + -47)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    esp += 4309; return; /* ret 4305 */

}

/**
 * sub_0010D4F0
 * Original: 0x0010D4F0 - 0x0010D551 (97 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D4F0: ;
    eax = MEM32(0x8E9B10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010D502u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010D502: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D54F; /* je: equal / zero */

loc_0010D506: ;
    ecx = MEM32(0x8EADA0);
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D53C; /* je: equal / zero */

loc_0010D513: ;
    eax = MEM32(0x8E9818);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CD90);
    PUSH32(esp, 1);
    PUSH32(esp, 0x150);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D53Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D537u); } /* indirect call */
    }

loc_0010D53A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010D53C: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, esi);
    MEM32(ecx + 0xC) = 0;
    PUSH32(esp, 0x0010D54Cu); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0010D54C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010D54F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D570
 * Original: 0x0010D570 - 0x0010D5B5 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D570: ;
    eax = MEM32(0x8E9818);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010D582u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010D582: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D5B3; /* je: equal / zero */

loc_0010D586: ;
    ecx = MEM32(0x8E9818);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CCF0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0010D5ACu); RECOMP_ABI_CALL(0x0002826Eu, sub_0002826E); /* call 0x0002826E */

loc_0010D5AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x0010D5B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D5AFu); } /* indirect call */
    }

loc_0010D5B2: ;
    POP32(esp, edi);

loc_0010D5B3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D5D0
 * Original: 0x0010D5D0 - 0x0010D60F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D5D0: ;
    eax = MEM32(0x8E9818);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010D5E2u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010D5E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D60D; /* je: equal / zero */

loc_0010D5E6: ;
    eax = MEM32(0x8E9818);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10CD90);
    PUSH32(esp, 1);
    PUSH32(esp, 0x150);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D60Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D60Au); } /* indirect call */
    }

loc_0010D60D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D620
 * Original: 0x0010D620 - 0x0010D65D (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0010D62Cu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0010D62C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D645; /* je: equal / zero */

loc_0010D630: ;
    eax = MEM32(esi + 0x54);
    edx = MEM32(eax);
    edx = edx & 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    PUSH32(esp, 0x0010D640u); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0010D640: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010D645: ;
    eax = MEM32(0x8E9818);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010D652u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010D652: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D65B; /* je: equal / zero */

loc_0010D656: ;
    PUSH32(esp, 0x0010D65Bu); RECOMP_ABI_CALL(0x0010CDE0u, sub_0010CDE0); /* call 0x0010CDE0 */

loc_0010D65B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D670
 * Original: 0x0010D670 - 0x0010D6AD (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D670: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0010D67Cu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0010D67C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D695; /* je: equal / zero */

loc_0010D680: ;
    eax = MEM32(esi + 0x54);
    edx = MEM32(eax);
    edx = edx & 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    PUSH32(esp, 0x0010D690u); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0010D690: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010D695: ;
    eax = MEM32(0x8E9818);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010D6A2u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0010D6A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D6AB; /* je: equal / zero */

loc_0010D6A6: ;
    PUSH32(esp, 0x0010D6ABu); RECOMP_ABI_CALL(0x0010CE50u, sub_0010CE50); /* call 0x0010CE50 */

loc_0010D6AB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D6C0
 * Original: 0x0010D6C0 - 0x0010D721 (97 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D6C0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = MEM32(esp + 0x34);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp);
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 8;
    MEM16(esp + 0x14) = 2;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 8) = 0x7D4B08;
    PUSH32(esp, 0x0010D71Du); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0010D71D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010D740
 * Original: 0x0010D740 - 0x0010D7D8 (152 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0010D740: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = MEM32(esi + 0x20);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x8AD6C4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010D771; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0010D764: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010D771; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010D769: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0010D7A2;

loc_0010D771: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010D77F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0010D776: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0010D79C;

loc_0010D77F: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010D791; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0010D788: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0010D79C;

loc_0010D791: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0010D79C: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0010D7A2: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010D7ADu); RECOMP_ABI_CALL(0x00021B3Au, sub_00021B3A); /* call 0x00021B3A */

loc_0010D7AD: ;
    eax = MEM32(0x8E9B10);
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10D4F0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15F);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D7D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D7D4u); } /* indirect call */
    }

loc_0010D7D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D800
 * Original: 0x0010D800 - 0x0010D8B7 (183 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D800: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = MEM32(edi + 0x20);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x8AD6C4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010D831; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0010D824: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010D831; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010D829: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0010D862;

loc_0010D831: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010D83F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0010D836: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0010D85C;

loc_0010D83F: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010D851; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0010D848: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0010D85C;

loc_0010D851: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0010D85C: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0010D862: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0010D870u); RECOMP_ABI_CALL(0x00021B3Au, sub_00021B3A); /* call 0x00021B3A */

loc_0010D870: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010D892; /* ja: above (unsigned >) */

loc_0010D878: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10D8B8); /* switch: 8 entries, 3 targets */
    if (_jt == 0x0010D87Fu) goto loc_0010D87F;
    if (_jt == 0x0010D886u) goto loc_0010D886;
    if (_jt == 0x0010D88Du) goto loc_0010D88D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010D87F: ;
    esi = 0x15C;
    goto loc_0010D892;

loc_0010D886: ;
    esi = 0x15E;
    goto loc_0010D892;

loc_0010D88D: ;
    esi = 0x15D;

loc_0010D892: ;
    eax = MEM32(0x8E9B10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10D4F0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010D8B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D8B2u); } /* indirect call */
    }

loc_0010D8B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D910
 * Original: 0x0010D910 - 0x0010DA49 (313 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D910: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    PUSH32(esp, 0x29C);
    PUSH32(esp, 0x7D4AD8);
    PUSH32(esp, 3);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010D936u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0010D936: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0010D997; /* je: equal / zero */

loc_0010D93D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0010D96E; /* je: equal / zero */

loc_0010D940: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010D9C8; /* jne: not equal / not zero */

loc_0010D947: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8E982C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9830)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    edi = 0x1D9;
    goto loc_0010D9D4;

loc_0010D96E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9824)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9828)); /* movss */
    edi = 0x1D8;
    goto loc_0010D9BE;

loc_0010D997: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E981C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9820)); /* movss */
    edi = 0x1D7;

loc_0010D9BE: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0010D9C8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_0010D9D4: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D9F2; /* je: equal / zero */

loc_0010D9E3: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_0010D9FF;

loc_0010D9F2: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_0010D9FF: ;
    ecx = MEM32(esi + 0x20);
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0010DA21u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_0010DA21: ;
    eax = MEM32(0x8E9818);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10D570);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010DA44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010DA41u); } /* indirect call */
    }

loc_0010DA44: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010DAA0
 * Original: 0x0010DAA0 - 0x0010DB99 (249 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010DAA0: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    SET_LO8(eax, MEM8(esi + 0x64));
    xmm3 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9848)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    if (CMP_EQ(_fa, _fb)) goto loc_0010DAEA; /* je: equal / zero */

loc_0010DACE: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x8E9844)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */
    goto loc_0010DAFE;

loc_0010DAEA: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x8E9844)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_0010DAFE: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    eax = esp + 8;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0010DB21u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_0010DB21: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, 0x2FB);
    PUSH32(esp, 0x7D4AD8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0010DB36u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0010DB36: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    POP32(esp, ebx);
    if (CMP_A(_fa, _fb)) goto loc_0010DB62; /* ja: above (unsigned >) */

loc_0010DB41: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10DB9C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0010DB48u) goto loc_0010DB48;
    if (_jt == 0x0010DB4Fu) goto loc_0010DB4F;
    if (_jt == 0x0010DB56u) goto loc_0010DB56;
    if (_jt == 0x0010DB5Du) goto loc_0010DB5D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010DB48: ;
    edi = 0x14C;
    goto loc_0010DB62;

loc_0010DB4F: ;
    edi = 0x14D;
    goto loc_0010DB62;

loc_0010DB56: ;
    edi = 0x14E;
    goto loc_0010DB62;

loc_0010DB5D: ;
    edi = 0x14F;

loc_0010DB62: ;
    eax = MEM32(0x8E9818);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = eax + eax * 4;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10D5D0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010DB94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010DB91u); } /* indirect call */
    }

loc_0010DB94: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010DBF0
 * Original: 0x0010DBF0 - 0x0010DCE4 (244 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010DBF0: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    SET_LO8(eax, MEM8(esi + 0x64));
    xmm3 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E983C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    if (CMP_EQ(_fa, _fb)) goto loc_0010DC3A; /* je: equal / zero */

loc_0010DC1E: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x8E9840)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */
    goto loc_0010DC4E;

loc_0010DC3A: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x8E9840)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_0010DC4E: ;
    ecx = MEM32(esi + 0x20);
    eax = esp + 4;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0010DC70u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_0010DC70: ;
    PUSH32(esp, 0x343);
    PUSH32(esp, 0x7D4AD8);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0010DC81u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0010DC81: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x80000003u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0010DC96; /* jns: not sign (positive) */

loc_0010DC91: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0010DC96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010DCBC; /* ja: above (unsigned >) */

loc_0010DC9B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10DCE4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0010DCA2u) goto loc_0010DCA2;
    if (_jt == 0x0010DCA9u) goto loc_0010DCA9;
    if (_jt == 0x0010DCB0u) goto loc_0010DCB0;
    if (_jt == 0x0010DCB7u) goto loc_0010DCB7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010DCA2: ;
    edi = 0x151;
    goto loc_0010DCBC;

loc_0010DCA9: ;
    edi = 0x152;
    goto loc_0010DCBC;

loc_0010DCB0: ;
    edi = 0x153;
    goto loc_0010DCBC;

loc_0010DCB7: ;
    edi = 0x154;

loc_0010DCBC: ;
    eax = MEM32(0x8E9818);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10D620);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010DCDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010DCDCu); } /* indirect call */
    }

loc_0010DCDF: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010DD40
 * Original: 0x0010DD40 - 0x0010DE37 (247 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010DD40: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    SET_LO8(eax, MEM8(esi + 0x64));
    xmm3 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9834)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    if (CMP_EQ(_fa, _fb)) goto loc_0010DD8A; /* je: equal / zero */

loc_0010DD6E: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x8E9838)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */
    goto loc_0010DD9E;

loc_0010DD8A: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x8E9838)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_0010DD9E: ;
    ecx = MEM32(esi + 0x20);
    eax = esp + 4;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0010DDC0u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_0010DDC0: ;
    PUSH32(esp, 0x374);
    PUSH32(esp, 0x7D4AD8);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0010DDD1u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0010DDD1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010DE0F; /* ja: above (unsigned >) */

loc_0010DDE7: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x10DE38); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0010DDEEu) goto loc_0010DDEE;
    if (_jt == 0x0010DDF5u) goto loc_0010DDF5;
    if (_jt == 0x0010DDFCu) goto loc_0010DDFC;
    if (_jt == 0x0010DE03u) goto loc_0010DE03;
    if (_jt == 0x0010DE0Au) goto loc_0010DE0A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010DDEE: ;
    edi = 0x156;
    goto loc_0010DE0F;

loc_0010DDF5: ;
    edi = 0x157;
    goto loc_0010DE0F;

loc_0010DDFC: ;
    edi = 0x158;
    goto loc_0010DE0F;

loc_0010DE03: ;
    edi = 0x159;
    goto loc_0010DE0F;

loc_0010DE0A: ;
    edi = 0x15A;

loc_0010DE0F: ;
    eax = MEM32(0x8E9818);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C940);
    PUSH32(esp, 0x10D670);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010DE32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010DE2Fu); } /* indirect call */
    }

loc_0010DE32: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010DE90
 * Original: 0x0010DE90 - 0x0010DEFF (111 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010DE90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010DEA7u); RECOMP_ABI_CALL(0x0010D800u, sub_0010D800); /* call 0x0010D800 */

loc_0010DEA7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010DEC4u); RECOMP_ABI_CALL(0x000271B6u, sub_000271B6); /* call 0x000271B6 */

loc_0010DEC4: ;
    eax = MEM32(edi + 0x20);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x8B21B8;
    PUSH32(esp, 0x0010DEDFu); RECOMP_ABI_CALL(0x00013B2Fu, sub_00013B2F); /* call 0x00013B2F */

loc_0010DEDF: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1002B);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x0010DEFAu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_0010DEFA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010DF20
 * Original: 0x0010DF20 - 0x0010DF8F (111 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010DF20: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010DF37u); RECOMP_ABI_CALL(0x0010D740u, sub_0010D740); /* call 0x0010D740 */

loc_0010DF37: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010DF54u); RECOMP_ABI_CALL(0x000271B6u, sub_000271B6); /* call 0x000271B6 */

loc_0010DF54: ;
    eax = MEM32(esi + 0x20);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x8B21B8;
    PUSH32(esp, 0x0010DF6Fu); RECOMP_ABI_CALL(0x00013B2Fu, sub_00013B2F); /* call 0x00013B2F */

loc_0010DF6F: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1002B);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x0010DF8Au); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_0010DF8A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010DFB0
 * Original: 0x0010DFB0 - 0x0010E10F (351 bytes, 132 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DFB0(void)
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

loc_0010DFB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0010E109; /* jge: greater or equal (signed >=) */

loc_0010DFC7: ;
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x0010DFD0u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010DFD0: ;
    PUSH32(esp, ecx);
    eax = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010DFDBu); RECOMP_ABI_CALL(0x0010C800u, sub_0010C800); /* call 0x0010C800 */

loc_0010DFDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E109; /* je: equal / zero */

loc_0010DFE6: ;
    eax = MEM32(esi + 0x3DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E109; /* je: equal / zero */

loc_0010DFF4: ;
    eax = MEM32(eax + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010E109; /* ja: above (unsigned >) */

loc_0010E001: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10E110); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0010E008u) goto loc_0010E008;
    if (_jt == 0x0010E015u) goto loc_0010E015;
    if (_jt == 0x0010E04Bu) goto loc_0010E04B;
    if (_jt == 0x0010E06Au) goto loc_0010E06A;
    if (_jt == 0x0010E0A0u) goto loc_0010E0A0;
    if (_jt == 0x0010E0BFu) goto loc_0010E0BF;
    if (_jt == 0x0010E0F5u) goto loc_0010E0F5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010E008: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x96);
    eax = esp + 0x20;
    goto loc_0010E075;

loc_0010E015: ;
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 4);
    edx = esp + 0xC;
    PUSH32(esp, 0x96);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010E02Cu); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_0010E02C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010E039u); RECOMP_ABI_CALL(0x000160F0u, sub_000160F0); /* call 0x000160F0 */

loc_0010E039: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010E042u); RECOMP_ABI_CALL(0x0002B15Du, sub_0002B15D); /* call 0x0002B15D */

loc_0010E042: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010E04B: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + 0x60);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, esi);
    MEM32(ecx) = edx;
    PUSH32(esp, 0x0010E061u); RECOMP_ABI_CALL(0x0002B15Du, sub_0002B15D); /* call 0x0002B15D */

loc_0010E061: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010E06A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB4);
    eax = esp + 0x14;

loc_0010E075: ;
    edi = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010E081u); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_0010E081: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010E08Eu); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_0010E08E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010E097u); RECOMP_ABI_CALL(0x0002B15Du, sub_0002B15D); /* call 0x0002B15D */

loc_0010E097: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010E0A0: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + 0x60);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, esi);
    MEM32(ecx) = edx;
    PUSH32(esp, 0x0010E0B6u); RECOMP_ABI_CALL(0x0002D327u, sub_0002D327); /* call 0x0002D327 */

loc_0010E0B6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010E0BF: ;
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 6);
    eax = esp + 0x14;
    PUSH32(esp, 0xB4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010E0D6u); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_0010E0D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010E0E3u); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_0010E0E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010E0ECu); RECOMP_ABI_CALL(0x0002D327u, sub_0002D327); /* call 0x0002D327 */

loc_0010E0EC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010E0F5: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x60);
    eax = esp;
    PUSH32(esp, esi);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0010E106u); RECOMP_ABI_CALL(0x0002D4DAu, sub_0002D4DA); /* call 0x0002D4DA */

loc_0010E106: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010E109: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010E1E0
 * Original: 0x0010E1E0 - 0x0010E23C (92 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E1E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010E23A; /* jne: not equal / not zero */

loc_0010E1ED: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010E200; /* jne: not equal / not zero */

loc_0010E1F3: ;
    PUSH32(esp, 0x0010E1F8u); RECOMP_ABI_CALL(0x0010D910u, sub_0010D910); /* call 0x0010D910 */

loc_0010E1F8: ;
    esi = MEM32(esi + 0x54);
    MEM32(esi) = MEM32(esi) | 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010E200: ;
    ecx = MEM32(esi + 0xF0);
    SET_LO8(eax, MEM8(ecx + 0x51));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010E21A; /* jne: not equal / not zero */

loc_0010E20D: ;
    PUSH32(esp, 0x0010E212u); RECOMP_ABI_CALL(0x0010DAA0u, sub_0010DAA0); /* call 0x0010DAA0 */

loc_0010E212: ;
    esi = MEM32(esi + 0x54);
    MEM32(esi) = MEM32(esi) | 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010E21A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E222; /* je: equal / zero */

loc_0010E21E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010E22F; /* jne: not equal / not zero */

loc_0010E222: ;
    PUSH32(esp, 0x0010E227u); RECOMP_ABI_CALL(0x0010DBF0u, sub_0010DBF0); /* call 0x0010DBF0 */

loc_0010E227: ;
    esi = MEM32(esi + 0x54);
    MEM32(esi) = MEM32(esi) | 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010E22F: ;
    PUSH32(esp, 0x0010E234u); RECOMP_ABI_CALL(0x0010DD40u, sub_0010DD40); /* call 0x0010DD40 */

loc_0010E234: ;
    esi = MEM32(esi + 0x54);
    MEM32(esi) = MEM32(esi) | 2;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0010E23A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010E260
 * Original: 0x0010E260 - 0x0010E274 (20 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E260(void)
{

loc_0010E260: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010E270u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E26Du); } /* indirect call */
    }

loc_0010E270: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E280
 * Original: 0x0010E280 - 0x0010E28B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E280: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0010E290
 * Original: 0x0010E290 - 0x0010E294 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E290(void)
{

loc_0010E290: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0010E2A0
 * Original: 0x0010E2A0 - 0x0010E2B7 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E2A0(void)
{

loc_0010E2A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E2C0
 * Original: 0x0010E2C0 - 0x0010E2C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010E2C0: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x68)); return; /* indirect tail jmp */

}

/**
 * sub_0010E2D0
 * Original: 0x0010E2D0 - 0x0010E2DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010E2D0: ;
    _fb = (uint32_t)(0x390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x390;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00030ADB(); return; /* tail jmp 0x00030ADB */

}

/**
 * sub_0010E2E0
 * Original: 0x0010E2E0 - 0x0010E2F8 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E2E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x390;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010E2F5u); RECOMP_ABI_CALL(0x00031E18u, sub_00031E18); /* call 0x00031E18 */

loc_0010E2F5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E300
 * Original: 0x0010E300 - 0x0010E311 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E300: ;
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x390;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010E310u); RECOMP_ABI_CALL(0x00023674u, sub_00023674); /* call 0x00023674 */

loc_0010E310: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010E320
 * Original: 0x0010E320 - 0x0010E33E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E320: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0010E328u); RECOMP_ABI_CALL(0x0002B9CDu, sub_0002B9CD); /* call 0x0002B9CD */

loc_0010E328: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010E338; /* je: equal / zero */

loc_0010E32F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010E335u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0010E335: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010E338: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E350
 * Original: 0x0010E350 - 0x0010E36E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0010E358u); RECOMP_ABI_CALL(0x000302E3u, sub_000302E3); /* call 0x000302E3 */

loc_0010E358: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010E368; /* je: equal / zero */

loc_0010E35F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010E365u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0010E365: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010E368: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E380
 * Original: 0x0010E380 - 0x0010E3BD (61 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E380(void)
{

loc_0010E380: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7D4F9C);
    ecx = edi;
    PUSH32(esp, 0x0010E395u); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_0010E395: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0010E39Du); RECOMP_ABI_CALL(0x00023F16u, sub_00023F16); /* call 0x00023F16 */

loc_0010E39D: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010E3A6u); RECOMP_ABI_CALL(0x0001D07Bu, sub_0001D07B); /* call 0x0001D07B */

loc_0010E3A6: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0010E3B1u); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_0010E3B1: ;
    ecx = edi;
    PUSH32(esp, 0x0010E3B8u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_0010E3B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E3D0
 * Original: 0x0010E3D0 - 0x0010E40E (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E3D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x8F01E8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010E3F8; /* jne: not equal / not zero */

loc_0010E3E2: ;
    MEM32(0x8F01E8) = MEM32(0x8F01E8) | eax;
    _fa = (uint32_t)(MEM32(0x8F01E8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x8AD70A) = 0x64;
    MEM8(0x8AD70C) = 0;

loc_0010E3F8: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8AD708);
    PUSH32(esp, 0x0010E409u); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_0010E409: ;
    MEM32(esi + 0x40) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010E420
 * Original: 0x0010E420 - 0x0010E43B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E420(void)
{

loc_0010E420: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E432u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_0010E432: ;
    MEM32(esi + 0x40) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010E450
 * Original: 0x0010E450 - 0x0010E451 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E450(void)
{

loc_0010E450: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010E460
 * Original: 0x0010E460 - 0x0010E4D6 (118 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E460: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    eax = MEM32(esi);
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(edi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEM32(esp + 8) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010E4AF; /* je: equal / zero */

loc_0010E4A7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010E4AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E4ADu); } /* indirect call */
    }

loc_0010E4AF: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(edi + 0x58) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(edi + 0x5C) = edx;
    eax = MEM32(esi + 0x24);
    MEM32(edi + 0x60) = eax;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0010E4CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E4CBu); } /* indirect call */
    }

loc_0010E4CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E500
 * Original: 0x0010E500 - 0x0010E513 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010E500: ;
    ecx = MEM32(ecx + 0x48);
    PUSH32(esp, 0x0010E508u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0010E508: ;
    ecx = eax + 0x390;
    g_seh_ebp = ebp; sub_00030ADB(); return; /* tail jmp 0x00030ADB */

}

/**
 * sub_0010E520
 * Original: 0x0010E520 - 0x0010E540 (32 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E520(void)
{

loc_0010E520: ;
    ecx = MEM32(ecx + 0x48);
    PUSH32(esp, 0x0010E528u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0010E528: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = eax + 0x390;
    PUSH32(esp, 0x0010E53Du); RECOMP_ABI_CALL(0x00031E18u, sub_00031E18); /* call 0x00031E18 */

loc_0010E53D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E550
 * Original: 0x0010E550 - 0x0010E569 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E550(void)
{

loc_0010E550: ;
    ecx = MEM32(ecx + 0x48);
    PUSH32(esp, 0x0010E558u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0010E558: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax + 0x390;
    PUSH32(esp, 0x0010E568u); RECOMP_ABI_CALL(0x00023674u, sub_00023674); /* call 0x00023674 */

loc_0010E568: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010E570
 * Original: 0x0010E570 - 0x0010E5BB (75 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E570(void)
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

loc_0010E570: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0010E57Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E579u); } /* indirect call */
    }

loc_0010E57C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010E588; /* jne: not equal / not zero */

loc_0010E581: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0010E588: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0010E590u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E58Du); } /* indirect call */
    }

loc_0010E590: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0010E59Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E599u); } /* indirect call */
    }

loc_0010E59C: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 4) - fp_top()); /* fsubr dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0010E5B4; /* jb: below (unsigned <) */

loc_0010E5AA: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0010E5B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_0010E5D0
 * Original: 0x0010E5D0 - 0x0010E5F9 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E5D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0010E5D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0010E5DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E5D9u); } /* indirect call */
    }

loc_0010E5DC: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0010E5E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E5E5u); } /* indirect call */
    }

loc_0010E5E8: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010E610
 * Original: 0x0010E610 - 0x0010E61E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E610: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0010E618u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E615u); } /* indirect call */
    }

loc_0010E618: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010E630
 * Original: 0x0010E630 - 0x0010E63E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E630: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0010E638u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E635u); } /* indirect call */
    }

loc_0010E638: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010E650
 * Original: 0x0010E650 - 0x0010E65E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E650: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0010E658u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E655u); } /* indirect call */
    }

loc_0010E658: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010E670
 * Original: 0x0010E670 - 0x0010E76C (252 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E670: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x48);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x54); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x58); /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x5C); /* subss */
    edx = MEM32(eax + 0x4C);
    xmm4 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x50);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 4) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 4);
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 0x1C);
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xC); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x10) = ecx;
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 0x14) = edx;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    ecx = eax;
    MEM32(ecx) = edx;
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010E7B0
 * Original: 0x0010E7B0 - 0x0010E89B (235 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E7B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0010E7BFu); RECOMP_ABI_CALL(0x00018071u, sub_00018071); /* call 0x00018071 */

loc_0010E7BF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x7D4FB0;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    PUSH32(esp, 0x0010E7DEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0010E7DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E7EF; /* je: equal / zero */

loc_0010E7E5: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0010E7EDu); RECOMP_ABI_CALL(0x0002F5FFu, sub_0002F5FF); /* call 0x0002F5FF */

loc_0010E7ED: ;
    goto loc_0010E7F1;

loc_0010E7EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010E7F1: ;
    MEM32(esi + 0x50) = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E7FEu); RECOMP_ABI_CALL(0x00028903u, sub_00028903); /* call 0x00028903 */

loc_0010E7FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x54);
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0x0010E809u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0010E809: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E825; /* je: equal / zero */

loc_0010E810: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x29 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0010E823u); RECOMP_ABI_CALL(0x00029790u, sub_00029790); /* call 0x00029790 */

loc_0010E823: ;
    goto loc_0010E827;

loc_0010E825: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010E827: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB0);
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x0010E835u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0010E835: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E84C; /* je: equal / zero */

loc_0010E83C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0010E84Au); RECOMP_ABI_CALL(0x000157C7u, sub_000157C7); /* call 0x000157C7 */

loc_0010E84A: ;
    goto loc_0010E84E;

loc_0010E84C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010E84E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0010E859u); RECOMP_ABI_CALL(0x00027698u, sub_00027698); /* call 0x00027698 */

loc_0010E859: ;
    MEM32(esi + 0x44) = eax;
    SET_LO8(eax, MEM8(0x8F01E8));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010E87E; /* jne: not equal / not zero */

loc_0010E868: ;
    MEM32(0x8F01E8) = MEM32(0x8F01E8) | 1;
    _fa = (uint32_t)(MEM32(0x8F01E8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x8AD70A) = 0x64;
    MEM8(0x8AD70C) = LO8(ebx);

loc_0010E87E: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8AD708);
    PUSH32(esp, 0x0010E890u); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_0010E890: ;
    MEM32(esi + 0x40) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E8E0
 * Original: 0x0010E8E0 - 0x0010E950 (112 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010E8E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    MEM32(esi) = 0x7D4FB0;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E8F9u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_0010E8F9: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x40) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0010E90D; /* je: equal / zero */

loc_0010E907: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0010E90Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E90Bu); } /* indirect call */
    }

loc_0010E90D: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E916u); RECOMP_ABI_CALL(0x000219FFu, sub_000219FF); /* call 0x000219FF */

loc_0010E916: ;
    edi = MEM32(esi + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E930; /* je: equal / zero */

loc_0010E920: ;
    ecx = edi;
    PUSH32(esp, 0x0010E927u); RECOMP_ABI_CALL(0x0002B9CDu, sub_0002B9CD); /* call 0x0002B9CD */

loc_0010E927: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010E92Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0010E92D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010E930: ;
    edi = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E947; /* je: equal / zero */

loc_0010E937: ;
    ecx = edi;
    PUSH32(esp, 0x0010E93Eu); RECOMP_ABI_CALL(0x000302E3u, sub_000302E3); /* call 0x000302E3 */

loc_0010E93E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010E944u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0010E944: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010E947: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A7EE(); return; /* tail jmp 0x0002A7EE */

}

/**
 * sub_0010E970
 * Original: 0x0010E970 - 0x0010E995 (37 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010E970: ;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x64) = LO8(eax);
    SET_LO8(ecx, MEM8(ecx + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010E992; /* jge: greater or equal (signed >=) */

loc_0010E97F: ;
    MEM32(esp + 4) = eax;
    eax = SX8(LO8(ecx));
    ecx = MEM32(eax * 4 + 0x8E904C);
    g_seh_ebp = ebp; sub_0003018A(); return; /* tail jmp 0x0003018A */

loc_0010E992: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E9A0
 * Original: 0x0010E9A0 - 0x0010EA2D (141 bytes, 40 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E9A0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x38);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EA10; /* je: equal / zero */

loc_0010E9FC: ;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;

loc_0010EA10: ;
    ecx = MEM32(ecx + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010EA19u); RECOMP_ABI_CALL(0x0001E3B3u, sub_0001E3B3); /* call 0x0001E3B3 */

loc_0010EA19: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    esi = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010EA26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010EA23u); } /* indirect call */
    }

loc_0010EA26: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0010EA50
 * Original: 0x0010EA50 - 0x0010EAAF (95 bytes, 23 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010EA50: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(esp + 4) = edx;
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x40);
    edx = esp;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0010EAA9u); RECOMP_ABI_CALL(0x00036AA3u, sub_00036AA3); /* call 0x00036AA3 */

loc_0010EAA9: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0010EAD0
 * Original: 0x0010EAD0 - 0x0010EB7E (174 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010EAD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0010EAD9u); RECOMP_ABI_CALL(0x0002FCD0u, sub_0002FCD0); /* call 0x0002FCD0 */

loc_0010EAD9: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x0010EAE1u); RECOMP_ABI_CALL(0x0003155Du, sub_0003155D); /* call 0x0003155D */

loc_0010EAE1: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x0010EAE9u); RECOMP_ABI_CALL(0x00028B5Bu, sub_00028B5B); /* call 0x00028B5B */

loc_0010EAE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010EAEFu); RECOMP_ABI_CALL(0x0001BD39u, sub_0001BD39); /* call 0x0001BD39 */

loc_0010EAEF: ;
    ecx = MEM32(esi + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010EAFAu); RECOMP_ABI_CALL(0x000217E3u, sub_000217E3); /* call 0x000217E3 */

loc_0010EAFA: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0010EB02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010EAFFu); } /* indirect call */
    }

loc_0010EB02: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    xmm0 = XMM_SCALAR(MEMF(0x7AB1CC)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 0x0010EB1Fu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0010EB1F: ;
    ecx = MEM32(esi + 0x48);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0x0010EB2Au); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0010EB2A: ;
    ecx = eax + 0x390;
    PUSH32(esp, 0x0010EB35u); RECOMP_ABI_CALL(0x00030ADBu, sub_00030ADB); /* call 0x00030ADB */

loc_0010EB35: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010EB45; /* jne: not equal / not zero */

loc_0010EB3C: ;
    PUSH32(esp, 0x0010EB41u); RECOMP_ABI_CALL(0x0001D3AFu, sub_0001D3AF); /* call 0x0001D3AF */

loc_0010EB41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010EB54; /* jne: not equal / not zero */

loc_0010EB45: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x30), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010EB58; /* jne: not equal / not zero */

loc_0010EB4B: ;
    PUSH32(esp, 0x0010EB50u); RECOMP_ABI_CALL(0x0001D3AFu, sub_0001D3AF); /* call 0x0001D3AF */

loc_0010EB50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010EB58; /* jne: not equal / not zero */

loc_0010EB54: ;
    SET_LO8(eax, 1);
    goto loc_0010EB5A;

loc_0010EB58: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0010EB5A: ;
    MEM8(esi + 0x64) = LO8(eax);
    MEM8(esp + 4) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0010EB7C; /* jge: greater or equal (signed >=) */

loc_0010EB69: ;
    edx = MEM32(esp);
    eax = SX8(LO8(eax));
    ecx = MEM32(eax * 4 + 0x8E904C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010EB7Cu); RECOMP_ABI_CALL(0x0003018Au, sub_0003018A); /* call 0x0003018A */

loc_0010EB7C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010EBB0
 * Original: 0x0010EBB0 - 0x0010EBCE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010EBB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0010EBB8u); RECOMP_ABI_CALL(0x0002924Au, sub_0002924A); /* call 0x0002924A */

loc_0010EBB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010EBC8; /* je: equal / zero */

loc_0010EBBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010EBC5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0010EBC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010EBC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010EBE0
 * Original: 0x0010EBE0 - 0x0010EC50 (112 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010EBE0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0xC) = 0x3DF;
    MEM32(esp + 0x10) = 8;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0010EC34u); RECOMP_ABI_CALL(0x00036AA3u, sub_00036AA3); /* call 0x00036AA3 */

loc_0010EC34: ;
    ecx = esi;
    PUSH32(esp, 0x0010EC3Bu); RECOMP_ABI_CALL(0x00027F99u, sub_00027F99); /* call 0x00027F99 */

loc_0010EC3B: ;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM8(esi + 0x64) = LO8(ebx);
    MEM32(esi + 0x3C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010EC70
 * Original: 0x0010EC70 - 0x0010ED5C (236 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010EC70: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010EC87u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0010EC87: ;
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0x3C) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010EC92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010EC8Fu); } /* indirect call */
    }

loc_0010EC92: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0xC) = 0x3DF;
    MEM32(esp + 0x10) = 8;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0010ECE1u); RECOMP_ABI_CALL(0x00036AA3u, sub_00036AA3); /* call 0x00036AA3 */

loc_0010ECE1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB1CC)); /* movss */
    ecx = esi;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010ECF5u); RECOMP_ABI_CALL(0x000266ADu, sub_000266AD); /* call 0x000266AD */

loc_0010ECF5: ;
    PUSH32(esp, esi);
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    PUSH32(esp, 0x0010ED04u); RECOMP_ABI_CALL(0x0001BD39u, sub_0001BD39); /* call 0x0001BD39 */

loc_0010ED04: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0010ED0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010ED0Cu); } /* indirect call */
    }

loc_0010ED0F: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x14 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010ED3C; /* jl: less (signed <) */

loc_0010ED16: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010ED3C; /* je: equal / zero */

loc_0010ED1A: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(esi + 0x64) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_0010ED56; /* jge: greater or equal (signed >=) */

loc_0010ED25: ;
    eax = SX8(LO8(eax));
    ecx = MEM32(eax * 4 + 0x8E904C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0010ED36u); RECOMP_ABI_CALL(0x0003018Au, sub_0003018A); /* call 0x0003018A */

loc_0010ED36: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010ED3C: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(esi + 0x64) = LO8(ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0010ED56; /* jge: greater or equal (signed >=) */

loc_0010ED46: ;
    ecx = SX8(LO8(eax));
    ecx = MEM32(ecx * 4 + 0x8E904C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0010ED56u); RECOMP_ABI_CALL(0x0003018Au, sub_0003018A); /* call 0x0003018A */

loc_0010ED56: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010EDA0
 * Original: 0x0010EDA0 - 0x0010EDA9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EDA0(void)
{

loc_0010EDA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010EDB0
 * Original: 0x0010EDB0 - 0x0010EDB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EDB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0010EDB0: ;
    fp_push(MEMF(0x7D526C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010EDC0
 * Original: 0x0010EDC0 - 0x0010EDC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EDC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0010EDC0: ;
    fp_push(MEMF(0x7D530C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010EDD0
 * Original: 0x0010EDD0 - 0x0010EDE1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EDD0(void)
{

loc_0010EDD0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0010EDF0
 * Original: 0x0010EDF0 - 0x0010EE06 (22 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EDF0(void)
{

loc_0010EDF0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010EE10
 * Original: 0x0010EE10 - 0x0010EE11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EE10(void)
{

loc_0010EE10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010EE20
 * Original: 0x0010EE20 - 0x0010EF19 (249 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EE20(void)
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

loc_0010EE20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0010EE2Cu); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_0010EE2C: ;
    fp_push(MEMF(0x8AD76C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7D537C)); /* fsub dword ptr [0x7d537c] */
    ecx = esi;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(0x7AA840)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0010EE5F; /* jbe: below or equal (unsigned <=) */

loc_0010EE4A: ;
    PUSH32(esp, 0x0010EE4Fu); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_0010EE4F: ;
    fp_push(MEMF(0x8AD76C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7D537C)); /* fsub dword ptr [0x7d537c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    goto loc_0010EE74;

loc_0010EE5F: ;
    PUSH32(esp, 0x0010EE64u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_0010EE64: ;
    fp_push(MEMF(0x8AD76C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7D537C)); /* fsub dword ptr [0x7d537c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = -fp_top(); /* fchs */

loc_0010EE74: ;
    eax = MEM32(esi + 0x20);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010EE8B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010EE89: ;
    goto loc_0010EE93;

loc_0010EE8B: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_0010EE93: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D5374); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010EEEB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7D5374)) */

loc_0010EE9C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010EEA8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010EEA6: ;
    goto loc_0010EEB0;

loc_0010EEA8: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_0010EEB0: ;
    xmm2 = XMM_SCALAR(MEMF(0x7D53A0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010EEEB; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0010EEBD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D548C); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0010EEE4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010EEDE: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0010EEE4: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_0010EEEB: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D5398); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0010EF12; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010EF0C: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0010EF12: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010EF60
 * Original: 0x0010EF60 - 0x0010F006 (166 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EF60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0010EF60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0010EF6Eu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010EF6E: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0010EF7Bu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010EF7B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, 4);
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010EF8Cu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010EF8C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, 6);
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010EF9Du); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010EF9D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, 7);
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010EFAEu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010EFAE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, 5);
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010EFBFu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010EFBF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, 8);
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010EFD0u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010EFD0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, 9);
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010EFE1u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010EFE1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, 0x13);
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010EFF2u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0010EFF2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7D5490)); /* fmul dword ptr [0x7d5490] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7D53A4)); /* fmul dword ptr [0x7d53a4] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010F030
 * Original: 0x0010F030 - 0x0010F036 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F030(void)
{

loc_0010F030: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F040
 * Original: 0x0010F040 - 0x0010F04A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F040(void)
{

loc_0010F040: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F050
 * Original: 0x0010F050 - 0x0010F056 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F050(void)
{

loc_0010F050: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F060
 * Original: 0x0010F060 - 0x0010F06A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F060(void)
{

loc_0010F060: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F070
 * Original: 0x0010F070 - 0x0010F095 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F070: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 4;
    MEM32(eax + 4) = ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F0A0
 * Original: 0x0010F0A0 - 0x0010F0D8 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F0A0: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F0AC; /* je: equal / zero */

loc_0010F0A9: ;
    MEM32(ecx + 0xC) = eax;

loc_0010F0AC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F0B4; /* je: equal / zero */

loc_0010F0B1: ;
    MEM32(ecx + 0x10) = eax;

loc_0010F0B4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F0BC; /* je: equal / zero */

loc_0010F0B9: ;
    MEM32(ecx + 0x14) = eax;

loc_0010F0BC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F0C4; /* je: equal / zero */

loc_0010F0C1: ;
    MEM32(ecx + 0x18) = eax;

loc_0010F0C4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F0CC; /* je: equal / zero */

loc_0010F0C9: ;
    MEM32(ecx + 0x1C) = eax;

loc_0010F0CC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 4) = eax;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0010F0F0
 * Original: 0x0010F0F0 - 0x0010F105 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0010F0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F0F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010F100; /* jge: greater or equal (signed >=) */

loc_0010F0F9: ;
    eax = MEM32(ecx + eax * 4 + 0xC);
    esp += 8; return; /* ret 4 */

loc_0010F100: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F110
 * Original: 0x0010F110 - 0x0010F1D3 (195 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0010F110: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = ecx + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0010F1D2; /* je: equal / zero */

loc_0010F11E: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F13F; /* jne: not equal / not zero */

loc_0010F126: ;
    esi = MEM32(ecx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F1D1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 4)) */

loc_0010F138: ;
    MEM32(ecx + 0xC) = eax;
    MEM32(edx) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010F13F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;

loc_0010F145: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F167; /* je: equal / zero */

loc_0010F14B: ;
    edi = MEM32(eax + -4);
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F15E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 4)) */

loc_0010F159: ;
    MEM32(eax + -4) = esi;
    MEM32(eax) = edi;

loc_0010F15E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F145; /* jl: less (signed <) */

loc_0010F167: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F184; /* je: equal / zero */

loc_0010F170: ;
    esi = MEM32(ecx + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F184; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 4)) */

loc_0010F17E: ;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = esi;

loc_0010F184: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F19F; /* je: equal / zero */

loc_0010F18B: ;
    esi = MEM32(edx + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F19F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 4)) */

loc_0010F199: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx + 0x18) = esi;

loc_0010F19F: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F1B8; /* je: equal / zero */

loc_0010F1A6: ;
    ecx = MEM32(edx);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F1B8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_0010F1B3: ;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;

loc_0010F1B8: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F1D1; /* je: equal / zero */

loc_0010F1BE: ;
    ecx = MEM32(edx + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F1D1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_0010F1CC: ;
    MEM32(edx + -4) = eax;
    MEM32(edx) = ecx;

loc_0010F1D1: ;
    POP32(esp, esi);

loc_0010F1D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F210
 * Original: 0x0010F210 - 0x0010F2A3 (147 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010F210: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0xC;
    goto loc_0010F220;

    /* nop */

loc_0010F220: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F23C; /* je: equal / zero */

loc_0010F226: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 4); /* comiss */
    if ((_fca >= _fcb)) goto loc_0010F251; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(edx + 4)) */

loc_0010F231: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F220; /* jl: less (signed <) */

loc_0010F23A: ;
    goto loc_0010F292;

loc_0010F23C: ;
    MEM32(ecx + eax * 4 + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    goto loc_0010F292;

loc_0010F251: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    edx = ecx + 0x1C;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_0010F270; /* jge: greater or equal (signed >=) */

loc_0010F25C: ;
    esi = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);

loc_0010F264: ;
    ebp = MEM32(edx + -4);
    MEM32(edx) = ebp;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010F264; /* jne: not equal / not zero */

loc_0010F26F: ;
    POP32(esp, ebp);

loc_0010F270: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ecx + eax * 4 + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F291; /* je: equal / zero */

loc_0010F287: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_0010F291: ;
    POP32(esp, edi);

loc_0010F292: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0010F2A0; /* jge: greater or equal (signed >=) */

loc_0010F29C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;

loc_0010F2A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F2D0
 * Original: 0x0010F2D0 - 0x0010F34E (126 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010F2D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0xC;
    /* nop */

loc_0010F2E0: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F2F0; /* je: equal / zero */

loc_0010F2E6: ;
    esi = MEM32(esi);
    SET_LO8(ebx, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0x39)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(ebp + 0x39) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F300; /* je: equal / zero */

loc_0010F2F0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F2E0; /* jl: less (signed <) */

loc_0010F2F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010F300: ;
    eax = MEM32(ecx + edx * 4 + 0xC);
    MEM32(ecx + edx * 4 + 0xC) = 0;
    ebx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(ecx + 4) = ebx;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0010F347; /* jge: greater or equal (signed >=) */

loc_0010F329: ;
    ecx = ecx + edx * 4 + 0x10;
    /* nop */

loc_0010F330: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F347; /* je: equal / zero */

loc_0010F336: ;
    edi = MEM32(ecx + -4);
    MEM32(ecx + -4) = edx;
    MEM32(ecx) = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F330; /* jl: less (signed <) */

loc_0010F347: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F370
 * Original: 0x0010F370 - 0x0010F3C0 (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F370: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F376: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0010F37Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0010F37F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F3AE; /* je: equal / zero */

loc_0010F386: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = 4;
    MEM32(eax + 4) = 0;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    goto loc_0010F3B0;

loc_0010F3AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F3B0: ;
    MEM32(edi + esi * 4) = eax;
    MEM32(eax) = esi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F376; /* jl: less (signed <) */

loc_0010F3BB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F3E0
 * Original: 0x0010F3E0 - 0x0010F426 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F3E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F3E7: ;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F41D; /* je: equal / zero */

loc_0010F3F1: ;
    eax = edx + 0xC;
    esi = 5;
    /* nop */

loc_0010F400: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F40B; /* je: equal / zero */

loc_0010F405: ;
    MEM32(eax) = 0;

loc_0010F40B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010F400; /* jne: not equal / not zero */

loc_0010F411: ;
    MEM32(edx + 4) = 0;
    MEMF(edx + 8) = xmm0.f[0]; /* movss */

loc_0010F41D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F3E7; /* jl: less (signed <) */

loc_0010F423: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F440
 * Original: 0x0010F440 - 0x0010F527 (231 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0010F440: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 4);
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    ecx = MEM32(ecx + 8);
    MEM32(esp + 4) = edx;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    eax = MEM32(edx * 4 + 0x8F0040);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x134)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 8) = ecx;
    if ((_fca >= _fcb)) goto loc_0010F490; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010F488: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0010F490: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0010F4E2; /* jnp: not parity */

loc_0010F49F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F4A9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010F4A4: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0010F4B0;

loc_0010F4A9: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_0010F4B0: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x7BBF18); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F4C2; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(0x7BBF18)) */

loc_0010F4B9: ;
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010F4C2: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F4CC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010F4C7: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0010F4D0;

loc_0010F4CC: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0010F4D0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D537C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F51E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7D537C)) */

loc_0010F4D9: ;
    eax = 3;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010F4E2: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F4EC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010F4E7: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0010F4F3;

loc_0010F4EC: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_0010F4F3: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x7BBF18); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F502; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(0x7BBF18)) */

loc_0010F4FC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010F502: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F50C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010F507: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0010F510;

loc_0010F50C: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0010F510: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D537C); /* comiss */
    eax = 2;
    if ((_fca >= _fcb)) goto loc_0010F523; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7D537C)) */

loc_0010F51E: ;
    eax = 4;

loc_0010F523: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010F560
 * Original: 0x0010F560 - 0x0010F582 (34 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F560: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0010F56Du); RECOMP_ABI_CALL(0x0001A7C2u, sub_0001A7C2); /* call 0x0001A7C2 */

loc_0010F56D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F57C; /* je: equal / zero */

loc_0010F575: ;
    eax = MEM32(esi + eax * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0010F57C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F590
 * Original: 0x0010F590 - 0x0010F5C3 (51 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F590: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0010F5A0;

    /* nop */

loc_0010F5A0: ;
    ecx = MEM32(edi + esi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0010F5A9u); RECOMP_ABI_CALL(0x0001A399u, sub_0001A399); /* call 0x0001A399 */

loc_0010F5A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F5BB; /* jne: not equal / not zero */

loc_0010F5AD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F5A0; /* jl: less (signed <) */

loc_0010F5B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010F5BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F5D0
 * Original: 0x0010F5D0 - 0x0010F64D (125 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0010F5D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    edx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010F5F1; /* jg: greater (signed >) */

loc_0010F5E4: ;
    if (CMP_NE(_fa, _fb)) goto loc_0010F5F6; /* jne: not equal / not zero */

loc_0010F5E6: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F5F6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 8)) */

loc_0010F5F1: ;
    eax = 1;

loc_0010F5F6: ;
    edi = MEM32(ecx + 8);
    ebx = MEM32(ecx + eax * 4);
    edx = MEM32(edi + 4);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010F613; /* jg: greater (signed >) */

loc_0010F606: ;
    if (CMP_NE(_fa, _fb)) goto loc_0010F618; /* jne: not equal / not zero */

loc_0010F608: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F618; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 8)) */

loc_0010F613: ;
    eax = 2;

loc_0010F618: ;
    edi = MEM32(ecx + 0xC);
    ebx = MEM32(ecx + eax * 4);
    edx = MEM32(edi + 4);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010F635; /* jg: greater (signed >) */

loc_0010F628: ;
    if (CMP_NE(_fa, _fb)) goto loc_0010F63A; /* jne: not equal / not zero */

loc_0010F62A: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F63A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 8)) */

loc_0010F635: ;
    eax = 3;

loc_0010F63A: ;
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0010F64C; /* jne: not equal / not zero */

loc_0010F647: ;
    eax = 4;

loc_0010F64C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F670
 * Original: 0x0010F670 - 0x0010F679 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F670(void)
{

loc_0010F670: ;
    eax = ecx;
    MEM32(eax) = 0x7D5494;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F680
 * Original: 0x0010F680 - 0x0010F683 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F680(void)
{

loc_0010F680: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F690
 * Original: 0x0010F690 - 0x0010F8C6 (566 bytes, 159 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F690(void)
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

loc_0010F690: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F8BA; /* jl: less (signed <) */

loc_0010F6A6: ;
    eax = MEM32(eax * 4 + 0x8E9058);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    MEM32(esp + 4) = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 8) = ecx;
    edx = MEM32(edx + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0x8F0044;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010F703u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0010F703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F7B7; /* je: equal / zero */

loc_0010F70B: ;
    goto loc_0010F710;

    /* nop */

loc_0010F710: ;
    edx = MEM32(eax + 0x20);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x24) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    MEM32(esp + 0x20) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F746; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_0010F741: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0010F750; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0010F746: ;
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F7A2; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm1.f[0]) */

loc_0010F74B: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F7A2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0010F750: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7B70AC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm5.f[0]; /* divss */
    xmm0 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F7A2; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0010F795: ;
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0010F8A0; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_0010F7A2: ;
    PUSH32(esp, 1);
    ecx = eax + 0x200;
    PUSH32(esp, 0x0010F7AFu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0010F7AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F710; /* jne: not equal / not zero */

loc_0010F7B7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0010F7BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F7BBu); } /* indirect call */
    }

loc_0010F7BE: ;
    ecx = MEM32(eax + 0x20);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm5.f[0]; /* comiss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F7F4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm5.f[0]) */

loc_0010F7EF: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0010F802; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_0010F7F4: ;
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F877; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_0010F7FD: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F877; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0010F802: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7B70AC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm5.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F850; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0010F84B: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0010F8A0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_0010F850: ;
    xmm4 = XMM_SCALAR(MEMF(0x7AA7E4)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F869; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0010F864: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0010F8A0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_0010F869: ;
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F877; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0010F872: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0010F8A0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_0010F877: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010F882u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0010F882: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F8AD; /* jl: less (signed <) */

loc_0010F889: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010F893; /* jle: less or equal (signed <=) */

loc_0010F88E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F8AD; /* jne: not equal / not zero */

loc_0010F893: ;
    fp_push(MEMF(0x7D53B8)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0010F8A0: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0010F8AD: ;
    fp_push(MEMF(0x7AD448)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0010F8BA: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010F960
 * Original: 0x0010F960 - 0x0010F998 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F960: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F96C; /* je: equal / zero */

loc_0010F969: ;
    MEM32(ecx + 0xC) = eax;

loc_0010F96C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F974; /* je: equal / zero */

loc_0010F971: ;
    MEM32(ecx + 0x10) = eax;

loc_0010F974: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F97C; /* je: equal / zero */

loc_0010F979: ;
    MEM32(ecx + 0x14) = eax;

loc_0010F97C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F984; /* je: equal / zero */

loc_0010F981: ;
    MEM32(ecx + 0x18) = eax;

loc_0010F984: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F98C; /* je: equal / zero */

loc_0010F989: ;
    MEM32(ecx + 0x1C) = eax;

loc_0010F98C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 4) = eax;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0010F9B0
 * Original: 0x0010F9B0 - 0x0010FA12 (98 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F9B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0xC;
    goto loc_0010F9C0;

    /* nop */

loc_0010F9C0: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F9D0; /* je: equal / zero */

loc_0010F9C6: ;
    edx = MEM32(edx);
    SET_LO8(edx, MEM8(edx + 0x39));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x39)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + 0x39) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F9E0; /* je: equal / zero */

loc_0010F9D0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F9C0; /* jl: less (signed <) */

loc_0010F9D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0010F9E0: ;
    edx = MEM32(ecx + eax * 4 + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + eax * 4 + 0xC);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010FA0Bu); RECOMP_ABI_CALL(0x00013D4Bu, sub_00013D4B); /* call 0x00013D4B */

loc_0010FA0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FA30
 * Original: 0x0010FA30 - 0x0010FA64 (52 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FA30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1D4);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0010FA44u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0010FA44: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(eax) = edi;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010FA5Fu); RECOMP_ABI_CALL(0x00031125u, sub_00031125); /* call 0x00031125 */

loc_0010FA5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FA80
 * Original: 0x0010FA80 - 0x0010FAD0 (80 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FA80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FA8F; /* je: equal / zero */

loc_0010FA8C: ;
    MEM32(esi + 0xC) = eax;

loc_0010FA8F: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FA97; /* je: equal / zero */

loc_0010FA94: ;
    MEM32(esi + 0x10) = eax;

loc_0010FA97: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FA9F; /* je: equal / zero */

loc_0010FA9C: ;
    MEM32(esi + 0x14) = eax;

loc_0010FA9F: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FAA7; /* je: equal / zero */

loc_0010FAA4: ;
    MEM32(esi + 0x18) = eax;

loc_0010FAA7: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FAAF; /* je: equal / zero */

loc_0010FAAC: ;
    MEM32(esi + 0x1C) = eax;

loc_0010FAAF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 4) = eax;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0010FACA; /* je: equal / zero */

loc_0010FAC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FAC7u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0010FAC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010FACA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FAF0
 * Original: 0x0010FAF0 - 0x0010FC96 (422 bytes, 117 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FAF0(void)
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

loc_0010FAF0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0x7D5494;
    PUSH32(esp, 0x0010FB0Fu); RECOMP_ABI_CALL(0x00020ECEu, sub_00020ECE); /* call 0x00020ECE */

loc_0010FB0F: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 8) = edx;
    edx = MEM32(esi);
    MEM32(esp + 0x10) = ecx;
    ecx = esi;
    MEM32(esp + 0xC) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0010FB30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FB2Du); } /* indirect call */
    }

loc_0010FB30: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    MEM32(esp + 0x18) = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F0044;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010FB67u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0010FB67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010FC13; /* je: equal / zero */

loc_0010FB70: ;
    ecx = MEM32(eax + 0x20);
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEM32(esp + 0x20) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FBA6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0010FBA1: ;
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0010FBB0; /* ja: above (unsigned >) (xmm6.f[0] vs xmm1.f[0]) */

loc_0010FBA6: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FBFE; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0010FBAB: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FBFE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_0010FBB0: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7B70AC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] / xmm4.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm6.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FBFE; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0010FBF5: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0010FC26; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_0010FBFE: ;
    PUSH32(esp, 1);
    ecx = eax + 0x200;
    PUSH32(esp, 0x0010FC0Bu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0010FC0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FB70; /* jne: not equal / not zero */

loc_0010FC13: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FC32; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0010FC21: ;
    xmm1 = xmm2; /* movaps */
    goto loc_0010FC39;

loc_0010FC26: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0010FC32: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_0010FC39: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7D5374); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FC6F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7D5374)) */

loc_0010FC42: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FC52; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010FC4D: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0010FC56;

loc_0010FC52: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0010FC56: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D53A0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FC6F; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010FC63: ;
    fp_push(MEMF(0x7AD39C)); /* fld float */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0010FC6F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D53BC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FC8A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7D53BC)) */

loc_0010FC7E: ;
    fp_push(MEMF(0x7D53A4)); /* fld float */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0010FC8A: ;
    fp_push(MEMF(0x7AD3A8)); /* fld float */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010FD00
 * Original: 0x0010FD00 - 0x0010FD47 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FD00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010FD06: ;
    ecx = MEM32(ebx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FD3E; /* je: equal / zero */

loc_0010FD0D: ;
    eax = ecx + 0xC;
    edx = 5;

loc_0010FD15: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FD20; /* je: equal / zero */

loc_0010FD1A: ;
    MEM32(eax) = 0;

loc_0010FD20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010FD15; /* jne: not equal / not zero */

loc_0010FD26: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    MEM32(ecx + 4) = 0;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010FD3Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0010FD3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010FD3E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010FD06; /* jl: less (signed <) */

loc_0010FD44: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FD60
 * Original: 0x0010FD60 - 0x0010FE84 (292 bytes, 100 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FD60(void)
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

loc_0010FD60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x0010FD77u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0010FD77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FE6B; /* je: equal / zero */

loc_0010FD82: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0010FD8Bu); RECOMP_ABI_CALL(0x0002C882u, sub_0002C882); /* call 0x0002C882 */

loc_0010FD8B: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0010FD97u); RECOMP_ABI_CALL(0x0003818Cu, sub_0003818C); /* call 0x0003818C */

loc_0010FD97: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0010FDA3u); RECOMP_ABI_CALL(0x0001FBB4u, sub_0001FBB4); /* call 0x0001FBB4 */

loc_0010FDA3: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010FDBDu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0010FDBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FE07; /* jne: not equal / not zero */

loc_0010FDC1: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FDED; /* je: equal / zero */

loc_0010FDCD: ;
    edi = eax + 0x2C;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FDED; /* je: equal / zero */

loc_0010FDD6: ;
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010FDE2u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0010FDE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FDED; /* je: equal / zero */

loc_0010FDE9: ;
    edi = MEM32(edi);
    goto loc_0010FDEF;

loc_0010FDED: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010FDEF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FE07; /* je: equal / zero */

loc_0010FDF3: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0010FDFBu); RECOMP_ABI_CALL(0x00029B19u, sub_00029B19); /* call 0x00029B19 */

loc_0010FDFB: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    goto loc_0010FE0F;

loc_0010FE07: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D5394)); /* movss */

loc_0010FE0F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, esi);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010FE37u); RECOMP_ABI_CALL(0x0001A7C2u, sub_0001A7C2); /* call 0x0001A7C2 */

loc_0010FE37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FE73; /* je: equal / zero */

loc_0010FE3F: ;
    edi = MEM32(ebx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FE73; /* je: equal / zero */

loc_0010FE46: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010FE54u); RECOMP_ABI_CALL(0x0002EF1Fu, sub_0002EF1F); /* call 0x0002EF1F */

loc_0010FE54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FE69; /* jne: not equal / not zero */

loc_0010FE58: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0010FE60u); RECOMP_ABI_CALL(0x00015146u, sub_00015146); /* call 0x00015146 */

loc_0010FE60: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FE69u); RECOMP_ABI_CALL(0x00035856u, sub_00035856); /* call 0x00035856 */

loc_0010FE69: ;
    POP32(esp, ebp);
    POP32(esp, edi);

loc_0010FE6B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0010FE73: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0010FE7Bu); RECOMP_ABI_CALL(0x00015146u, sub_00015146); /* call 0x00015146 */

loc_0010FE7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010FED0
 * Original: 0x0010FED0 - 0x0010FF10 (64 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FED0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010FEE5u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0010FEE5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FF0B; /* je: equal / zero */

loc_0010FEEB: ;
    goto loc_0010FEF0;

    /* nop */

loc_0010FEF0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010FEF8u); RECOMP_ABI_CALL(0x00011CE9u, sub_00011CE9); /* call 0x00011CE9 */

loc_0010FEF8: ;
    PUSH32(esp, 1);
    ecx = esi + 0x1E8;
    PUSH32(esp, 0x0010FF05u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0010FF05: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FEF0; /* jne: not equal / not zero */

loc_0010FF0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FF20
 * Original: 0x0010FF20 - 0x0010FF24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF20(void)
{

loc_0010FF20: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FF30
 * Original: 0x0010FF30 - 0x0010FF6D (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0010FF30: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0010FF3F; /* jne: not equal / not zero */

loc_0010FF3C: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0010FF3F: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0010FF3C; /* je: equal / zero */

loc_0010FF45: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FF51u); RECOMP_ABI_CALL(0x0002D91Cu, sub_0002D91C); /* call 0x0002D91C */

loc_0010FF51: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0010FF3C; /* jne: not equal / not zero */

loc_0010FF55: ;
    edx = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0010FF3C; /* jne: not equal / not zero */

loc_0010FF5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FF63u); RECOMP_ABI_CALL(0x0001B3E3u, sub_0001B3E3); /* call 0x0001B3E3 */

loc_0010FF63: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0010FF80
 * Original: 0x0010FF80 - 0x0010FFF0 (112 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0010FF80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010FF98u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_0010FF98: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x0010FFA0u); RECOMP_ABI_CALL(0x0002A389u, sub_0002A389); /* call 0x0002A389 */

loc_0010FFA0: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x0010FFA8u); RECOMP_ABI_CALL(0x00012D8Du, sub_00012D8D); /* call 0x00012D8D */

loc_0010FFA8: ;
    eax = MEM32(esi + 0x4C);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AA820); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7D5868)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FFD3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0010FFCB: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3CC)); /* movss */

loc_0010FFD3: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010FFE5u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0010FFE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FFEBu); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0010FFEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FFAB
 * Original: 0x0010FFAB - 0x0010FFF0 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FFAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0010FFAB: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AA820); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7D5868)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FFD3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0010FFCB: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3CC)); /* movss */

loc_0010FFD3: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010FFE5u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0010FFE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FFEBu); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0010FFEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FFD7
 * Original: 0x0010FFD7 - 0x0010FFF0 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FFD7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FFD7: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010FFE5u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0010FFE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FFEBu); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0010FFEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FFEB
 * Original: 0x0010FFEB - 0x0010FFF0 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FFEB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FFEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FFFF
 * Original: 0x0010FFFF - 0x00110000 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FFFF(void)
{

loc_0010FFFF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00110000
 * Original: 0x00110000 - 0x00110010 (16 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110000(void)
{

loc_00110000: ;
    (void)0;
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
 * sub_0011000C
 * Original: 0x0011000C - 0x00110010 (4 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011000C(void)
{

loc_0011000C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0011000D
 * Original: 0x0011000D - 0x00110010 (3 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011000D(void)
{

loc_0011000D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0011000E
 * Original: 0x0011000E - 0x00110010 (2 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011000E(void)
{

loc_0011000E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00110010
 * Original: 0x00110010 - 0x00110031 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110010: ;
    eax = MEM32(0x8E9B10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00110022u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_00110022: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011002F; /* je: equal / zero */

loc_00110026: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011002Cu); RECOMP_ABI_CALL(0x00035342u, sub_00035342); /* call 0x00035342 */

loc_0011002C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011002F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011001A
 * Original: 0x0011001A - 0x00110031 (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011001A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011001A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00110022u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_00110022: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011002F; /* je: equal / zero */

loc_00110026: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011002Cu); RECOMP_ABI_CALL(0x00035342u, sub_00035342); /* call 0x00035342 */

loc_0011002C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011002F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110040
 * Original: 0x00110040 - 0x001100C7 (135 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110040(void)
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

loc_00110040: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0011004Au); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0011004A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011005D; /* je: equal / zero */

loc_0011004E: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011005Du); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_0011005D: ;
    PUSH32(esp, 0x6F);
    PUSH32(esp, 0x7D5930);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0011006Bu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0011006B: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    PUSH32(esp, 0x72);
    PUSH32(esp, 0x7D5930);
    PUSH32(esp, 6);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00110085u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00110085: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    edx = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AD450)); /* fadd dword ptr [0x7ad450] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x110010);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001100C3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001100C0u); } /* indirect call */
    }

loc_001100C3: ;
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
 * sub_001100F0
 * Original: 0x001100F0 - 0x001100F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001100F0(void)
{

loc_001100F0: ;
    eax = ecx;
    MEM32(eax) = 0x7D5954;
    esp += 4; return; /* ret */

}

/**
 * sub_00110100
 * Original: 0x00110100 - 0x00110103 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110100: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00110110
 * Original: 0x00110110 - 0x0011011D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110110(void)
{

loc_00110110: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D5964;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110120
 * Original: 0x00110120 - 0x00110187 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110120: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10FF80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 0x10FF80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110185; /* je: equal / zero */

loc_00110131: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110185; /* je: equal / zero */

loc_00110137: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110143u); RECOMP_ABI_CALL(0x0002D91Cu, sub_0002D91C); /* call 0x0002D91C */

loc_00110143: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110185; /* jne: not equal / not zero */

loc_00110147: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00110185; /* jne: not equal / not zero */

loc_0011014F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110155u); RECOMP_ABI_CALL(0x0001B3E3u, sub_0001B3E3); /* call 0x0001B3E3 */

loc_00110155: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110185; /* jne: not equal / not zero */

loc_0011015C: ;
    PUSH32(esp, 0x10FF80);
    PUSH32(esp, 0x91);
    PUSH32(esp, 0x7D5930);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00110172u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00110172: ;
    edx = MEM32(eax * 4 + 0x8AD788);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00110182u); RECOMP_ABI_CALL(0x00110040u, sub_00110040); /* call 0x00110040 */

loc_00110182: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110185: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001101A0
 * Original: 0x001101A0 - 0x00110207 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001101A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001101A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10FF80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 0x10FF80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110205; /* je: equal / zero */

loc_001101B1: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110205; /* je: equal / zero */

loc_001101B7: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001101C3u); RECOMP_ABI_CALL(0x0002D91Cu, sub_0002D91C); /* call 0x0002D91C */

loc_001101C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110205; /* jne: not equal / not zero */

loc_001101C7: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00110205; /* jne: not equal / not zero */

loc_001101CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001101D5u); RECOMP_ABI_CALL(0x0001B3E3u, sub_0001B3E3); /* call 0x0001B3E3 */

loc_001101D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110205; /* jne: not equal / not zero */

loc_001101DC: ;
    PUSH32(esp, 0x10FF80);
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x7D5930);
    PUSH32(esp, 5);
    PUSH32(esp, 0x001101F2u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001101F2: ;
    edx = MEM32(eax * 4 + 0x8AD79C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00110202u); RECOMP_ABI_CALL(0x00110040u, sub_00110040); /* call 0x00110040 */

loc_00110202: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110205: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110220
 * Original: 0x00110220 - 0x00110331 (273 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10FF80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 0x10FF80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011032F; /* je: equal / zero */

loc_00110235: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011032F; /* je: equal / zero */

loc_0011023F: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011024Bu); RECOMP_ABI_CALL(0x0002D91Cu, sub_0002D91C); /* call 0x0002D91C */

loc_0011024B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011032F; /* jne: not equal / not zero */

loc_00110253: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011032F; /* jne: not equal / not zero */

loc_0011025F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110265u); RECOMP_ABI_CALL(0x0001B3E3u, sub_0001B3E3); /* call 0x0001B3E3 */

loc_00110265: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011032F; /* jne: not equal / not zero */

loc_00110270: ;
    eax = MEM32(esi + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110306; /* jne: not equal / not zero */

loc_00110281: ;
    SET_LO8(ecx, MEM8(eax + 0x54));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110306; /* jne: not equal / not zero */

loc_00110288: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011028Eu); RECOMP_ABI_CALL(0x0002F8B1u, sub_0002F8B1); /* call 0x0002F8B1 */

loc_0011028E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001102A5; /* je: equal / zero */

loc_00110295: ;
    PUSH32(esp, 0x44340000);
    ecx = esi;
    PUSH32(esp, 0x001102A1u); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_001102A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110306; /* jne: not equal / not zero */

loc_001102A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4CAFC800);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001102B2u); RECOMP_ABI_CALL(0x0001D78Du, sub_0001D78D); /* call 0x0001D78D */

loc_001102B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001102C0; /* je: equal / zero */

loc_001102B9: ;
    PUSH32(esp, 0xB0);
    goto loc_0011030B;

loc_001102C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4CAFC800);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001102CDu); RECOMP_ABI_CALL(0x00023F2Au, sub_00023F2A); /* call 0x00023F2A */

loc_001102CD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001102DB; /* je: equal / zero */

loc_001102D4: ;
    PUSH32(esp, 0xB4);
    goto loc_0011030B;

loc_001102DB: ;
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x7D5930);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001102ECu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001102EC: ;
    eax = MEM32(eax * 4 + 0x8AD7B0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10FF80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110301u); RECOMP_ABI_CALL(0x00110040u, sub_00110040); /* call 0x00110040 */

loc_00110301: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00110306: ;
    PUSH32(esp, 0xAC);

loc_0011030B: ;
    PUSH32(esp, 0x7D5930);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00110317u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00110317: ;
    eax = MEM32(eax * 4 + 0x8AD7B4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10FF80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011032Cu); RECOMP_ABI_CALL(0x00110040u, sub_00110040); /* call 0x00110040 */

loc_0011032C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011032F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110380
 * Original: 0x00110380 - 0x0011039A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00110380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110380: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00110389u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00110389: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110397; /* je: equal / zero */

loc_00110390: ;
    MEM32(eax) = 0x7D5954;
    esp += 4; return; /* ret */

loc_00110397: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001103A0
 * Original: 0x001103A0 - 0x001103FC (92 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001103A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001103A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001103F8; /* jge: greater or equal (signed >=) */

loc_001103AF: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x110420) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 0x110420 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001103F8; /* je: equal / zero */

loc_001103BB: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001103F8; /* je: equal / zero */

loc_001103C1: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001103CDu); RECOMP_ABI_CALL(0x0002D91Cu, sub_0002D91C); /* call 0x0002D91C */

loc_001103CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001103F8; /* jne: not equal / not zero */

loc_001103D1: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001103F8; /* jne: not equal / not zero */

loc_001103D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001103DFu); RECOMP_ABI_CALL(0x0001B3E3u, sub_0001B3E3); /* call 0x0001B3E3 */

loc_001103DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001103F8; /* jne: not equal / not zero */

loc_001103E6: ;
    PUSH32(esp, 0x110420);
    PUSH32(esp, 0x1FD);
    PUSH32(esp, 0x001103F5u); RECOMP_ABI_CALL(0x00110040u, sub_00110040); /* call 0x00110040 */

loc_001103F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001103F8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110420
 * Original: 0x00110420 - 0x00110490 (112 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00110420: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00110438u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_00110438: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x00110440u); RECOMP_ABI_CALL(0x0002A389u, sub_0002A389); /* call 0x0002A389 */

loc_00110440: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x00110448u); RECOMP_ABI_CALL(0x00012D8Du, sub_00012D8D); /* call 0x00012D8D */

loc_00110448: ;
    eax = MEM32(esi + 0x4C);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AA820); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7D5868)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00110473; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0011046B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3CC)); /* movss */

loc_00110473: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00110485u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00110485: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011048Bu); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0011048B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001104B0
 * Original: 0x001104B0 - 0x0011050D (93 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001104B0(void)
{

loc_001104B0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(esp + 4);
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00110530
 * Original: 0x00110530 - 0x0011056B (59 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7D5E0C);
    ecx = edi;
    PUSH32(esp, 0x00110545u); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_00110545: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011054Du); RECOMP_ABI_CALL(0x000294F7u, sub_000294F7); /* call 0x000294F7 */

loc_0011054D: ;
    esi = MEM32(esi + 0x1E0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011055F; /* je: equal / zero */

loc_00110557: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0011055Fu); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_0011055F: ;
    ecx = edi;
    PUSH32(esp, 0x00110566u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_00110566: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110580
 * Original: 0x00110580 - 0x001105F3 (115 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110580: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x8F01F0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001105D9; /* jne: not equal / not zero */

loc_00110592: ;
    MEM32(0x8F01F0) = MEM32(0x8F01F0) | eax;
    _fa = (uint32_t)(MEM32(0x8F01F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 4;
    SET_LO8(eax, 2);
    MEM16(0x8AD826) = 0x1E8;
    MEM8(0x8AD828) = 0xA;
    MEM16(0x8AD82A) = LO16(ecx);
    MEM16(0x8AD82C) = 0x1FC;
    MEM8(0x8AD82E) = LO8(eax);
    MEM16(0x8AD830) = LO16(ecx);
    MEM16(0x8AD832) = 0x200;
    MEM8(0x8AD834) = LO8(eax);

loc_001105D9: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x8AD824);
    PUSH32(esp, 0x001105EBu); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_001105EB: ;
    MEM32(esi + 0x1E0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110610
 * Original: 0x00110610 - 0x00110631 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110610(void)
{

loc_00110610: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1E0);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110625u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00110625: ;
    MEM32(esi + 0x1E0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110640
 * Original: 0x00110640 - 0x00110658 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00110648u); RECOMP_ABI_CALL(0x000278B4u, sub_000278B4); /* call 0x000278B4 */

loc_00110648: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1FC) = eax;
    MEM32(esi + 0x200) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110660
 * Original: 0x00110660 - 0x0011066E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110660(void)
{

loc_00110660: ;
    eax = MEM32(0x895AB0);
    edx = MEM32(eax);
    MEM32(ecx + 0x1FC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00110680
 * Original: 0x00110680 - 0x001106A1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110680(void)
{

loc_00110680: ;
    edx = MEM32(0x8E9B10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, 0x3F3);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001106A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011069Du); } /* indirect call */
    }

loc_001106A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001106B0
 * Original: 0x001106B0 - 0x001106D1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001106B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001106B0: ;
    eax = MEM32(0x8E9B10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001106C2u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_001106C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001106CF; /* je: equal / zero */

loc_001106C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001106CCu); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_001106CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001106CF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001106E0
 * Original: 0x001106E0 - 0x00110707 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001106E0(void)
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

loc_001106E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001106EFu); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_001106EF: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
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
 * sub_00110710
 * Original: 0x00110710 - 0x00110720 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110710: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011071Cu); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0011071C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00110730
 * Original: 0x00110730 - 0x0011079C (108 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110730: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x13B);
    PUSH32(esp, 0x7D5E18);
    PUSH32(esp, 9);
    esi = ecx;
    PUSH32(esp, 0x00110747u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00110747: ;
    ecx = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = ecx + ecx;
    eax = edi;
    ebx = 3;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CEA20); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1EC) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    MEM32(esi + 0x1F0) = edx;
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    MEM32(esi + 0x1E8) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x1F4) = eax;
    MEM32(esi + 0x1F8) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001107C0
 * Original: 0x001107C0 - 0x0011080B (75 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001107C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001107C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001107CBu); RECOMP_ABI_CALL(0x000256F4u, sub_000256F4); /* call 0x000256F4 */

loc_001107CB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x20);
    eax = 2;
    MEM32(esi + 0x34) = eax;
    MEM8(esi + 0x30) = LO8(eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001107F8u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_001107F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1FC) = eax;
    MEM32(esi + 0x200) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00110820
 * Original: 0x00110820 - 0x00110AD8 (696 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00110820(void)
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

loc_00110820: ;
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
    eax = MEM32(ebx + 0x20);
    fp_push(MEMF(eax + 0x60)); /* fld float */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = sin(fp_top()); /* fsin */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7D0)); /* fmul dword ptr [0x7ab7d0] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3 = xmm6; /* movaps */
    fp_top() = cos(fp_top()); /* fcos */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7D0)); /* fmul dword ptr [0x7ab7d0] */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0x24) = ecx;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AACB4)); /* fmul dword ptr [0x7aacb4] */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    eax = ebx + 0x100;
    MEM32(esp + 0x20) = eax;
    MEM32(eax) = ecx;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0xC) = edx;
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    eax = ebx + 0x120;
    MEM32(eax) = ecx;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x44);
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x48);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    eax = ebx + 0x140;
    MEM32(eax) = ecx;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x8B54A0);
    ecx = MEM32(0x8B54A4);
    edx = MEM32(0x8B54A8);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x8B54AC);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x108;
    goto loc_001109D7;

loc_001109CF: ;
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_001109D7: ;
    edi = eax + 1;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm3 = XMM_SCALAR(MEMF(edx + ebx + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + ebx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + ebx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + -4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edx + ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + -8); /* subss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edx = esi + 8;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    eax = esp + 0x44;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110ABCu); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_00110ABC: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001109CF; /* jl: less (signed <) */

loc_00110ACD: ;
    eax = MEM32(esp + 0x20);
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
 * sub_00110B90
 * Original: 0x00110B90 - 0x00110C22 (146 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110B90(void)
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

loc_00110B90: ;
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110B9Cu); RECOMP_ABI_CALL(0x00017793u, sub_00017793); /* call 0x00017793 */

loc_00110B9C: ;
    esi = MEM32(esp + 0xC);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 0x00110BADu); RECOMP_ABI_CALL(0x0002BFA9u, sub_0002BFA9); /* call 0x0002BFA9 */

loc_00110BAD: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00110BF3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi)) */

loc_00110BC4: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7BBF14); /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7D5E3C); /* subss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F9608)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00110BF3: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7BBF14); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7D5E3C); /* subss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F9600)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00110C50
 * Original: 0x00110C50 - 0x00110C86 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110C50(void)
{

loc_00110C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00110C60u); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_00110C60: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110C70u); RECOMP_ABI_CALL(0x00022FDFu, sub_00022FDF); /* call 0x00022FDF */

loc_00110C70: ;
    ecx = MEM32(0x8E8F84);
    MEM32(ecx + 0x2C) = 0xA;
    MEM32(esi + 0x2C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110CA0
 * Original: 0x00110CA0 - 0x00110CD3 (51 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110CA0(void)
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

loc_00110CA0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110CBEu); RECOMP_ABI_CALL(0x0002EA4Cu, sub_0002EA4C); /* call 0x0002EA4C */

loc_00110CBE: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110CCDu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_00110CCD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00110CE0
 * Original: 0x00110CE0 - 0x00110D5F (127 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110CE0(void)
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

loc_00110CE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00110CF3u); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_00110CF3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00110D15; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00110D0D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00110D15: ;
    ecx = MEM32(0x8E8F84);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x3F19999A);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7D5E40)); /* fmul dword ptr [0x7d5e40] */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110D46u); RECOMP_ABI_CALL(0x0002EA4Cu, sub_0002EA4C); /* call 0x0002EA4C */

loc_00110D46: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110D56u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_00110D56: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00110D80
 * Original: 0x00110D80 - 0x00110E27 (167 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110D80(void)
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

loc_00110D80: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, edi);
    xmm0 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_00110DAE; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00110DAB: ;
    xmm0 = xmm2; /* movaps */

loc_00110DAE: ;
    eax = MEM32(0x8E8F84);
    xmm4 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(0x7B04A0); /* subss */
    ecx = MEM32(eax + 0x20);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00110DE6; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00110DE0: ;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_00110DE6: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7D5E44)); /* fmul dword ptr [0x7d5e44] */
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110E0Eu); RECOMP_ABI_CALL(0x0002EA4Cu, sub_0002EA4C); /* call 0x0002EA4C */

loc_00110E0E: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110E1Du); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_00110E1D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00110E50
 * Original: 0x00110E50 - 0x00110EC4 (116 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110E50(void)
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

loc_00110E50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edi);
    if ((_fca >= _fcb)) goto loc_00110E76; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00110E6E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00110E76: ;
    fp_push(MEMF(0x8E931C)); /* fld float */
    ecx = MEM32(0x8E8F84);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7AB1DC)); /* fsub dword ptr [0x7ab1dc] */
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110EADu); RECOMP_ABI_CALL(0x0002EA4Cu, sub_0002EA4C); /* call 0x0002EA4C */

loc_00110EAD: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110EBDu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_00110EBD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00110EF0
 * Original: 0x00110EF0 - 0x00110F2D (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x3C);
    esi = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0x30);
    MEM32(esi + 0x94) = ecx;
    ecx = esi;
    PUSH32(esp, 0x00110F0Cu); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_00110F0C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esi;
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00110F23u); RECOMP_ABI_CALL(0x000237F5u, sub_000237F5); /* call 0x000237F5 */

loc_00110F23: ;
    ecx = MEM32(edi + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000253A7(); return; /* tail jmp 0x000253A7 */

}

/**
 * sub_00110F40
 * Original: 0x00110F40 - 0x00110F8B (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110F40: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110F55u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00110F55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00110F87; /* jl: less (signed <) */

loc_00110F5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00110F66; /* jle: less or equal (signed <=) */

loc_00110F61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110F87; /* jne: not equal / not zero */

loc_00110F66: ;
    eax = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110F73u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00110F73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00110F87; /* jl: less (signed <) */

loc_00110F7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00110F87; /* jg: greater (signed >) */

loc_00110F80: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00110F87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110FA0
 * Original: 0x00110FA0 - 0x00110FA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110FA0(void)
{

loc_00110FA0: ;
    eax = ecx;
    MEM32(eax) = 0x7D5E48;
    esp += 4; return; /* ret */

}

/**
 * sub_00110FB0
 * Original: 0x00110FB0 - 0x00110FB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110FB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00110FC0
 * Original: 0x00110FC0 - 0x00110FCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110FC0(void)
{

loc_00110FC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D5E58;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110FD0
 * Original: 0x00110FD0 - 0x00110FDC (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110FD0(void)
{

loc_00110FD0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00110FD9u); RECOMP_ABI_CALL(0x00013D5Au, sub_00013D5A); /* call 0x00013D5A */

loc_00110FD9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110FE0
 * Original: 0x00110FE0 - 0x00110FE9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110FE0(void)
{

loc_00110FE0: ;
    eax = ecx;
    MEM32(eax) = 0x7D5E74;
    esp += 4; return; /* ret */

}

/**
 * sub_00110FF0
 * Original: 0x00110FF0 - 0x00110FF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110FF0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111000
 * Original: 0x00111000 - 0x0011100D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111000(void)
{

loc_00111000: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D5E84;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111010
 * Original: 0x00111010 - 0x0011101C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111010(void)
{

loc_00111010: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00111019u); RECOMP_ABI_CALL(0x0001DAFDu, sub_0001DAFD); /* call 0x0001DAFD */

loc_00111019: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111020
 * Original: 0x00111020 - 0x00111029 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111020(void)
{

loc_00111020: ;
    eax = ecx;
    MEM32(eax) = 0x7D5EA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00111030
 * Original: 0x00111030 - 0x00111033 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111030: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111040
 * Original: 0x00111040 - 0x0011104D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111040(void)
{

loc_00111040: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D5EB8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111050
 * Original: 0x00111050 - 0x00111059 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111050(void)
{

loc_00111050: ;
    eax = ecx;
    MEM32(eax) = 0x7D5EC4;
    esp += 4; return; /* ret */

}

/**
 * sub_00111060
 * Original: 0x00111060 - 0x00111063 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111060(void)
{

loc_00111060: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111070
 * Original: 0x00111070 - 0x0011107D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111070(void)
{

loc_00111070: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D5ED4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111080
 * Original: 0x00111080 - 0x001110B9 (57 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111080(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00111080: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D5EF0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001110AB; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7D5EF0)) */

loc_00111096: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AEBF0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_001110AE; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001110AB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_001110AE: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001110D0
 * Original: 0x001110D0 - 0x001110D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001110D0(void)
{

loc_001110D0: ;
    eax = ecx;
    MEM32(eax) = 0x7D5EF4;
    esp += 4; return; /* ret */

}

/**
 * sub_001110E0
 * Original: 0x001110E0 - 0x001110E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001110E0(void)
{

loc_001110E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001110F0
 * Original: 0x001110F0 - 0x001110FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001110F0(void)
{

loc_001110F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D5F04;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111100
 * Original: 0x00111100 - 0x0011118F (143 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00111100: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111109u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00111109: ;
    ecx = eax;
    PUSH32(esp, 0x00111110u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_00111110: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011117D; /* je: equal / zero */

loc_00111114: ;
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x7B8E30)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00111132; /* jne: not equal / not zero */

loc_0011112A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A98)); /* movss */

loc_00111132: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x40A00000);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0011114Du); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011114D: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111158u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_00111158: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0011117D; /* jbe: below or equal (unsigned <=) */

loc_00111165: ;
    PUSH32(esp, 0x43900000);
    ecx = esi;
    PUSH32(esp, 0x00111171u); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_00111171: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00111180; /* jne: not equal / not zero */

loc_0011117D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00111180: ;
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_00111141
 * Original: 0x00111141 - 0x0011118F (78 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111141(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00111141: ;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0011114Du); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0011114D: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111158u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_00111158: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0011117D; /* jbe: below or equal (unsigned <=) */

loc_00111165: ;
    PUSH32(esp, 0x43900000);
    ecx = esi;
    PUSH32(esp, 0x00111171u); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_00111171: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00111180; /* jne: not equal / not zero */

loc_0011117D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00111180: ;
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_001111C0
 * Original: 0x001111C0 - 0x001111C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001111C0(void)
{

loc_001111C0: ;
    eax = ecx;
    MEM32(eax) = 0x7D5F20;
    esp += 4; return; /* ret */

}

/**
 * sub_001111D0
 * Original: 0x001111D0 - 0x001111D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001111D0(void)
{

loc_001111D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001111E0
 * Original: 0x001111E0 - 0x001111ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001111E0(void)
{

loc_001111E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D5F30;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001111F0
 * Original: 0x001111F0 - 0x00111238 (72 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001111F0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001111F0: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011120A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00111205: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00111211;

loc_0011120A: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00111211: ;
    xmm1 = XMM_SCALAR(MEMF(0x7D5D20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = MEM32(esp + 4);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00111231; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00111222: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_00111231: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00111250
 * Original: 0x00111250 - 0x00111259 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111250(void)
{

loc_00111250: ;
    eax = ecx;
    MEM32(eax) = 0x7D5F48;
    esp += 4; return; /* ret */

}

/**
 * sub_00111260
 * Original: 0x00111260 - 0x00111263 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111260: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111270
 * Original: 0x00111270 - 0x0011127D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111270(void)
{

loc_00111270: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D5F58;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111280
 * Original: 0x00111280 - 0x00111288 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111280(void)
{

loc_00111280: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111286u); RECOMP_ABI_CALL(0x0001836Eu, sub_0001836E); /* call 0x0001836E */

loc_00111286: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00111290
 * Original: 0x00111290 - 0x001112D3 (67 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111290: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7D5F70;
    if (CMP_EQ(_fa, _fb)) goto loc_001112A6; /* je: equal / zero */

loc_001112A0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001112A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001112A4u); } /* indirect call */
    }

loc_001112A6: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001112B3; /* je: equal / zero */

loc_001112AD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001112B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001112B1u); } /* indirect call */
    }

loc_001112B3: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001112BCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001112BC: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001112C5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001112C5: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001112CEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001112CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001112F0
 * Original: 0x001112F0 - 0x00111348 (88 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001112F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001112F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7D5F70;
    if (CMP_EQ(_fa, _fb)) goto loc_00111306; /* je: equal / zero */

loc_00111300: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00111306u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111304u); } /* indirect call */
    }

loc_00111306: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111313; /* je: equal / zero */

loc_0011130D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00111313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111311u); } /* indirect call */
    }

loc_00111313: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011131Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0011131C: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00111325u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00111325: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011132Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0011132E: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00111342; /* je: equal / zero */

loc_00111339: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011133Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0011133F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00111342: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111360
 * Original: 0x00111360 - 0x00111388 (40 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111360: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7D5F70;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001113A0
 * Original: 0x001113A0 - 0x001113A7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001113A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001113A0: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_001113B0
 * Original: 0x001113B0 - 0x00111417 (103 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001113B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001113B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001113CBu); RECOMP_ABI_CALL(0x00020609u, sub_00020609); /* call 0x00020609 */

loc_001113CB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111408; /* je: equal / zero */

loc_001113D3: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001113DEu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001113DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001113F6; /* jne: not equal / not zero */

loc_001113E5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001113EEu); RECOMP_ABI_CALL(0x00019D0Eu, sub_00019D0E); /* call 0x00019D0E */

loc_001113EE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111410; /* jne: not equal / not zero */

loc_001113F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00111400u); RECOMP_ABI_CALL(0x00020609u, sub_00020609); /* call 0x00020609 */

loc_00111400: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001113D3; /* jne: not equal / not zero */

loc_00111408: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00111410: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00111430
 * Original: 0x00111430 - 0x00111440 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111430(void)
{

loc_00111430: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 4);
    MEM32(eax + 0x10) = edx;
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111450
 * Original: 0x00111450 - 0x00111479 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111450: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011146E; /* je: equal / zero */

loc_0011145A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111460u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00111460: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011146E: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111490
 * Original: 0x00111490 - 0x00111497 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111490: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_001114A0
 * Original: 0x001114A0 - 0x001114C9 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001114A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001114A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001114BE; /* je: equal / zero */

loc_001114AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001114B0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001114B0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001114BE: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001114E0
 * Original: 0x001114E0 - 0x00111509 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001114E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001114E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001114FE; /* je: equal / zero */

loc_001114EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001114F0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001114F0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001114FE: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111520
 * Original: 0x00111520 - 0x00111569 (73 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111520: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111563; /* je: equal / zero */

loc_0011152A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00111532u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111530u); } /* indirect call */
    }

loc_00111532: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111555; /* je: equal / zero */

loc_00111539: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_00111540: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0011154Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111547u); } /* indirect call */
    }

loc_0011154A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011155D; /* jne: not equal / not zero */

loc_0011154E: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111540; /* jne: not equal / not zero */

loc_00111555: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0011155Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011155Au); } /* indirect call */
    }

loc_0011155D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00111563: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111580
 * Original: 0x00111580 - 0x00111584 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111580: ;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00111590
 * Original: 0x00111590 - 0x00111594 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111590(void)
{

loc_00111590: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_001115A0
 * Original: 0x001115A0 - 0x001115A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001115A0(void)
{

loc_001115A0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001115B0
 * Original: 0x001115B0 - 0x001115B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001115B0(void)
{

loc_001115B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001115C0
 * Original: 0x001115C0 - 0x001115C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001115C0(void)
{

loc_001115C0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001115D0
 * Original: 0x001115D0 - 0x001115D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001115D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001115D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001115E0
 * Original: 0x001115E0 - 0x001115E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001115E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001115E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001115F0
 * Original: 0x001115F0 - 0x001115F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001115F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001115F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111600
 * Original: 0x00111600 - 0x00111604 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111600(void)
{

loc_00111600: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00111610
 * Original: 0x00111610 - 0x00111614 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111610(void)
{

loc_00111610: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00111620
 * Original: 0x00111620 - 0x0011162B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111620: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00111630
 * Original: 0x00111630 - 0x00111634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111630(void)
{

loc_00111630: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00111640
 * Original: 0x00111640 - 0x00111643 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111640(void)
{

loc_00111640: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00111650
 * Original: 0x00111650 - 0x00111653 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111650(void)
{

loc_00111650: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00111660
 * Original: 0x00111660 - 0x00111664 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111660(void)
{

loc_00111660: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00111670
 * Original: 0x00111670 - 0x00111679 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111670(void)
{

loc_00111670: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111680
 * Original: 0x00111680 - 0x0011168A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111680(void)
{

loc_00111680: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111690
 * Original: 0x00111690 - 0x001116D7 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111690: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1E0);
    MEM32(esi) = 0x7D5F78;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001116ABu); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_001116AB: ;
    ecx = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x1E0) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001116C5; /* je: equal / zero */

loc_001116BF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001116C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001116C3u); } /* indirect call */
    }

loc_001116C5: ;
    MEM32(esi + 0x1E4) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00019025(); return; /* tail jmp 0x00019025 */

}

/**
 * sub_001116F0
 * Original: 0x001116F0 - 0x001116F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001116F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001116F0: ;
    g_seh_ebp = ebp; sub_000113D4(); return; /* tail jmp 0x000113D4 */

}

/**
 * sub_00111700
 * Original: 0x00111700 - 0x00111707 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00111700: ;
    fp_push(MEMF(0x7AD38C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00111710
 * Original: 0x00111710 - 0x00111713 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111710: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111720
 * Original: 0x00111720 - 0x00111723 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111720: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111730
 * Original: 0x00111730 - 0x00111733 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111730: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111740
 * Original: 0x00111740 - 0x00111746 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111740(void)
{

loc_00111740: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00111750
 * Original: 0x00111750 - 0x00111753 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111750: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111760
 * Original: 0x00111760 - 0x00111763 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111760(void)
{

loc_00111760: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00111770
 * Original: 0x00111770 - 0x00111776 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111770(void)
{

loc_00111770: ;
    eax = 0x46;
    esp += 4; return; /* ret */

}

/**
 * sub_00111780
 * Original: 0x00111780 - 0x00111786 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111780(void)
{

loc_00111780: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_00111790
 * Original: 0x00111790 - 0x00111796 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111790(void)
{

loc_00111790: ;
    eax = MEM32(0x8E8F88);
    esp += 4; return; /* ret */

}

/**
 * sub_001117A0
 * Original: 0x001117A0 - 0x001117A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001117A0(void)
{

loc_001117A0: ;
    eax = MEM32(0x8E8F88);
    esp += 4; return; /* ret */

}

/**
 * sub_001117B0
 * Original: 0x001117B0 - 0x0011182C (124 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001117B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001117B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x8F9600)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AEBF0)); /* movss */
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    eax = esp + 8;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001117EEu); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_001117EE: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001117F8u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_001117F8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    ecx = MEM32(esi + 0x20);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = esp + 4;
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00111819u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00111819: ;
    eax = MEM32(0x8E9248);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111824u); RECOMP_ABI_CALL(0x0001836Eu, sub_0001836E); /* call 0x0001836E */

loc_00111824: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111850
 * Original: 0x00111850 - 0x00111924 (212 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111850(void)
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

loc_00111850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0011185Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011185Au); } /* indirect call */
    }

loc_0011185D: ;
    fp_push(MEMF(0x7AD450)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00111878; /* jbe: below or equal (unsigned <=) */

loc_0011186B: ;
    ecx = MEM32(0x8EADA0);
    MEM32(ecx + 0x34) = 4;

loc_00111878: ;
    edx = MEM32(0x8E9B10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00111886u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_00111886: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00111923; /* je: equal / zero */

loc_0011188F: ;
    eax = MEM32(0x8E9248);
    MEM32(eax + 0x2C) = 0x1E;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001118A8u); RECOMP_ABI_CALL(0x00022FDFu, sub_00022FDF); /* call 0x00022FDF */

loc_001118A8: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001118B5u); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_001118B5: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x112);
    MEM32(ecx + 0x2C) = 0;
    edx = MEM32(0x8EADA0);
    PUSH32(esp, 0x7D5E18);
    PUSH32(esp, 6);
    MEM32(edx + 0x34) = 5;
    PUSH32(esp, 0x001118E0u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001118E0: ;
    ecx = MEM32(0x895AB0);
    edx = MEM32(ecx);
    ecx = MEM32(0x8EADA0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    eax = eax + edx + -3;
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x8E9B10);
    ecx = MEM32(0x8E9248);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x110EF0);
    PUSH32(esp, 0x1106B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3EA);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00111923u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111920u); } /* indirect call */
    }

loc_00111923: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00111960
 * Original: 0x00111960 - 0x00111A30 (208 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00111960: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 0x00111971u); RECOMP_ABI_CALL(0x00017793u, sub_00017793); /* call 0x00017793 */

loc_00111971: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 0x00111980u); RECOMP_ABI_CALL(0x0002BFA9u, sub_0002BFA9); /* call 0x0002BFA9 */

loc_00111980: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7D5E3C); /* subss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_001119BA; /* jb: below (unsigned <) */

loc_001119A8: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7BBF14); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x8F9608)); /* movss */
    goto loc_001119CA;

loc_001119BA: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7BBF14); /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x8F9600)); /* movss */

loc_001119CA: ;
    ecx = MEM32(esi + 0x20);
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001119F2u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_001119F2: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001119FCu); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_001119FC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    ecx = MEM32(esi + 0x20);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = esp + 4;
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00111A1Du); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00111A1D: ;
    eax = MEM32(0x8E9248);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111A28u); RECOMP_ABI_CALL(0x0001836Eu, sub_0001836E); /* call 0x0001836E */

loc_00111A28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00111A70
 * Original: 0x00111A70 - 0x00111A96 (38 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111A70: ;
    MEM32(ecx + 0x34) = 2;
    eax = MEM32(0x8F00F0);
    MEM32(ecx + 0xF0) = eax;
    edx = eax;
    MEM8(edx + 0x51) = 0xFF;
    eax = MEM32(ecx + 0xF0);
    MEM32(eax + 8) = ecx;
    g_seh_ebp = ebp; sub_00022724(); return; /* tail jmp 0x00022724 */

}

/**
 * sub_00111AA0
 * Original: 0x00111AA0 - 0x00111AA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111AA0(void)
{

loc_00111AA0: ;
    eax = ecx;
    MEM32(eax) = 0x7D5FDC;
    esp += 4; return; /* ret */

}

/**
 * sub_00111AB0
 * Original: 0x00111AB0 - 0x00111AB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111AB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111AC0
 * Original: 0x00111AC0 - 0x00111ACD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111AC0(void)
{

loc_00111AC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D5FEC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111AD0
 * Original: 0x00111AD0 - 0x00111ADC (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111AD0(void)
{

loc_00111AD0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00111AD9u); RECOMP_ABI_CALL(0x00025BAEu, sub_00025BAE); /* call 0x00025BAE */

loc_00111AD9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111AE0
 * Original: 0x00111AE0 - 0x00111AFA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111AE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00111AE9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00111AE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111AF7; /* je: equal / zero */

loc_00111AF0: ;
    MEM32(eax) = 0x7D5E48;
    esp += 4; return; /* ret */

loc_00111AF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111B00
 * Original: 0x00111B00 - 0x00111B1A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111B00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00111B09u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00111B09: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B17; /* je: equal / zero */

loc_00111B10: ;
    MEM32(eax) = 0x7D5E74;
    esp += 4; return; /* ret */

loc_00111B17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111B20
 * Original: 0x00111B20 - 0x00111B3A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111B20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00111B29u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00111B29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B37; /* je: equal / zero */

loc_00111B30: ;
    MEM32(eax) = 0x7D5EA8;
    esp += 4; return; /* ret */

loc_00111B37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111B40
 * Original: 0x00111B40 - 0x00111B4E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111B40(void)
{

loc_00111B40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111B4Au); RECOMP_ABI_CALL(0x0001836Eu, sub_0001836E); /* call 0x0001836E */

loc_00111B4A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111B60
 * Original: 0x00111B60 - 0x00111B69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111B60(void)
{

loc_00111B60: ;
    eax = ecx;
    MEM32(eax) = 0x7D6000;
    esp += 4; return; /* ret */

}

/**
 * sub_00111B70
 * Original: 0x00111B70 - 0x00111B73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111B70(void)
{

loc_00111B70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111B80
 * Original: 0x00111B80 - 0x00111B8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111B80(void)
{

loc_00111B80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6010;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111B90
 * Original: 0x00111B90 - 0x00111BB4 (36 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111B90: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00111BAD; /* jne: not equal / not zero */

loc_00111BAA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00111BAD: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00111BC0
 * Original: 0x00111BC0 - 0x00111BDA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111BC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00111BC9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00111BC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111BD7; /* je: equal / zero */

loc_00111BD0: ;
    MEM32(eax) = 0x7D5EC4;
    esp += 4; return; /* ret */

loc_00111BD7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111BE0
 * Original: 0x00111BE0 - 0x00111BFA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111BE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00111BE9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00111BE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111BF7; /* je: equal / zero */

loc_00111BF0: ;
    MEM32(eax) = 0x7D5EF4;
    esp += 4; return; /* ret */

loc_00111BF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111C00
 * Original: 0x00111C00 - 0x00111C1A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111C00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00111C09u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00111C09: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111C17; /* je: equal / zero */

loc_00111C10: ;
    MEM32(eax) = 0x7D5F20;
    esp += 4; return; /* ret */

loc_00111C17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111C20
 * Original: 0x00111C20 - 0x00111C3A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111C20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00111C29u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00111C29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111C37; /* je: equal / zero */

loc_00111C30: ;
    MEM32(eax) = 0x7D5F48;
    esp += 4; return; /* ret */

loc_00111C37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111C40
 * Original: 0x00111C40 - 0x00111C67 (39 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111C40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00111C4Eu); RECOMP_ABI_CALL(0x000162DFu, sub_000162DF); /* call 0x000162DF */

loc_00111C4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111C60; /* je: equal / zero */

loc_00111C52: ;
    PUSH32(esp, esi);
    ecx = eax;
    edi = eax;
    PUSH32(esp, 0x00111C5Cu); RECOMP_ABI_CALL(0x000162DFu, sub_000162DF); /* call 0x000162DF */

loc_00111C5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111C52; /* jne: not equal / not zero */

loc_00111C60: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111C70
 * Original: 0x00111C70 - 0x00111C7D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111C70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00111C80
 * Original: 0x00111C80 - 0x00111C8A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111C80: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00111C90
 * Original: 0x00111C90 - 0x00111CB9 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111C90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111CB1; /* je: equal / zero */

loc_00111CAA: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00111CB1: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111CD0
 * Original: 0x00111CD0 - 0x00111D12 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111CD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111D0F; /* je: equal / zero */

loc_00111CD8: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00111CE6; /* je: equal / zero */

loc_00111CE0: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_00111CEB;

loc_00111CE6: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_00111CEB: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111CF9; /* je: equal / zero */

loc_00111CF1: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_00111CFF;

loc_00111CF9: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;

loc_00111CFF: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_00111D0F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111D30
 * Original: 0x00111D30 - 0x00111D40 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111D30(void)
{

loc_00111D30: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00111D50
 * Original: 0x00111D50 - 0x00111DAC (92 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1E0);
    MEM32(esi) = 0x7D5F78;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111D6Bu); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00111D6B: ;
    ecx = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x1E0) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00111D85; /* je: equal / zero */

loc_00111D7F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00111D85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111D83u); } /* indirect call */
    }

loc_00111D85: ;
    ecx = esi;
    MEM32(esi + 0x1E4) = 0;
    PUSH32(esp, 0x00111D96u); RECOMP_ABI_CALL(0x00019025u, sub_00019025); /* call 0x00019025 */

loc_00111D96: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00111DA6; /* je: equal / zero */

loc_00111D9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111DA3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00111DA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00111DA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
