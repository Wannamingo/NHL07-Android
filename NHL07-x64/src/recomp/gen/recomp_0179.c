/**
 * nhl_07_recomp - Recompiled code chunk 179
 * Functions: 250 (0x003B7A30 - 0x003BE950)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003B7A30
 * Original: 0x003B7A30 - 0x003B7A96 (102 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B7A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7A88; /* je: equal / zero */

loc_003B7A3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7A88; /* je: equal / zero */

loc_003B7A40: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7A4C; /* je: equal / zero */

loc_003B7A49: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003B7A4C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x003B7A57u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_003B7A57: ;
    ebx = MEM32(esi + 0x38);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003B7A78; /* jbe: below or equal (unsigned <=) */

loc_003B7A60: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + edi * 4);
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B7A73u); RECOMP_ABI_CALL(0x00576137u, sub_00576137); /* call 0x00576137 */

loc_003B7A73: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003B7A60; /* jb: below (unsigned <) */

loc_003B7A78: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B7A88: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0xFFFFFE9Eu;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B7AB0
 * Original: 0x003B7AB0 - 0x003B7B15 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7AB0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B7ACF; /* je: equal / zero */

loc_003B7ACB: ;
    MEM32(ecx) = eax;
    goto loc_003B7AD9;

loc_003B7ACF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7AD9u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B7AD9: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B7AE6u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B7AE6: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B7AF4u); RECOMP_ABI_CALL(0x00020C03u, sub_00020C03); /* call 0x00020C03 */

loc_003B7AF4: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B7AFDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B7AFD: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B7B0C; /* je: equal / zero */

loc_003B7B04: ;
    MEM32(esp + 0xC) = 0;

loc_003B7B0C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B7B30
 * Original: 0x003B7B30 - 0x003B7B95 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7B30: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B7B4F; /* je: equal / zero */

loc_003B7B4B: ;
    MEM32(ecx) = eax;
    goto loc_003B7B59;

loc_003B7B4F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7B59u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B7B59: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B7B66u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B7B66: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B7B74u); RECOMP_ABI_CALL(0x000226CAu, sub_000226CA); /* call 0x000226CA */

loc_003B7B74: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B7B7Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B7B7D: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B7B8C; /* je: equal / zero */

loc_003B7B84: ;
    MEM32(esp + 0xC) = 0;

loc_003B7B8C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B7BB0
 * Original: 0x003B7BB0 - 0x003B7BDE (46 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7BB0(void)
{

loc_003B7BB0: ;
    eax = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esp + 0x10));
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x10) = LO8(edx);
    PUSH32(esp, eax);
    edx = esp + 0x14;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7BDBu); RECOMP_ABI_CALL(0x00019A1Bu, sub_00019A1B); /* call 0x00019A1B */

loc_003B7BDB: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003B7BF0
 * Original: 0x003B7BF0 - 0x003B7C21 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B7BF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x003B7C05u); RECOMP_ABI_CALL(0x0001123Fu, sub_0001123F); /* call 0x0001123F */

loc_003B7C05: ;
    eax = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003B7C0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B7C09u); } /* indirect call */
    }

loc_003B7C0C: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7C1Eu); RECOMP_ABI_CALL(0x0001123Fu, sub_0001123F); /* call 0x0001123F */

loc_003B7C1E: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B7C30
 * Original: 0x003B7C30 - 0x003B7C45 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7C30(void)
{

loc_003B7C30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x38);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7C42u); RECOMP_ABI_CALL(0x00019A1Bu, sub_00019A1B); /* call 0x00019A1B */

loc_003B7C42: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B7C50
 * Original: 0x003B7C50 - 0x003B7C65 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7C50(void)
{

loc_003B7C50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7C62u); RECOMP_ABI_CALL(0x00019359u, sub_00019359); /* call 0x00019359 */

loc_003B7C62: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B7C70
 * Original: 0x003B7C70 - 0x003B7C75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7C70: ;
    g_seh_ebp = ebp; sub_00033D1C(); return; /* tail jmp 0x00033D1C */

}

/**
 * sub_003B7C80
 * Original: 0x003B7C80 - 0x003B7CB3 (51 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B7C80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esp + 0x10));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    esi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003B7CAE; /* jbe: below or equal (unsigned <=) */

loc_003B7C8E: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x003B7CA0u); RECOMP_ABI_CALL(0x00019A1Bu, sub_00019A1B); /* call 0x00019A1B */

loc_003B7CA0: ;
    MEM16(esi + 0x14) = LO16(edi);
    esi = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x003B7CABu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003B7CA8u); } /* indirect call */
    }

loc_003B7CAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B7CAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B7CC0
 * Original: 0x003B7CC0 - 0x003B7D1D (93 bytes, 28 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B7CC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x18);
    MEM32(eax + 4) = ecx;
    eax = MEM32(esp + 8);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x003B7D09u); RECOMP_ABI_CALL(0x00019A1Bu, sub_00019A1B); /* call 0x00019A1B */

loc_003B7D09: ;
    MEM16(esi + 0x14) = 2;
    esi = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x003B7D16u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003B7D13u); } /* indirect call */
    }

loc_003B7D16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003B7D40
 * Original: 0x003B7D40 - 0x003B7F0D (461 bytes, 128 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B7D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003B7D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x38);
    MEM32(edi + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B7D64u); RECOMP_ABI_CALL(0x00019A1Bu, sub_00019A1B); /* call 0x00019A1B */

loc_003B7D64: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edi + 0x3C);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B7D75u); RECOMP_ABI_CALL(0x00019359u, sub_00019359); /* call 0x00019359 */

loc_003B7D75: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B7D83u); RECOMP_ABI_CALL(0x0002978Bu, sub_0002978B); /* call 0x0002978B */

loc_003B7D83: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B7D88u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003B7D88: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B7D8Fu); RECOMP_ABI_CALL(0x00031369u, sub_00031369); /* call 0x00031369 */

loc_003B7D8F: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003B7ECD; /* jnp: not parity */

loc_003B7DA3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B7DA8u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003B7DA8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B7DAFu); RECOMP_ABI_CALL(0x00032FCAu, sub_00032FCA); /* call 0x00032FCA */

loc_003B7DAF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esi + 0xC);
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, 0);
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B7EABu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B7EAB: ;
    ecx = MEM32(esp + 0x20);
    edx = ZX16(LO16(eax));
    eax = esi + edx * 4 + 0x10;
    edx = MEM32(esp + 0x24);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_003B7ECD: ;
    edi = MEM32(edi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edi + 0x10); PUSH32(esp, 0x003B7ED4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B7ED1u); } /* indirect call */
    }

loc_003B7ED4: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B7EE3u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B7EE3: ;
    edx = MEM32(esp + 0x10);
    eax = ZX16(LO16(eax));
    ecx = esi + eax * 4 + 0x10;
    MEM32(ecx) = edx;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B7F80
 * Original: 0x003B7F80 - 0x003B7FB5 (53 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B7F80: ;
    eax = ecx;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7FB2; /* je: equal / zero */

loc_003B7F89: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7FA5; /* je: equal / zero */

loc_003B7F91: ;
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7FA2u); RECOMP_ABI_CALL(0x0001773Eu, sub_0001773E); /* call 0x0001773E */

loc_003B7FA2: ;
    esp += 8; return; /* ret 4 */

loc_003B7FA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7FB2u); RECOMP_ABI_CALL(0x0001773Eu, sub_0001773E); /* call 0x0001773E */

loc_003B7FB2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B7FD0
 * Original: 0x003B7FD0 - 0x003B806C (156 bytes, 52 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7FD0: ;
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    MEM32(esi + 8) = ebp;
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x10) = LO8(ebx);
    PUSH32(esp, 0x003B8005u); RECOMP_ABI_CALL(0x00019A1Bu, sub_00019A1B); /* call 0x00019A1B */

loc_003B8005: ;
    edx = MEM32(edi + 4);
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(edx + eax * 4) = ebp;
    ecx = MEM32(edi + 8);
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM8(eax + edx) = LO8(ebx);
    ecx = MEM32(edi + 0x18);
    edx = MEM32(esp + 0x24);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(edi + 0x1C);
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B804Cu); RECOMP_ABI_CALL(0x0001123Fu, sub_0001123F); /* call 0x0001123F */

loc_003B804C: ;
    eax = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003B8053u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003B8050u); } /* indirect call */
    }

loc_003B8053: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x003B8065u); RECOMP_ABI_CALL(0x0001123Fu, sub_0001123F); /* call 0x0001123F */

loc_003B8065: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_003B80A0
 * Original: 0x003B80A0 - 0x003B8196 (246 bytes, 83 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B80A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B80A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esi + 0x14) = eax;
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x9198B0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003B80CDu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B80CD: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B80D7u); RECOMP_ABI_CALL(0x0001F57Eu, sub_0001F57E); /* call 0x0001F57E */

loc_003B80D7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x919874);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003B80FCu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B80FC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B8102u); RECOMP_ABI_CALL(0x00015CE0u, sub_00015CE0); /* call 0x00015CE0 */

loc_003B8102: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x919868);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003B812Au); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B812A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B8130u); RECOMP_ABI_CALL(0x0003618Eu, sub_0003618E); /* call 0x0003618E */

loc_003B8130: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x9198C4);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003B8158u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B8158: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B815Eu); RECOMP_ABI_CALL(0x000310E4u, sub_000310E4); /* call 0x000310E4 */

loc_003B815E: ;
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x8347D0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003B8188u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B8188: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B818Eu); RECOMP_ABI_CALL(0x000305F9u, sub_000305F9); /* call 0x000305F9 */

loc_003B818E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B81E0
 * Original: 0x003B81E0 - 0x003B8BFF (2591 bytes, 799 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B81E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B81E0: ;
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x12C);
    PUSH32(esp, edi);
    MEM32(esi + 0x44) = ecx;
    PUSH32(esp, 0x003B81FBu); RECOMP_ABI_CALL(0x0001F2DBu, sub_0001F2DB); /* call 0x0001F2DB */

loc_003B81FB: ;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esp + 0x138);
    MEM32(esi) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B8213u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003B8213: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B8222u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003B8222: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B822Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003B822E: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B823Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003B823D: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B824Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003B824C: ;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B825Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003B825B: ;
    edi = MEM32(esi);
    MEM32(esi + 0x34) = eax;
    eax = edi;
    PUSH32(esp, 1);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B8271u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003B8271: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B82B0; /* je: equal / zero */

loc_003B8278: ;
    ecx = edi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edx = eax + 4;
    MEM32(eax) = edi;
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003B82AC; /* jl: less (signed <) */

loc_003B8286: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_003B8290: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x10) = LO8(ebx);
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003B8290; /* jne: not equal / not zero */

loc_003B82AC: ;
    eax = edx;
    goto loc_003B82B2;

loc_003B82B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B82B2: ;
    MEM32(esi + 0x48) = eax;
    eax = MEM32(esi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B82C1u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003B82C1: ;
    ecx = MEM32(esi);
    MEM32(esi + 0x4C) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x54) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_003B82EC; /* jbe: below or equal (unsigned <=) */

loc_003B82D5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B82D7: ;
    edx = MEM32(esi + 0x48);
    edi = MEM32(esi + 0x4C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + eax * 4) = edx;
    edx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003B82D7; /* jb: below (unsigned <) */

loc_003B82EC: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003B8377; /* jbe: below or equal (unsigned <=) */

loc_003B82F8: ;
    MEM32(esp + 0x14) = ebx;
    /* nop */

loc_003B8300: ;
    eax = MEM32(esp + 0x134);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x834814);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B8318u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B8318: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edi * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B833Au); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B833A: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B8344u); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_003B8344: ;
    ecx = MEM32(esp + 0x140);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B8353u); RECOMP_ABI_CALL(0x00031C8Du, sub_00031C8D); /* call 0x00031C8D */

loc_003B8353: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + ebp);
    ecx = MEM32(esi + 0x48);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B8369u); RECOMP_ABI_CALL(0x00027CE7u, sub_00027CE7); /* call 0x00027CE7 */

loc_003B8369: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_003B8300; /* jb: below (unsigned <) */

loc_003B8377: ;
    ecx = MEM32(esp + 0x130);
    PUSH32(esp, 0x003B8383u); RECOMP_ABI_CALL(0x00034997u, sub_00034997); /* call 0x00034997 */

loc_003B8383: ;
    PUSH32(esp, 0x9198B0);
    ecx = esp + 0x24;
    MEM32(esi + 0x10) = eax;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x003B8398u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B8398: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edi = MEM32(esi + 0x30);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B83AD; /* je: equal / zero */

loc_003B83A7: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B83BB;

loc_003B83AD: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B83BBu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B83BB: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B83C9u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B83C9: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    ecx = esp + 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_003B83DD; /* jne: not equal / not zero */

loc_003B83D3: ;
    MEM32(esp + 0x1C) = 0xFFFFFEDAu;
    goto loc_003B8404;

loc_003B83DD: ;
    edx = esi + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x9198DC);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003B8400u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B8400: ;
    ecx = esp + 0x14;

loc_003B8404: ;
    PUSH32(esp, 0x003B8409u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8409: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8414; /* je: equal / zero */

loc_003B8410: ;
    MEM32(esp + 0x10) = ebx;

loc_003B8414: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B841Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B841D: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x003B8426u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8426: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8431; /* je: equal / zero */

loc_003B842D: ;
    MEM32(esp + 0x18) = ebx;

loc_003B8431: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B843Au); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B843A: ;
    PUSH32(esp, 0x919870);
    ecx = esp + 0x24;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x003B844Cu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B844C: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ebp = MEM32(esi + 0x30);
    edi = esi + 0x14;
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B8464; /* je: equal / zero */

loc_003B845E: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B8472;

loc_003B8464: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B8472u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B8472: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B8480u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B8480: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B8490; /* jne: not equal / not zero */

loc_003B8486: ;
    MEM32(esp + 0x1C) = 0xFFFFFEDAu;
    goto loc_003B84BD;

loc_003B8490: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B8496u); RECOMP_ABI_CALL(0x005743B7u, sub_005743B7); /* call 0x005743B7 */

loc_003B8496: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003B84BDu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B84BD: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B84C6u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B84C6: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B84D1; /* je: equal / zero */

loc_003B84CD: ;
    MEM32(esp + 0x10) = ebx;

loc_003B84D1: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B84DAu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B84DA: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x003B84E3u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B84E3: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B84EE; /* je: equal / zero */

loc_003B84EA: ;
    MEM32(esp + 0x18) = ebx;

loc_003B84EE: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B84F7u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B84F7: ;
    PUSH32(esp, 0x9198CC);
    ecx = esp + 0x24;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x003B8509u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B8509: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edi = MEM32(esi + 0x18);
    ebp = MEM32(esi + 0x30);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B8521; /* je: equal / zero */

loc_003B851B: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B852F;

loc_003B8521: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B852Fu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B852F: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B853Du); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B853D: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B854D; /* jne: not equal / not zero */

loc_003B8543: ;
    MEM32(esp + 0x1C) = 0xFFFFFEDAu;
    goto loc_003B8575;

loc_003B854D: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x9198D8);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003B8575u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B8575: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B857Eu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B857E: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8589; /* je: equal / zero */

loc_003B8585: ;
    MEM32(esp + 0x10) = ebx;

loc_003B8589: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B8592u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8592: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x003B859Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B859B: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B85A6; /* je: equal / zero */

loc_003B85A2: ;
    MEM32(esp + 0x18) = ebx;

loc_003B85A6: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B85AFu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B85AF: ;
    PUSH32(esp, 0x919894);
    ecx = esp + 0x24;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x003B85C1u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B85C1: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edi = MEM32(esi + 0x1C);
    ebp = MEM32(esi + 0x30);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B85D9; /* je: equal / zero */

loc_003B85D3: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B85E7;

loc_003B85D9: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B85E7u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B85E7: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B85F5u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B85F5: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B8605; /* jne: not equal / not zero */

loc_003B85FB: ;
    MEM32(esp + 0x1C) = 0xFFFFFEDAu;
    goto loc_003B8632;

loc_003B8605: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B860Bu); RECOMP_ABI_CALL(0x0057438Du, sub_0057438D); /* call 0x0057438D */

loc_003B860B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x003B8632u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B8632: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B863Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B863B: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8646; /* je: equal / zero */

loc_003B8642: ;
    MEM32(esp + 0x10) = ebx;

loc_003B8646: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B864Fu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B864F: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x003B8658u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8658: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8663; /* je: equal / zero */

loc_003B865F: ;
    MEM32(esp + 0x18) = ebx;

loc_003B8663: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B866Cu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B866C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8347FC);
    ecx = esp + 0x24;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x003B867Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B867F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edi = MEM32(esi + 0x10);
    ebp = MEM32(esi + 0x30);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B8697; /* je: equal / zero */

loc_003B8691: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B86A5;

loc_003B8697: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B86A5u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B86A5: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B86B3u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B86B3: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B86C3; /* jne: not equal / not zero */

loc_003B86B9: ;
    MEM32(esp + 0x20) = 0xFFFFFEDAu;
    goto loc_003B86F4;

loc_003B86C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ecx = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_003B86D1; /* jne: not equal / not zero */

loc_003B86CB: ;
    MEM32(esp + 0x20) = ebx;
    goto loc_003B86F8;

loc_003B86D1: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x9198E8);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x003B86F4u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B86F4: ;
    ecx = esp + 0x18;

loc_003B86F8: ;
    PUSH32(esp, 0x003B86FDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B86FD: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8708; /* je: equal / zero */

loc_003B8704: ;
    MEM32(esp + 0x10) = ebx;

loc_003B8708: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B8711u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8711: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B871Au); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B871A: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8725; /* je: equal / zero */

loc_003B8721: ;
    MEM32(esp + 0x14) = ebx;

loc_003B8725: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B872Eu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B872E: ;
    ecx = MEM32(esp + 0x130);
    PUSH32(esp, 0x003B873Au); RECOMP_ABI_CALL(0x0002BDDDu, sub_0002BDDD); /* call 0x0002BDDD */

loc_003B873A: ;
    edi = esi + 0x24;
    PUSH32(esp, 0x9198B8);
    ecx = esp + 0x20;
    MEM32(esi + 0x20) = eax;
    MEM32(edi) = 2;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x003B8758u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B8758: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ebp = MEM32(esi + 0x30);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B876D; /* je: equal / zero */

loc_003B8767: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B877B;

loc_003B876D: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B877Bu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B877B: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B8789u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B8789: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    ecx = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_003B879D; /* jne: not equal / not zero */

loc_003B8793: ;
    MEM32(esp + 0x20) = 0xFFFFFEDAu;
    goto loc_003B87C5;

loc_003B879D: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x919888);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x003B87C1u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B87C1: ;
    ecx = esp + 0x18;

loc_003B87C5: ;
    PUSH32(esp, 0x003B87CAu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B87CA: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B87D5; /* je: equal / zero */

loc_003B87D1: ;
    MEM32(esp + 0x10) = ebx;

loc_003B87D5: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B87DEu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B87DE: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B87E7u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B87E7: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B87F2; /* je: equal / zero */

loc_003B87EE: ;
    MEM32(esp + 0x14) = ebx;

loc_003B87F2: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B87FBu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B87FB: ;
    PUSH32(esp, 0x919864);
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x003B880Du); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B880D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edi = MEM32(esi + 0x30);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B8822; /* je: equal / zero */

loc_003B881C: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B8830;

loc_003B8822: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B8830u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B8830: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B883Eu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B883E: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B884E; /* jne: not equal / not zero */

loc_003B8844: ;
    MEM32(esp + 0x20) = 0xFFFFFEDAu;
    goto loc_003B887A;

loc_003B884E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003B8854u); RECOMP_ABI_CALL(0x005743F3u, sub_005743F3); /* call 0x005743F3 */

loc_003B8854: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B887Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B887A: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B8883u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8883: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B888E; /* je: equal / zero */

loc_003B888A: ;
    MEM32(esp + 0x10) = ebx;

loc_003B888E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B8897u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8897: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B88A0u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B88A0: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B88AB; /* je: equal / zero */

loc_003B88A7: ;
    MEM32(esp + 0x14) = ebx;

loc_003B88AB: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B88B4u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B88B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x83479C);
    ecx = esp + 0x28;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x003B88C7u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B88C7: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edi = MEM32(esi + 0x20);
    ebp = MEM32(esi + 0x30);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B88DF; /* je: equal / zero */

loc_003B88D9: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B88ED;

loc_003B88DF: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B88EDu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B88ED: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B88FBu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B88FB: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B890B; /* jne: not equal / not zero */

loc_003B8901: ;
    MEM32(esp + 0x1C) = 0xFFFFFEDAu;
    goto loc_003B893C;

loc_003B890B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B8915; /* jne: not equal / not zero */

loc_003B890F: ;
    MEM32(esp + 0x1C) = ebx;
    goto loc_003B893C;

loc_003B8915: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x9198E8);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003B893Cu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B893C: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B8945u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8945: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8950; /* je: equal / zero */

loc_003B894C: ;
    MEM32(esp + 0x10) = ebx;

loc_003B8950: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B8959u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8959: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x003B8962u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8962: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B896D; /* je: equal / zero */

loc_003B8969: ;
    MEM32(esp + 0x18) = ebx;

loc_003B896D: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B8976u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8976: ;
    edx = MEM32(esi + 0x30);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8347F0);
    PUSH32(esp, 0x003B898Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B898D: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B8997u); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_003B8997: ;
    ecx = MEM32(esp + 0x140);
    edi = MEM32(ecx + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B8A61; /* je: equal / zero */

loc_003B89AC: ;
    PUSH32(esp, 0x9198B4);
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x003B89BEu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B89BE: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ebp = MEM32(esp + 0x28);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B89D4; /* je: equal / zero */

loc_003B89CE: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B89E2;

loc_003B89D4: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B89E2u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B89E2: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B89F0u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B89F0: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B8A00; /* jne: not equal / not zero */

loc_003B89F6: ;
    MEM32(esp + 0x20) = 0xFFFFFEDAu;
    goto loc_003B8A27;

loc_003B8A00: ;
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x9198D4);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x003B8A27u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B8A27: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B8A30u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8A30: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8A3B; /* je: equal / zero */

loc_003B8A37: ;
    MEM32(esp + 0x10) = ebx;

loc_003B8A3B: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B8A44u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8A44: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B8A4Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8A4D: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8A58; /* je: equal / zero */

loc_003B8A54: ;
    MEM32(esp + 0x14) = ebx;

loc_003B8A58: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B8A61u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8A61: ;
    ecx = MEM32(esp + 0x130);
    PUSH32(esp, 0x003B8A6Du); RECOMP_ABI_CALL(0x00015DB2u, sub_00015DB2); /* call 0x00015DB2 */

loc_003B8A6D: ;
    edi = esi + 0x2C;
    PUSH32(esp, 0x919860);
    ecx = esp + 0x20;
    MEM32(esi + 0x28) = eax;
    MEM32(edi) = 2;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x003B8A8Bu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B8A8B: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ebp = MEM32(esp + 0x28);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B8AA1; /* je: equal / zero */

loc_003B8A9B: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B8AAF;

loc_003B8AA1: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B8AAFu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B8AAF: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B8ABDu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B8ABD: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B8ACD; /* jne: not equal / not zero */

loc_003B8AC3: ;
    MEM32(esp + 0x20) = 0xFFFFFEDAu;
    goto loc_003B8AF5;

loc_003B8ACD: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x919880);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x003B8AF5u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B8AF5: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B8AFEu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8AFE: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8B09; /* je: equal / zero */

loc_003B8B05: ;
    MEM32(esp + 0x10) = ebx;

loc_003B8B09: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B8B12u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8B12: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B8B1Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8B1B: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8B26; /* je: equal / zero */

loc_003B8B22: ;
    MEM32(esp + 0x14) = ebx;

loc_003B8B26: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B8B2Fu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8B2F: ;
    esi = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8347B8);
    ecx = esp + 0x28;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x003B8B45u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B8B45: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edi = MEM32(esp + 0x28);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003B8B5B; /* je: equal / zero */

loc_003B8B55: ;
    MEM32(esp + 0x10) = eax;
    goto loc_003B8B69;

loc_003B8B5B: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B8B69u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B8B69: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B8B77u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B8B77: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B8B87; /* jne: not equal / not zero */

loc_003B8B7D: ;
    MEM32(esp + 0x1C) = 0xFFFFFEDAu;
    goto loc_003B8BB8;

loc_003B8B87: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B8B91; /* jne: not equal / not zero */

loc_003B8B8B: ;
    MEM32(esp + 0x1C) = ebx;
    goto loc_003B8BB8;

loc_003B8B91: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x9198E8);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003B8BB8u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B8BB8: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B8BC1u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8BC1: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8BCC; /* je: equal / zero */

loc_003B8BC8: ;
    MEM32(esp + 0x10) = ebx;

loc_003B8BCC: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B8BD5u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8BD5: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x003B8BDEu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8BDE: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B8BE9; /* je: equal / zero */

loc_003B8BE5: ;
    MEM32(esp + 0x18) = ebx;

loc_003B8BE9: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B8BF2u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B8BF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003B8E90
 * Original: 0x003B8E90 - 0x003B8E93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8E90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003B8E90: ;
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B8EA0
 * Original: 0x003B8EA0 - 0x003B8EE2 (66 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8EA0(void)
{

loc_003B8EA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003B8F00
 * Original: 0x003B8F00 - 0x003B8F6E (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B8F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B8F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 8);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B8F90
 * Original: 0x003B8F90 - 0x003B8FFF (111 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B8F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B8F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xC); /* subss */
    eax = MEM32(ebp + 8);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B9020
 * Original: 0x003B9020 - 0x003B9024 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9020(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003B9020: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B9030
 * Original: 0x003B9030 - 0x003B903A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9030(void)
{

loc_003B9030: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B9040
 * Original: 0x003B9040 - 0x003B9044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9040(void)
{

loc_003B9040: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_003B9050
 * Original: 0x003B9050 - 0x003B9054 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9050(void)
{

loc_003B9050: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_003B9060
 * Original: 0x003B9060 - 0x003B9067 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9060(void)
{

loc_003B9060: ;
    SET_LO8(eax, MEM8(ecx + 0x47C));
    esp += 4; return; /* ret */

}

/**
 * sub_003B9070
 * Original: 0x003B9070 - 0x003B9077 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9070(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003B9070: ;
    fp_push(MEMF(ecx + 0x48C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B9080
 * Original: 0x003B9080 - 0x003B9087 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9080(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003B9080: ;
    fp_push(MEMF(ecx + 0x488)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B9090
 * Original: 0x003B9090 - 0x003B9097 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003B9090: ;
    fp_push(MEMF(ecx + 0x474)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B90A0
 * Original: 0x003B90A0 - 0x003B90EE (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B90A0(void)
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

loc_003B90A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = MEM32(esp);
    ecx = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ecx) = edx;
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 4);
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
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
 * sub_003B9110
 * Original: 0x003B9110 - 0x003B9120 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9110(void)
{

loc_003B9110: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003B9130
 * Original: 0x003B9130 - 0x003B913F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9130(void)
{

loc_003B9130: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = MEM32(eax + 0x18);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B9150
 * Original: 0x003B9150 - 0x003B915E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9150(void)
{

loc_003B9150: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003B9170
 * Original: 0x003B9170 - 0x003B98B6 (1862 bytes, 506 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9170(void)
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

loc_003B9170: ;
    PUSH32(esp, ebx);
    ebx = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    MEM32(esp + 4) = ebp;
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ecx;
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003B91A1; /* jne: not equal / not zero */

loc_003B919D: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_003B91A1: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebp + -20) = xmm1.f[0]; /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + -12); /* cvttss2si */
    edi = eax;
    eax = MEM32(ebx + 8);
    esi = MEM32(eax + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B91DE; /* jne: not equal / not zero */

loc_003B91D0: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B91DBu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B91DB: ;
    MEM32(esi + 8) = eax;

loc_003B91DE: ;
    esi = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -12) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003B921D; /* je: equal / zero */

loc_003B91F8: ;
    ecx = MEM32(0x87DBD0);
    eax = esi;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DBD4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DBD8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DBDC);
    MEM32(eax + 0xC) = edx;

loc_003B921D: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B9247; /* je: equal / zero */

loc_003B9224: ;
    ecx = MEM32(0x87DAA0);
    MEM32(eax) = ecx;
    edx = MEM32(0x87DAA4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DAA8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DAAC);
    MEM32(eax + 0xC) = edx;

loc_003B9247: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003B975A; /* jle: less or equal (signed <=) */

loc_003B924F: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = MEM32(ecx);
    eax = ebp + -80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003B927Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B927Cu); } /* indirect call */
    }

loc_003B927F: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B929F; /* je: equal / zero */

loc_003B9286: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1 = XMM_MEM(ebp + -80); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(eax, xmm0); /* movaps */

loc_003B929F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B975A; /* je: equal / zero */

loc_003B92A7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003B9668; /* jl: less (signed <) */

loc_003B92C6: ;
    eax = edi + -4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = eax * 4;
    MEM32(ebp + -16) = ecx;
    goto loc_003B92E0;

    /* nop */

loc_003B92E0: ;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebp + -48) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    ecx = MEM32(ebp + -48);
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(ebp + -44) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(ebp + -40) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebp + -36) = xmm4.f[0]; /* movss */
    edx = esi;
    MEM32(edx) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(ebp + -40);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(edx + 0xC) = ecx;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebp + -48) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(ebp + -44) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    ecx = MEM32(ebp + -48);
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(ebp + -40) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEM32(edx) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(ebp + -40);
    MEMF(ebp + -36) = xmm4.f[0]; /* movss */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(edx + 0xC) = ecx;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebp + -48) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    ecx = MEM32(ebp + -48);
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(ebp + -44) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(ebp + -40) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebp + -36) = xmm4.f[0]; /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(ebp + -40);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(edx + 0xC) = ecx;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebp + -48) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    ecx = MEM32(ebp + -48);
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(ebp + -44) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(ebp + -40) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    MEM32(edx) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(ebp + -40);
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEM32(edx + 8) = ecx;
    MEMF(ebp + -36) = xmm4.f[0]; /* movss */
    ecx = MEM32(ebp + -36);
    MEM32(edx + 0xC) = ecx;
    if ((_fa != 0)) goto loc_003B92E0; /* jne: not equal / not zero */

loc_003B9665: ;
    eax = MEM32(ebp + -16);

loc_003B9668: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003B975A; /* jge: greater or equal (signed >=) */

loc_003B9670: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003B9672: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebp + -48) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    eax = MEM32(ebp + -48);
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(ebp + -44) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    ecx = MEM32(ebp + -44);
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(ebp + -40) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    edx = esi;
    MEM32(edx) = eax;
    eax = MEM32(ebp + -40);
    MEM32(edx + 4) = ecx;
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebp + -36) = xmm4.f[0]; /* movss */
    ecx = MEM32(ebp + -36);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    if ((_fa != 0)) goto loc_003B9672; /* jne: not equal / not zero */

loc_003B975A: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx);
    edx = ebp + -80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ebp + -64;
    PUSH32(esp, edx);
    edx = ebp + -32;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + -12);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003B977Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B977Au); } /* indirect call */
    }

loc_003B977D: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B9795; /* je: equal / zero */

loc_003B9784: ;
    ecx = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_003B9795: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B97B6; /* je: equal / zero */

loc_003B979C: ;
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MEM(ebp + -80); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    XMM_STORE(eax, xmm1); /* movaps */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_003B97B6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B98AB; /* je: equal / zero */

loc_003B97BE: ;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebp + -80) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    edx = MEM32(ebp + -80);
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(ebp + -76) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    eax = MEM32(ebp + -76);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(ebp + -72) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(ebp + -72);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esi) = edx;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -68);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;

loc_003B98AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B9A90
 * Original: 0x003B9A90 - 0x003B9ABE (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B9A90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 4) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000318A0(); return; /* tail jmp 0x000318A0 */

}

/**
 * sub_003B9AD0
 * Original: 0x003B9AD0 - 0x003B9F43 (1139 bytes, 276 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B9AD0(void)
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

loc_003B9AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x87DA6C);
    edx = MEM32(0x87DA74);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x87DA70);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x87DBE0);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x87DBE4);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x87DBEC);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(0x87DAA0);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x87DAA8);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(0x87DAAC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(0x87DBE8);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x44) = edx;
    edx = MEM32(0x87DAA4);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003B9CFD; /* jle: less or equal (signed <=) */

loc_003B9B6D: ;
    /* nop */

loc_003B9B70: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B9B97u); RECOMP_ABI_CALL(0x000318A0u, sub_000318A0); /* call 0x000318A0 */

loc_003B9B97: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003B9C1B; /* je: equal / zero */

loc_003B9BA1: ;
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    eax = MEM32(esp + 0x28);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x34) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x38) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x3C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */

loc_003B9C1B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B9CC6; /* je: equal / zero */

loc_003B9C23: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    eax = MEM32(esp + 0x60);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    ecx = MEM32(esp + 0x64);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x68);
    MEM32(esp + 0x70) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x40); /* addss */
    eax = MEM32(esp + 0x6C);
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x74) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x78) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x7C) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x4C); /* addss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */

loc_003B9CC6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B9CE5; /* je: equal / zero */

loc_003B9CCA: ;
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */

loc_003B9CE5: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_L(_fas, _fbs)) goto loc_003B9B70; /* jl: less (signed <) */

loc_003B9CFD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B9D15; /* je: equal / zero */

loc_003B9D01: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(ebx) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = ecx;

loc_003B9D15: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm5 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003B9EE9; /* je: equal / zero */

loc_003B9D25: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 4) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    MEMF(edi) = xmm6.f[0]; /* movss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(eax + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm6; /* movaps */
    xmm6 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    edx = MEM32(esp + 0x70);
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x40) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    edx = MEM32(esp + 0x78);
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x74);
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(esp + 0x44) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x7C);
    MEM32(esp + 0x4C) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    MEMF(esp + 0x70) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    MEMF(esp + 0x74) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edi)); /* movss */
    edx = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x74);
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x78) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x78);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(edi + 4) = ecx;
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x7C) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x7C);
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = ecx;

loc_003B9EE9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B9F3A; /* je: equal / zero */

loc_003B9EED: ;
    ecx = MEM32(esp + 0x50);
    edx = esi;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(edx + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esi + 0xC) = xmm5.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x44); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_003B9F3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BA060
 * Original: 0x003BA060 - 0x003BA090 (48 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BA060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BA060: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx = MEM32(edx + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 4) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000340A0(); return; /* tail jmp 0x000340A0 */

}

/**
 * sub_003BA0A0
 * Original: 0x003BA0A0 - 0x003BA25E (446 bytes, 157 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BA0A0(void)
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

loc_003BA0A0: ;
    PUSH32(esp, ebx);
    ebx = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    MEM32(esp + 4) = ebp;
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 4);
    SET_LO8(ecx, MEM8(eax + 0xB8));
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(ebx + 8);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003BA0D8; /* je: equal / zero */

loc_003BA0CB: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -20) = LO8(edx);
    goto loc_003BA0DE;

loc_003BA0D8: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    MEM8(ebp + -20) = LO8(eax);

loc_003BA0DE: ;
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x45 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003BA0F1; /* jne: not equal / not zero */

loc_003BA0ED: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_003BA0F1: ;
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebp + -32) = xmm1.f[0]; /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + -28); /* cvttss2si */
    esi = MEM32(ecx + 0x14);
    MEM32(ebp + -36) = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BA12C; /* jne: not equal / not zero */

loc_003BA11E: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003BA129u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BA129: ;
    MEM32(esi + 8) = eax;

loc_003BA12C: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edx;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003BA147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BA144u); } /* indirect call */
    }

loc_003BA147: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(0x87DAA0);
    edi = MEM32(ebx + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = edi;
    MEM32(ecx) = edx;
    eax = MEM32(0x87DAA4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x87DAA8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x87DAAC);
    MEM32(ecx + 0xC) = eax;
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    edx = MEM32(esi);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -32)); /* fmul dword ptr [ebp - 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(ebp + -32) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003BA18Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BA18Au); } /* indirect call */
    }

loc_003BA18D: ;
    edx = MEM32(eax);
    ecx = edi + 8;
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(ebp + -20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -28);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -32);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003BA1ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BA1A8u); } /* indirect call */
    }

loc_003BA1AB: ;
    eax = MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BA217; /* jle: less or equal (signed <=) */

loc_003BA1B2: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(ebp + -36) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003BA1C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BA1C2u); } /* indirect call */
    }

loc_003BA1C5: ;
    ecx = MEM32(ebp + -20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -36);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003BA1E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BA1DDu); } /* indirect call */
    }

loc_003BA1E0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(ebp + -28);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -12); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -16); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -4); /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_003BA217: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    edx = MEM32(ebx + 0x10);
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -64);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(edx) = eax;
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -56);
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + -60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + -60);
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + -52);
    MEM32(edx + 0xC) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BA2D0
 * Original: 0x003BA2D0 - 0x003BA5F9 (809 bytes, 208 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BA2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003BA2D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ebx = ecx;
    ecx = MEM32(eax + 0x28);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BA30Cu); RECOMP_ABI_CALL(0x000114A1u, sub_000114A1); /* call 0x000114A1 */

loc_003BA30C: ;
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x10);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BA324u); RECOMP_ABI_CALL(0x000114A1u, sub_000114A1); /* call 0x000114A1 */

loc_003BA324: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003BA4A3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_003BA335: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = esp + 0x44;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BA35Du); RECOMP_ABI_CALL(0x000114A1u, sub_000114A1); /* call 0x000114A1 */

loc_003BA35D: ;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(esp + 0x30);
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    edx = MEM32(esp + 0x34);
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    eax = esi;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 4) = edx;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(eax + 0xC) = edx;
    eax = esp + 0x44;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BA472u); RECOMP_ABI_CALL(0x005A1129u, sub_005A1129); /* call 0x005A1129 */

loc_003BA472: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */

loc_003BA4A3: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(esp + 0x30);
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    edx = MEM32(esp + 0x34);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    eax = MEM32(esp + 0x38);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEM32(esi) = ecx;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esi + 4) = edx;
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    MEM32(esi + 8) = eax;
    PUSH32(esp, edi);
    edx = esp + 0x64;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xC) = ecx;
    xmm1 = XMM_MEM(edi); /* movaps */
    PUSH32(esp, edx);
    eax = esp + 0x28;
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    XMM_STORE(esp + 0x6C, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BA5E5u); RECOMP_ABI_CALL(0x005A1129u, sub_005A1129); /* call 0x005A1129 */

loc_003BA5E5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BA6D0
 * Original: 0x003BA6D0 - 0x003BAA2C (860 bytes, 213 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BA6D0(void)
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

loc_003BA6D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x87DBE0);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    eax = esi;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DBE4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DBE8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DBEC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x87DAA0);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = edi;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DAA4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DAA8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DAAC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003BA837; /* jle: less or equal (signed <=) */

loc_003BA744: ;
    eax = MEM32(eax + ebx * 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BA76Au); RECOMP_ABI_CALL(0x000114A1u, sub_000114A1); /* call 0x000114A1 */

loc_003BA76A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(esp + 0x30);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = edx;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x40); /* addss */
    edx = MEM32(esp + 0x3C);
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x44) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    eax = MEM32(esp + 0x1C);
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x48) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x4C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xC); /* addss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_MEM(edi); /* movaps */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    eax = MEM32(ebp + 8);
    XMM_STORE(edi, xmm0); /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_003BA744; /* jl: less (signed <) */

loc_003BA837: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(eax + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x44); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEM32(esp + 0x20) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = MEM32(esp + 0x48);
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x44);
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(esp + 0x24) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 8); /* mulss */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x2C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 4); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    eax = MEM32(esp + 0x40);
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x44);
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    edx = MEM32(esp + 0x48);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEM32(esi) = eax;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEM32(esi + 4) = ecx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x4C);
    MEM32(esi + 8) = edx;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BAB10
 * Original: 0x003BAB10 - 0x003BAE6C (860 bytes, 213 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BAB10(void)
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

loc_003BAB10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x87DBE0);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    eax = esi;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DBE4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DBE8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DBEC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x87DAA0);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = edi;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DAA4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DAA8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DAAC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003BAC77; /* jle: less or equal (signed <=) */

loc_003BAB84: ;
    eax = MEM32(eax + ebx * 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BABAAu); RECOMP_ABI_CALL(0x000115B9u, sub_000115B9); /* call 0x000115B9 */

loc_003BABAA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(esp + 0x30);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = edx;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x40); /* addss */
    edx = MEM32(esp + 0x3C);
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x44) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    eax = MEM32(esp + 0x1C);
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x48) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x4C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xC); /* addss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_MEM(edi); /* movaps */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    eax = MEM32(ebp + 8);
    XMM_STORE(edi, xmm0); /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_003BAB84; /* jl: less (signed <) */

loc_003BAC77: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(eax + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x44); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEM32(esp + 0x20) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = MEM32(esp + 0x48);
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x44);
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(esp + 0x24) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 8); /* mulss */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x2C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 4); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    eax = MEM32(esp + 0x40);
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x44);
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    edx = MEM32(esp + 0x48);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEM32(esi) = eax;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEM32(esi + 4) = ecx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x4C);
    MEM32(esi + 8) = edx;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BAF50
 * Original: 0x003BAF50 - 0x003BAF53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BAF50(void)
{

loc_003BAF50: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BAF60
 * Original: 0x003BAF60 - 0x003BB099 (313 bytes, 87 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BAF60(void)
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

loc_003BAF60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BAF87u); RECOMP_ABI_CALL(0x000114A1u, sub_000114A1); /* call 0x000114A1 */

loc_003BAF87: ;
    ebx = MEM32(ebp + 0x18);
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BAF9Eu); RECOMP_ABI_CALL(0x000114A1u, sub_000114A1); /* call 0x000114A1 */

loc_003BAF9E: ;
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    xmm1 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(ebx, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x38) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(esp + 0x3C) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x34) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    POP32(esp, edi);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm4.f[0]; /* movss */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BB0F0
 * Original: 0x003BB0F0 - 0x003BB229 (313 bytes, 87 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BB0F0(void)
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

loc_003BB0F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BB117u); RECOMP_ABI_CALL(0x00015574u, sub_00015574); /* call 0x00015574 */

loc_003BB117: ;
    ebx = MEM32(ebp + 0x18);
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BB12Eu); RECOMP_ABI_CALL(0x00015574u, sub_00015574); /* call 0x00015574 */

loc_003BB12E: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(ebx, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x38) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(esp + 0x3C) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x34) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    POP32(esp, edi);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm4.f[0]; /* movss */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BB280
 * Original: 0x003BB280 - 0x003BB2DF (95 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BB280: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003BB2A1; /* jne: not equal / not zero */

loc_003BB293: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BB29Eu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BB29E: ;
    MEM32(esi + 8) = eax;

loc_003BB2A1: ;
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    PUSH32(esp, edx);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x2C); /* divss */
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003BB2D9u); RECOMP_ABI_CALL(0x000115B9u, sub_000115B9); /* call 0x000115B9 */

loc_003BB2D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BB300
 * Original: 0x003BB300 - 0x003BB54E (590 bytes, 152 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BB300(void)
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

loc_003BB300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x87DAA0);
    MEM32(eax) = ecx;
    edx = MEM32(0x87DAA4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DAA8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DAAC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x87DBE0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    eax = esi;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DBE4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DBE8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DBEC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003BB4B6; /* jle: less or equal (signed <=) */

loc_003BB372: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_003BB380: ;
    edx = MEM32(ebp + 8);
    ebx = MEM32(edx + edi * 4);
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003BB3AF; /* jne: not equal / not zero */

loc_003BB39F: ;
    eax = ecx + 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BB3A8u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BB3A8: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = eax;

loc_003BB3AF: ;
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    ecx = esp + 0x50;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x2C); /* divss */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BB3E9u); RECOMP_ABI_CALL(0x000115B9u, sub_000115B9); /* call 0x000115B9 */

loc_003BB3E9: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    eax = MEM32(ebp + 0x14);
    xmm1 = XMM_MEM(esp + 0x60); /* movaps */
    xmm0.f[0] = xmm2.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    eax = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    ecx = MEM32(esp + 0x34);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    eax = MEM32(esp + 0x3C);
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEM32(esp + 0x44) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEM32(esp + 0x48) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x48); /* addss */
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x2C);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x4C); /* addss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_003BB380; /* jl: less (signed <) */

loc_003BB4B6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x28); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BB5F0
 * Original: 0x003BB5F0 - 0x003BB911 (801 bytes, 205 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BB5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003BB5F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x28);
    eax = MEM32(ebx + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = edx;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BB626u); RECOMP_ABI_CALL(0x000114A1u, sub_000114A1); /* call 0x000114A1 */

loc_003BB626: ;
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BB63Du); RECOMP_ABI_CALL(0x000114A1u, sub_000114A1); /* call 0x000114A1 */

loc_003BB63D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003BB7BB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_003BB64E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = esp + 0x44;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BB675u); RECOMP_ABI_CALL(0x000114A1u, sub_000114A1); /* call 0x000114A1 */

loc_003BB675: ;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    edx = MEM32(esp + 0x30);
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    ecx = esi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 4) = eax;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, edi);
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x44;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BB78Au); RECOMP_ABI_CALL(0x005A1129u, sub_005A1129); /* call 0x005A1129 */

loc_003BB78A: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */

loc_003BB7BB: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    edx = MEM32(esp + 0x30);
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    ecx = MEM32(esp + 0x38);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEM32(esi) = edx;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esi + 4) = eax;
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(esi + 8) = ecx;
    PUSH32(esp, edi);
    eax = esp + 0x64;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xC) = edx;
    xmm1 = XMM_MEM(edi); /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    XMM_STORE(esp + 0x6C, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BB8FDu); RECOMP_ABI_CALL(0x005A1129u, sub_005A1129); /* call 0x005A1129 */

loc_003BB8FD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003BB9E0
 * Original: 0x003BB9E0 - 0x003BBBE3 (515 bytes, 130 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BB9E0(void)
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

loc_003BB9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x87DAA0);
    eax = ebx;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DAA4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DAA8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DAAC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x87DBE0);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = esi;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DBE4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DBE8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DBEC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003BBB43; /* jle: less or equal (signed <=) */

loc_003BBA54: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + edi * 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BBA79u); RECOMP_ABI_CALL(0x000303F1u, sub_000303F1); /* call 0x000303F1 */

loc_003BBA79: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_MEM(esp + 0x50); /* movaps */
    xmm1.f[0] = xmm0.f[0]; /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    XMM_STORE(ebx, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    edx = MEM32(esp + 0x20);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    eax = MEM32(esp + 0x24);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEM32(esp + 0x30) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    edx = MEM32(esp + 0x2C);
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEM32(esp + 0x34) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    eax = MEM32(esp + 0x1C);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x38) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x3C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_003BBA54; /* jl: less (signed <) */

loc_003BBB43: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BBC70
 * Original: 0x003BBC70 - 0x003BBDEF (383 bytes, 105 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BBC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BBC70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BBC91u); RECOMP_ABI_CALL(0x000303F1u, sub_000303F1); /* call 0x000303F1 */

loc_003BBC91: ;
    edx = MEM32(ebp + 0x10);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BBCA6u); RECOMP_ABI_CALL(0x000303F1u, sub_000303F1); /* call 0x000303F1 */

loc_003BBCA6: ;
    eax = MEM32(ebp + 0xC);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(ebp + 0x14);
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    edx = MEM32(esp + 0x18);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    esi = MEM32(ebp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BBDCFu); RECOMP_ABI_CALL(0x005A1129u, sub_005A1129); /* call 0x005A1129 */

loc_003BBDCF: ;
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MEM(esp + 0x4C); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi, xmm1); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003BBE50
 * Original: 0x003BBE50 - 0x003BBFCF (383 bytes, 105 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BBE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BBE50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BBE71u); RECOMP_ABI_CALL(0x0002E61Eu, sub_0002E61E); /* call 0x0002E61E */

loc_003BBE71: ;
    edx = MEM32(ebp + 0x10);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BBE86u); RECOMP_ABI_CALL(0x0002E61Eu, sub_0002E61E); /* call 0x0002E61E */

loc_003BBE86: ;
    eax = MEM32(ebp + 0xC);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(ebp + 0x14);
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    edx = MEM32(esp + 0x18);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    esi = MEM32(ebp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BBFAFu); RECOMP_ABI_CALL(0x005A1129u, sub_005A1129); /* call 0x005A1129 */

loc_003BBFAF: ;
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MEM(esp + 0x4C); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi, xmm1); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003BC030
 * Original: 0x003BC030 - 0x003BC034 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC030(void)
{

loc_003BC030: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003BC040
 * Original: 0x003BC040 - 0x003BC044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC040(void)
{

loc_003BC040: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003BC050
 * Original: 0x003BC050 - 0x003BC054 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC050(void)
{

loc_003BC050: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003BC060
 * Original: 0x003BC060 - 0x003BC06E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC060(void)
{

loc_003BC060: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003BC080
 * Original: 0x003BC080 - 0x003BC2C7 (583 bytes, 172 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BC080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003BC080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003BC0E9; /* je: equal / zero */

loc_003BC0A9: ;
    ecx = esp + 0x64;
    /* nop */

loc_003BC0B0: ;
    edx = MEM32(eax + 0x1C0);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx + -12) = edx;
    SET_LO8(edx, MEM8(eax + 0x47C));
    MEM8(ecx + -16) = LO8(edx);
    edx = MEM32(eax + 0x488);
    MEM32(ecx + -20) = eax;
    eax = MEM32(eax + 4);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEM32(ecx + -8) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BC0B0; /* jne: not equal / not zero */

loc_003BC0E5: ;
    MEM32(esp + 0x1C) = edi;

loc_003BC0E9: ;
    ecx = MEM32(0x87DBD0);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    edx = MEM32(0x87DBD4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DBD8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DBDC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x87DAF0);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    edx = MEM32(0x87DAF4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DAF8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DAFC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BC2BE; /* jle: less or equal (signed <=) */

loc_003BC140: ;
    MEM32(esp + 0x18) = eax;

loc_003BC144: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    esi = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_003BC2B4; /* jge: greater or equal (signed >=) */

loc_003BC14E: ;
    eax = ebx + ebx * 2;
    eax = esp + eax * 8 + 0x5C;

loc_003BC155: ;
    SET_LO8(ecx, MEM8(eax + -8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BC204; /* je: equal / zero */

loc_003BC160: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003BC204; /* jge: greater or equal (signed >=) */

loc_003BC168: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BC204; /* je: equal / zero */

loc_003BC173: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    ecx = esi + 1;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003BC1F9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_003BC194: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    edx = esi;
    if (CMP_L(_fas, _fbs)) goto loc_003BC1DC; /* jl: less (signed <) */

loc_003BC1A3: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ecx * 4;
    ebx = edx;
    edx = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003BC1C0;

    /* nop */

loc_003BC1C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    if ((_fa != 0)) goto loc_003BC1C0; /* jne: not equal / not zero */

loc_003BC1D3: ;
    ebx = MEM32(esp + 0x10);
    MEMF(eax + 8) = xmm2.f[0]; /* movss */

loc_003BC1DC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BC1F2; /* jl: less (signed <) */

loc_003BC1E0: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BC1E6: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    if ((_fa != 0)) goto loc_003BC1E6; /* jne: not equal / not zero */

loc_003BC1ED: ;
    MEMF(eax + 8) = xmm2.f[0]; /* movss */

loc_003BC1F2: ;
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    goto loc_003BC204;

loc_003BC1F9: ;
    MEM32(esp + 0x10) = ecx;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    ebx = ecx;

loc_003BC204: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BC155; /* jl: less (signed <) */

loc_003BC210: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003BC2B4; /* jge: greater or equal (signed >=) */

loc_003BC218: ;
    edx = ebx + ebx * 2;
    eax = esp + edx * 8 + 0x50;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = edi;
    /* nop */

loc_003BC230: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx);
    ebx = MEM32(edi + 0x15C);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x118;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BC296; /* jle: less or equal (signed <=) */

loc_003BC248: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */

loc_003BC257: ;
    ecx = MEM32(esp + 0x28);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = MEM32(edi + esi * 4 + 4);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BC274u); RECOMP_ABI_CALL(0x000115B9u, sub_000115B9); /* call 0x000115B9 */

loc_003BC274: ;
    edx = MEM32(esp + 0x2C);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(edi + esi * 4 + 4);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BC291u); RECOMP_ABI_CALL(0x000115B9u, sub_000115B9); /* call 0x000115B9 */

loc_003BC291: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BC257; /* jl: less (signed <) */

loc_003BC296: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_003BC230; /* jne: not equal / not zero */

loc_003BC2AC: ;
    ebx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x1C);

loc_003BC2B4: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BC144; /* jne: not equal / not zero */

loc_003BC2BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BC360
 * Original: 0x003BC360 - 0x003BC4A7 (327 bytes, 108 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC360(void)
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

loc_003BC360: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    ecx = MEM32(edi + 0x11C);
    esi = MEM32(ecx + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003BC38E; /* jne: not equal / not zero */

loc_003BC380: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003BC38Bu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BC38B: ;
    MEM32(esi + 8) = eax;

loc_003BC38E: ;
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C0)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx;
    ebp = MEM32(esi + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BC41B; /* jle: less or equal (signed <=) */

loc_003BC3B7: ;
    goto loc_003BC3C0;

    /* nop */

loc_003BC3C0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x20) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003BC3D8; /* jl: less (signed <) */

loc_003BC3CB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003BC3D8; /* jge: greater or equal (signed >=) */

loc_003BC3D0: ;
    edx = MEM32(esi + 0x1C);
    eax = edx + ebx * 4;
    goto loc_003BC3DB;

loc_003BC3D8: ;
    eax = MEM32(esi + 0x1C);

loc_003BC3DB: ;
    edi = MEM32(eax);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BC3F8; /* jne: not equal / not zero */

loc_003BC3E4: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003BC3EFu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BC3EF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(edi + 8) = eax;

loc_003BC3F8: ;
    edi = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 5 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003BC480; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003BC412: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BC3C0; /* jl: less (signed <) */

loc_003BC417: ;
    edi = MEM32(esp + 0x10);

loc_003BC41B: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x20) = 0;
    esi = MEM32(esi + 0x1C);
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BC445; /* jne: not equal / not zero */

loc_003BC431: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003BC43Cu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BC43C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esi + 8) = eax;

loc_003BC445: ;
    eax = MEM32(esi + 8);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 5 (16-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x10); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x474); /* mulss */
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(eax) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003BC480: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x474); /* mulss */
    POP32(esp, ebp);
    MEMF(eax) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BC500
 * Original: 0x003BC500 - 0x003BC598 (152 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC500(void)
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

loc_003BC500: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x83482C)); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x40);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003BC590; /* jle: less or equal (signed <=) */

loc_003BC52A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);

loc_003BC530: ;
    eax = MEM32(ebp + edi * 4);
    esi = MEM32(eax + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BC54C; /* jne: not equal / not zero */

loc_003BC53E: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003BC549u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BC549: ;
    MEM32(esi + 8) = eax;

loc_003BC54C: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003BC562u); RECOMP_ABI_CALL(0x0001FBAFu, sub_0001FBAF); /* call 0x0001FBAF */

loc_003BC562: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BC581; /* je: equal / zero */

loc_003BC566: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003BC581; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_003BC572: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_003BC581: ;
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BC530; /* jl: less (signed <) */

loc_003BC58A: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003BC590: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BC5C0
 * Original: 0x003BC5C0 - 0x003BC5CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC5C0(void)
{

loc_003BC5C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BC5D0
 * Original: 0x003BC5D0 - 0x003BC5F2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC5D0(void)
{

loc_003BC5D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x906F08);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x906F08;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003BC5F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BC5EEu); } /* indirect call */
    }

loc_003BC5F1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BC600
 * Original: 0x003BC600 - 0x003BC614 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BC600: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BC613; /* je: equal / zero */

loc_003BC608: ;
    PUSH32(esp, eax);
    ecx = 0x906F08;
    PUSH32(esp, 0x003BC613u); RECOMP_ABI_CALL(0x0002CAE4u, sub_0002CAE4); /* call 0x0002CAE4 */

loc_003BC613: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BC620
 * Original: 0x003BC620 - 0x003BC70C (236 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BC620: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BC707; /* je: equal / zero */

loc_003BC630: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003BC63Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BC639u); } /* indirect call */
    }

loc_003BC63C: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BC706; /* jle: less or equal (signed <=) */

loc_003BC646: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003BC653u); RECOMP_ABI_CALL(0x00019133u, sub_00019133); /* call 0x00019133 */

loc_003BC653: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003BC665u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BC662u); } /* indirect call */
    }

loc_003BC665: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BC6FC; /* jle: less or equal (signed <=) */

loc_003BC66F: ;
    PUSH32(esp, esi);

loc_003BC670: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x20) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003BC68B; /* jl: less (signed <) */

loc_003BC67C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003BC68B; /* jge: greater or equal (signed >=) */

loc_003BC682: ;
    ecx = MEM32(esp + 0x1C);
    eax = ecx + edi * 4;
    goto loc_003BC68F;

loc_003BC68B: ;
    eax = MEM32(esp + 0x1C);

loc_003BC68F: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BC6A6; /* jne: not equal / not zero */

loc_003BC698: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003BC6A3u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BC6A3: ;
    MEM32(esi + 8) = eax;

loc_003BC6A6: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BC6CA; /* je: equal / zero */

loc_003BC6BF: ;
    PUSH32(esp, eax);
    ecx = 0x906F08;
    PUSH32(esp, 0x003BC6CAu); RECOMP_ABI_CALL(0x0002CAE4u, sub_0002CAE4); /* call 0x0002CAE4 */

loc_003BC6CA: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003BC6D2u); RECOMP_ABI_CALL(0x00015D26u, sub_00015D26); /* call 0x00015D26 */

loc_003BC6D2: ;
    edx = MEM32(0x906F08);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x906F08;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003BC6EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BC6ECu); } /* indirect call */
    }

loc_003BC6EF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003BC670; /* jl: less (signed <) */

loc_003BC6FB: ;
    POP32(esp, esi);

loc_003BC6FC: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003BC705u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003BC705: ;
    POP32(esp, edi);

loc_003BC706: ;
    POP32(esp, ebp);

loc_003BC707: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BC750
 * Original: 0x003BC750 - 0x003BC802 (178 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BC750: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BC7FC; /* je: equal / zero */

loc_003BC763: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BC7FC; /* jbe: below or equal (unsigned <=) */

loc_003BC76E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003BC77Au); RECOMP_ABI_CALL(0x00019133u, sub_00019133); /* call 0x00019133 */

loc_003BC77A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x13);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003BC78Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BC787u); } /* indirect call */
    }

loc_003BC78A: ;
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BC7F2; /* jle: less or equal (signed <=) */

loc_003BC794: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_003BC7A9; /* jl: less (signed <) */

loc_003BC79C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003BC7A9; /* jge: greater or equal (signed >=) */

loc_003BC7A0: ;
    edx = MEM32(esp + 0x18);
    eax = edx + edi * 4;
    goto loc_003BC7AD;

loc_003BC7A9: ;
    eax = MEM32(esp + 0x18);

loc_003BC7AD: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BC7C2; /* jne: not equal / not zero */

loc_003BC7B4: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BC7BFu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BC7BF: ;
    MEM32(esi + 8) = eax;

loc_003BC7C2: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BC7E6; /* je: equal / zero */

loc_003BC7DB: ;
    PUSH32(esp, eax);
    ecx = 0x906F08;
    PUSH32(esp, 0x003BC7E6u); RECOMP_ABI_CALL(0x0002CAE4u, sub_0002CAE4); /* call 0x0002CAE4 */

loc_003BC7E6: ;
    MEM32(esi + 0x18) = ebx;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BC794; /* jl: less (signed <) */

loc_003BC7F2: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003BC7FBu); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003BC7FB: ;
    POP32(esp, edi);

loc_003BC7FC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BC830
 * Original: 0x003BC830 - 0x003BC83F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC830(void)
{

loc_003BC830: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BC850
 * Original: 0x003BC850 - 0x003BC8DC (140 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC850(void)
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

loc_003BC850: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003BC867u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003BC867: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x14) = edx;
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esi + 0x10) = 0;
    MEM8(esi + 0x18) = LO8(ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_003BC8A0; /* jge: greater or equal (signed >=) */

loc_003BC89A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003BC8A0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7A9EC4)); /* fmul dword ptr [0x7a9ec4] */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEMF(esi + 0x20) = (float)fp_top(); /* fst */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003BC8C1; /* jge: greater or equal (signed >=) */

loc_003BC8BB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003BC8C1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7DE364)); /* fmul dword ptr [0x7de364] */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x24) = eax;
    eax = 8;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BC900
 * Original: 0x003BC900 - 0x003BC967 (103 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC900(void)
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

loc_003BC900: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    eax = MEM32(esi + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x834840)); /* fmul dword ptr [0x834840] */
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x003BC91Cu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003BC91C: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x83483C)); /* fmul dword ptr [0x83483c] */
    edi = eax;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x003BC92Fu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003BC92F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x18));
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    edx = esp + 0xC;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x003BC957u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003BC957: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 8;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BC980
 * Original: 0x003BC980 - 0x003BC984 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC980(void)
{

loc_003BC980: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003BC990
 * Original: 0x003BC990 - 0x003BC994 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC990(void)
{

loc_003BC990: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003BC9A0
 * Original: 0x003BC9A0 - 0x003BC9C9 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BC9A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BC9B5; /* je: equal / zero */

loc_003BC9AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BC9B5u); RECOMP_ABI_CALL(0x00021C57u, sub_00021C57); /* call 0x00021C57 */

loc_003BC9B5: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003BC9C6; /* je: equal / zero */

loc_003BC9BD: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00021C57(); return; /* tail jmp 0x00021C57 */

loc_003BC9C6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BC9E0
 * Original: 0x003BC9E0 - 0x003BCA36 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003BC9E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    xmm0 = xmm1; /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_003BCA03; /* je: equal / zero */

loc_003BC9EC: ;
    /* nop */

loc_003BC9F0: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_003BC9F0; /* jne: not equal / not zero */

loc_003BCA03: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_003BCA17; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003BCA10: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_003BCA17: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD340); /* comiss */
    if ((_fca > _fcb)) goto loc_003BCA30; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AD340)) */

loc_003BCA20: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BCA33; /* je: equal / zero */

loc_003BCA27: ;
    PUSH32(esp, 0x003BCA2Cu); RECOMP_ABI_CALL(0x00016537u, sub_00016537); /* call 0x00016537 */

loc_003BCA2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BCA33; /* jne: not equal / not zero */

loc_003BCA30: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_003BCA33: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003BCA50
 * Original: 0x003BCA50 - 0x003BCAFF (175 bytes, 51 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCA50(void)
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

loc_003BCA50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x28)); /* fmul dword ptr [ecx + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x24)); /* fadd dword ptr [ecx + 0x24] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003BCA68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCA65u); } /* indirect call */
    }

loc_003BCA68: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003BCA88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCA85u); } /* indirect call */
    }

loc_003BCA88: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm5 = xmm1; /* movaps */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 8); /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BCB30
 * Original: 0x003BCB30 - 0x003BCB34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCB30(void)
{

loc_003BCB30: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    esp += 4; return; /* ret */

}

/**
 * sub_003BCB40
 * Original: 0x003BCB40 - 0x003BCB75 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCB40(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003BCB40: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x834844); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003BCB58; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x834844)) */

loc_003BCB4F: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8CD988); /* subss */
    esp += 4; return; /* ret */

loc_003BCB58: ;
    xmm1 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003BCB74; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003BCB65: ;
    xmm1 = XMM_SCALAR(MEMF(0x8CD988)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */

loc_003BCB74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BCB90
 * Original: 0x003BCB90 - 0x003BCE41 (689 bytes, 207 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCB90(void)
{
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

loc_003BCB90: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003BCBA9; /* jne: not equal / not zero */

loc_003BCB9F: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_003BCBA9: ;
    SET_LO8(eax, MEM8(edi + 0xB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003BCBC2; /* je: equal / zero */

loc_003BCBB3: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esp + 0x28) = LO8(eax);
    goto loc_003BCBCA;

loc_003BCBC2: ;
    SET_LO8(ecx, MEM8(esp + 0x34));
    MEM8(esp + 0x28) = LO8(ecx);

loc_003BCBCA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, ebx);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003BCC7A; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_003BCBE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = MEM32(esp + 0x2C);
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003BCC0D; /* jp: parity */

loc_003BCBF0: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003BCC0D; /* jp: parity */

loc_003BCBF9: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    goto loc_003BCC41;

loc_003BCC0D: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003BCC25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCC22u); } /* indirect call */
    }

loc_003BCC25: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003BCC41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCC3Eu); } /* indirect call */
    }

loc_003BCC41: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003BCC59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCC56u); } /* indirect call */
    }

loc_003BCC59: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003BCC75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCC72u); } /* indirect call */
    }

loc_003BCC75: ;
    goto loc_003BCCFD;

loc_003BCC7A: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003BCC92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCC8Fu); } /* indirect call */
    }

loc_003BCC92: ;
    ebx = MEM32(esp + 0x2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003BCCB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCCAFu); } /* indirect call */
    }

loc_003BCCB2: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    edx = MEM32(esi);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003BCCCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCCC7u); } /* indirect call */
    }

loc_003BCCCA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003BCCE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCCE3u); } /* indirect call */
    }

loc_003BCCE6: ;
    PUSH32(esp, ebx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003BCCFDu); RECOMP_ABI_CALL(0x00027AA8u, sub_00027AA8); /* call 0x00027AA8 */

loc_003BCCFD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x834844); /* comiss */
    POP32(esp, ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003BCD1D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x834844)) */

loc_003BCD13: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8CD988); /* subss */
    goto loc_003BCD32;

loc_003BCD1D: ;
    xmm1 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003BCD32; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003BCD2A: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8CD988); /* addss */

loc_003BCD32: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    fp_top() = -fp_top(); /* fchs */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x20); /* subss */
    fp_top() = sin(fp_top()); /* fsin */
    SET_LO8(eax, MEM8(edi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    if (CMP_EQ(_fa, _fb)) goto loc_003BCDC4; /* je: equal / zero */

loc_003BCD9D: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    goto loc_003BCDE1;

loc_003BCDC4: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */

loc_003BCDE1: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA840); /* mulss */
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    MEM32(esp + 0x10) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BCEF0
 * Original: 0x003BCEF0 - 0x003BCF53 (99 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BCEF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 0x18));
    ebp = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    MEM8(esp + 0x18) = LO8(eax);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003BCF24; /* jne: not equal / not zero */

loc_003BCF16: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003BCF21u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BCF21: ;
    MEM32(edi + 8) = eax;

loc_003BCF24: ;
    eax = MEM32(edi + 8);
    edx = MEM32(esi + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003BCF4Bu); RECOMP_ABI_CALL(0x000171D0u, sub_000171D0); /* call 0x000171D0 */

loc_003BCF4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BCF70
 * Original: 0x003BCF70 - 0x003BCF82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BCF70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BCF7Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BCF7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BCF90
 * Original: 0x003BCF90 - 0x003BCFA5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BCF90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BCFA4; /* je: equal / zero */

loc_003BCF98: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BCFA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCFA1u); } /* indirect call */
    }

loc_003BCFA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BCFB0
 * Original: 0x003BCFB0 - 0x003BCFC2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BCFB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BCFBEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BCFBE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BCFD0
 * Original: 0x003BCFD0 - 0x003BCFE5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BCFD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BCFE4; /* je: equal / zero */

loc_003BCFD8: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BCFE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BCFE1u); } /* indirect call */
    }

loc_003BCFE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BCFF0
 * Original: 0x003BCFF0 - 0x003BCFFE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BCFF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 0x1A (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BD010
 * Original: 0x003BD010 - 0x003BD038 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD010: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BD026; /* jne: not equal / not zero */

loc_003BD01A: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BD023u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BD023: ;
    MEM32(esi + 8) = eax;

loc_003BD026: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x1A (16-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BD050
 * Original: 0x003BD050 - 0x003BD065 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD050: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD064; /* je: equal / zero */

loc_003BD058: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD064u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD061u); } /* indirect call */
    }

loc_003BD064: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD070
 * Original: 0x003BD070 - 0x003BD082 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD070: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BD07Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD07E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BD090
 * Original: 0x003BD090 - 0x003BD0A5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD090: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD0A4; /* je: equal / zero */

loc_003BD098: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD0A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD0A1u); } /* indirect call */
    }

loc_003BD0A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD0B0
 * Original: 0x003BD0B0 - 0x003BD0BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD0B0(void)
{

loc_003BD0B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD0C0
 * Original: 0x003BD0C0 - 0x003BD0C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD0C0(void)
{

loc_003BD0C0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD0D0
 * Original: 0x003BD0D0 - 0x003BD0E5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD0D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD0E4; /* je: equal / zero */

loc_003BD0D8: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD0E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD0E1u); } /* indirect call */
    }

loc_003BD0E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD0F0
 * Original: 0x003BD0F0 - 0x003BD102 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD0F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD0F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BD0FEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD0FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BD110
 * Original: 0x003BD110 - 0x003BD125 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD110: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD124; /* je: equal / zero */

loc_003BD118: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD124u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD121u); } /* indirect call */
    }

loc_003BD124: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD130
 * Original: 0x003BD130 - 0x003BD134 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BD130: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BD140
 * Original: 0x003BD140 - 0x003BD16A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD140: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    MEM32(eax + 0x28) = ecx;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003BD180
 * Original: 0x003BD180 - 0x003BD184 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD180(void)
{

loc_003BD180: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_003BD190
 * Original: 0x003BD190 - 0x003BD1A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD190(void)
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

loc_003BD190: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD19B; /* je: equal / zero */

loc_003BD197: ;
    fp_push(MEMF(eax + 0x14)); /* fld float */
    esp += 4; return; /* ret */

loc_003BD19B: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BD1B0
 * Original: 0x003BD1B0 - 0x003BD24C (156 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BD1B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x510);
    PUSH32(esp, 1);
    esi = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x003BD1D5u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD1D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD1F9; /* je: equal / zero */

loc_003BD1DC: ;
    MEM32(eax) = edi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = eax + 4;
    ebx = ebp;
    if ((_fas < 0)) goto loc_003BD1FB; /* js: sign (negative) */

loc_003BD1E6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BD1E7: ;
    ecx = ebx;
    PUSH32(esp, 0x003BD1EEu); RECOMP_ABI_CALL(0x0002F1D1u, sub_0002F1D1); /* call 0x0002F1D1 */

loc_003BD1EE: ;
    _fb = (uint32_t)(0x510) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x510;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BD1E7; /* jne: not equal / not zero */

loc_003BD1F7: ;
    goto loc_003BD1FB;

loc_003BD1F9: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003BD1FB: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esi + 0x10) = ebp;
    PUSH32(esp, 0x003BD20Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD20E: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BD243; /* jle: less or equal (signed <=) */

loc_003BD21D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003BD220: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003BD22Au); RECOMP_ABI_CALL(0x0001871Au, sub_0001871A); /* call 0x0001871A */

loc_003BD22A: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4) = edx;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x510) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x510;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BD220; /* jl: less (signed <) */

loc_003BD243: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD280
 * Original: 0x003BD280 - 0x003BD301 (129 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BD280: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003BD2DE; /* je: equal / zero */

loc_003BD28D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x510);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003BD2C0; /* js: sign (negative) */

loc_003BD2A2: ;
    edi = eax + 1;
    goto loc_003BD2B0;

    /* nop */
    edi = edi;

loc_003BD2B0: ;
    _fb = (uint32_t)(0x510) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x510;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x003BD2BDu); RECOMP_ABI_CALL(0x00022AADu, sub_00022AAD); /* call 0x00022AAD */

loc_003BD2BD: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BD2B0; /* jne: not equal / not zero */

loc_003BD2C0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BD2D5; /* je: equal / zero */

loc_003BD2C5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD2D5; /* je: equal / zero */

loc_003BD2C9: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003BD2D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD2D2u); } /* indirect call */
    }

loc_003BD2D5: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003BD2DE: ;
    ecx = edi;
    PUSH32(esp, 0x003BD2E5u); RECOMP_ABI_CALL(0x00022AADu, sub_00022AAD); /* call 0x00022AAD */

loc_003BD2E5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BD2FA; /* je: equal / zero */

loc_003BD2EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD2FA; /* je: equal / zero */

loc_003BD2EE: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD2FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD2F7u); } /* indirect call */
    }

loc_003BD2FA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD330
 * Original: 0x003BD330 - 0x003BD3A3 (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BD330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD330: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD384; /* je: equal / zero */

loc_003BD33D: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebx);
    ebx = ecx + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x510);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003BD372; /* js: sign (negative) */

loc_003BD352: ;
    edi = eax + 1;
    goto loc_003BD360;

    /* nop */
    edi = edi;

loc_003BD360: ;
    _fb = (uint32_t)(0x510) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x510;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x003BD36Du); RECOMP_ABI_CALL(0x00022AADu, sub_00022AAD); /* call 0x00022AAD */

loc_003BD36D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BD360; /* jne: not equal / not zero */

loc_003BD370: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003BD372: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD382; /* je: equal / zero */

loc_003BD376: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003BD382u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD37Fu); } /* indirect call */
    }

loc_003BD382: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003BD384: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD397; /* je: equal / zero */

loc_003BD38B: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD397u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD394u); } /* indirect call */
    }

loc_003BD397: ;
    MEM32(ebp + 0x10) = edi;
    MEM32(ebp + 0x18) = edi;
    MEM32(ebp + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003BD3C0
 * Original: 0x003BD3C0 - 0x003BD3CE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD3C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD3C0: ;
    eax = MEM32(ecx + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1C) = eax;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003BD3E0
 * Original: 0x003BD3E0 - 0x003BD3F5 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD3E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD3E0: ;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(edx + eax * 4) = esi;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD400
 * Original: 0x003BD400 - 0x003BD419 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD400: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD410; /* je: equal / zero */

loc_003BD40A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003BD410u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD40Eu); } /* indirect call */
    }

loc_003BD410: ;
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BD420
 * Original: 0x003BD420 - 0x003BD43C (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD420: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x14) = 0xDEADDEADu;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    MEM32(esi + edx * 4) = eax;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD450
 * Original: 0x003BD450 - 0x003BD47C (44 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD450: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BD478; /* jle: less or equal (signed <=) */

loc_003BD45C: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_003BD464: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD475; /* je: equal / zero */

loc_003BD468: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BD464; /* jl: less (signed <) */

loc_003BD470: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003BD475: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);

loc_003BD478: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD490
 * Original: 0x003BD490 - 0x003BD4A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD490: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BD49Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD49E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BD4B0
 * Original: 0x003BD4B0 - 0x003BD4C0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD4B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD4D0
 * Original: 0x003BD4D0 - 0x003BD4D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD4D0(void)
{

loc_003BD4D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD4E0
 * Original: 0x003BD4E0 - 0x003BD4E9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD4E0(void)
{

loc_003BD4E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD4F0
 * Original: 0x003BD4F0 - 0x003BD4FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD4F0(void)
{

loc_003BD4F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD500
 * Original: 0x003BD500 - 0x003BD504 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD500(void)
{

loc_003BD500: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003BD510
 * Original: 0x003BD510 - 0x003BD51A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD510(void)
{

loc_003BD510: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD520
 * Original: 0x003BD520 - 0x003BD52A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD520(void)
{

loc_003BD520: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD530
 * Original: 0x003BD530 - 0x003BD547 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD530: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x83484C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD550
 * Original: 0x003BD550 - 0x003BD58B (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD550: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD569; /* je: equal / zero */

loc_003BD55D: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD566u); } /* indirect call */
    }

loc_003BD569: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD57C; /* je: equal / zero */

loc_003BD570: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD57Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD579u); } /* indirect call */
    }

loc_003BD57C: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BD5A0
 * Original: 0x003BD5A0 - 0x003BD5A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD5A0(void)
{

loc_003BD5A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD5B0
 * Original: 0x003BD5B0 - 0x003BD5C3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD5B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD5B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD5D0
 * Original: 0x003BD5D0 - 0x003BD622 (82 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD5D0: ;
    eax = MEM32(0x906F18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BD620; /* jne: not equal / not zero */

loc_003BD5DC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x003BD5E6u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD5E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD619; /* je: equal / zero */

loc_003BD5ED: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(0x906F18) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003BD619: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x906F18) = eax;

loc_003BD620: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BD640
 * Original: 0x003BD640 - 0x003BD6D1 (145 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD640: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x003BD662u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD662: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD690; /* je: equal / zero */

loc_003BD669: ;
    ecx = edi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edx = eax + 4;
    MEM32(eax) = edi;
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003BD68C; /* jl: less (signed <) */

loc_003BD677: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BD678: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x14) = ebx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BD678; /* jne: not equal / not zero */

loc_003BD68C: ;
    eax = edx;
    goto loc_003BD692;

loc_003BD690: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003BD692: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x003BD6A3u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD6A3: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BD6C9; /* jle: less or equal (signed <=) */

loc_003BD6B2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003BD6B4: ;
    edx = MEM32(esi);
    edi = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + eax * 4) = edx;
    edx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BD6B4; /* jl: less (signed <) */

loc_003BD6C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD700
 * Original: 0x003BD700 - 0x003BD742 (66 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD700: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003BD728; /* je: equal / zero */

loc_003BD70B: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BD73C; /* je: equal / zero */

loc_003BD712: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD73C; /* je: equal / zero */

loc_003BD716: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003BD722u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD71Fu); } /* indirect call */
    }

loc_003BD722: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003BD728: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BD73C; /* je: equal / zero */

loc_003BD72C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD73C; /* je: equal / zero */

loc_003BD730: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD73Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD739u); } /* indirect call */
    }

loc_003BD73C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD760
 * Original: 0x003BD760 - 0x003BD7A3 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD760: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD77A; /* je: equal / zero */

loc_003BD769: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_003BD77A; /* je: equal / zero */

loc_003BD76E: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD77Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD777u); } /* indirect call */
    }

loc_003BD77A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD78D; /* je: equal / zero */

loc_003BD781: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD78Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD78Au); } /* indirect call */
    }

loc_003BD78D: ;
    MEM32(esi) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BD7C0
 * Original: 0x003BD7C0 - 0x003BD7E2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD7C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD7C0: ;
    eax = MEM32(ecx + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + eax * 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = 0xFEEDBEEFu;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD7F0
 * Original: 0x003BD7F0 - 0x003BD830 (64 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD7F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003BD805; /* je: equal / zero */

loc_003BD7FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BD805u); RECOMP_ABI_CALL(0x0002A186u, sub_0002A186); /* call 0x0002A186 */

loc_003BD805: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD814; /* je: equal / zero */

loc_003BD80C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BD814u); RECOMP_ABI_CALL(0x0002A186u, sub_0002A186); /* call 0x0002A186 */

loc_003BD814: ;
    MEM32(edi + 0x14) = 0xDEADDEADu;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = edi;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD840
 * Original: 0x003BD840 - 0x003BD8B3 (115 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BD840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD8AD; /* je: equal / zero */

loc_003BD849: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);

loc_003BD854: ;
    edi = MEM32(esi + 0x14);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BD86C; /* jne: not equal / not zero */

loc_003BD85E: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003BD869u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BD869: ;
    MEM32(edi + 8) = eax;

loc_003BD86C: ;
    eax = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BD89A; /* jne: not equal / not zero */

loc_003BD883: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003BD893u); RECOMP_ABI_CALL(0x0002A055u, sub_0002A055); /* call 0x0002A055 */

loc_003BD893: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003BD89F;

loc_003BD89A: ;
    MEM32(ebp + ebx * 4) = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BD89F: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BD854; /* jne: not equal / not zero */

loc_003BD8A6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003BD8AD: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BD8D0
 * Original: 0x003BD8D0 - 0x003BD945 (117 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD8D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x003BD8E3u); RECOMP_ABI_CALL(0x00019133u, sub_00019133); /* call 0x00019133 */

loc_003BD8E3: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003BD8F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD8F2u); } /* indirect call */
    }

loc_003BD8F5: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BD935; /* jle: less or equal (signed <=) */

loc_003BD8FD: ;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BD921; /* jne: not equal / not zero */

loc_003BD913: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003BD91Eu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BD91E: ;
    MEM32(esi + 8) = eax;

loc_003BD921: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x1A (16-bit) */
    POP32(esp, esi);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x28) = eax;

loc_003BD935: ;
    ecx = esp + 4;
    PUSH32(esp, 0x003BD93Eu); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003BD93E: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD970
 * Original: 0x003BD970 - 0x003BDA3C (204 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BD970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003BD98A; /* je: equal / zero */

loc_003BD97E: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD98Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD987u); } /* indirect call */
    }

loc_003BD98A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD99D; /* je: equal / zero */

loc_003BD991: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD99Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD99Au); } /* indirect call */
    }

loc_003BD99D: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    eax = edi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x003BD9BBu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD9BB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003BD9EC; /* jne: not equal / not zero */

loc_003BD9C5: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BD9D8; /* je: equal / zero */

loc_003BD9CC: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BD9D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BD9D5u); } /* indirect call */
    }

loc_003BD9D8: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003BD9EC: ;
    PUSH32(esp, 1);
    eax = edi * 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BD9FCu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BD9FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003BDA15; /* jne: not equal / not zero */

loc_003BDA06: ;
    ecx = esi;
    PUSH32(esp, 0x003BDA0Du); RECOMP_ABI_CALL(0x000279F9u, sub_000279F9); /* call 0x000279F9 */

loc_003BDA0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003BDA15: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BDA2E; /* jle: less or equal (signed <=) */

loc_003BDA1E: ;
    edi = edi;

loc_003BDA20: ;
    edx = MEM32(esi + 8);
    MEM32(edx + eax * 4) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BDA20; /* jl: less (signed <) */

loc_003BDA2E: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BDA70
 * Original: 0x003BDA70 - 0x003BDA94 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDA70: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83484C;
    PUSH32(esp, 0x003BDA7Eu); RECOMP_ABI_CALL(0x000279F9u, sub_000279F9); /* call 0x000279F9 */

loc_003BDA7E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BDA8E; /* je: equal / zero */

loc_003BDA85: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BDA8Bu); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BDA8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BDA8E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BDAA0
 * Original: 0x003BDAA0 - 0x003BDB14 (116 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BDAB3; /* je: equal / zero */

loc_003BDAAD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003BDAB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BDAB1u); } /* indirect call */
    }

loc_003BDAB3: ;
    ecx = esi;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x003BDABDu); RECOMP_ABI_CALL(0x0002E08Du, sub_0002E08D); /* call 0x0002E08D */

loc_003BDABD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BDAD6; /* je: equal / zero */

loc_003BDAC3: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BDAD6; /* je: equal / zero */

loc_003BDACA: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BDAD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BDAD3u); } /* indirect call */
    }

loc_003BDAD6: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BDAE9; /* je: equal / zero */

loc_003BDADD: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BDAE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BDAE6u); } /* indirect call */
    }

loc_003BDAE9: ;
    MEM32(esi) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    esi = MEM32(0x906F18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BDB11; /* je: equal / zero */

loc_003BDAFB: ;
    ecx = esi;
    MEM32(0x906F18) = edi;
    PUSH32(esp, 0x003BDB08u); RECOMP_ABI_CALL(0x00031265u, sub_00031265); /* call 0x00031265 */

loc_003BDB08: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BDB0Eu); RECOMP_ABI_CALL(0x000175C7u, sub_000175C7); /* call 0x000175C7 */

loc_003BDB0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BDB11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BDB40
 * Original: 0x003BDB40 - 0x003BDB83 (67 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDB40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    edi = ecx;
    PUSH32(esp, 0x003BDB50u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDB50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BDB6B; /* je: equal / zero */

loc_003BDB57: ;
    MEM32(eax) = 0x83484C;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    goto loc_003BDB6D;

loc_003BDB6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003BDB6D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(edi + 0x20) = eax;
    PUSH32(esp, 0x003BDB7Cu); RECOMP_ABI_CALL(0x00017C07u, sub_00017C07); /* call 0x00017C07 */

loc_003BDB7C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BDBA0
 * Original: 0x003BDBA0 - 0x003BDBA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BDBA0: ;
    g_seh_ebp = ebp; sub_00031265(); return; /* tail jmp 0x00031265 */

}

/**
 * sub_003BDBB0
 * Original: 0x003BDBB0 - 0x003BDC07 (87 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDBB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003BDBBEu); RECOMP_ABI_CALL(0x000140D9u, sub_000140D9); /* call 0x000140D9 */

loc_003BDBBE: ;
    PUSH32(esp, 1);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x003BDBCAu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDBCA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BDBE5; /* je: equal / zero */

loc_003BDBD1: ;
    MEM32(eax) = 0x83484C;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    goto loc_003BDBE7;

loc_003BDBE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003BDBE7: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x003BDBF6u); RECOMP_ABI_CALL(0x00017C07u, sub_00017C07); /* call 0x00017C07 */

loc_003BDBF6: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003BDC02u); RECOMP_ABI_CALL(0x0003682Du, sub_0003682D); /* call 0x0003682D */

loc_003BDC02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003BDC20
 * Original: 0x003BDC20 - 0x003BDC45 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003BDC28u); RECOMP_ABI_CALL(0x00031265u, sub_00031265); /* call 0x00031265 */

loc_003BDC28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BDC3F; /* je: equal / zero */

loc_003BDC2F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BDC3F; /* je: equal / zero */

loc_003BDC33: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003BDC3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BDC3Cu); } /* indirect call */
    }

loc_003BDC3F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BDC50
 * Original: 0x003BDC50 - 0x003BDC57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDC50(void)
{

loc_003BDC50: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BDC60
 * Original: 0x003BDC60 - 0x003BDC7F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDC60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BDC79; /* je: equal / zero */

loc_003BDC70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BDC76u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003BDC76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BDC79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BDC90
 * Original: 0x003BDC90 - 0x003BDCA2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDC90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDC9Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDC9E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDCB0
 * Original: 0x003BDCB0 - 0x003BDCB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDCB0(void)
{

loc_003BDCB0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BDCC0
 * Original: 0x003BDCC0 - 0x003BDCD2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDCC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDCC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDCCEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDCCE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDCE0
 * Original: 0x003BDCE0 - 0x003BDCF2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDCE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDCE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDCEEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDCEE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDD00
 * Original: 0x003BDD00 - 0x003BDD5B (91 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDD00: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BDD20u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003BDD20: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    MEM8(esi + 0xC) = LO8(eax);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x003BDD36u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003BDD36: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BDD80
 * Original: 0x003BDD80 - 0x003BDD99 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BDD80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    PUSH32(esp, 0x003BDD91u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003BDD91: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003BDDA0
 * Original: 0x003BDDA0 - 0x003BDDA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BDDA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDDA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDDB0
 * Original: 0x003BDDB0 - 0x003BDDDE (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDDB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    PUSH32(esp, 0x003BDDC1u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003BDDC1: ;
    ecx = esi;
    PUSH32(esp, 0x003BDDC8u); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003BDDC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BDDD8; /* je: equal / zero */

loc_003BDDCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BDDD5u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BDDD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BDDD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BDDF0
 * Original: 0x003BDDF0 - 0x003BDE02 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDDF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDDF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDDFEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDDFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDE10
 * Original: 0x003BDE10 - 0x003BDE22 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDE10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDE10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDE1Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDE1E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDE30
 * Original: 0x003BDE30 - 0x003BDE42 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDE30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDE3Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDE3E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDE50
 * Original: 0x003BDE50 - 0x003BDE62 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDE50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDE5Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDE5E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDE70
 * Original: 0x003BDE70 - 0x003BDE82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDE70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDE70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDE7Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDE7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDE90
 * Original: 0x003BDE90 - 0x003BDEA2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDE90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDE9Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDE9E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDEB0
 * Original: 0x003BDEB0 - 0x003BDEC2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDEB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BDEBEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BDEBE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDED0
 * Original: 0x003BDED0 - 0x003BDEFC (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDED0(void)
{

loc_003BDED0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x1A);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BDEF0u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003BDEF0: ;
    MEM32(esi) = 0x83489C;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BDF10
 * Original: 0x003BDF10 - 0x003BDF13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BDF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDF10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BDF20
 * Original: 0x003BDF20 - 0x003BDF26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDF20(void)
{

loc_003BDF20: ;
    eax = MEM32(0x8CDBF0);
    esp += 4; return; /* ret */

}

/**
 * sub_003BDF30
 * Original: 0x003BDF30 - 0x003BDF54 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDF30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83489C;
    PUSH32(esp, 0x003BDF3Eu); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003BDF3E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BDF4E; /* je: equal / zero */

loc_003BDF45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BDF4Bu); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BDF4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BDF4E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BDF60
 * Original: 0x003BDF60 - 0x003BDF67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDF60(void)
{

loc_003BDF60: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BDF70
 * Original: 0x003BDF70 - 0x003BDF79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDF70(void)
{

loc_003BDF70: ;
    eax = ecx;
    MEM32(eax) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BDF80
 * Original: 0x003BDF80 - 0x003BDF89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDF80(void)
{

loc_003BDF80: ;
    eax = ecx;
    MEM32(eax) = 0x8348B0;
    esp += 4; return; /* ret */

}

/**
 * sub_003BDF90
 * Original: 0x003BDF90 - 0x003BDF97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDF90(void)
{

loc_003BDF90: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BDFA0
 * Original: 0x003BDFA0 - 0x003BDFA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDFA0(void)
{

loc_003BDFA0: ;
    eax = 0x8348C4;
    esp += 4; return; /* ret */

}

/**
 * sub_003BDFB0
 * Original: 0x003BDFB0 - 0x003BDFB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDFB0(void)
{

loc_003BDFB0: ;
    eax = 0x12;
    esp += 4; return; /* ret */

}

/**
 * sub_003BDFC0
 * Original: 0x003BDFC0 - 0x003BDFDF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BDFC0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BDFD9; /* je: equal / zero */

loc_003BDFD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BDFD6u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BDFD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BDFD9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BDFF0
 * Original: 0x003BDFF0 - 0x003BDFF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDFF0(void)
{

loc_003BDFF0: ;
    eax = ecx;
    MEM32(eax) = 0x8348D4;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE000
 * Original: 0x003BE000 - 0x003BE007 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE000(void)
{

loc_003BE000: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE010
 * Original: 0x003BE010 - 0x003BE016 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE010(void)
{

loc_003BE010: ;
    eax = 0x8348E8;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE020
 * Original: 0x003BE020 - 0x003BE026 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE020(void)
{

loc_003BE020: ;
    eax = 0x13;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE030
 * Original: 0x003BE030 - 0x003BE04F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE030: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE049; /* je: equal / zero */

loc_003BE040: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE046u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE046: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE049: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE060
 * Original: 0x003BE060 - 0x003BE069 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE060(void)
{

loc_003BE060: ;
    eax = ecx;
    MEM32(eax) = 0x8348F8;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE070
 * Original: 0x003BE070 - 0x003BE077 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE070(void)
{

loc_003BE070: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE080
 * Original: 0x003BE080 - 0x003BE086 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE080(void)
{

loc_003BE080: ;
    eax = 0x83490C;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE090
 * Original: 0x003BE090 - 0x003BE096 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE090(void)
{

loc_003BE090: ;
    eax = 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE0A0
 * Original: 0x003BE0A0 - 0x003BE0BF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE0A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE0B9; /* je: equal / zero */

loc_003BE0B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE0B6u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE0B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE0B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE0D0
 * Original: 0x003BE0D0 - 0x003BE0D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE0D0(void)
{

loc_003BE0D0: ;
    eax = ecx;
    MEM32(eax) = 0x834920;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE0E0
 * Original: 0x003BE0E0 - 0x003BE0E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE0E0(void)
{

loc_003BE0E0: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE0F0
 * Original: 0x003BE0F0 - 0x003BE0F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE0F0(void)
{

loc_003BE0F0: ;
    eax = 0x834934;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE100
 * Original: 0x003BE100 - 0x003BE106 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE100(void)
{

loc_003BE100: ;
    eax = 0x15;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE110
 * Original: 0x003BE110 - 0x003BE12F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE110: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE129; /* je: equal / zero */

loc_003BE120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE126u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE126: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE129: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE140
 * Original: 0x003BE140 - 0x003BE149 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE140(void)
{

loc_003BE140: ;
    eax = ecx;
    MEM32(eax) = 0x834944;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE150
 * Original: 0x003BE150 - 0x003BE157 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE150(void)
{

loc_003BE150: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE160
 * Original: 0x003BE160 - 0x003BE166 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE160(void)
{

loc_003BE160: ;
    eax = 0x834958;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE170
 * Original: 0x003BE170 - 0x003BE176 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE170(void)
{

loc_003BE170: ;
    eax = 0x16;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE180
 * Original: 0x003BE180 - 0x003BE19F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE180: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE199; /* je: equal / zero */

loc_003BE190: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE196u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE196: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE199: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE1B0
 * Original: 0x003BE1B0 - 0x003BE1B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE1B0(void)
{

loc_003BE1B0: ;
    eax = ecx;
    MEM32(eax) = 0x83496C;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE1C0
 * Original: 0x003BE1C0 - 0x003BE1C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE1C0(void)
{

loc_003BE1C0: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE1D0
 * Original: 0x003BE1D0 - 0x003BE1D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE1D0(void)
{

loc_003BE1D0: ;
    eax = 0x834980;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE1E0
 * Original: 0x003BE1E0 - 0x003BE1E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE1E0(void)
{

loc_003BE1E0: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE1F0
 * Original: 0x003BE1F0 - 0x003BE20F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE1F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE209; /* je: equal / zero */

loc_003BE200: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE206u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE206: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE209: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE220
 * Original: 0x003BE220 - 0x003BE229 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE220(void)
{

loc_003BE220: ;
    eax = ecx;
    MEM32(eax) = 0x83498C;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE230
 * Original: 0x003BE230 - 0x003BE237 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE230(void)
{

loc_003BE230: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE240
 * Original: 0x003BE240 - 0x003BE246 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE240(void)
{

loc_003BE240: ;
    eax = 0x8349A0;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE250
 * Original: 0x003BE250 - 0x003BE256 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE250(void)
{

loc_003BE250: ;
    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE260
 * Original: 0x003BE260 - 0x003BE27F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE260: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE279; /* je: equal / zero */

loc_003BE270: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE276u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE276: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE279: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE290
 * Original: 0x003BE290 - 0x003BE299 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE290(void)
{

loc_003BE290: ;
    eax = ecx;
    MEM32(eax) = 0x8349AC;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE2A0
 * Original: 0x003BE2A0 - 0x003BE2A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE2A0(void)
{

loc_003BE2A0: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE2B0
 * Original: 0x003BE2B0 - 0x003BE2B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE2B0(void)
{

loc_003BE2B0: ;
    eax = 0x7DD1DC;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE2C0
 * Original: 0x003BE2C0 - 0x003BE2C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE2C0(void)
{

loc_003BE2C0: ;
    eax = 0xB;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE2D0
 * Original: 0x003BE2D0 - 0x003BE2EF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE2D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE2E9; /* je: equal / zero */

loc_003BE2E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE2E6u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE2E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE2E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE300
 * Original: 0x003BE300 - 0x003BE309 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE300(void)
{

loc_003BE300: ;
    eax = ecx;
    MEM32(eax) = 0x8349C0;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE310
 * Original: 0x003BE310 - 0x003BE317 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE310(void)
{

loc_003BE310: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE320
 * Original: 0x003BE320 - 0x003BE326 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE320(void)
{

loc_003BE320: ;
    eax = MEM32(0x8CDBC4);
    esp += 4; return; /* ret */

}

/**
 * sub_003BE330
 * Original: 0x003BE330 - 0x003BE336 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE330(void)
{

loc_003BE330: ;
    eax = 0xF;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE340
 * Original: 0x003BE340 - 0x003BE35F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE340: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE359; /* je: equal / zero */

loc_003BE350: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE356u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE356: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE359: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE370
 * Original: 0x003BE370 - 0x003BE379 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE370(void)
{

loc_003BE370: ;
    eax = ecx;
    MEM32(eax) = 0x8349D4;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE380
 * Original: 0x003BE380 - 0x003BE387 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE380(void)
{

loc_003BE380: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE390
 * Original: 0x003BE390 - 0x003BE396 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE390(void)
{

loc_003BE390: ;
    eax = MEM32(0x8CDC3C);
    esp += 4; return; /* ret */

}

/**
 * sub_003BE3A0
 * Original: 0x003BE3A0 - 0x003BE3A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE3A0(void)
{

loc_003BE3A0: ;
    eax = 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE3B0
 * Original: 0x003BE3B0 - 0x003BE3CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE3B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE3C9; /* je: equal / zero */

loc_003BE3C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE3C6u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE3C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE3C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE3E0
 * Original: 0x003BE3E0 - 0x003BE3E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE3E0(void)
{

loc_003BE3E0: ;
    eax = ecx;
    MEM32(eax) = 0x8349E8;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE3F0
 * Original: 0x003BE3F0 - 0x003BE3F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE3F0(void)
{

loc_003BE3F0: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE400
 * Original: 0x003BE400 - 0x003BE406 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE400(void)
{

loc_003BE400: ;
    eax = 0x8349FC;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE410
 * Original: 0x003BE410 - 0x003BE416 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE410(void)
{

loc_003BE410: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE420
 * Original: 0x003BE420 - 0x003BE43F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE420: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE439; /* je: equal / zero */

loc_003BE430: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE436u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE436: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE439: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE450
 * Original: 0x003BE450 - 0x003BE459 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE450(void)
{

loc_003BE450: ;
    eax = ecx;
    MEM32(eax) = 0x834A04;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE460
 * Original: 0x003BE460 - 0x003BE467 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE460(void)
{

loc_003BE460: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE470
 * Original: 0x003BE470 - 0x003BE475 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BE470: ;
    g_seh_ebp = ebp; sub_00022E2C(); return; /* tail jmp 0x00022E2C */

}

/**
 * sub_003BE480
 * Original: 0x003BE480 - 0x003BE486 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE480(void)
{

loc_003BE480: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE490
 * Original: 0x003BE490 - 0x003BE4AF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE490: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE4A9; /* je: equal / zero */

loc_003BE4A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE4A6u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE4A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE4A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE4C0
 * Original: 0x003BE4C0 - 0x003BE4C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE4C0(void)
{

loc_003BE4C0: ;
    eax = ecx;
    MEM32(eax) = 0x834A18;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE4D0
 * Original: 0x003BE4D0 - 0x003BE4D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE4D0(void)
{

loc_003BE4D0: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE4E0
 * Original: 0x003BE4E0 - 0x003BE4E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE4E0(void)
{

loc_003BE4E0: ;
    eax = 0x834A2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE4F0
 * Original: 0x003BE4F0 - 0x003BE4F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE4F0(void)
{

loc_003BE4F0: ;
    eax = 0x17;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE500
 * Original: 0x003BE500 - 0x003BE51F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE500: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE519; /* je: equal / zero */

loc_003BE510: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE516u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE516: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE519: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE530
 * Original: 0x003BE530 - 0x003BE539 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE530(void)
{

loc_003BE530: ;
    eax = ecx;
    MEM32(eax) = 0x834A44;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE540
 * Original: 0x003BE540 - 0x003BE547 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE540(void)
{

loc_003BE540: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE550
 * Original: 0x003BE550 - 0x003BE556 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE550(void)
{

loc_003BE550: ;
    eax = 0x834A58;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE560
 * Original: 0x003BE560 - 0x003BE566 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE560(void)
{

loc_003BE560: ;
    eax = 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE570
 * Original: 0x003BE570 - 0x003BE58F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE570: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE589; /* je: equal / zero */

loc_003BE580: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE586u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE586: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE589: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE5A0
 * Original: 0x003BE5A0 - 0x003BE5A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE5A0(void)
{

loc_003BE5A0: ;
    eax = ecx;
    MEM32(eax) = 0x834A74;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE5B0
 * Original: 0x003BE5B0 - 0x003BE5B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE5B0(void)
{

loc_003BE5B0: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE5C0
 * Original: 0x003BE5C0 - 0x003BE5C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE5C0(void)
{

loc_003BE5C0: ;
    eax = MEM32(0x8CDB9C);
    esp += 4; return; /* ret */

}

/**
 * sub_003BE5D0
 * Original: 0x003BE5D0 - 0x003BE5D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE5D0(void)
{

loc_003BE5D0: ;
    eax = 0x19;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE5E0
 * Original: 0x003BE5E0 - 0x003BE5FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE5E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE5F9; /* je: equal / zero */

loc_003BE5F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE5F6u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE5F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE5F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE610
 * Original: 0x003BE610 - 0x003BE619 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE610(void)
{

loc_003BE610: ;
    eax = ecx;
    MEM32(eax) = 0x834A88;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE620
 * Original: 0x003BE620 - 0x003BE627 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE620(void)
{

loc_003BE620: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE630
 * Original: 0x003BE630 - 0x003BE636 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE630(void)
{

loc_003BE630: ;
    eax = 0x834A9C;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE640
 * Original: 0x003BE640 - 0x003BE646 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE640(void)
{

loc_003BE640: ;
    eax = 0x1A;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE650
 * Original: 0x003BE650 - 0x003BE66F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE650: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BE669; /* je: equal / zero */

loc_003BE660: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE666u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE666: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE669: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE680
 * Original: 0x003BE680 - 0x003BE692 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE680: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BE68Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BE68E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BE6A0
 * Original: 0x003BE6A0 - 0x003BE6B2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE6A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BE6AEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BE6AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BE6C0
 * Original: 0x003BE6C0 - 0x003BE6D2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE6C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BE6CEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BE6CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BE6E0
 * Original: 0x003BE6E0 - 0x003BE6F2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE6E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BE6EEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BE6EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BE700
 * Original: 0x003BE700 - 0x003BE712 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BE70Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BE70E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BE720
 * Original: 0x003BE720 - 0x003BE781 (97 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE720: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BE740u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003BE740: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    MEM8(esi + 0xC) = LO8(eax);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x003BE756u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003BE756: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi) = 0x834AA8;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BE7A0
 * Original: 0x003BE7A0 - 0x003BE7A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BE7A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE7A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BE7B0
 * Original: 0x003BE7B0 - 0x003BE7B9 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE7B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BE7B0: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BE7C0
 * Original: 0x003BE7C0 - 0x003BE7C8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE7C0(void)
{

loc_003BE7C0: ;
    eax = 0x834ADC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE7D0
 * Original: 0x003BE7D0 - 0x003BE7D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE7D0(void)
{

loc_003BE7D0: ;
    eax = 0x15;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE7E0
 * Original: 0x003BE7E0 - 0x003BE7E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE7E0(void)
{

loc_003BE7E0: ;
    eax = 0x834AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE7F0
 * Original: 0x003BE7F0 - 0x003BE814 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE7F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834AA8;
    PUSH32(esp, 0x003BE7FEu); RECOMP_ABI_CALL(0x00035DA6u, sub_00035DA6); /* call 0x00035DA6 */

loc_003BE7FE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BE80E; /* je: equal / zero */

loc_003BE805: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE80Bu); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE80B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE80E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE820
 * Original: 0x003BE820 - 0x003BE83E (30 bytes, 10 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003BE820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BE820: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BE835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BE832u); } /* indirect call */
    }

loc_003BE835: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BE850
 * Original: 0x003BE850 - 0x003BE859 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE850(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BE850: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BE860
 * Original: 0x003BE860 - 0x003BE863 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE860(void)
{

loc_003BE860: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003BE870
 * Original: 0x003BE870 - 0x003BE87C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE870(void)
{

loc_003BE870: ;
    ecx = MEM32(ecx + 0x34);
    PUSH32(esp, 0x003BE878u); RECOMP_ABI_CALL(0x00027099u, sub_00027099); /* call 0x00027099 */

loc_003BE878: ;
    eax = MEM32(eax + 0x74);
    esp += 4; return; /* ret */

}

/**
 * sub_003BE880
 * Original: 0x003BE880 - 0x003BE892 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE880: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BE88Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BE88E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BE8A0
 * Original: 0x003BE8A0 - 0x003BE901 (97 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE8A0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BE8C0u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003BE8C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    MEM8(esi + 0xC) = LO8(eax);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x003BE8D6u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003BE8D6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi) = 0x834AEC;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BE920
 * Original: 0x003BE920 - 0x003BE923 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BE920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE920: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BE930
 * Original: 0x003BE930 - 0x003BE939 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE930(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BE930: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BE940
 * Original: 0x003BE940 - 0x003BE948 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE940(void)
{

loc_003BE940: ;
    eax = 0x8349FC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE950
 * Original: 0x003BE950 - 0x003BE956 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE950(void)
{

loc_003BE950: ;
    eax = 0x16;
    esp += 4; return; /* ret */

}
