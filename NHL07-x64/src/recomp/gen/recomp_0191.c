/**
 * nhl_07_recomp - Recompiled code chunk 191
 * Functions: 250 (0x003FCB70 - 0x00409820)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003FCB70
 * Original: 0x003FCB70 - 0x003FCCDE (366 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FCB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_003FCB70: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = esi + 0xC;
    edx = ecx;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x40);
    ebx = MEM32(edx);
    eax = esi + 0x18;
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    edi = MEM32(esp + 0x44);
    ebp = MEM32(edi);
    edx = esi + 0x24;
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, esi);
    edx = esp + 0x2C;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0x003FCC62u); RECOMP_ABI_CALL(0x005A0935u, sub_005A0935); /* call 0x005A0935 */

loc_003FCC62: ;
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x3C); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003FCD40
 * Original: 0x003FCD40 - 0x003FD36F (1583 bytes, 344 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FCD40(void)
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

loc_003FCD40: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x50);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x1C); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x20); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEM32(esp + 0x20) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7CEA20)); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x2C);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0xC);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    edx = MEM32(esp + 0x18);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x1C);
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x20);
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x38);
    xmm0 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 0x30) = xmm5.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = edx;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm7.f[0]; /* divss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    edx = MEM32(esp + 0x34);
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(esp + 0x38);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    edx = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 0x24) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEM32(esp + 0x28) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    eax = ecx + 0xC;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x40);
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm6.f[0]; /* divss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0xC); /* mulss */
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x3C);
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x30) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = edx;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = MEM32(esp + 0x3C);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edx = MEM32(esp + 0x40);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x30) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x34) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x38) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    eax = MEM32(esp + 0x3C);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    edx = ecx + 0x18;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = MEM32(esp + 0x3C);
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm5.f[0]; /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x3C);
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x30) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x34) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    edx = MEM32(esp + 0x3C);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x38) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    eax = MEM32(esp + 0x40);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x30) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    edx = MEM32(esp + 0x44);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x34) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    edx = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x44);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003FD500
 * Original: 0x003FD500 - 0x003FDD26 (2086 bytes, 449 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD500(void)
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

loc_003FD500: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x5C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x1C); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x20); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEM32(esp + 0x24) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEM32(esp + 0x28) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    edx = MEM32(esp + 0x30);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEM32(esp + 0x24) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    edx = MEM32(esp + 0x34);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x34);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x38);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x30);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    edx = MEM32(esp + 0x30);
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x30);
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x34);
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x38);
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x44);
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x60) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x60) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x60) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x60) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm6.f[0]; /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] / xmm7.f[0]; /* divss */
    MEMF(esp + 0x58) = xmm6.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x44);
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0xC) = eax;
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esp + 0x44);
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x10) = edx;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edx = MEM32(esp + 0x3C);
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = MEM32(esp + 0x40);
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(esp + 0xC) = edx;
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0xC); /* addss */
    edx = MEM32(esp + 0x44);
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x10); /* addss */
    edx = MEM32(esp + 0x3C);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    eax = ecx + 0xC;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 8) = edx;
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] / xmm7.f[0]; /* divss */
    MEMF(esp + 0x58) = xmm6.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x48);
    MEMF(esp + 0x48) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x50);
    MEMF(esp + 0x4C) = xmm5.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x50);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x40) = eax;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    eax = MEM32(esp + 0x48);
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x44) = edx;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    edx = MEM32(esp + 0x4C);
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x3C) = eax;
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x3C); /* addss */
    eax = MEM32(esp + 0x50);
    MEMF(esp + 0x48) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x40) = edx;
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x40); /* addss */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x48);
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x44); /* addss */
    edx = ecx + 0x18;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(edx + 4) = eax;
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEM32(edx + 8) = eax;
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    MEMF(esp + 0x4C) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x4C);
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    edx = MEM32(esp + 0x50);
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] / xmm7.f[0]; /* divss */
    MEMF(esp + 0x58) = xmm6.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x48) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x48);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x50);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x40) = edx;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    edx = MEM32(esp + 0x48);
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x44) = eax;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x3C) = edx;
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x3C); /* addss */
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x48) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x40); /* addss */
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x44); /* addss */
    eax = ecx + 0x24;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    MEMF(esp + 0x50) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x4C);
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] / xmm5.f[0]; /* divss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x50);
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x4C);
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x40) = eax;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    edx = MEM32(esp + 0x4C);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x3C) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    eax = MEM32(esp + 0x50);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x40) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    edx = MEM32(esp + 0x48);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x44) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    eax = MEM32(esp + 0x4C);
    MEM32(ecx) = edx;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003FDF30
 * Original: 0x003FDF30 - 0x003FE18C (604 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FDF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003FDF30: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xC); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x10); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x14); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xC); /* subss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x10); /* subss */
    MEM32(esp + 4) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x14); /* subss */
    MEM32(esp + 8) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x18); /* subss */
    MEM32(esp + 0xC) = esi;
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x1C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x20); /* subss */
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x24); /* subss */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x28); /* subss */
    MEM32(esp + 0x28) = esi;
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x2C); /* subss */
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    MEM32(esp + 0x30) = esi;
    esi = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    MEM32(esp + 0x34) = esi;
    esi = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x38) = esi;
    esi = MEM32(esp + 0x18);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x3C) = esi;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE187; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FE095: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x18); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x1C); /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x20); /* subss */
    MEM32(esp + 4) = esi;
    esi = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 8) = esi;
    esi = MEM32(esp + 0x24);
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 8); /* mulss */
    MEM32(esp + 0xC) = esi;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE187; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FE10D: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x28); /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x2C); /* subss */
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 8) = edx;
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 8); /* mulss */
    MEM32(esp + 0xC) = ecx;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE187; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FE185: ;
    SET_LO8(eax, 1);

loc_003FE187: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FE230
 * Original: 0x003FE230 - 0x003FE3E8 (440 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_003FE230: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003FE3E2; /* jnp: not parity */

loc_003FE2C7: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm6 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    MEM32(esp + 8) = eax;
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE3E2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm5.f[0]) */

loc_003FE341: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE3E2; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FE352: ;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(esp) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp); /* addss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEM32(esp + 4) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = esi;
    PUSH32(esp, 0x003FE3DAu); RECOMP_ABI_CALL(0x0001B875u, sub_0001B875); /* call 0x0001B875 */

loc_003FE3DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003FE3E2: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FE460
 * Original: 0x003FE460 - 0x003FE618 (440 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_003FE460: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003FE612; /* jnp: not parity */

loc_003FE4F7: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm6 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    MEM32(esp + 8) = eax;
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE612; /* jb: below (unsigned <) (xmm0.f[0] vs xmm5.f[0]) */

loc_003FE571: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE612; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003FE582: ;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(esp) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp); /* addss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEM32(esp + 4) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = esi;
    PUSH32(esp, 0x003FE60Au); RECOMP_ABI_CALL(0x000290ECu, sub_000290EC); /* call 0x000290EC */

loc_003FE60A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003FE612: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FE690
 * Original: 0x003FE690 - 0x003FE77F (239 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE690(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FE690: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x10));
    xmm4 = XMM_SCALAR(MEMF(0x7FE2BC)); /* movss */
    SET_LO16(eax, LO16(edx));
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    MEM16(ecx + 0x12) = 3;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003FE763; /* jge: greater or equal (signed >=) */

loc_003FE6C0: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */

loc_003FE6C3: ;
    esi = SX16(LO16(edx));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0));
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003FE708; /* je: equal / zero */

loc_003FE6CB: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003FE6F2; /* je: equal / zero */

loc_003FE6CE: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003FE6DC; /* je: equal / zero */

loc_003FE6D1: ;
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm1 = xmm0; /* movaps */
    goto loc_003FE72D;

loc_003FE6DC: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x28); /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x38); /* addss */
    goto loc_003FE71C;

loc_003FE6F2: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x24); /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x34); /* addss */
    goto loc_003FE71C;

loc_003FE708: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x20); /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x30); /* addss */

loc_003FE71C: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE726; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_003FE721: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FE72D;

loc_003FE726: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FE72D: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE769; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FE736: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE74E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_003FE73B: ;
    xmm4 = xmm1; /* movaps */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    MEM32(ecx + 0xC) = 3;
    MEM16(ecx + 0x10) = LO16(edx);

loc_003FE74E: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003FE763; /* jne: not equal / not zero */

loc_003FE756: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    _cf = (int)(_fa < _fb);
    edx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003FE6C3; /* jl: less (signed <) */

loc_003FE763: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003FE769: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 0x10) = LO16(edx);
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    MEM32(ecx + 0xC) = 4;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE7C0
 * Original: 0x003FE7C0 - 0x003FE993 (467 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE7C0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FE7C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x9092B4);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003FE7F1u); RECOMP_ABI_CALL(0x00027D78u, sub_00027D78); /* call 0x00027D78 */

loc_003FE7F1: ;
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(eax + 0x10));
    MEM16(eax + 0x12) = 3;
    ecx = ebx;
    SET_LO16(edx, LO16(ecx));
    _cf = (int)((LO16(edx)) != 0);
    SET_LO16(edx, (uint32_t)(-(int32_t)LO16(edx)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 3 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003FE96F; /* jge: greater or equal (signed >=) */

loc_003FE816: ;
    ebp = SX16(LO16(ecx));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(0));
    ebp = ebp - 0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003FE886; /* je: equal / zero */

loc_003FE81E: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003FE85D; /* je: equal / zero */

loc_003FE821: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003FE8B9; /* jne: not equal / not zero */

loc_003FE828: ;
    ebp = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x28); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x38); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    goto loc_003FE8CB;

loc_003FE85D: ;
    ebp = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x34); /* addss */
    goto loc_003FE8AD;

loc_003FE886: ;
    ebp = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x20); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */

loc_003FE8AD: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_003FE8B9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_003FE8CB: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE8E8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_003FE8DA: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003FE95A; /* jne: not equal / not zero */

loc_003FE8DF: ;
    MEM32(eax + 0xC) = 2;
    goto loc_003FE95A;

loc_003FE8E8: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE8F2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_003FE8ED: ;
    xmm3 = xmm0; /* movaps */
    goto loc_003FE8F9;

loc_003FE8F2: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_003FE8F9: ;
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE921; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_003FE8FE: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003FE95A; /* jne: not equal / not zero */

loc_003FE903: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE914; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_003FE908: ;
    xmm2 = xmm0; /* movaps */
    MEM32(eax + 0xC) = 1;
    goto loc_003FE951;

loc_003FE914: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEM32(eax + 0xC) = 1;
    goto loc_003FE951;

loc_003FE921: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE92B; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003FE926: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003FE932;

loc_003FE92B: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_003FE932: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE979; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_003FE937: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003FE95A; /* jne: not equal / not zero */

loc_003FE93C: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FE946; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003FE941: ;
    xmm2 = xmm1; /* movaps */
    goto loc_003FE94A;

loc_003FE946: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_003FE94A: ;
    MEM32(eax + 0xC) = 3;

loc_003FE951: ;
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */

loc_003FE95A: ;
    SET_LO8(ecx, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003FE96F; /* jne: not equal / not zero */

loc_003FE962: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 3 (16-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003FE816; /* jl: less (signed <) */

loc_003FE96F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003FE979: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(eax + 0x10) = LO16(ecx);
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEM32(eax + 0xC) = 4;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003FEA10
 * Original: 0x003FEA10 - 0x003FF54C (2876 bytes, 739 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003FEA10(void)
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

loc_003FEA10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x114));
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    ebx = MEM32(esi + 4);
    xmm1 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x8C, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x6C); /* movaps */
    PUSH32(esp, edi);
    ecx = esp + 0xA0;
    MEM32(esp + 0x8C) = eax;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003FEAADu); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003FEAAD: ;
    eax = ebx + 0x40;
    edx = esp + 0x28;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003FEACE; /* je: equal / zero */

loc_003FEABB: ;
    ecx = edx;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003FEACCu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003FEACC: ;
    goto loc_003FEAFC;

loc_003FEACE: ;
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    eax = ebx + 0x40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003FEAE7u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003FEAE7: ;
    ecx = 0x10;
    esi = esp + 0xEC;
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
    esi = MEM32(ebp + 8);

loc_003FEAFC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7FE2BC)); /* movss */
    MEM16(esi + 0x12) = 3;
    SET_LO16(esi, MEM16(esi + 0x10));
    SET_LO16(edx, LO16(esi));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO16(edx)) != 0);
    SET_LO16(edx, (uint32_t)(-(int32_t)LO16(edx)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003FF52A; /* jge: greater or equal (signed >=) */

loc_003FEB29: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    edi = MEM32(ebp + 8);
    eax = MEM32(esp + 0x8C);

loc_003FEB4B: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = SX16(LO16(esi));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003FF4CC; /* ja: above (unsigned >) */

loc_003FEB69: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3FF54C); /* switch: 15 entries, 15 targets */
    if (_jt == 0x003FEB70u) goto loc_003FEB70;
    if (_jt == 0x003FEBEEu) goto loc_003FEBEE;
    if (_jt == 0x003FEC74u) goto loc_003FEC74;
    if (_jt == 0x003FECF1u) goto loc_003FECF1;
    if (_jt == 0x003FED91u) goto loc_003FED91;
    if (_jt == 0x003FEE34u) goto loc_003FEE34;
    if (_jt == 0x003FEED1u) goto loc_003FEED1;
    if (_jt == 0x003FEF7Eu) goto loc_003FEF7E;
    if (_jt == 0x003FF02Bu) goto loc_003FF02B;
    if (_jt == 0x003FF0D0u) goto loc_003FF0D0;
    if (_jt == 0x003FF17Du) goto loc_003FF17D;
    if (_jt == 0x003FF22Au) goto loc_003FF22A;
    if (_jt == 0x003FF2CFu) goto loc_003FF2CF;
    if (_jt == 0x003FF373u) goto loc_003FF373;
    if (_jt == 0x003FF417u) goto loc_003FF417;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003FEB70: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEB88; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003FEB83: ;
    xmm2 = xmm3; /* movaps */
    goto loc_003FEB8F;

loc_003FEB88: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */

loc_003FEB8F: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEB9F; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003FEB9A: ;
    xmm1 = xmm3; /* movaps */
    goto loc_003FEBA6;

loc_003FEB9F: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_003FEBA6: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEBB6; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003FEBB1: ;
    xmm0 = xmm3; /* movaps */
    goto loc_003FEBBA;

loc_003FEBB6: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_003FEBBA: ;
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    goto loc_003FF4CC;

loc_003FEBEE: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEC0C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEC07: ;
    xmm3 = xmm0; /* movaps */
    goto loc_003FEC15;

loc_003FEC0C: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x30); /* subss */

loc_003FEC15: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEC25; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEC20: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FEC2C;

loc_003FEC25: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FEC2C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEC3C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEC37: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FEC40;

loc_003FEC3C: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FEC40: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    goto loc_003FF4CC;

loc_003FEC74: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEC8F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEC87: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    goto loc_003FEC98;

loc_003FEC8F: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x40); /* subss */

loc_003FEC98: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FECA8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FECA3: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FECAF;

loc_003FECA8: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FECAF: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FECB9; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_003FECB4: ;
    xmm1 = xmm7; /* movaps */
    goto loc_003FECBD;

loc_003FECB9: ;
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */

loc_003FECBD: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    goto loc_003FF4CC;

loc_003FECF1: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FED01; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FECF9: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    goto loc_003FED0A;

loc_003FED01: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x20); /* subss */

loc_003FED0A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FED1A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FED15: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FED21;

loc_003FED1A: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FED21: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FED31; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FED2C: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FED35;

loc_003FED31: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FED35: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x44)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_003FF4C6;

loc_003FED91: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEDA4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FED9F: ;
    xmm3 = xmm0; /* movaps */
    goto loc_003FEDAD;

loc_003FEDA4: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x24); /* subss */

loc_003FEDAD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEDBD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEDB8: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FEDC4;

loc_003FEDBD: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FEDC4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEDD4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEDCF: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FEDD8;

loc_003FEDD4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FEDD8: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x54)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_003FF4C6;

loc_003FEE34: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEE47; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEE42: ;
    xmm3 = xmm0; /* movaps */
    goto loc_003FEE50;

loc_003FEE47: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x28); /* subss */

loc_003FEE50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEE60; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEE5B: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FEE67;

loc_003FEE60: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FEE67: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEE71; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_003FEE6C: ;
    xmm1 = xmm7; /* movaps */
    goto loc_003FEE75;

loc_003FEE71: ;
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */

loc_003FEE75: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_003FF4C6;

loc_003FEED1: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEEE1; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEED9: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    goto loc_003FEEEA;

loc_003FEEE1: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x40); /* subss */

loc_003FEEEA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEEFA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEEF5: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FEF01;

loc_003FEEFA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FEF01: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEF2D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEF28: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FEF36;

loc_003FEF2D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */

loc_003FEF36: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEF46; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEF41: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FEF4A;

loc_003FEF46: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FEF4A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    goto loc_003FF4C2;

loc_003FEF7E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEF8E; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_003FEF86: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    goto loc_003FEF97;

loc_003FEF8E: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x44); /* subss */

loc_003FEF97: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEFA7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEFA2: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FEFAE;

loc_003FEFA7: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FEFAE: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEFDA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEFD5: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FEFE3;

loc_003FEFDA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */

loc_003FEFE3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FEFF3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FEFEE: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FEFF7;

loc_003FEFF3: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FEFF7: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    goto loc_003FF4C2;

loc_003FF02B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF038; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_003FF033: ;
    xmm3 = xmm7; /* movaps */
    goto loc_003FF03F;

loc_003FF038: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */

loc_003FF03F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF04F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF04A: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF056;

loc_003FF04F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FF056: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF082; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF07D: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF08B;

loc_003FF082: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */

loc_003FF08B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF09B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF096: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FF09F;

loc_003FF09B: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FF09F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    goto loc_003FF4C2;

loc_003FF0D0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF0E0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF0D8: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    goto loc_003FF0E9;

loc_003FF0E0: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x40); /* subss */

loc_003FF0E9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF0F9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF0F4: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF100;

loc_003FF0F9: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FF100: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF12C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF127: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF135;

loc_003FF12C: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x38); /* subss */

loc_003FF135: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF145; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF140: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FF149;

loc_003FF145: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FF149: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    goto loc_003FF4C2;

loc_003FF17D: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF18D; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_003FF185: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    goto loc_003FF196;

loc_003FF18D: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x44); /* subss */

loc_003FF196: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF1A6; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF1A1: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF1AD;

loc_003FF1A6: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FF1AD: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF1D9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF1D4: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF1E2;

loc_003FF1D9: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x38); /* subss */

loc_003FF1E2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF1F2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF1ED: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FF1F6;

loc_003FF1F2: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FF1F6: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    goto loc_003FF4C2;

loc_003FF22A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF237; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_003FF232: ;
    xmm3 = xmm7; /* movaps */
    goto loc_003FF23E;

loc_003FF237: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */

loc_003FF23E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF24E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF249: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF255;

loc_003FF24E: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FF255: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF281; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF27C: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF28A;

loc_003FF281: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x34); /* subss */

loc_003FF28A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF29A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF295: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FF29E;

loc_003FF29A: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FF29E: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    goto loc_003FF4C2;

loc_003FF2CF: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF2E2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF2DD: ;
    xmm3 = xmm0; /* movaps */
    goto loc_003FF2EB;

loc_003FF2E2: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x30); /* subss */

loc_003FF2EB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF2FB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF2F6: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF302;

loc_003FF2FB: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FF302: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF328; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_003FF323: ;
    xmm2 = xmm7; /* movaps */
    goto loc_003FF32F;

loc_003FF328: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_003FF32F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF33F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF33A: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FF343;

loc_003FF33F: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FF343: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    goto loc_003FF4BE;

loc_003FF373: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF386; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF381: ;
    xmm3 = xmm0; /* movaps */
    goto loc_003FF38F;

loc_003FF386: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x34); /* subss */

loc_003FF38F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF39F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF39A: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF3A6;

loc_003FF39F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FF3A6: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF3CC; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_003FF3C7: ;
    xmm2 = xmm7; /* movaps */
    goto loc_003FF3D3;

loc_003FF3CC: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_003FF3D3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF3E3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF3DE: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FF3E7;

loc_003FF3E3: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FF3E7: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    goto loc_003FF4BE;

loc_003FF417: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF42A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF425: ;
    xmm3 = xmm0; /* movaps */
    goto loc_003FF433;

loc_003FF42A: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x38); /* subss */

loc_003FF433: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF443; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF43E: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF44A;

loc_003FF443: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FF44A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF476; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF471: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FF47F;

loc_003FF476: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x44); /* subss */

loc_003FF47F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF48F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FF48A: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FF493;

loc_003FF48F: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FF493: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */

loc_003FF4BE: ;
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */

loc_003FF4C2: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_003FF4C6: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_003FF4CC: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF51D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_003FF4E0: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF4F0; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_003FF4EB: ;
    xmm0 = xmm3; /* movaps */
    goto loc_003FF4F7;

loc_003FF4F0: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_003FF4F7: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF533; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_003FF500: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x6C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF51D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x6C)) */

loc_003FF507: ;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xC) = 3;
    MEM16(edi + 0x10) = LO16(esi);

loc_003FF51D: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xF (16-bit) */
    _cf = (int)(_fa < _fb);
    esi = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003FEB4B; /* jl: less (signed <) */

loc_003FF52A: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003FF533: ;
    MEM16(edi + 0x10) = LO16(esi);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xC) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FF870
 * Original: 0x003FF870 - 0x00400799 (3881 bytes, 949 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003FF870(void)
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

loc_003FF870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x164));
    esp = esp - 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(ebx + 0x20); /* movaps */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x2C, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0xF0;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    PUSH32(esp, eax);
    ecx = ebx + 0x40;
    PUSH32(esp, ecx);
    MEM32(esp + 0x94) = esi;
    XMM_STORE(esp + 0x28, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003FF904u); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003FF904: ;
    edx = esp + 0x48;
    eax = esi + 0x40;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = esp + 0xF0;
    if (CMP_EQ(_fa, _fb)) goto loc_003FF927; /* je: equal / zero */

loc_003FF919: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003FF925u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003FF925: ;
    goto loc_003FF94F;

loc_003FF927: ;
    ecx = esp + 0x130;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003FF936u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003FF936: ;
    ecx = 0x10;
    esi = esp + 0x13C;
    edi = esp + 0x4C;
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
    esi = MEM32(esp + 0x98);

loc_003FF94F: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003FF968u); RECOMP_ABI_CALL(0x0059F359u, sub_0059F359); /* call 0x0059F359 */

loc_003FF968: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(ecx + 0x12) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_003FF9D5; /* je: equal / zero */

loc_003FF97B: ;
    SET_LO16(edx, MEM16(ecx + 0x10));
    SET_LO16(eax, LO16(edx));
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xF (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x8C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00400777; /* jge: greater or equal (signed >=) */

loc_003FF998: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */

loc_003FF9B0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    eax = SX16(LO16(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_004006E6; /* ja: above (unsigned >) */

loc_003FF9CE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x40079C); /* switch: 15 entries, 15 targets */
    if (_jt == 0x003FF9E0u) goto loc_003FF9E0;
    if (_jt == 0x003FFA64u) goto loc_003FFA64;
    if (_jt == 0x003FFAEEu) goto loc_003FFAEE;
    if (_jt == 0x003FFB72u) goto loc_003FFB72;
    if (_jt == 0x003FFCA7u) goto loc_003FFCA7;
    if (_jt == 0x003FFDB7u) goto loc_003FFDB7;
    if (_jt == 0x003FFF12u) goto loc_003FFF12;
    if (_jt == 0x003FFFF2u) goto loc_003FFFF2;
    if (_jt == 0x004000EAu) goto loc_004000EA;
    if (_jt == 0x004001ABu) goto loc_004001AB;
    if (_jt == 0x00400291u) goto loc_00400291;
    if (_jt == 0x0040034Fu) goto loc_0040034F;
    if (_jt == 0x0040044Au) goto loc_0040044A;
    if (_jt == 0x00400523u) goto loc_00400523;
    if (_jt == 0x004005E7u) goto loc_004005E7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003FF9D5: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x8C) = edx;
    goto loc_003FF998;

loc_003FF9E0: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FF9F8; /* jb: below (unsigned <) (xmm4.f[0] vs xmm0.f[0]) */

loc_003FF9F3: ;
    xmm2 = xmm4; /* movaps */
    goto loc_003FF9FF;

loc_003FF9F8: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_003FF9FF: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFA09; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003FFA04: ;
    xmm1 = xmm3; /* movaps */
    goto loc_003FFA10;

loc_003FFA09: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_003FFA10: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFA20; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003FFA1B: ;
    xmm0 = xmm3; /* movaps */
    goto loc_003FFA24;

loc_003FFA20: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_003FFA24: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    goto loc_004006E0;

loc_003FFA64: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFA7C; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_003FFA77: ;
    xmm3 = xmm6; /* movaps */
    goto loc_003FFA83;

loc_003FFA7C: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */

loc_003FFA83: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFA93; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFA8E: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FFA9A;

loc_003FFA93: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FFA9A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFAAA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFAA5: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FFAAE;

loc_003FFAAA: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FFAAE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    goto loc_004006E0;

loc_003FFAEE: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFB06; /* jb: below (unsigned <) (xmm5.f[0] vs xmm1.f[0]) */

loc_003FFB01: ;
    xmm3 = xmm5; /* movaps */
    goto loc_003FFB0D;

loc_003FFB06: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */

loc_003FFB0D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFB1D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFB18: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FFB24;

loc_003FFB1D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FFB24: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFB34; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFB2F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FFB38;

loc_003FFB34: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FFB38: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    goto loc_004006E0;

loc_003FFB72: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFB7F; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_003FFB7A: ;
    xmm3 = xmm4; /* movaps */
    goto loc_003FFB86;

loc_003FFB7F: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */

loc_003FFB86: ;
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFB90; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_003FFB8B: ;
    xmm2 = xmm6; /* movaps */
    goto loc_003FFB97;

loc_003FFB90: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */

loc_003FFB97: ;
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFBA1; /* jb: below (unsigned <) (xmm5.f[0] vs xmm1.f[0]) */

loc_003FFB9C: ;
    xmm1 = xmm5; /* movaps */
    goto loc_003FFBA5;

loc_003FFBA1: ;
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */

loc_003FFBA5: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm5.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x90); /* movaps */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_004006DA;

loc_003FFCA7: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFCB7; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003FFCAF: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    goto loc_003FFCC0;

loc_003FFCB7: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x50); /* subss */

loc_003FFCC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFCD0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFCCB: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FFCD7;

loc_003FFCD0: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FFCD7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFCE7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFCE2: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FFCEB;

loc_003FFCE7: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FFCEB: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xB0); /* movaps */
    XMM_STORE(esp + 0xE0, xmm0); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xE0)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xEC)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xE8)); /* movss */
    goto loc_003FFEC5;

loc_003FFDB7: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFDCA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFDC5: ;
    xmm3 = xmm0; /* movaps */
    goto loc_003FFDD3;

loc_003FFDCA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x60); /* subss */

loc_003FFDD3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFDE3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFDDE: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FFDEA;

loc_003FFDE3: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FFDEA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFDFA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFDF5: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FFDFE;

loc_003FFDFA: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FFDFE: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xD0); /* movaps */
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */

loc_003FFEC5: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(edi); /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_004006E0;

loc_003FFF12: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFF1F; /* jb: below (unsigned <) (xmm5.f[0] vs xmm1.f[0]) */

loc_003FFF1A: ;
    xmm3 = xmm5; /* movaps */
    goto loc_003FFF26;

loc_003FFF1F: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */

loc_003FFF26: ;
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFF30; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_003FFF2B: ;
    xmm2 = xmm6; /* movaps */
    goto loc_003FFF37;

loc_003FFF30: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */

loc_003FFF37: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFF74; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFF6F: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FFF7B;

loc_003FFF74: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FFF7B: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFF9C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFF97: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FFFA0;

loc_003FFF9C: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FFFA0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

loc_003FFFF2: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400002; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_003FFFFA: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_0040000B;

loc_00400002: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x58); /* subss */

loc_0040000B: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040001B; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00400016: ;
    xmm2 = xmm7; /* movaps */
    goto loc_00400022;

loc_0040001B: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_00400022: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400060; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040005B: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400067;

loc_00400060: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400067: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400085; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400080: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400089;

loc_00400085: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400089: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */

loc_004000AB: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

loc_004000EA: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004000FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004000F2: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_00400103;

loc_004000FA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x68); /* subss */

loc_00400103: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400113; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040010E: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040011A;

loc_00400113: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040011A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400158; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400153: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040015F;

loc_00400158: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040015F: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400180; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040017B: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400184;

loc_00400180: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400184: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_004000AB;

loc_004001AB: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004001B8; /* jb: below (unsigned <) (xmm5.f[0] vs xmm1.f[0]) */

loc_004001B3: ;
    xmm3 = xmm5; /* movaps */
    goto loc_004001BF;

loc_004001B8: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */

loc_004001BF: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004001C9; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_004001C4: ;
    xmm2 = xmm4; /* movaps */
    goto loc_004001D0;

loc_004001C9: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_004001D0: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040020D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400208: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400214;

loc_0040020D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400214: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400235; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400230: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400239;

loc_00400235: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400239: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

loc_00400291: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002A1; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00400299: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_004002AA;

loc_004002A1: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x58); /* subss */

loc_004002AA: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002BA; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_004002B5: ;
    xmm2 = xmm7; /* movaps */
    goto loc_004002C1;

loc_004002BA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_004002C1: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002FF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004002FA: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400306;

loc_004002FF: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400306: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400324; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040031F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400328;

loc_00400324: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400328: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_00400408;

loc_0040034F: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040035F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400357: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_00400368;

loc_0040035F: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x68); /* subss */

loc_00400368: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400378; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00400373: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040037F;

loc_00400378: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040037F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003BD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003B8: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004003C4;

loc_004003BD: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004003C4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003E2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003DD: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004003E6;

loc_004003E2: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004003E6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */

loc_00400408: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

loc_0040044A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400457; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_00400452: ;
    xmm3 = xmm6; /* movaps */
    goto loc_0040045E;

loc_00400457: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */

loc_0040045E: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400468; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_00400463: ;
    xmm2 = xmm4; /* movaps */
    goto loc_0040046F;

loc_00400468: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_0040046F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004AC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004A7: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004004B3;

loc_004004AC: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004004B3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004D4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004CF: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004004D8;

loc_004004D4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004004D8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    goto loc_004006D0;

loc_00400523: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400536; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400531: ;
    xmm3 = xmm0; /* movaps */
    goto loc_0040053F;

loc_00400536: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x54); /* subss */

loc_0040053F: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040054F; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040054A: ;
    xmm2 = xmm7; /* movaps */
    goto loc_00400556;

loc_0040054F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_00400556: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400594; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040058F: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040059B;

loc_00400594: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040059B: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005BC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005B7: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004005C0;

loc_004005BC: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004005C0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    goto loc_004006A3;

loc_004005E7: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005F5: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400603;

loc_004005FA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x64); /* subss */

loc_00400603: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400613; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040060E: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040061A;

loc_00400613: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040061A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400658; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400653: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040065F;

loc_00400658: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040065F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040067D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400678: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400681;

loc_0040067D: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400681: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */

loc_004006A3: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */

loc_004006D0: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_004006DA: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_004006E0: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_004006E6: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040075E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_004006FA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400721; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00400712: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_00400718: ;
    MEM32(ecx + 0xC) = 2;
    goto loc_0040075E;

loc_00400721: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040072B; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400726: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00400732;

loc_0040072B: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00400732: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400780; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00400737: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_0040073D: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400747; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400742: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0040074E;

loc_00400747: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0040074E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xC) = 3;

loc_0040075E: ;
    edx = MEM32(esp + 0x8C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xF (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x8C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003FF9B0; /* jl: less (signed <) */

loc_00400777: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00400780: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 0x10) = LO16(edx);
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    MEM32(ecx + 0xC) = 4;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FFED0
 * Original: 0x003FFED0 - 0x00400799 (2249 bytes, 578 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FFED0(void)
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

loc_003FFED0: ;
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFF1F; /* jb: below (unsigned <) (xmm5.f[0] vs xmm1.f[0]) */

loc_003FFF1A: ;
    xmm3 = xmm5; /* movaps */
    goto loc_003FFF26;

loc_003FFF1F: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */

loc_003FFF26: ;
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFF30; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_003FFF2B: ;
    xmm2 = xmm6; /* movaps */
    goto loc_003FFF37;

loc_003FFF30: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */

loc_003FFF37: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFF74; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFF6F: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003FFF7B;

loc_003FFF74: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_003FFF7B: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003FFF9C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003FFF97: ;
    xmm1 = xmm0; /* movaps */
    goto loc_003FFFA0;

loc_003FFF9C: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003FFFA0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400002; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_003FFFFA: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_0040000B;

loc_00400002: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x58); /* subss */

loc_0040000B: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040001B; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00400016: ;
    xmm2 = xmm7; /* movaps */
    goto loc_00400022;

loc_0040001B: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_00400022: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400060; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040005B: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400067;

loc_00400060: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400067: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400085; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400080: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400089;

loc_00400085: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400089: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */

loc_004000AB: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004000FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004000F2: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_00400103;

loc_004000FA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x68); /* subss */

loc_00400103: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400113; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040010E: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040011A;

loc_00400113: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040011A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400158; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400153: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040015F;

loc_00400158: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040015F: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400180; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040017B: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400184;

loc_00400180: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400184: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_004000AB;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004001B8; /* jb: below (unsigned <) (xmm5.f[0] vs xmm1.f[0]) */

loc_004001B3: ;
    xmm3 = xmm5; /* movaps */
    goto loc_004001BF;

loc_004001B8: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */

loc_004001BF: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004001C9; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_004001C4: ;
    xmm2 = xmm4; /* movaps */
    goto loc_004001D0;

loc_004001C9: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_004001D0: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040020D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400208: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400214;

loc_0040020D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400214: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400235; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400230: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400239;

loc_00400235: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400239: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002A1; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00400299: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_004002AA;

loc_004002A1: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x58); /* subss */

loc_004002AA: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002BA; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_004002B5: ;
    xmm2 = xmm7; /* movaps */
    goto loc_004002C1;

loc_004002BA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_004002C1: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002FF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004002FA: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400306;

loc_004002FF: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400306: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400324; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040031F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400328;

loc_00400324: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400328: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_00400408;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040035F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400357: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_00400368;

loc_0040035F: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x68); /* subss */

loc_00400368: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400378; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00400373: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040037F;

loc_00400378: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040037F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003BD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003B8: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004003C4;

loc_004003BD: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004003C4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003E2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003DD: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004003E6;

loc_004003E2: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004003E6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */

loc_00400408: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400457; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_00400452: ;
    xmm3 = xmm6; /* movaps */
    goto loc_0040045E;

loc_00400457: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */

loc_0040045E: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400468; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_00400463: ;
    xmm2 = xmm4; /* movaps */
    goto loc_0040046F;

loc_00400468: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_0040046F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004AC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004A7: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004004B3;

loc_004004AC: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004004B3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004D4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004CF: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004004D8;

loc_004004D4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004004D8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    goto loc_004006D0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400536; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400531: ;
    xmm3 = xmm0; /* movaps */
    goto loc_0040053F;

loc_00400536: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x54); /* subss */

loc_0040053F: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040054F; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040054A: ;
    xmm2 = xmm7; /* movaps */
    goto loc_00400556;

loc_0040054F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_00400556: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400594; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040058F: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040059B;

loc_00400594: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040059B: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005BC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005B7: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004005C0;

loc_004005BC: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004005C0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    goto loc_004006A3;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005F5: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400603;

loc_004005FA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x64); /* subss */

loc_00400603: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400613; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040060E: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040061A;

loc_00400613: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040061A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400658; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400653: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040065F;

loc_00400658: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040065F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040067D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400678: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400681;

loc_0040067D: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400681: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */

loc_004006A3: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */

loc_004006D0: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_004006E0: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040075E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_004006FA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400721; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00400712: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_00400718: ;
    MEM32(ecx + 0xC) = 2;
    goto loc_0040075E;

loc_00400721: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040072B; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400726: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00400732;

loc_0040072B: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00400732: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400780; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00400737: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_0040073D: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400747; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400742: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0040074E;

loc_00400747: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0040074E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xC) = 3;

loc_0040075E: ;
    edx = MEM32(esp + 0x8C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xF (16-bit) */
    MEM32(esp + 0x8C) = edx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_003FF9B0(); return; } /* jl: less (signed <) */

loc_00400777: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00400780: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 0x10) = LO16(edx);
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    MEM32(ecx + 0xC) = 4;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00400000
 * Original: 0x00400000 - 0x00400799 (1945 bytes, 502 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400000(void)
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

loc_00400000: ;
    goto loc_0040000B;

    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x58); /* subss */

loc_0040000B: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040001B; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00400016: ;
    xmm2 = xmm7; /* movaps */
    goto loc_00400022;

loc_0040001B: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_00400022: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400060; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040005B: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400067;

loc_00400060: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400067: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400085; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400080: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400089;

loc_00400085: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400089: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */

loc_004000AB: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004000FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004000F2: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_00400103;

loc_004000FA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x68); /* subss */

loc_00400103: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400113; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040010E: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040011A;

loc_00400113: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040011A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400158; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400153: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040015F;

loc_00400158: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040015F: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400180; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040017B: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400184;

loc_00400180: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400184: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_004000AB;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004001B8; /* jb: below (unsigned <) (xmm5.f[0] vs xmm1.f[0]) */

loc_004001B3: ;
    xmm3 = xmm5; /* movaps */
    goto loc_004001BF;

loc_004001B8: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */

loc_004001BF: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004001C9; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_004001C4: ;
    xmm2 = xmm4; /* movaps */
    goto loc_004001D0;

loc_004001C9: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_004001D0: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040020D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400208: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400214;

loc_0040020D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400214: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400235; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400230: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400239;

loc_00400235: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400239: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002A1; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00400299: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_004002AA;

loc_004002A1: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x58); /* subss */

loc_004002AA: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002BA; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_004002B5: ;
    xmm2 = xmm7; /* movaps */
    goto loc_004002C1;

loc_004002BA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_004002C1: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002FF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004002FA: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400306;

loc_004002FF: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400306: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400324; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040031F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400328;

loc_00400324: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400328: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_00400408;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040035F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400357: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_00400368;

loc_0040035F: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x68); /* subss */

loc_00400368: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400378; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00400373: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040037F;

loc_00400378: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040037F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003BD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003B8: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004003C4;

loc_004003BD: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004003C4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003E2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003DD: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004003E6;

loc_004003E2: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004003E6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */

loc_00400408: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400457; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_00400452: ;
    xmm3 = xmm6; /* movaps */
    goto loc_0040045E;

loc_00400457: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */

loc_0040045E: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400468; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_00400463: ;
    xmm2 = xmm4; /* movaps */
    goto loc_0040046F;

loc_00400468: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_0040046F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004AC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004A7: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004004B3;

loc_004004AC: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004004B3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004D4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004CF: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004004D8;

loc_004004D4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004004D8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    goto loc_004006D0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400536; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400531: ;
    xmm3 = xmm0; /* movaps */
    goto loc_0040053F;

loc_00400536: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x54); /* subss */

loc_0040053F: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040054F; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040054A: ;
    xmm2 = xmm7; /* movaps */
    goto loc_00400556;

loc_0040054F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_00400556: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400594; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040058F: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040059B;

loc_00400594: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040059B: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005BC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005B7: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004005C0;

loc_004005BC: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004005C0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    goto loc_004006A3;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005F5: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400603;

loc_004005FA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x64); /* subss */

loc_00400603: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400613; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040060E: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040061A;

loc_00400613: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040061A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400658; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400653: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040065F;

loc_00400658: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040065F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040067D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400678: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400681;

loc_0040067D: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400681: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */

loc_004006A3: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */

loc_004006D0: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_004006E0: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040075E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_004006FA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400721; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00400712: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_00400718: ;
    MEM32(ecx + 0xC) = 2;
    goto loc_0040075E;

loc_00400721: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040072B; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400726: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00400732;

loc_0040072B: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00400732: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400780; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00400737: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_0040073D: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400747; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400742: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0040074E;

loc_00400747: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0040074E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xC) = 3;

loc_0040075E: ;
    edx = MEM32(esp + 0x8C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xF (16-bit) */
    MEM32(esp + 0x8C) = edx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_003FF9B0(); return; } /* jl: less (signed <) */

loc_00400777: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00400780: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 0x10) = LO16(edx);
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    MEM32(ecx + 0xC) = 4;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0040001B
 * Original: 0x0040001B - 0x00400799 (1918 bytes, 494 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040001B(void)
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

loc_0040001B: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400060; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040005B: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400067;

loc_00400060: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400067: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400085; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400080: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400089;

loc_00400085: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400089: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */

loc_004000AB: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004000FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004000F2: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_00400103;

loc_004000FA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x68); /* subss */

loc_00400103: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400113; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040010E: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040011A;

loc_00400113: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040011A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400158; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400153: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040015F;

loc_00400158: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040015F: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400180; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040017B: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400184;

loc_00400180: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400184: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_004000AB;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004001B8; /* jb: below (unsigned <) (xmm5.f[0] vs xmm1.f[0]) */

loc_004001B3: ;
    xmm3 = xmm5; /* movaps */
    goto loc_004001BF;

loc_004001B8: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */

loc_004001BF: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004001C9; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_004001C4: ;
    xmm2 = xmm4; /* movaps */
    goto loc_004001D0;

loc_004001C9: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_004001D0: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040020D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400208: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400214;

loc_0040020D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400214: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400235; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400230: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400239;

loc_00400235: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400239: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002A1; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00400299: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_004002AA;

loc_004002A1: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x58); /* subss */

loc_004002AA: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002BA; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_004002B5: ;
    xmm2 = xmm7; /* movaps */
    goto loc_004002C1;

loc_004002BA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_004002C1: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002FF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004002FA: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400306;

loc_004002FF: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400306: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400324; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040031F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400328;

loc_00400324: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400328: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_00400408;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040035F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400357: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_00400368;

loc_0040035F: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x68); /* subss */

loc_00400368: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400378; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00400373: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040037F;

loc_00400378: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040037F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003BD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003B8: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004003C4;

loc_004003BD: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004003C4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003E2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003DD: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004003E6;

loc_004003E2: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004003E6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */

loc_00400408: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400457; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_00400452: ;
    xmm3 = xmm6; /* movaps */
    goto loc_0040045E;

loc_00400457: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */

loc_0040045E: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400468; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_00400463: ;
    xmm2 = xmm4; /* movaps */
    goto loc_0040046F;

loc_00400468: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_0040046F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004AC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004A7: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004004B3;

loc_004004AC: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004004B3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004D4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004CF: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004004D8;

loc_004004D4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004004D8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    goto loc_004006D0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400536; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400531: ;
    xmm3 = xmm0; /* movaps */
    goto loc_0040053F;

loc_00400536: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x54); /* subss */

loc_0040053F: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040054F; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040054A: ;
    xmm2 = xmm7; /* movaps */
    goto loc_00400556;

loc_0040054F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_00400556: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400594; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040058F: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040059B;

loc_00400594: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040059B: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005BC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005B7: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004005C0;

loc_004005BC: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004005C0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    goto loc_004006A3;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005F5: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400603;

loc_004005FA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x64); /* subss */

loc_00400603: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400613; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040060E: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040061A;

loc_00400613: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040061A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400658; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400653: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040065F;

loc_00400658: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040065F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040067D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400678: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400681;

loc_0040067D: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400681: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */

loc_004006A3: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */

loc_004006D0: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_004006E0: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040075E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_004006FA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400721; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00400712: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_00400718: ;
    MEM32(ecx + 0xC) = 2;
    goto loc_0040075E;

loc_00400721: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040072B; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400726: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00400732;

loc_0040072B: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00400732: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400780; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00400737: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_0040073D: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400747; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400742: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0040074E;

loc_00400747: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0040074E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xC) = 3;

loc_0040075E: ;
    edx = MEM32(esp + 0x8C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xF (16-bit) */
    MEM32(esp + 0x8C) = edx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_003FF9B0(); return; } /* jl: less (signed <) */

loc_00400777: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00400780: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 0x10) = LO16(edx);
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    MEM32(ecx + 0xC) = 4;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0040026F
 * Original: 0x0040026F - 0x00400799 (1322 bytes, 343 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040026F(void)
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

loc_0040026F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002A1; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00400299: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_004002AA;

loc_004002A1: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x58); /* subss */

loc_004002AA: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002BA; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_004002B5: ;
    xmm2 = xmm7; /* movaps */
    goto loc_004002C1;

loc_004002BA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_004002C1: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004002FF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004002FA: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400306;

loc_004002FF: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400306: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400324; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040031F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400328;

loc_00400324: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400328: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    goto loc_00400408;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040035F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400357: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    goto loc_00400368;

loc_0040035F: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x68); /* subss */

loc_00400368: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400378; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00400373: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040037F;

loc_00400378: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040037F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003BD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003B8: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004003C4;

loc_004003BD: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004003C4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004003E2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004003DD: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004003E6;

loc_004003E2: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004003E6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */

loc_00400408: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_004006E0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400457; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_00400452: ;
    xmm3 = xmm6; /* movaps */
    goto loc_0040045E;

loc_00400457: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */

loc_0040045E: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400468; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_00400463: ;
    xmm2 = xmm4; /* movaps */
    goto loc_0040046F;

loc_00400468: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_0040046F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004AC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004A7: ;
    xmm2 = xmm0; /* movaps */
    goto loc_004004B3;

loc_004004AC: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_004004B3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004004D4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004004CF: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004004D8;

loc_004004D4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004004D8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    goto loc_004006D0;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400536; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400531: ;
    xmm3 = xmm0; /* movaps */
    goto loc_0040053F;

loc_00400536: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x54); /* subss */

loc_0040053F: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040054F; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040054A: ;
    xmm2 = xmm7; /* movaps */
    goto loc_00400556;

loc_0040054F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_00400556: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400594; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0040058F: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040059B;

loc_00400594: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040059B: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005BC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005B7: ;
    xmm1 = xmm0; /* movaps */
    goto loc_004005C0;

loc_004005BC: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_004005C0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    goto loc_004006A3;

    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004005FA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_004005F5: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400603;

loc_004005FA: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x64); /* subss */

loc_00400603: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400613; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_0040060E: ;
    xmm2 = xmm7; /* movaps */
    goto loc_0040061A;

loc_00400613: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */

loc_0040061A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400658; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400653: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0040065F;

loc_00400658: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0040065F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040067D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400678: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400681;

loc_0040067D: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400681: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */

loc_004006A3: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */

loc_004006D0: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_004006E0: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040075E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_004006FA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400721; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00400712: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_00400718: ;
    MEM32(ecx + 0xC) = 2;
    goto loc_0040075E;

loc_00400721: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040072B; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400726: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00400732;

loc_0040072B: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00400732: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400780; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00400737: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040075E; /* jne: not equal / not zero */

loc_0040073D: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400747; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00400742: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0040074E;

loc_00400747: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0040074E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xC) = 3;

loc_0040075E: ;
    edx = MEM32(esp + 0x8C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xF (16-bit) */
    MEM32(esp + 0x8C) = edx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_003FF9B0(); return; } /* jl: less (signed <) */

loc_00400777: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00400780: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 0x10) = LO16(edx);
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    MEM32(ecx + 0xC) = 4;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00400BC0
 * Original: 0x00400BC0 - 0x004010E8 (1320 bytes, 355 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00400BC0(void)
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

loc_00400BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xF4));
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x9092B4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00400BE2u); RECOMP_ABI_CALL(0x00027D78u, sub_00027D78); /* call 0x00027D78 */

loc_00400BE2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = eax;
    ebx = MEM32(edi);
    esi = MEM32(edi + 4);
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    edx = esp + 0x80;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(ebx + 0x20); /* movaps */
    PUSH32(esp, edx);
    eax = ebx + 0x40;
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    PUSH32(esp, eax);
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x70) = esi;
    XMM_STORE(esp + 0x78, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00400C27u); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_00400C27: ;
    ecx = esp + 0x28;
    eax = esi + 0x40;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esp + 0x80;
    if (CMP_EQ(_fa, _fb)) goto loc_00400C4A; /* je: equal / zero */

loc_00400C3C: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00400C48u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_00400C48: ;
    goto loc_00400C73;

loc_00400C4A: ;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00400C59u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_00400C59: ;
    ecx = 0x10;
    esi = esp + 0xCC;
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
    edi = MEM32(esp + 0x78);
    esi = MEM32(esp + 0x74);

loc_00400C73: ;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(edi + 0x12) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_00400CC4; /* je: equal / zero */

loc_00400C83: ;
    SET_LO16(edx, MEM16(edi + 0x10));
    SET_LO16(eax, LO16(edx));
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 6 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004010C6; /* jge: greater or equal (signed >=) */

loc_00400C99: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */

loc_00400CB1: ;
    ecx = SX16(LO16(edx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00401065; /* ja: above (unsigned >) */

loc_00400CBD: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x4010E8); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00400CCAu) goto loc_00400CCA;
    if (_jt == 0x00400D57u) goto loc_00400D57;
    if (_jt == 0x00400DDBu) goto loc_00400DDB;
    if (_jt == 0x00400E5Fu) goto loc_00400E5F;
    if (_jt == 0x00400F0Au) goto loc_00400F0A;
    if (_jt == 0x00400FB5u) goto loc_00400FB5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00400CC4: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00400C99;

loc_00400CCA: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400CE8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00400CE3: ;
    xmm3 = xmm1; /* movaps */
    goto loc_00400CEF;

loc_00400CE8: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_00400CEF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400CFF; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00400CFA: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00400D06;

loc_00400CFF: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00400D06: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400D16; /* jb: below (unsigned <) (xmm7.f[0] vs xmm0.f[0]) */

loc_00400D11: ;
    xmm1 = xmm7; /* movaps */
    goto loc_00400D1D;

loc_00400D16: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */

loc_00400D1D: ;
    xmm7 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    goto loc_00401068;

loc_00400D57: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400D75; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400D70: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400D7C;

loc_00400D75: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_00400D7C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400D8C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400D87: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400D93;

loc_00400D8C: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400D93: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400DA3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400D9E: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400DA7;

loc_00400DA3: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400DA7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    goto loc_00401065;

loc_00400DDB: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400DF9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400DF4: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400E00;

loc_00400DF9: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_00400E00: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400E10; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400E0B: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400E17;

loc_00400E10: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400E17: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400E27; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400E22: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400E2B;

loc_00400E27: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400E2B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    goto loc_00401065;

loc_00400E5F: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400E72; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400E6D: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400E79;

loc_00400E72: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_00400E79: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400E89; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400E84: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400E90;

loc_00400E89: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400E90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400EA0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400E9B: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400EA4;

loc_00400EA0: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400EA4: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    goto loc_0040105B;

loc_00400F0A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400F1D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400F18: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400F24;

loc_00400F1D: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_00400F24: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400F34; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400F2F: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400F3B;

loc_00400F34: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400F3B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400F4B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400F46: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400F4F;

loc_00400F4B: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400F4F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    goto loc_0040105B;

loc_00400FB5: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400FC8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400FC3: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00400FCF;

loc_00400FC8: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_00400FCF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400FDF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400FDA: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00400FE6;

loc_00400FDF: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00400FE6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00400FF6; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00400FF1: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00400FFA;

loc_00400FF6: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00400FFA: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */

loc_0040105B: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00401065: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00401068: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004010B9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00401079: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00401089; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_00401084: ;
    xmm2 = xmm3; /* movaps */
    goto loc_00401090;

loc_00401089: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */

loc_00401090: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004010CF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00401095: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(edi + 0x10) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004010B9; /* jne: not equal / not zero */

loc_0040109B: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004010A5; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_004010A0: ;
    xmm0 = xmm3; /* movaps */
    goto loc_004010A9;

loc_004010A5: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_004010A9: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xC) = 3;

loc_004010B9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 6 (16-bit) */
    _cf = (int)(_fa < _fb);
    edx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00400CB1; /* jl: less (signed <) */

loc_004010C6: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004010CF: ;
    MEM16(edi + 0x10) = LO16(edx);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xC) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00401250
 * Original: 0x00401250 - 0x00401481 (561 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00401250(void)
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

loc_00401250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092B4);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00401272u); RECOMP_ABI_CALL(0x00027D78u, sub_00027D78); /* call 0x00027D78 */

loc_00401272: ;
    ecx = MEM32(ebp + 0xC);
    edi = eax;
    eax = MEM32(edi + 8);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00401289u); RECOMP_ABI_CALL(0x000184DBu, sub_000184DB); /* call 0x000184DB */

loc_00401289: ;
    edx = ebx + 0x40;
    PUSH32(esp, edx);
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00401299u); RECOMP_ABI_CALL(0x000184DBu, sub_000184DB); /* call 0x000184DB */

loc_00401299: ;
    SET_LO16(eax, MEM16(edi + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    esi = MEM32(ebp + 8);
    if (CMP_G(_fas, _fbs)) goto loc_004012CD; /* jg: greater (signed >) */

loc_004012A6: ;
    eax = SX16(LO16(eax));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = esp + eax + 0x40;
    eax = MEM32(ecx);
    edx = esi;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    goto loc_004013BE;

loc_004012CD: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 5 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00401300; /* jg: greater (signed >) */

loc_004012D3: ;
    edx = SX16(LO16(eax));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = esp + edx + 0x80;
    edx = MEM32(eax);
    ecx = esi;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    goto loc_004013BE;

loc_00401300: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xE (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004013BE; /* jg: greater (signed >) */

loc_0040130A: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x10);
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = esp + edx + 0x84;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    eax = esp + eax + 0x48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00401332u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_00401332: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esi + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004013BE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00401370: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x28); /* divss */
    eax = MEM32(ebp + 0xC);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(eax) = xmm1.f[0]; /* movss */

loc_004013BE: ;
    ecx = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    xmm1 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040147A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0040144A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */

loc_0040147A: ;
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
 * sub_00401510
 * Original: 0x00401510 - 0x0040161A (266 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00401510: ;
    ecx = MEM32(0x9092B4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00401528u); RECOMP_ABI_CALL(0x00027D78u, sub_00027D78); /* call 0x00027D78 */

loc_00401528: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if ((_fa == 0)) goto loc_004015A4; /* je: equal / zero */

loc_00401538: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00401573; /* je: equal / zero */

loc_0040153B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00401608; /* jne: not equal / not zero */

loc_00401542: ;
    ebx = MEM32(0x87DAE0);
    edx = ecx;
    MEM32(edx) = ebx;
    ebx = MEM32(0x87DAE4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(0x87DAE8);
    MEM32(edx + 8) = ebx;
    ebx = MEM32(0x87DAEC);
    MEM32(edx + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x28); /* subss */
    goto loc_004015D3;

loc_00401573: ;
    ebx = MEM32(0x87DAD0);
    edx = ecx;
    MEM32(edx) = ebx;
    ebx = MEM32(0x87DAD4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(0x87DAD8);
    MEM32(edx + 8) = ebx;
    ebx = MEM32(0x87DADC);
    MEM32(edx + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x24); /* subss */
    goto loc_004015D3;

loc_004015A4: ;
    ebx = MEM32(0x87DAC0);
    edx = ecx;
    MEM32(edx) = ebx;
    ebx = MEM32(0x87DAC4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(0x87DAC8);
    MEM32(edx + 8) = ebx;
    ebx = MEM32(0x87DACC);
    MEM32(edx + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x20); /* subss */

loc_004015D3: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00401608; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_004015D8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm2.f[0]; /* movss */

loc_00401608: ;
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00401660
 * Original: 0x00401660 - 0x004016A6 (70 bytes, 26 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401660: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + eax + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = ecx + eax + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_004016A3; /* jne: not equal / not zero */

loc_00401671: ;
    edx = MEM32(esp + 0x10);
    MEM8(ecx) = 1;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax + 0x14;
    ecx = 0xC;
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
    ecx = MEM32(edx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    POP32(esp, edi);
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);

loc_004016A3: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004016C0
 * Original: 0x004016C0 - 0x004016F2 (50 bytes, 17 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004016C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004016C0: ;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = eax + ecx + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_004016EF; /* jne: not equal / not zero */

loc_004016CF: ;
    edx = MEM32(esp + 0x10);
    MEM8(eax) = 1;
    eax = MEM32(edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_004016EF: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00401700
 * Original: 0x00401700 - 0x0040178D (141 bytes, 52 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401700: ;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = eax + ecx + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_0040178A; /* jne: not equal / not zero */

loc_0040170F: ;
    MEM8(eax) = 1;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edx = ecx + 0x40;
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(esi + 8);
    MEM32(edx + 8) = edi;
    esi = MEM32(esi + 0xC);
    MEM32(edx + 0xC) = esi;
    edx = eax + 0x10;
    edi = MEM32(edx);
    esi = ecx + 0x50;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax);
    edx = ecx + 0x60;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 8);
    MEM32(edx + 8) = esi;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);

loc_0040178A: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004017B0
 * Original: 0x004017B0 - 0x004017FF (79 bytes, 28 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004017B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004017B0: ;
    edx = MEM32(ecx + 0xC);
    SET_LO8(eax, 1);
    MEM8(edx + ecx + 0x10) = LO8(eax);
    edx = MEM32(ecx + 8);
    MEM8(edx + ecx + 0x10) = LO8(eax);
    edx = MEM32(esp + 0xC);
    eax = ecx + 0x20;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00401820
 * Original: 0x00401820 - 0x004018CA (170 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00401820(void)
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

loc_00401820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    ecx = MEM32(ebp + 8);
    xmm1 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
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
 * sub_00401900
 * Original: 0x00401900 - 0x00401907 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401900(void)
{

loc_00401900: ;
    MEM32(ecx) = 0x7AA7B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00401910
 * Original: 0x00401910 - 0x00401913 (3 bytes, 1 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401910(void)
{

loc_00401910: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00401920
 * Original: 0x00401920 - 0x00401927 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401920(void)
{

loc_00401920: ;
    MEM32(ecx) = 0x7AA7B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00401930
 * Original: 0x00401930 - 0x00401937 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401930(void)
{

loc_00401930: ;
    MEM32(ecx) = 0x7AA7B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00401940
 * Original: 0x00401940 - 0x00401947 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401940(void)
{

loc_00401940: ;
    MEM32(ecx) = 0x7AA7B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00401950
 * Original: 0x00401950 - 0x00401957 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401950(void)
{

loc_00401950: ;
    MEM32(ecx) = 0x7AA7B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00401960
 * Original: 0x00401960 - 0x00401967 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401960(void)
{

loc_00401960: ;
    MEM32(ecx) = 0x7AA7B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00401970
 * Original: 0x00401970 - 0x00401A5F (239 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00401970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00401970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00401A53; /* jle: less or equal (signed <=) */

loc_00401986: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm4 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    ecx = MEM32(ebp + 0xC);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    /* nop */

loc_004019E0: ;
    xmm5 = XMM_MEM(ecx); /* movaps */
    xmm5 = XMM_SUB(xmm5, xmm4); /* subps */
    XMM_STORE(esp, xmm5); /* movaps */
    xmm5 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    xmm5 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x20, xmm5); /* movaps */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00401A59; /* ja: above (unsigned >) (xmm3.f[0] vs xmm5.f[0]) */

loc_00401A4B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004019E0; /* jl: less (signed <) */

loc_00401A53: ;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00401A59: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00401AA0
 * Original: 0x00401AA0 - 0x00401C77 (471 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00401AA0(void)
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

loc_00401AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm2 = XMM_MEM(ecx + 0x20); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm2 = XMM_MEM(eax + 0x30); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x40); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00401C19; /* jnp: not parity */

loc_00401B2A: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x7AB82C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00401C71; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_00401BAB: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00401BEB; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00401BE2: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm2 = xmm0; /* movaps */

loc_00401BEB: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00401C01; /* je: equal / zero */

loc_00401BF2: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00401C01; /* je: equal / zero */

loc_00401BF9: ;
    MEMF(ecx) = xmm3.f[0]; /* movss */
    MEMF(eax) = xmm2.f[0]; /* movss */

loc_00401C01: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00401C71; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00401C0E: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00401C71; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_00401C13: ;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00401C19: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00401C71; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00401C4D: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00401C73; /* je: equal / zero */

loc_00401C56: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00401C73; /* je: equal / zero */

loc_00401C5D: ;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00401C71: ;
    SET_LO8(eax, LO8(edx));

loc_00401C73: ;
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
 * sub_00401CF0
 * Original: 0x00401CF0 - 0x00401D05 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401CF0: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    MEM32(edx + eax * 4) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00401D10
 * Original: 0x00401D10 - 0x00401D1C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401D10: ;
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00401D20
 * Original: 0x00401D20 - 0x00401D2A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401D20: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00401D30
 * Original: 0x00401D30 - 0x00401D56 (38 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401D30: ;
    eax = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = ecx + ecx * 2;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0xC);
    ecx = 0xC;
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
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00401D60
 * Original: 0x00401D60 - 0x004027DA (2682 bytes, 528 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00401D60(void)
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

loc_00401D60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xE4));
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x9092B4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    ebx = esi + 0x14;
    edx = esp + 0x64;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x64); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x88) = eax;
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00401DCAu); RECOMP_ABI_CALL(0x00034582u, sub_00034582); /* call 0x00034582 */

loc_00401DCA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00401F49; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00401E65: ;
    xmm0 = XMM_MEM(edi + 0x30); /* movaps */
    eax = esi + 0x50;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x80) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x84) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x8C) = edx;
    xmm1 = XMM_MEM(esp + 0x80); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x74); /* subss */
    goto loc_00402768;

loc_00401F49: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x834D38); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040201E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x834D38)) */

loc_00401F56: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm1 = XMM_MEM(edi + 0x20); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_MEM(edi + 0x30); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    goto loc_00402764;

loc_0040201E: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x5C); /* divss */
    PUSH32(esp, 0x2F424);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040204Fu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0040204F: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00402220; /* jp: parity */

loc_00402069: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x3C); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x58); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x74); /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm3 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm3); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_MEM(esp + 0x20); /* movaps */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    XMM_STORE(esp + 0xB0, xmm3); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0xC0, xmm2); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0xD0, xmm0); /* movaps */
    xmm0 = xmm2; /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0xE0, xmm0); /* movaps */
    goto loc_0040255C;

loc_00402220: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004023F3; /* jp: parity */

loc_00402232: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x38); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x74); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x20); /* movaps */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    XMM_STORE(esp + 0xB0, xmm2); /* movaps */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0xD0, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0xC0, xmm1); /* movaps */
    XMM_STORE(esp + 0xE0, xmm0); /* movaps */
    goto loc_0040255C;

loc_004023F3: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0040255C; /* jp: parity */

loc_00402405: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x3C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x74); /* subss */
    ecx = esp + 0x40;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0xB4;
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00402474u); RECOMP_ABI_CALL(0x0002CB57u, sub_0002CB57); /* call 0x0002CB57 */

loc_00402474: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x38); /* subss */
    edx = esp + 0x40;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, edx);
    ecx = esp + 0xC4;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004024CEu); RECOMP_ABI_CALL(0x0002CB57u, sub_0002CB57); /* call 0x0002CB57 */

loc_004024CE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x40;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00402515u); RECOMP_ABI_CALL(0x0002CB57u, sub_0002CB57); /* call 0x0002CB57 */

loc_00402515: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x40;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0xE4;
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040255Cu); RECOMP_ABI_CALL(0x0002CB57u, sub_0002CB57); /* call 0x0002CB57 */

loc_0040255C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004025C1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_004025B5: ;
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */

loc_004025C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00402606; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_004025F5: ;
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    eax = 1;

loc_00402606: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xD0)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xD4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xD8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040264B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0040263A: ;
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    eax = 2;

loc_0040264B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xE8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040268D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0040267F: ;
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    eax = 3;

loc_0040268D: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = esp + eax + 0xB0;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004026A6u); RECOMP_ABI_CALL(0x00031977u, sub_00031977); /* call 0x00031977 */

loc_004026A6: ;
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_MEM(esp + 0x8C); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm1 = XMM_MEM(edi + 0x30); /* movaps */
    XMM_STORE(esp + 0x8C, xmm0); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x1C); /* movaps */
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x1C); /* movaps */
    XMM_STORE(esp + 0x1C, xmm0); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00402764: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00402768: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004027CC; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0040277B: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00402792; /* jne: not equal / not zero */

loc_0040278A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00402792: ;
    xmm1 = XMM_MEM(edi + 0x20); /* movaps */
    edx = MEM32(esp + 0x7C);
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x90, xmm1); /* movaps */
    eax = MEM32(edx + 0xC);
    edi = MEM32(edx + 0x14);
    ecx = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
    esi = esp + 0x80;
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
    MEM32(edx + 0xC) = MEM32(edx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004027CC: ;
    fp_push(MEMF(esp + 0xA0)); /* fld float */
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
 * sub_00402A80
 * Original: 0x00402A80 - 0x00402D3B (699 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00402A80(void)
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

loc_00402A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x9092B4);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00402ABB; /* jne: not equal / not zero */

loc_00402AAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = 7;
    goto loc_00402ABF;

loc_00402ABB: ;
    MEM32(esp + 0x18) = eax;

loc_00402ABF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00402D30; /* jg: greater (signed >) */

loc_00402ACD: ;
    ebx = MEM32(ebp + 0xC);
    goto loc_00402AD6;

loc_00402AD2: ;
    eax = MEM32(esp + 0x10);

loc_00402AD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = xmm0; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_00402AF0; /* jne: not equal / not zero */

loc_00402AED: ;
    xmm1 = xmm2; /* movaps */

loc_00402AF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0x30); /* mulss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_00402B05; /* jne: not equal / not zero */

loc_00402B02: ;
    xmm1 = xmm2; /* movaps */

loc_00402B05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_00402B1B; /* jne: not equal / not zero */

loc_00402B18: ;
    xmm0 = xmm2; /* movaps */

loc_00402B1B: ;
    eax = MEM32(ebx + 0x7C);
    ecx = MEM32(ebx + 0x78);
    edx = MEM32(ebx + 0x74);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x6C);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x60);
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x38); /* mulss */
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x100;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00402B81u); RECOMP_ABI_CALL(0x005A0B75u, sub_005A0B75); /* call 0x005A0B75 */

loc_00402B81: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00402B98u); RECOMP_ABI_CALL(0x00013F9Eu, sub_00013F9E); /* call 0x00013F9E */

loc_00402B98: ;
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm0 = XMM_MEM(esp + 0x2C); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x3C); /* movaps */
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    XMM_STORE(esp + 0x7C, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x6C); /* movaps */
    XMM_STORE(esp + 0x8C, xmm0); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x90); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x94); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x8C); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00402C83; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00402C7D: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00402C83: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00402D1B; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00402C91: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(esp + 0x90) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x98) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0x94) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x9C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00402CD4; /* jne: not equal / not zero */

loc_00402CCC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00402CD4: ;
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0xB4) = eax;
    eax = MEM32(esi + 0xC);
    edi = eax + eax * 2;
    eax = MEM32(esp + 0x1C);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    ecx = 0xC;
    esi = esp + 0x90;
    XMM_STORE(esp + 0xA0, xmm1); /* movaps */
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
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;

loc_00402D1B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00402AD2; /* jle: less or equal (signed <=) */

loc_00402D30: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
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
 * sub_00402DF0
 * Original: 0x00402DF0 - 0x00402F71 (385 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00402DF0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 8); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00402F6A; /* jnp: not parity */

loc_00402E33: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x18);
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 8); /* mulss */
    MEM32(esp + 0xC) = eax;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    eax = MEM32(esp + 0x34);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00402F6A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00402EB7: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00402F6A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00402EC8: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEM32(esp + 0x1C) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEM32(esp + 0x20) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x24) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x00402F62u); RECOMP_ABI_CALL(0x000290ECu, sub_000290EC); /* call 0x000290EC */

loc_00402F62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00402F6A: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00402FE0
 * Original: 0x00402FE0 - 0x004033D0 (1008 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00402FE0(void)
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

loc_00402FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x68));
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(ebp + 8);
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    esi = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edx = MEM32(0x9092B4);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm6.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00403143; /* jnp: not parity */

loc_00403121: ;
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm3 = xmm0; /* movaps */

loc_00403143: ;
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    xmm4 = XMM_MEM(esi + 0x20); /* movaps */
    xmm4 = XMM_SUB(xmm4, xmm0); /* subps */
    XMM_STORE(esp + 0x30, xmm4); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm4 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x30, xmm4); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004031BB; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_004031B8: ;
    xmm0 = xmm6; /* movaps */

loc_004031BB: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004031C9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm7.f[0]) */

loc_004031C6: ;
    xmm0 = xmm7; /* movaps */

loc_004031C9: ;
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm4 = XMM_SUB(xmm4, xmm0); /* subps */
    XMM_STORE(esp + 0x30, xmm4); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x40); /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004033C6; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_004032A1: ;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x14);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x18);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x5C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = xmm5; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_0040330D; /* jne: not equal / not zero */

loc_00403305: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0040330D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0040338E; /* jnp: not parity */

loc_0040335B: ;
    xmm5.f[0] = xmm5.f[0] / xmm0.f[0]; /* divss */
    xmm0 = xmm5; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm6.f[0]; /* movss */

loc_0040338E: ;
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    ecx = MEM32(edx + 0x14);
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = eax;
    eax = MEM32(edx + 0xC);
    edi = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    ecx = 0xC;
    esi = esp + 0x40;
    XMM_STORE(esp + 0x40, xmm1); /* movaps */
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
    MEM32(edx + 0xC) = MEM32(edx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004033C6: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004034D0
 * Original: 0x004034D0 - 0x00403784 (692 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004034D0(void)
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

loc_004034D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    xmm4 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    eax = MEM32(0x9092B4);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00403500; /* jne: not equal / not zero */

loc_004034FD: ;
    ecx = MEM32(ebx + 0x28);

loc_00403500: ;
    edx = MEM32(eax);
    esi = MEM32(eax + 8);
    MEM32(esi + edx * 4) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00403779; /* je: equal / zero */

loc_00403510: ;
    edx = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    goto loc_00403530;

loc_0040352A: ;
    ebx = MEM32(ebp + 0xC);
    /* nop */

loc_00403530: ;
    ecx = MEM32(eax);
    esi = MEM32(eax + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    edi = MEM32(ebx + 0x14);
    xmm1 = XMM_MEM(edx + 0x30); /* movaps */
    ecx = esi + ecx * 4;
    esi = MEM32(ecx);
    MEM32(esp + 0x1C) = ecx;
    ecx = esi + esi * 2;
    edi = edi + ecx * 8;
    ecx = esi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x84); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x88); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x80); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00403770; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0040364E: ;
    SET_LO8(ecx, MEM8(edi + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004036A3; /* jne: not equal / not zero */

loc_00403655: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403664; /* je: equal / zero */

loc_0040365C: ;
    esi = MEM32(esp + 0x1C);
    MEM32(esi) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00403664: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403676; /* je: equal / zero */

loc_0040366C: ;
    esi = MEM32(eax);
    ebx = MEM32(eax + 8);
    MEM32(ebx + esi * 4) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00403676: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403688; /* je: equal / zero */

loc_0040367E: ;
    esi = MEM32(eax);
    ebx = MEM32(eax + 8);
    MEM32(ebx + esi * 4) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00403688: ;
    edi = MEM32(edi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403770; /* je: equal / zero */

loc_00403694: ;
    ecx = MEM32(eax);
    esi = MEM32(eax + 8);
    MEM32(esi + ecx * 4) = edi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00403770;

loc_004036A3: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004036B1; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_004036A8: ;
    xmm4 = xmm0; /* movaps */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */

loc_004036B1: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00403770; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_004036BA: ;
    SET_LO8(ecx, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_004036D0; /* jne: not equal / not zero */

loc_004036CD: ;
    xmm0 = xmm5; /* movaps */

loc_004036D0: ;
    xmm6 = XMM_MEM(edx + 0x20); /* movaps */
    ecx = MEM32(eax + 0xC);
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm6 = XMM_MUL(xmm6, xmm0); /* mulps */
    XMM_STORE(esp + 0xA0, xmm6); /* movaps */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x20); /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    edi = ecx + ecx * 2;
    MEMF(esp + 0x90) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    MEM32(esp + 0xB4) = esi;
    MEM32(esp + 0xB8) = esi;
    esi = MEM32(eax + 0x14);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = 0xC;
    esi = esp + 0x90;
    MEMF(esp + 0x94) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm3.f[0]; /* movss */
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
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00403770: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040352A; /* jne: not equal / not zero */

loc_00403779: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
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
 * sub_00403840
 * Original: 0x00403840 - 0x00403A29 (489 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00403840(void)
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

loc_00403840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    edx = MEM32(0x9092B4);
    xmm4 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00403923; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00403913: ;
    xmm0.f[0] = xmm4.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */

loc_00403923: ;
    xmm2 = XMM_MEM(eax + 0x30); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x40); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00403A1F; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_004039AD: ;
    SET_LO8(ecx, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_004039C8; /* jne: not equal / not zero */

loc_004039C5: ;
    xmm0 = xmm3; /* movaps */

loc_004039C8: ;
    ecx = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm4 = xmm1; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm0); /* mulps */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    eax = MEM32(ebp + 0x18);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(edx + 0xC);
    edi = eax + eax * 2;
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(edx + 0x14);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm2 = XMM_SUB(xmm2, xmm1); /* subps */
    XMM_STORE(esp + 0x40, xmm2); /* movaps */
    ecx = 0xC;
    esi = esp + 0x40;
    XMM_STORE(esp + 0x50, xmm4); /* movaps */
    MEMF(esp + 0x4C) = xmm3.f[0]; /* movss */
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
    MEM32(edx + 0xC) = MEM32(edx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00403A1F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00403AB0
 * Original: 0x00403AB0 - 0x00403B5C (172 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00403AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    ecx = 1;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 0x7BB350;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00403B55u); RECOMP_ABI_CALL(0x0002D5FCu, sub_0002D5FC); /* call 0x0002D5FC */

loc_00403B55: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00403B90
 * Original: 0x00403B90 - 0x00403C3C (172 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00403B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    ecx = 1;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 0x7BB350;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00403C35u); RECOMP_ABI_CALL(0x0002D5FCu, sub_0002D5FC); /* call 0x0002D5FC */

loc_00403C35: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00403C70
 * Original: 0x00403C70 - 0x004040C4 (1108 bytes, 265 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00403C70(void)
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

loc_00403C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C4));
    esp = esp - 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0040404B; /* jne: not equal / not zero */

loc_00403C99: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xE0) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xE4) = xmm4.f[0]; /* movss */
    xmm4 = xmm7; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xE8) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(esp + 0xC4) = 5;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = 1;
    MEM8(esp + 0xD0) = LO8(ebx);
    MEM8(esp + 0xD1) = LO8(ebx);
    MEM32(esp + 0xC0) = 0x7AA7C4;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00403DB9; /* jb: below (unsigned <) (xmm4.f[0] vs xmm2.f[0]) */

loc_00403DB7: ;
    goto loc_00403DC0;

loc_00403DB9: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */

loc_00403DC0: ;
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x40); /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0xF0) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00403DE9; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_00403DE4: ;
    xmm0 = xmm3; /* movaps */
    goto loc_00403DF0;

loc_00403DE9: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_00403DF0: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x40); /* addss */
    xmm5.f[0] = xmm5.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0xF4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00403E14; /* jb: below (unsigned <) (xmm5.f[0] vs xmm2.f[0]) */

loc_00403E0F: ;
    xmm2 = xmm5; /* movaps */
    goto loc_00403E18;

loc_00403E14: ;
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */

loc_00403E18: ;
    edi = MEM32(ebp + 0xC);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x40); /* addss */
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esp + 0xFC) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00403E39u); RECOMP_ABI_CALL(0x00029975u, sub_00029975); /* call 0x00029975 */

loc_00403E39: ;
    /* nop */

loc_00403E40: ;
    PUSH32(esp, 0x64);
    eax = esp + 0x10C;
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00403E59u); RECOMP_ABI_CALL(0x0002C6A2u, sub_0002C6A2); /* call 0x0002C6A2 */

loc_00403E59: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00404033; /* jle: less or equal (signed <=) */

loc_00403E67: ;
    goto loc_00403E70;

    /* nop */

loc_00403E70: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + esi * 2 + 0x108);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00403F5B; /* jne: not equal / not zero */

loc_00403E83: ;
    edx = MEM32(edi + 0x1C);
    eax = ecx + ecx * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(eax + edx)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    edx = 1;
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEM32(esp + 0x8C) = edx;
    MEM32(esp + 0x94) = edx;
    edx = MEM32(ebp + 0x14);
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 0xA0) = ebx;
    MEM8(esp + 0xA8) = LO8(ebx);
    MEM8(esp + 0xA9) = LO8(ebx);
    MEM32(esp + 0x98) = 0x7BB350;
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00403F4Bu); RECOMP_ABI_CALL(0x0002D5FCu, sub_0002D5FC); /* call 0x0002D5FC */

loc_00403F4B: ;
    MEM32(esp + 0x98) = 0x7AA7B4;
    goto loc_00404003;

loc_00403F5B: ;
    edx = MEM32(edi + 0x20);
    eax = ecx;
    ecx = MEM32(ebp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + edx)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    edx = 1;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x60) = ebx;
    MEM8(esp + 0x68) = LO8(ebx);
    MEM8(esp + 0x69) = LO8(ebx);
    MEM32(esp + 0x58) = 0x7BB350;
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00403FFBu); RECOMP_ABI_CALL(0x0002D5FCu, sub_0002D5FC); /* call 0x0002D5FC */

loc_00403FFB: ;
    MEM32(esp + 0x58) = 0x7AA7B4;

loc_00404003: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00404024; /* jbe: below or equal (unsigned <=) */

loc_00404018: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00404024: ;
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00403E70; /* jl: less (signed <) */

loc_00404031: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);

loc_00404033: ;
    if (CMP_NE(_fa, _fb)) goto loc_00403E40; /* jne: not equal / not zero */

loc_00404039: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404040u); RECOMP_ABI_CALL(0x00024222u, sub_00024222); /* call 0x00024222 */

loc_00404040: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0040404B: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00404079; /* jne: not equal / not zero */

loc_00404055: ;
    edi = MEM32(edx + 0x1C);
    edx = MEM32(ebp + 0x14);
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = eax + eax * 2;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404077u); RECOMP_ABI_CALL(0x0001E921u, sub_0001E921); /* call 0x0001E921 */

loc_00404077: ;
    goto loc_0040409A;

loc_00404079: ;
    esi = MEM32(edx + 0x20);
    edx = MEM32(ebp + 0x14);
    ecx = SX16(LO16(eax));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040409Au); RECOMP_ABI_CALL(0x00035045u, sub_00035045); /* call 0x00035045 */

loc_0040409A: ;
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x7AA7EC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_004040B9; /* jbe: below or equal (unsigned <=) */

loc_004040AD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_004040B9: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
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
 * sub_00404040
 * Original: 0x00404040 - 0x004040C4 (132 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00404040: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    edi = MEM32(edx + 0x1C);
    edx = MEM32(ebp + 0x14);
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = eax + eax * 2;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00404077u); RECOMP_ABI_CALL(0x0001E921u, sub_0001E921); /* call 0x0001E921 */

loc_00404077: ;
    goto loc_0040409A;

loc_00404079: ;
    esi = MEM32(edx + 0x20);
    edx = MEM32(ebp + 0x14);
    ecx = SX16(LO16(eax));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0040409Au); RECOMP_ABI_CALL(0x00035045u, sub_00035045); /* call 0x00035045 */

loc_0040409A: ;
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x7AA7EC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_004040B9; /* jbe: below or equal (unsigned <=) */

loc_004040AD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_004040B9: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
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
 * sub_004041E0
 * Original: 0x004041E0 - 0x004041E8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004041E0(void)
{

loc_004041E0: ;
    eax = ecx;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004041F0
 * Original: 0x004041F0 - 0x00404206 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004041F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004041F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00404202u); RECOMP_ABI_CALL(0x0059D322u, sub_0059D322); /* call 0x0059D322 */

loc_00404202: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00404210
 * Original: 0x00404210 - 0x00404216 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404210(void)
{

loc_00404210: ;
    eax = MEM32(0x9092A0);
    esp += 4; return; /* ret */

}

/**
 * sub_00404220
 * Original: 0x00404220 - 0x00404270 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00404220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 0xC);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xC); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00404290
 * Original: 0x00404290 - 0x00404294 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404290(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00404290: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004042A0
 * Original: 0x004042A0 - 0x004042B2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004042A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_004042A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x2C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004042AF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x2C)) */

loc_004042A9: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_004042AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004042C0
 * Original: 0x004042C0 - 0x004042C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004042C0(void)
{

loc_004042C0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_004042D0
 * Original: 0x004042D0 - 0x004042D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004042D0(void)
{

loc_004042D0: ;
    eax = MEM32(0x90930C);
    esp += 4; return; /* ret */

}

/**
 * sub_004042E0
 * Original: 0x004042E0 - 0x004042E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004042E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004042E0: ;
    fp_push(MEMF(ecx + 0x27C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004042F0
 * Original: 0x004042F0 - 0x004042F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004042F0(void)
{

loc_004042F0: ;
    eax = MEM32(ecx + 0x280);
    esp += 4; return; /* ret */

}

/**
 * sub_00404300
 * Original: 0x00404300 - 0x00404328 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404300: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00404324u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00404322u); } /* indirect call */
    }

loc_00404324: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00404340
 * Original: 0x00404340 - 0x00404353 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404340(void)
{

loc_00404340: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00404352u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040434Fu); } /* indirect call */
    }

loc_00404352: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00404360
 * Original: 0x00404360 - 0x00404371 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00404360: ;
    MEM32(ecx + 0x4F4) = MEM32(ecx + 0x4F4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x4F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ecx + 0x4F0);
    g_seh_ebp = ebp; sub_0059CA4C(); return; /* tail jmp 0x0059CA4C */

}

/**
 * sub_00404380
 * Original: 0x00404380 - 0x00404389 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404380: ;
    MEM16(ecx + 0x12) = MEM16(ecx + 0x12) - 1;
    _fa = (uint32_t)(MEM16(ecx + 0x12)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 0x12));
    esp += 4; return; /* ret */

}

/**
 * sub_00404390
 * Original: 0x00404390 - 0x004043AE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00404398u); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_00404398: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004043A8; /* je: equal / zero */

loc_0040439F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004043A5u); RECOMP_ABI_CALL(0x0059D40Fu, sub_0059D40F); /* call 0x0059D40F */

loc_004043A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004043A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004043C0
 * Original: 0x004043C0 - 0x004043C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004043C0(void)
{

loc_004043C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004043D0
 * Original: 0x004043D0 - 0x004043D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004043D0(void)
{

loc_004043D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004043E0
 * Original: 0x004043E0 - 0x00404443 (99 bytes, 41 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004043E0(void)
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

loc_004043E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0040440C; /* jle: less or equal (signed <=) */

loc_004043F9: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = edx;
    edx = ebx;
    ebx = esi;
    esi = edi;
    edi = ebx;
    MEM8(esp + 0x10) = 1;
    POP32(esp, ebx);

loc_0040440C: ;
    edx = edx + eax * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x24);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0040443E; /* je: equal / zero */

loc_0040441F: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esp + 0x28); PUSH32(esp, 0x00404439u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404435u); } /* indirect call */
    }

loc_00404439: ;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040443E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00404460
 * Original: 0x00404460 - 0x00404478 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404460: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x65;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00404480
 * Original: 0x00404480 - 0x0040468A (522 bytes, 149 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00404480(void)
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

loc_00404480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x90930C);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x280);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x83723C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004044A2u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_004044A2: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004044ADu); RECOMP_ABI_CALL(0x00035DFBu, sub_00035DFB); /* call 0x00035DFB */

loc_004044AD: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004044B9u); RECOMP_ABI_CALL(0x00035DFBu, sub_00035DFB); /* call 0x00035DFB */

loc_004044B9: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x837220);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004044C7u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_004044C7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    ecx = esp + 0x24;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x24); /* movaps */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x837214);
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040450Cu); RECOMP_ABI_CALL(0x00029781u, sub_00029781); /* call 0x00029781 */

loc_0040450C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    edx = esp + 0x2C;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x2C); /* movaps */
    PUSH32(esp, edx);
    PUSH32(esp, 0x837204);
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404551u); RECOMP_ABI_CALL(0x00029781u, sub_00029781); /* call 0x00029781 */

loc_00404551: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    eax = esp + 0x34;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x34); /* movaps */
    PUSH32(esp, eax);
    PUSH32(esp, 0x8371E8);
    XMM_STORE(esp + 0x3C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404596u); RECOMP_ABI_CALL(0x00029781u, sub_00029781); /* call 0x00029781 */

loc_00404596: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x8371CC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004045A9u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_004045A9: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8371B4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004045B7u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_004045B7: ;
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x83719C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004045C5u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_004045C5: ;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837184);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004045D8u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_004045D8: ;
    fp_push(MEMF(esi + 0x54)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x837168);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004045EBu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_004045EB: ;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0x837150);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004045F9u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_004045F9: ;
    esi = MEM32(esi + 0x5C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00404676; /* ja: above (unsigned >) */

loc_00404606: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x40468C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0040460Du) goto loc_0040460D;
    if (_jt == 0x00404626u) goto loc_00404626;
    if (_jt == 0x0040463Fu) goto loc_0040463F;
    if (_jt == 0x00404658u) goto loc_00404658;
    if (_jt == 0x00404671u) goto loc_00404671;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0040460D: ;
    eax = 0x837140;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x837124);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040461Eu); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_0040461E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00404626: ;
    eax = 0x837110;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x837124);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404637u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_00404637: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0040463F: ;
    eax = 0x837100;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x837124);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404650u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_00404650: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00404658: ;
    eax = 0x8370E8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x837124);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404669u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_00404669: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00404671: ;
    eax = 0x8370CC;

loc_00404676: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x837124);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404682u); RECOMP_ABI_CALL(0x00033BAFu, sub_00033BAF); /* call 0x00033BAF */

loc_00404682: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
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
 * sub_0040468A
 * Original: 0x0040468A - 0x00404730 (166 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040468A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0040468A: ;
    edi = edi;
    eax = eax | 0x26004046;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x46) = MEM8(eax + 0x46) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + 0x46)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0x46) = MEM8(ecx + 0x46) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x46)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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

}

/**
 * sub_00404730
 * Original: 0x00404730 - 0x004048F8 (456 bytes, 113 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00404730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00404730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ebx = 4;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00404755u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404752u); } /* indirect call */
    }

loc_00404755: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    ecx = MEM32(ebp + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0040478Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040478Bu); } /* indirect call */
    }

loc_0040478E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004048EA; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_004048A4: ;
    xmm2 = XMM_MEM(esi + 0x20); /* movaps */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm2); /* subps */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    eax = esi + 0x40;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = 2;
    MEM32(esi + 0x5C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_004048EA: ;
    POP32(esp, edi);
    MEM32(esi + 0x5C) = ebx;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00404970
 * Original: 0x00404970 - 0x00404B62 (498 bytes, 151 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00404970(void)
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

loc_00404970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x50); /* comiss */
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00404B59; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x50)) */

loc_00404991: ;
    edx = MEM32(esi);
    ecx = ebx + 0x10;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004049ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004049A9u); } /* indirect call */
    }

loc_004049AC: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004049C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004049C1u); } /* indirect call */
    }

loc_004049C4: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    xmm1 = XMM_MEM(ebx + 0x20); /* movaps */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(ebx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ebx + 0xC);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x24) = eax;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    ebx = MEM32(esp + 0x14);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00404AF1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AA840)) */

loc_00404A75: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    ecx = esi;
    XMM_STORE(esp + 0x2C, xmm1); /* movaps */
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00404AA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404AA0u); } /* indirect call */
    }

loc_00404AA3: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x14);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x837258)); /* fmul dword ptr [0x837258] */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00404AC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404AC3u); } /* indirect call */
    }

loc_00404AC6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */

loc_00404AF1: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00404B02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404AFFu); } /* indirect call */
    }

loc_00404B02: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(edi + 0x14);
    eax = MEM32(edi);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x3C); /* subss */
    edx = esp + 0x44;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x44); /* movaps */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = edi;
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00404B59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404B56u); } /* indirect call */
    }

loc_00404B59: ;
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
 * sub_00404BE0
 * Original: 0x00404BE0 - 0x00404C59 (121 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00404BE0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x50); /* comiss */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00404C54; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x50)) */

loc_00404BF1: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x34); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x50); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x8370C0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00404C30; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00404C22: ;
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_00404C30: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00404C3Du); RECOMP_ABI_CALL(0x000245DDu, sub_000245DD); /* call 0x000245DD */

loc_00404C3D: ;
    edi = MEM32(edi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404C51; /* je: equal / zero */

loc_00404C44: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404C51; /* jne: not equal / not zero */

loc_00404C4B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00404C4Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00404C4Cu); } /* indirect call */
    }

loc_00404C4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00404C51: ;
    MEM32(esi + 0x58) = MEM32(esi + 0x58) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00404C54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00404C80
 * Original: 0x00404C80 - 0x00404CA4 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404C80: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    esi = eax + eax * 2;
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = 0xC;
    edi = eax;
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

}

/**
 * sub_00404CB0
 * Original: 0x00404CB0 - 0x00404CBA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404CB0: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00404CC0
 * Original: 0x00404CC0 - 0x00404CD0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404CC0(void)
{

loc_00404CC0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00404CE0
 * Original: 0x00404CE0 - 0x00404CE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404CE0(void)
{

loc_00404CE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00404CF0
 * Original: 0x00404CF0 - 0x00404CFB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404CF0: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00404D00
 * Original: 0x00404D00 - 0x00404D10 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404D00(void)
{

loc_00404D00: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00404D20
 * Original: 0x00404D20 - 0x00404D21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404D20(void)
{

loc_00404D20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00404D30
 * Original: 0x00404D30 - 0x00404D3B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404D30: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00404D40
 * Original: 0x00404D40 - 0x00404D41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404D40(void)
{

loc_00404D40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00404D50
 * Original: 0x00404D50 - 0x00404D74 (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404D50: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00404D69; /* je: equal / zero */

loc_00404D5D: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

loc_00404D69: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00404D80
 * Original: 0x00404D80 - 0x00404D8B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404D80: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00404D90
 * Original: 0x00404D90 - 0x00404DBB (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404D90: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404D9D; /* je: equal / zero */

loc_00404D97: ;
    eax = MEM32(eax + 4);
    MEM32(ecx + 8) = eax;

loc_00404D9D: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404DB0; /* je: equal / zero */

loc_00404DA4: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

loc_00404DB0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00404DD0
 * Original: 0x00404DD0 - 0x00404DD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404DD0(void)
{

loc_00404DD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00404DE0
 * Original: 0x00404DE0 - 0x00404E04 (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404DE0: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00404DF9; /* je: equal / zero */

loc_00404DED: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

loc_00404DF9: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00404E10
 * Original: 0x00404E10 - 0x00404E1B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404E10: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00404E20
 * Original: 0x00404E20 - 0x00404E4B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404E20: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404E2D; /* je: equal / zero */

loc_00404E27: ;
    eax = MEM32(eax + 4);
    MEM32(ecx + 8) = eax;

loc_00404E2D: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404E40; /* je: equal / zero */

loc_00404E34: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

loc_00404E40: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00404E60
 * Original: 0x00404E60 - 0x00404E63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404E60(void)
{

loc_00404E60: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00404E70
 * Original: 0x00404E70 - 0x00404E73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404E70(void)
{

loc_00404E70: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00404E80
 * Original: 0x00404E80 - 0x00404E90 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404E80(void)
{

loc_00404E80: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00404EA0
 * Original: 0x00404EA0 - 0x00404F03 (99 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404EA0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x9092A0);
    if (CMP_EQ(_fa, _fb)) goto loc_00404EEE; /* je: equal / zero */

loc_00404EBA: ;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    edx = MEM32(ecx);
    edi = esp + 8;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00404ED3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404ED1u); } /* indirect call */
    }

loc_00404ED3: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00404EE0u); RECOMP_ABI_CALL(0x00025DA7u, sub_00025DA7); /* call 0x00025DA7 */

loc_00404EE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00404EEE: ;
    eax = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404EF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404EF5u); } /* indirect call */
    }

loc_00404EF8: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00404F20
 * Original: 0x00404F20 - 0x00404F30 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404F20(void)
{

loc_00404F20: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00404F40
 * Original: 0x00404F40 - 0x00404FA9 (105 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404F40: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x9092A0);
    if (CMP_EQ(_fa, _fb)) goto loc_00404F94; /* je: equal / zero */

loc_00404F5A: ;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    edi = esp + 8;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00404F76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404F74u); } /* indirect call */
    }

loc_00404F76: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    ecx = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00404F86u); RECOMP_ABI_CALL(0x00025DA7u, sub_00025DA7); /* call 0x00025DA7 */

loc_00404F86: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00404F94: ;
    eax = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404F9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404F9Bu); } /* indirect call */
    }

loc_00404F9E: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00404FD0
 * Original: 0x00404FD0 - 0x00404FFC (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404FD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x907F04;
    PUSH32(esp, 0x00404FDDu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_00404FDD: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404FE6; /* je: equal / zero */

loc_00404FE4: ;
    MEM32(ecx) = eax;

loc_00404FE6: ;
    edx = MEM32(esp + 8);
    MEM32(eax) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405010
 * Original: 0x00405010 - 0x0040503C (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405010: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x907F04;
    PUSH32(esp, 0x0040501Du); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_0040501D: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405026; /* je: equal / zero */

loc_00405024: ;
    MEM32(ecx) = eax;

loc_00405026: ;
    edx = MEM32(esp + 8);
    MEM32(eax) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405050
 * Original: 0x00405050 - 0x0040507B (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405050: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405078; /* je: equal / zero */

loc_00405058: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405078; /* je: equal / zero */

loc_0040505C: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edx);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0040506A; /* je: equal / zero */

loc_00405068: ;
    MEM32(eax) = ecx;

loc_0040506A: ;
    MEM32(esp + 4) = edx;
    ecx = 0x907F04;
    g_seh_ebp = ebp; sub_0059CA4C(); return; /* tail jmp 0x0059CA4C */

loc_00405078: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405090
 * Original: 0x00405090 - 0x004050BB (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405090: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004050B8; /* je: equal / zero */

loc_00405098: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004050B8; /* je: equal / zero */

loc_0040509C: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edx);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004050AA; /* je: equal / zero */

loc_004050A8: ;
    MEM32(eax) = ecx;

loc_004050AA: ;
    MEM32(esp + 4) = edx;
    ecx = 0x907F04;
    g_seh_ebp = ebp; sub_0059CA4C(); return; /* tail jmp 0x0059CA4C */

loc_004050B8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004050D0
 * Original: 0x004050D0 - 0x00405102 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004050D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004050D0: ;
    ecx = 0x907F04;
    PUSH32(esp, 0x004050DAu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_004050DA: ;
    ecx = MEM32(0x9092BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004050E6; /* je: equal / zero */

loc_004050E4: ;
    MEM32(ecx) = eax;

loc_004050E6: ;
    edx = MEM32(esp + 4);
    MEM32(eax) = 0x9092B8;
    ecx = MEM32(0x9092BC);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(0x9092BC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00405110
 * Original: 0x00405110 - 0x00405156 (70 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405110: ;
    MEM32(ecx + 0x4F4) = MEM32(ecx + 0x4F4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x4F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ecx + 0x4F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00405122u); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_00405122: ;
    ecx = 0x907F04;
    esi = eax;
    PUSH32(esp, 0x0040512Eu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_0040512E: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040513B; /* je: equal / zero */

loc_00405139: ;
    MEM32(edx) = eax;

loc_0040513B: ;
    MEM32(eax) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    MEM32(esi + 0x58) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405170
 * Original: 0x00405170 - 0x00405178 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405170(void)
{

loc_00405170: ;
    eax = ecx;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00405180
 * Original: 0x00405180 - 0x00405191 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405180(void)
{

loc_00405180: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004051A0
 * Original: 0x004051A0 - 0x004051B1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004051A0(void)
{

loc_004051A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004051C0
 * Original: 0x004051C0 - 0x004051EB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004051C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004051C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004051E9; /* je: equal / zero */

loc_004051CA: ;
    edx = MEM32(esi + 8);
    MEM32(esi + 4) = 0;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004051E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004051DFu); } /* indirect call */
    }

loc_004051E2: ;
    MEM32(esi + 8) = 0;

loc_004051E9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00405200
 * Original: 0x00405200 - 0x0040522B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405200: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405229; /* je: equal / zero */

loc_0040520A: ;
    edx = MEM32(esi + 8);
    MEM32(esi + 4) = 0;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00405222u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040521Fu); } /* indirect call */
    }

loc_00405222: ;
    MEM32(esi + 8) = 0;

loc_00405229: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00405240
 * Original: 0x00405240 - 0x00405270 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405240: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040526C; /* je: equal / zero */

loc_00405247: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00405268; /* je: equal / zero */

loc_0040524F: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0040525D; /* je: equal / zero */

loc_0040525B: ;
    MEM32(ecx) = edx;

loc_0040525D: ;
    PUSH32(esp, eax);
    ecx = 0x907F04;
    PUSH32(esp, 0x00405268u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_00405268: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0040526C: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00405280
 * Original: 0x00405280 - 0x004052B0 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405280: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004052AC; /* je: equal / zero */

loc_00405287: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_004052A8; /* je: equal / zero */

loc_0040528F: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0040529D; /* je: equal / zero */

loc_0040529B: ;
    MEM32(ecx) = edx;

loc_0040529D: ;
    PUSH32(esp, eax);
    ecx = 0x907F04;
    PUSH32(esp, 0x004052A8u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_004052A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004052AC: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004052C0
 * Original: 0x004052C0 - 0x004052F0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004052C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004052C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004052EE; /* je: equal / zero */

loc_004052CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004052EA; /* je: equal / zero */

loc_004052D1: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = edi;
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004052DF; /* je: equal / zero */

loc_004052DD: ;
    MEM32(ecx) = edx;

loc_004052DF: ;
    PUSH32(esp, eax);
    ecx = 0x907F04;
    PUSH32(esp, 0x004052EAu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_004052EA: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);

loc_004052EE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00405300
 * Original: 0x00405300 - 0x00405308 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405300(void)
{

loc_00405300: ;
    eax = ecx;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00405310
 * Original: 0x00405310 - 0x0040554D (573 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405310(void)
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

loc_00405310: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0040553C; /* je: equal / zero */

loc_00405329: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    /* nop */

loc_00405330: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00405476; /* jg: greater (signed >) */

loc_00405342: ;
    ebp = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00405476; /* je: equal / zero */

loc_0040534F: ;
    esi = MEM32(ebp + 8);

loc_00405352: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405454; /* je: equal / zero */

loc_0040535D: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0040536Cu); RECOMP_ABI_CALL(0x000279F4u, sub_000279F4); /* call 0x000279F4 */

loc_0040536C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004053E8; /* je: equal / zero */

loc_00405371: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00405454; /* jne: not equal / not zero */

loc_00405378: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x50); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00405454; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x50)) */

loc_00405385: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x34); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x8370C0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004053C2; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_004053B4: ;
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */

loc_004053C2: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004053CFu); RECOMP_ABI_CALL(0x000245DDu, sub_000245DD); /* call 0x000245DD */

loc_004053CF: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004053E3; /* je: equal / zero */

loc_004053D6: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004053E3; /* jne: not equal / not zero */

loc_004053DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x004053E0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004053DEu); } /* indirect call */
    }

loc_004053E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004053E3: ;
    MEM32(esi + 0x58) = MEM32(esi + 0x58) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00405454;

loc_004053E8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x50); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00405452; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x50)) */

loc_004053F1: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x34); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x8370C0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040542E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00405420: ;
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_0040542E: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0040543Bu); RECOMP_ABI_CALL(0x000245DDu, sub_000245DD); /* call 0x000245DD */

loc_0040543B: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040544F; /* je: equal / zero */

loc_00405442: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040544F; /* jne: not equal / not zero */

loc_00405449: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0040544Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0040544Au); } /* indirect call */
    }

loc_0040544C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040544F: ;
    MEM32(esi + 0x58) = MEM32(esi + 0x58) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00405452: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00405454: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405464; /* je: equal / zero */

loc_00405458: ;
    ebp = MEM32(ebp + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405464; /* je: equal / zero */

loc_0040545F: ;
    esi = MEM32(ebp + 8);
    goto loc_00405466;

loc_00405464: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00405466: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405352; /* jne: not equal / not zero */

loc_0040546E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405330; /* je: equal / zero */

loc_00405476: ;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004054AD; /* je: equal / zero */

loc_0040547D: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004054AD; /* jle: less or equal (signed <=) */

loc_00405484: ;
    esi = MEM32(edi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004054AD; /* je: equal / zero */

loc_0040548B: ;
    eax = MEM32(esi + 8);
    edi = edi;

loc_00405490: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x00405494u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00405491u); } /* indirect call */
    }

loc_00405494: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004054A7; /* je: equal / zero */

loc_0040549B: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004054A7; /* je: equal / zero */

loc_004054A2: ;
    eax = MEM32(esi + 8);
    goto loc_004054A9;

loc_004054A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004054A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405490; /* jne: not equal / not zero */

loc_004054AD: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405539; /* je: equal / zero */

loc_004054B8: ;
    ebp = edi + 0x18;
    ebx = 3;

loc_004054C0: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004054E9; /* je: equal / zero */

loc_004054C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    esi = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_004054EC; /* je: equal / zero */

loc_004054CE: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004054DC; /* je: equal / zero */

loc_004054DA: ;
    MEM32(ecx) = edx;

loc_004054DC: ;
    PUSH32(esp, eax);
    ecx = 0x907F04;
    PUSH32(esp, 0x004054E7u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_004054E7: ;
    goto loc_004054EC;

loc_004054E9: ;
    esi = MEM32(ebp + 8);

loc_004054EC: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405520; /* jne: not equal / not zero */

loc_004054F1: ;
    ecx = 0x907F04;
    PUSH32(esp, 0x004054FBu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_004054FB: ;
    ecx = MEM32(0x9092BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405507; /* je: equal / zero */

loc_00405505: ;
    MEM32(ecx) = eax;

loc_00405507: ;
    MEM32(eax) = 0x9092B8;
    edx = MEM32(0x9092BC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = esi;
    MEM32(0x9092BC) = eax;
    goto loc_00405532;

loc_00405520: ;
    MEM32(edi + 0x4F4) = MEM32(edi + 0x4F4) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x4F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x4F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00405532u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_00405532: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004054C0; /* jne: not equal / not zero */

loc_00405539: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0040553C: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004055E0
 * Original: 0x004055E0 - 0x0040563B (91 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004055E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004055E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x4F4);
    PUSH32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ecx + 0x18;
    MEM32(ecx + 0x4F4) = esi;
    ecx = MEM32(ecx + 0x4F0);
    PUSH32(esp, 0x004055FDu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_004055FD: ;
    ecx = 0x907F04;
    esi = eax;
    PUSH32(esp, 0x00405609u); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_00405609: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405612; /* je: equal / zero */

loc_00405610: ;
    MEM32(ecx) = eax;

loc_00405612: ;
    edx = MEM32(esp + 0xC);
    MEM32(eax) = edi;
    ecx = MEM32(edi + 4);
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 4) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x58) = 0;
    MEM32(esi) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00405660
 * Original: 0x00405660 - 0x004056AB (75 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405660: ;
    edx = MEM32(esp + 4);
    edx = edx + edx * 2;
    ecx = ecx + edx * 4 + 0x34;
    ecx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004056A8; /* je: equal / zero */

loc_00405674: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_00405681: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004056A6; /* jne: not equal / not zero */

loc_00405685: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405690; /* jne: not equal / not zero */

loc_00405689: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405690; /* jne: not equal / not zero */

loc_0040568E: ;
    eax = edx;

loc_00405690: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004056A0; /* je: equal / zero */

loc_00405694: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004056A0; /* je: equal / zero */

loc_0040569B: ;
    edx = MEM32(ecx + 8);
    goto loc_004056A2;

loc_004056A0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004056A2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405681; /* jne: not equal / not zero */

loc_004056A6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004056A8: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004056C0
 * Original: 0x004056C0 - 0x0040573B (123 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004056C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004056C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x18);
    eax = ecx + ebp;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x65;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = edi;
    ebx = edx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004056E6u); RECOMP_ABI_CALL(0x00031706u, sub_00031706); /* call 0x00031706 */

loc_004056E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405734; /* jne: not equal / not zero */

loc_004056EA: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, 0x004056F2u); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_004056F2: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    ecx = ebx + ebx * 2;
    edi = edi + ecx * 4 + 0x34;
    ecx = 0x907F04;
    MEM32(esi) = ebp;
    MEM32(esi + 4) = eax;
    MEM16(esi + 0x10) = 0xFFFF;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0040571Bu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_0040571B: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405724; /* je: equal / zero */

loc_00405722: ;
    MEM32(ecx) = eax;

loc_00405724: ;
    MEM32(eax) = edi;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = esi;
    MEM32(edi + 4) = eax;
    eax = esi;

loc_00405734: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00405760
 * Original: 0x00405760 - 0x004057EC (140 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405760: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x14) = edi;
    ebp = edi + 0x38;
    MEM32(esp + 0x10) = 0x65;

loc_00405778: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004057D6; /* je: equal / zero */

loc_0040577F: ;
    eax = MEM32(esi + 8);
    ebx = ebp + -4;

loc_00405785: ;
    MEM16(eax + 0x12) = MEM16(eax + 0x12) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x12), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004057C0; /* jne: not equal / not zero */

loc_00405790: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00405799u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_00405799: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004057D0; /* je: equal / zero */

loc_0040579D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    edi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004057BA; /* je: equal / zero */

loc_004057A3: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004057AF; /* je: equal / zero */

loc_004057AD: ;
    MEM32(eax) = edi;

loc_004057AF: ;
    PUSH32(esp, esi);
    ecx = 0x907F04;
    PUSH32(esp, 0x004057BAu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_004057BA: ;
    esi = edi;
    edi = MEM32(esp + 0x14);

loc_004057C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004057D0; /* je: equal / zero */

loc_004057C4: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004057D0; /* je: equal / zero */

loc_004057CB: ;
    eax = MEM32(esi + 8);
    goto loc_004057D2;

loc_004057D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004057D2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405785; /* jne: not equal / not zero */

loc_004057D6: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00405778; /* jne: not equal / not zero */

loc_004057E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00405810
 * Original: 0x00405810 - 0x00405880 (112 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ebx = ebp + 0x38;
    MEM32(esp + 0x10) = 0x65;

loc_00405822: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040586C; /* je: equal / zero */

loc_00405827: ;
    esi = ebx + -4;
    /* nop */

loc_00405830: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040585B; /* je: equal / zero */

loc_00405837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00405857; /* je: equal / zero */

loc_0040583E: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0040584C; /* je: equal / zero */

loc_0040584A: ;
    MEM32(ecx) = edx;

loc_0040584C: ;
    PUSH32(esp, eax);
    ecx = 0x907F04;
    PUSH32(esp, 0x00405857u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_00405857: ;
    eax = edi;
    goto loc_0040585E;

loc_0040585B: ;
    eax = MEM32(esi + 8);

loc_0040585E: ;
    ecx = MEM32(ebp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00405867u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_00405867: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405830; /* jne: not equal / not zero */

loc_0040586C: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00405822; /* jne: not equal / not zero */

loc_0040587A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004058A0
 * Original: 0x004058A0 - 0x00405BDF (831 bytes, 211 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004058A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_004058A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x18) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_004058D1; /* jne: not equal / not zero */

loc_004058C4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    goto loc_004058DF;

loc_004058D1: ;
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x38);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;

loc_004058DF: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x80);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004058F3u); RECOMP_ABI_CALL(0x0002DBD3u, sub_0002DBD3); /* call 0x0002DBD3 */

loc_004058F3: ;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ebx + 0x80);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00405905u); RECOMP_ABI_CALL(0x0002DBD3u, sub_0002DBD3); /* call 0x0002DBD3 */

loc_00405905: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00405BD2; /* je: equal / zero */

loc_00405915: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405BD2; /* je: equal / zero */

loc_0040591D: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0040592Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405927u); } /* indirect call */
    }

loc_0040592A: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0040593Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405938u); } /* indirect call */
    }

loc_0040593B: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3A83126F);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040595Bu); RECOMP_ABI_CALL(0x0002442Au, sub_0002442A); /* call 0x0002442A */

loc_0040595B: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00405970; /* jne: not equal / not zero */

loc_00405965: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405970; /* je: equal / zero */

loc_00405969: ;
    MEM32(eax + 0x5C) = 0;

loc_00405970: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405BD2; /* je: equal / zero */

loc_0040597B: ;
    goto loc_00405990;

loc_0040597D: ;
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(esp + 0x2C);
    eax = MEM32(ebp + 0x10);
    /* nop */

loc_00405990: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040599D; /* jne: not equal / not zero */

loc_00405994: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040599Du); RECOMP_ABI_CALL(0x00029547u, sub_00029547); /* call 0x00029547 */

loc_0040599D: ;
    edx = MEM32(edi + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = eax;
    eax = edx;
    MEM32(edi + 0xC) = edx;
    esi = eax + eax * 2;
    eax = MEM32(edi + 0x14);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ebx + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
    edi = edx;
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
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004059D4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x30)) */

loc_004059C8: ;
    MEM32(ebx + 0x5C) = 1;
    goto loc_00405BB5;

loc_004059D4: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004059E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004059E2u); } /* indirect call */
    }

loc_004059E5: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = ebx + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00405A24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405A21u); } /* indirect call */
    }

loc_00405A24: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x80, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm1 = XMM_MEM(esp + 0x70); /* movaps */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x2C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    XMM_STORE(esp + 0xA0, xmm1); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0xA4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xA8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0xA0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00405BAE; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00405B5C: ;
    xmm2 = XMM_MEM(ebx + 0x20); /* movaps */
    MEMF(ebx + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm2); /* subps */
    XMM_STORE(esp + 0x40, xmm1); /* movaps */
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x44);
    ecx = ebx + 0x40;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(0x90930C);
    edx = MEM32(ecx + 0x27C);
    MEM32(ebx + 0x54) = edx;
    MEM32(ebx + 0x5C) = 2;
    goto loc_00405BB5;

loc_00405BAE: ;
    MEM32(ebx + 0x5C) = 4;

loc_00405BB5: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405BC3; /* je: equal / zero */

loc_00405BBC: ;
    eax = MEM32(ebx + 0x5C);
    MEM32(esp + 0x18) = eax;

loc_00405BC3: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040597D; /* jne: not equal / not zero */

loc_00405BD2: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00405CB0
 * Original: 0x00405CB0 - 0x00405CB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405CB0: ;
    g_seh_ebp = ebp; sub_0001A2F4(); return; /* tail jmp 0x0001A2F4 */

}

/**
 * sub_00405CC0
 * Original: 0x00405CC0 - 0x00405CE4 (36 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405CC0(void)
{

loc_00405CC0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi) = esi;
    MEM32(esi + 4) = esi;
    PUSH32(esp, 0x00405CDEu); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_00405CDE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00405CF0
 * Original: 0x00405CF0 - 0x00405ECA (474 bytes, 156 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405CF0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    eax = esi + 0x34;
    ecx = 0x65;

loc_00405D22: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00405D22; /* jne: not equal / not zero */

loc_00405D2D: ;
    PUSH32(esp, 0x144);
    PUSH32(esp, 0x00405D37u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_00405D37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00405D40: ;
    edx = MEM32(esi + 0x24);
    MEM32(eax + edx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x144) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x144 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00405D40; /* jl: less (signed <) */

loc_00405D50: ;
    eax = MEM32(esi + 0x24);
    MEM32(eax + 0x2C) = 0x1BB68;
    ecx = MEM32(esi + 0x24);
    MEM32(ecx + 0x3C) = 0x13210;
    edx = MEM32(esi + 0x24);
    MEM32(edx + 0x40) = 0x312A6;
    eax = MEM32(esi + 0x24);
    MEM32(eax + 4) = 0x2D5FC;
    ecx = MEM32(esi + 0x24);
    MEM32(ecx) = 0x2D3F9;
    edx = MEM32(esi + 0x24);
    MEM32(edx + 0x20) = 0x1DC2E;
    eax = MEM32(esi + 0x24);
    MEM32(eax + 0xC) = 0x1E921;
    ecx = MEM32(esi + 0x24);
    MEM32(ecx + 0x10) = 0x35045;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x4F4) = edi;
    ecx = MEM32(0x9092A0);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    edx = MEM32(ecx);
    PUSH32(esp, 0x12C0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00405DC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405DC6u); } /* indirect call */
    }

loc_00405DC8: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x00405DD5u); RECOMP_ABI_CALL(0x0059D322u, sub_0059D322); /* call 0x0059D322 */

loc_00405DD5: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405DF1; /* je: equal / zero */

loc_00405DDE: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(ebx) = ebx;
    MEM32(ebx + 4) = ebx;
    PUSH32(esp, 0x00405DEFu); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_00405DEF: ;
    goto loc_00405DF3;

loc_00405DF1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00405DF3: ;
    MEM32(esi + 0x4F0) = ebx;
    ecx = MEM32(0x9092A0);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    edx = MEM32(ecx);
    PUSH32(esp, 0xFA0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00405E19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405E17u); } /* indirect call */
    }

loc_00405E19: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x00405E26u); RECOMP_ABI_CALL(0x0059D322u, sub_0059D322); /* call 0x0059D322 */

loc_00405E26: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405E45; /* je: equal / zero */

loc_00405E2F: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xC8);
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(ebx) = ebx;
    MEM32(ebx + 4) = ebx;
    PUSH32(esp, 0x00405E43u); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_00405E43: ;
    goto loc_00405E47;

loc_00405E45: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00405E47: ;
    MEM32(esi + 0x30) = ebx;
    ebx = 0x100;
    MEM32(esi + 4) = ebx;
    ecx = MEM32(0x9092A0);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    edx = MEM32(ecx);
    PUSH32(esp, 0x400);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00405E72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405E70u); } /* indirect call */
    }

loc_00405E72: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00405E7Fu); RECOMP_ABI_CALL(0x00025DA7u, sub_00025DA7); /* call 0x00025DA7 */

loc_00405E7F: ;
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ebx;
    ecx = MEM32(0x9092A0);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    edx = MEM32(ecx);
    PUSH32(esp, 0x3000);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00405EA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405EA6u); } /* indirect call */
    }

loc_00405EA8: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    ecx = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00405EB8u); RECOMP_ABI_CALL(0x00025DA7u, sub_00025DA7); /* call 0x00025DA7 */

loc_00405EB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00405F40
 * Original: 0x00405F40 - 0x00405FEE (174 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405F40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00405F4Au); RECOMP_ABI_CALL(0x0001A2F4u, sub_0001A2F4); /* call 0x0001A2F4 */

loc_00405F4A: ;
    edx = MEM32(esi + 0x4F0);
    ecx = MEM32(0x9092A0);
    edx = MEM32(edx + 0x18);
    eax = MEM32(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00405F62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405F5Fu); } /* indirect call */
    }

loc_00405F62: ;
    edi = MEM32(esi + 0x4F0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405F7C; /* je: equal / zero */

loc_00405F6C: ;
    ecx = edi;
    PUSH32(esp, 0x00405F73u); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_00405F73: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00405F79u); RECOMP_ABI_CALL(0x0059D40Fu, sub_0059D40F); /* call 0x0059D40F */

loc_00405F79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00405F7C: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(0x9092A0);
    edx = MEM32(edx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00405F8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405F8Cu); } /* indirect call */
    }

loc_00405F8F: ;
    edi = MEM32(esi + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405FA6; /* je: equal / zero */

loc_00405F96: ;
    ecx = edi;
    PUSH32(esp, 0x00405F9Du); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_00405F9D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00405FA3u); RECOMP_ABI_CALL(0x0059D40Fu, sub_0059D40F); /* call 0x0059D40F */

loc_00405FA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00405FA6: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00405FAFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00405FAF: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405FCF; /* je: equal / zero */

loc_00405FB9: ;
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x10) = ebx;
    ecx = MEM32(0x9092A0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00405FCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405FC9u); } /* indirect call */
    }

loc_00405FCC: ;
    MEM32(esi + 0x14) = ebx;

loc_00405FCF: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405FEA; /* je: equal / zero */

loc_00405FD4: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = ebx;
    ecx = MEM32(0x9092A0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00405FE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405FE4u); } /* indirect call */
    }

loc_00405FE7: ;
    MEM32(esi + 8) = ebx;

loc_00405FEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00406020
 * Original: 0x00406020 - 0x00406028 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406020(void)
{

loc_00406020: ;
    PUSH32(esp, 0x00406025u); RECOMP_ABI_CALL(0x00023DA4u, sub_00023DA4); /* call 0x00023DA4 */

loc_00406025: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406030
 * Original: 0x00406030 - 0x004060C4 (148 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406030(void)
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

loc_00406030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x24);
    ebp = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_004060BC; /* jle: less or equal (signed <=) */

loc_00406047: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 1;
    MEM32(esp + 0x18) = edi;

loc_00406052: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x22);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    esi = ebx;
    if (CMP_L(_fas, _fbs)) esi = ecx; /* cmovl */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00406099; /* jge: greater or equal (signed >=) */

loc_00406061: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x2C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00406079; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x2C)) */

loc_00406070: ;
    ecx = MEM32(edi + esi * 4);
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x2C); /* comiss */
    if ((_fca >= _fcb)) goto loc_00406090; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ecx + 0x2C)) */

loc_00406079: ;
    edx = MEM32(edi + esi * 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00406087u); RECOMP_ABI_CALL(0x00022B11u, sub_00022B11); /* call 0x00022B11 */

loc_00406087: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406090; /* jne: not equal / not zero */

loc_0040608C: ;
    MEM32(esp + 0x10) = eax;

loc_00406090: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x24);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00406061; /* jl: less (signed <) */

loc_00406099: ;
    esi = MEM32(esp + 0x18);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x24);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00406052; /* jl: less (signed <) */

loc_004060B0: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_004060BC: ;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004060F0
 * Original: 0x004060F0 - 0x00406142 (82 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004060F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004060F0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040613D; /* je: equal / zero */

loc_004060FD: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040613C; /* je: equal / zero */

loc_00406104: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);

loc_00406108: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00406117u); RECOMP_ABI_CALL(0x00022B11u, sub_00022B11); /* call 0x00022B11 */

loc_00406117: ;
    esi = MEM32(esi + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406125; /* je: equal / zero */

loc_0040611E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406125; /* je: equal / zero */

loc_00406123: ;
    ebp = esi;

loc_00406125: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406135; /* je: equal / zero */

loc_00406129: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406135; /* je: equal / zero */

loc_00406130: ;
    esi = MEM32(edi + 8);
    goto loc_00406137;

loc_00406135: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00406137: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406108; /* jne: not equal / not zero */

loc_0040613B: ;
    POP32(esp, esi);

loc_0040613C: ;
    POP32(esp, edi);

loc_0040613D: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00406160
 * Original: 0x00406160 - 0x004062A3 (323 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00406160: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = edi;

loc_00406170: ;
    edi = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040628C; /* je: equal / zero */

loc_0040617B: ;
    esi = MEM32(edi + 8);
    edi = edi;

loc_00406180: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040618Fu); RECOMP_ABI_CALL(0x00022B11u, sub_00022B11); /* call 0x00022B11 */

loc_0040618F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406272; /* jne: not equal / not zero */

loc_00406198: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004061AA; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_004061A5: ;
    xmm0 = xmm1; /* movaps */
    goto loc_004061AE;

loc_004061AA: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_004061AE: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7FBE58); /* addss */
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    ecx = MEM32(esi);
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    eax = esp + 0x10;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00406210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040620Du); } /* indirect call */
    }

loc_00406210: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 4);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    eax = esp + 0x50;
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00406263u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406260u); } /* indirect call */
    }

loc_00406263: ;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040626Au); RECOMP_ABI_CALL(0x0001F682u, sub_0001F682); /* call 0x0001F682 */

loc_0040626A: ;
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406272u); RECOMP_ABI_CALL(0x0001F682u, sub_0001F682); /* call 0x0001F682 */

loc_00406272: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406282; /* je: equal / zero */

loc_00406276: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406282; /* je: equal / zero */

loc_0040627D: ;
    esi = MEM32(edi + 8);
    goto loc_00406284;

loc_00406282: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00406284: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406180; /* jne: not equal / not zero */

loc_0040628C: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406293u); RECOMP_ABI_CALL(0x00016E1Au, sub_00016E1A); /* call 0x00016E1A */

loc_00406293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406170; /* je: equal / zero */

loc_0040629C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00406300
 * Original: 0x00406300 - 0x00406359 (89 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406300: ;
    eax = MEM32(0x9092B4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406354; /* jne: not equal / not zero */

loc_0040630F: ;
    ecx = MEM32(0x9092A0);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = esi;
    eax = MEM32(ecx);
    PUSH32(esp, 0x4F8);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0040632Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040632Du); } /* indirect call */
    }

loc_0040632F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040634E; /* je: equal / zero */

loc_00406333: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00406344u); RECOMP_ABI_CALL(0x0001ABA5u, sub_0001ABA5); /* call 0x0001ABA5 */

loc_00406344: ;
    MEM32(0x9092B4) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0040634E: ;
    MEM32(0x9092B4) = esi;

loc_00406354: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00406370
 * Original: 0x00406370 - 0x00406393 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00406378u); RECOMP_ABI_CALL(0x000261D0u, sub_000261D0); /* call 0x000261D0 */

loc_00406378: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0040638D; /* je: equal / zero */

loc_0040637F: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0040638Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040638Au); } /* indirect call */
    }

loc_0040638D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004063A0
 * Original: 0x004063A0 - 0x004063CC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004063A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004063A0: ;
    ecx = MEM32(0x9092B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004063C0; /* je: equal / zero */

loc_004063AD: ;
    PUSH32(esp, 0x004063B2u); RECOMP_ABI_CALL(0x000261D0u, sub_000261D0); /* call 0x000261D0 */

loc_004063B2: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004063C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004063BDu); } /* indirect call */
    }

loc_004063C0: ;
    MEM32(0x9092B4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004063E0
 * Original: 0x004063E0 - 0x004063F4 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004063E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004063E0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0xC0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406400
 * Original: 0x00406400 - 0x00406430 (48 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = eax + eax * 4;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_MEM(eax + ecx + 0xC0); /* movaps */
    eax = eax + ecx + 0xC0;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00406440
 * Original: 0x00406440 - 0x0040646D (45 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_MEM(eax + ecx + 0xF0); /* movaps */
    eax = eax + ecx + 0xF0;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00406480
 * Original: 0x00406480 - 0x004064A5 (37 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_MEM(eax + ecx); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004064B0
 * Original: 0x004064B0 - 0x004064E0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004064B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004064B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004064DE; /* je: equal / zero */

loc_004064BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004064DA; /* je: equal / zero */

loc_004064C1: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = edi;
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004064CF; /* je: equal / zero */

loc_004064CD: ;
    MEM32(ecx) = edx;

loc_004064CF: ;
    PUSH32(esp, eax);
    ecx = 0x907F04;
    PUSH32(esp, 0x004064DAu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_004064DA: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);

loc_004064DE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004064F0
 * Original: 0x004064F0 - 0x00406548 (88 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004064F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004064F0: ;
    eax = MEM32(0x9092BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406547; /* je: equal / zero */

loc_004064F9: ;
    PUSH32(esp, esi);

loc_004064FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9092B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9092B8 (32-bit) */
    esi = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0040651D; /* je: equal / zero */

loc_00406504: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00406512; /* je: equal / zero */

loc_00406510: ;
    MEM32(ecx) = edx;

loc_00406512: ;
    PUSH32(esp, eax);
    ecx = 0x907F04;
    PUSH32(esp, 0x0040651Du); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0040651D: ;
    eax = MEM32(0x9092B4);
    ecx = esi;
    esi = MEM32(eax + 0x4F4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x4F0);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x4F4) = esi;
    PUSH32(esp, 0x0040653Du); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0040653D: ;
    eax = MEM32(0x9092BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004064FA; /* jne: not equal / not zero */

loc_00406546: ;
    POP32(esp, esi);

loc_00406547: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00406560
 * Original: 0x00406560 - 0x004065DC (124 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406560: ;
    PUSH32(esp, esi);
    esi = MEM32(0x9092BC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004065DA; /* je: equal / zero */

loc_0040656B: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);

loc_00406574: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040657D; /* je: equal / zero */

loc_00406578: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004065C2; /* jne: not equal / not zero */

loc_0040657D: ;
    eax = MEM32(0x9092B4);
    edi = MEM32(eax + 0x4F4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x4F0);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x4F4) = edi;
    PUSH32(esp, 0x0040659Bu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0040659B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004065D2; /* je: equal / zero */

loc_0040659F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9092B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9092B8 (32-bit) */
    edi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004065C0; /* je: equal / zero */

loc_004065A9: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004065B5; /* je: equal / zero */

loc_004065B3: ;
    MEM32(eax) = edi;

loc_004065B5: ;
    PUSH32(esp, esi);
    ecx = 0x907F04;
    PUSH32(esp, 0x004065C0u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_004065C0: ;
    esi = edi;

loc_004065C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004065D2; /* je: equal / zero */

loc_004065C6: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004065D2; /* je: equal / zero */

loc_004065CD: ;
    ecx = MEM32(esi + 8);
    goto loc_004065D4;

loc_004065D2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004065D4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406574; /* jne: not equal / not zero */

loc_004065D8: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004065DA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00406600
 * Original: 0x00406600 - 0x00406639 (57 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406600: ;
    ecx = MEM32(0x9092BC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406638; /* je: equal / zero */

loc_0040660C: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);

loc_00406614: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406635; /* je: equal / zero */

loc_00406618: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406635; /* je: equal / zero */

loc_0040661D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040662D; /* je: equal / zero */

loc_00406621: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040662D; /* je: equal / zero */

loc_00406628: ;
    edx = MEM32(ecx + 8);
    goto loc_0040662F;

loc_0040662D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0040662F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406614; /* jne: not equal / not zero */

loc_00406633: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00406635: ;
    eax = edx;
    POP32(esp, esi);

loc_00406638: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00406650
 * Original: 0x00406650 - 0x00406946 (758 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406650(void)
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

loc_00406650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406668u); RECOMP_ABI_CALL(0x0002999Du, sub_0002999D); /* call 0x0002999D */

loc_00406668: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040693F; /* je: equal / zero */

loc_00406673: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00406687; /* je: equal / zero */

loc_0040667F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00406687: ;
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    esi = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ebx = eax + 0x10;
    PUSH32(esp, esi);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x24); /* movaps */
    PUSH32(esp, ebx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = edi;
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004066E9u); RECOMP_ABI_CALL(0x000291F0u, sub_000291F0); /* call 0x000291F0 */

loc_004066E9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0040693F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0040675D: ;
    xmm1 = XMM_MEM(ebx); /* movaps */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_MEM(esi + edi + 0xA0); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x34); /* movaps */
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x88, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004067C7u); RECOMP_ABI_CALL(0x0002C5CBu, sub_0002C5CB); /* call 0x0002C5CB */

loc_004067C7: ;
    eax = esp + 0x98;
    PUSH32(esp, eax);
    ecx = esp + 0xFC;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004067DCu); RECOMP_ABI_CALL(0x000145A7u, sub_000145A7); /* call 0x000145A7 */

loc_004067DC: ;
    edx = esi + 0x120;
    PUSH32(esp, edx);
    eax = esp + 0x104;
    PUSH32(esp, eax);
    ecx = esp + 0xD8;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004067F8u); RECOMP_ABI_CALL(0x0001DFA3u, sub_0001DFA3); /* call 0x0001DFA3 */

loc_004067F8: ;
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    ecx = esp + 0x144;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406815u); RECOMP_ABI_CALL(0x0001DFA3u, sub_0001DFA3); /* call 0x0001DFA3 */

loc_00406815: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x14C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040682Cu); RECOMP_ABI_CALL(0x00034582u, sub_00034582); /* call 0x00034582 */

loc_0040682C: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00406836u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406833u); } /* indirect call */
    }

loc_00406836: ;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1 = XMM_MEM(esi + 0xF0); /* movaps */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x64); /* movaps */
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    PUSH32(esp, edx);
    XMM_STORE(esi + 0xF0, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040691Au); RECOMP_ABI_CALL(0x005A0935u, sub_005A0935); /* call 0x005A0935 */

loc_0040691A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_MEM(esi + 0x100); /* movaps */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x7C); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esi + 0x100, xmm1); /* movaps */

loc_0040693F: ;
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
 * sub_00406A10
 * Original: 0x00406A10 - 0x00406AF3 (227 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406A10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406A23u); RECOMP_ABI_CALL(0x0002999Du, sub_0002999D); /* call 0x0002999D */

loc_00406A23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406AEE; /* je: equal / zero */

loc_00406A2E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00406A42; /* je: equal / zero */

loc_00406A3A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00406A42: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + ecx * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_SCALAR(MEMF(ecx + esi + 0xC0)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + esi + 0xC4)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + esi + 0xC8)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + esi + 0xCC)); /* movss */
    ecx = ecx + esi + 0xC0;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(ecx); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx, xmm1); /* movaps */

loc_00406AEE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00406B30
 * Original: 0x00406B30 - 0x00406B4F (31 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406B30: ;
    eax = MEM32(ecx + 0xA8);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx + edx * 4 + 0x90);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00406B60
 * Original: 0x00406B60 - 0x00406B67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406B60(void)
{

loc_00406B60: ;
    eax = MEM32(ecx + 0xA8);
    esp += 4; return; /* ret */

}

/**
 * sub_00406B70
 * Original: 0x00406B70 - 0x00406B90 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x90);
    PUSH32(esp, eax);
    MEM32(esi) = 0x837264;
    PUSH32(esp, 0x00406B85u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00406B85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00020C80(); return; /* tail jmp 0x00020C80 */

}

/**
 * sub_00406BA0
 * Original: 0x00406BA0 - 0x00406BCC (44 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406BA0(void)
{

loc_00406BA0: ;
    edx = MEM32(0x87DAA0);
    eax = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DAA4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DAA8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x87DAAC);
    MEM32(ecx + 0xC) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00406BE0
 * Original: 0x00406BE0 - 0x00406BEE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406BE0(void)
{

loc_00406BE0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406C00
 * Original: 0x00406C00 - 0x00406D07 (263 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00406CEF; /* jne: not equal / not zero */

loc_00406C17: ;
    edx = MEM32(ecx + 0x10);
    esi = MEM32(ecx + edx * 4 + 0x90);
    eax = MEM32(ecx + 0xA8);
    edx = MEM32(ecx + 0x14);
    edi = MEM32(ecx + edx * 4 + 0x90);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0xA8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00406CFE; /* jbe: below or equal (unsigned <=) */

loc_00406C48: ;
    edx = edi + 0xC;
    eax = esi + 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00406C50: ;
    xmm0 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x9C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + -4); /* addss */
    MEMF(edx + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x9C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(edi + eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x9C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xA4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(edx + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xA0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    esi = MEM32(ecx + 0xA8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00406C50; /* jb: below (unsigned <) */

loc_00406CE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00406CEF: ;
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00406CFBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00406CF9u); } /* indirect call */
    }

loc_00406CFB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00406CFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406D50
 * Original: 0x00406D50 - 0x00406D53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406D50(void)
{

loc_00406D50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406D60
 * Original: 0x00406D60 - 0x00406D73 (19 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406D60: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    g_seh_ebp = ebp; sub_0003644A(); return; /* tail jmp 0x0003644A */

}

/**
 * sub_00406D80
 * Original: 0x00406D80 - 0x00406E00 (128 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406D80: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ecx = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00406DA2u); RECOMP_ABI_CALL(0x000197A0u, sub_000197A0); /* call 0x000197A0 */

loc_00406DA2: ;
    eax = edi * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    MEM32(esi) = 0x837264;
    PUSH32(esp, 0x00406DB8u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_00406DB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    edx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = edx;
    PUSH32(esp, 0x00406DD8u); RECOMP_ABI_CALL(0x00012559u, sub_00012559); /* call 0x00012559 */

loc_00406DD8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0xA8) = edi;
    POP32(esp, edi);
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00406E20
 * Original: 0x00406E20 - 0x00406E5A (58 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x90);
    PUSH32(esp, eax);
    MEM32(esi) = 0x837264;
    PUSH32(esp, 0x00406E35u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00406E35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00406E3Fu); RECOMP_ABI_CALL(0x00020C80u, sub_00020C80); /* call 0x00020C80 */

loc_00406E3F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00406E54; /* je: equal / zero */

loc_00406E46: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00406E54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406E51u); } /* indirect call */
    }

loc_00406E54: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406E70
 * Original: 0x00406E70 - 0x00406E7A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406E70(void)
{

loc_00406E70: ;
    eax = MEM32(esp + 4);
    MEM32(0x9092A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00406E80
 * Original: 0x00406E80 - 0x00406EA8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406E80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00406EA4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00406EA2u); } /* indirect call */
    }

loc_00406EA4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00406EC0
 * Original: 0x00406EC0 - 0x00406ECE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406EC0(void)
{

loc_00406EC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406EE0
 * Original: 0x00406EE0 - 0x00406EEE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406EE0(void)
{

loc_00406EE0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406F00
 * Original: 0x00406F00 - 0x00406F0E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406F00(void)
{

loc_00406F00: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406F20
 * Original: 0x00406F20 - 0x00406F2A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406F20(void)
{

loc_00406F20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x50) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406F30
 * Original: 0x00406F30 - 0x00406F58 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406F30(void)
{

loc_00406F30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM32(0x9092D0) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x9092D4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x9092D8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x9092DC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00406F70
 * Original: 0x00406F70 - 0x00406F98 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406F70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00406F94u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00406F92u); } /* indirect call */
    }

loc_00406F94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00406FB0
 * Original: 0x00406FB0 - 0x00406FC1 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406FB0: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0xE0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406FD0
 * Original: 0x00406FD0 - 0x00406FDE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406FD0: ;
    eax = MEM32(ecx + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x150;
    esp += 4; return; /* ret */

}

/**
 * sub_00406FF0
 * Original: 0x00406FF0 - 0x00406FFE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406FF0: ;
    eax = MEM32(ecx + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_00407010
 * Original: 0x00407010 - 0x00407021 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407010(void)
{

loc_00407010: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x408) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00407030
 * Original: 0x00407030 - 0x00407058 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407030: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00407054u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00407052u); } /* indirect call */
    }

loc_00407054: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00407070
 * Original: 0x00407070 - 0x00407083 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407070(void)
{

loc_00407070: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00407082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040707Fu); } /* indirect call */
    }

loc_00407082: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00407090
 * Original: 0x00407090 - 0x004070B8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407090: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004070B4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004070B2u); } /* indirect call */
    }

loc_004070B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004070D0
 * Original: 0x004070D0 - 0x004070E3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004070D0(void)
{

loc_004070D0: ;
    ecx = MEM32(0x9092A0);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004070E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004070DFu); } /* indirect call */
    }

loc_004070E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004070F0
 * Original: 0x004070F0 - 0x0040714E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004070F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004070F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    MEM32(0x9092A0) = eax;
    ecx = MEM32(esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00407109u); RECOMP_ABI_CALL(0x0001466Au, sub_0001466A); /* call 0x0001466A */

loc_00407109: ;
    PUSH32(esp, 0x0040710Eu); RECOMP_ABI_CALL(0x00034D07u, sub_00034D07); /* call 0x00034D07 */

loc_0040710E: ;
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0040711Bu); RECOMP_ABI_CALL(0x000326E2u, sub_000326E2); /* call 0x000326E2 */

loc_0040711B: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00407124u); RECOMP_ABI_CALL(0x0002647Du, sub_0002647D); /* call 0x0002647D */

loc_00407124: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    MEM32(0x9092D0) = edx;
    eax = MEM32(esi + 4);
    MEM32(0x9092D4) = eax;
    ecx = MEM32(esi + 8);
    MEM32(0x9092D8) = ecx;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9092DC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00407170
 * Original: 0x00407170 - 0x0040717F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407170: ;
    PUSH32(esp, 0x00407175u); RECOMP_ABI_CALL(0x00031062u, sub_00031062); /* call 0x00031062 */

loc_00407175: ;
    PUSH32(esp, 0x0040717Au); RECOMP_ABI_CALL(0x00019C73u, sub_00019C73); /* call 0x00019C73 */

loc_0040717A: ;
    g_seh_ebp = ebp; sub_0002995C(); return; /* tail jmp 0x0002995C */

}

/**
 * sub_00407190
 * Original: 0x00407190 - 0x004071A3 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407190(void)
{

loc_00407190: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM32(0x9092A0) = eax;
    PUSH32(esp, 0x0040719Fu); RECOMP_ABI_CALL(0x0001FD3Au, sub_0001FD3A); /* call 0x0001FD3A */

loc_0040719F: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004071B0
 * Original: 0x004071B0 - 0x004071BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004071B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004071B0: ;
    ecx = MEM32(0x90930C);
    g_seh_ebp = ebp; sub_00024A56(); return; /* tail jmp 0x00024A56 */

}

/**
 * sub_004071C0
 * Original: 0x004071C0 - 0x004071D0 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004071C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004071C0: ;
    ecx = MEM32(0x9092B4);
    PUSH32(esp, 0x004071CBu); RECOMP_ABI_CALL(0x0003683Cu, sub_0003683C); /* call 0x0003683C */

loc_004071CB: ;
    g_seh_ebp = ebp; sub_000173E7(); return; /* tail jmp 0x000173E7 */

}

/**
 * sub_004071E0
 * Original: 0x004071E0 - 0x004071E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004071E0(void)
{

loc_004071E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004071F0
 * Original: 0x004071F0 - 0x004072D9 (233 bytes, 80 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004071F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004071F0: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 8;
    esi = ecx;
    ecx = MEM32(0x9092A0);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    eax = MEM32(ecx);
    PUSH32(esp, 0x410);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00407219u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407217u); } /* indirect call */
    }

loc_00407219: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407233; /* je: equal / zero */

loc_0040721D: ;
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x7C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00407231u); RECOMP_ABI_CALL(0x00023980u, sub_00023980); /* call 0x00023980 */

loc_00407231: ;
    goto loc_00407235;

loc_00407233: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00407235: ;
    edi = MEM32(esp + 0x78);
    MEM32(esi) = eax;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00407245u); RECOMP_ABI_CALL(0x0002248Bu, sub_0002248B); /* call 0x0002248B */

loc_00407245: ;
    edx = MEM32(esi);
    eax = MEM32(edi + 4);
    MEM32(edx + 0x24) = eax;
    ecx = MEM32(esi);
    edx = MEM32(edi + 8);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0xC);
    MEM32(eax + 0x408) = ecx;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x10);
    ecx = edi + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    MEM32(edx + 0x34) = eax;
    PUSH32(esp, 0x00407275u); RECOMP_ABI_CALL(0x00028A9Du, sub_00028A9D); /* call 0x00028A9D */

loc_00407275: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407284u); RECOMP_ABI_CALL(0x0002E489u, sub_0002E489); /* call 0x0002E489 */

loc_00407284: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x00407293u); RECOMP_ABI_CALL(0x0002939Eu, sub_0002939E); /* call 0x0002939E */

loc_00407293: ;
    ecx = MEM32(esi);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0040729Fu); RECOMP_ABI_CALL(0x0001A885u, sub_0001A885); /* call 0x0001A885 */

loc_0040729F: ;
    ecx = MEM32(esi);
    eax = edi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004072AAu); RECOMP_ABI_CALL(0x0001B4BAu, sub_0001B4BA); /* call 0x0001B4BA */

loc_004072AA: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x87DAA0);
    PUSH32(esp, 0x004072B6u); RECOMP_ABI_CALL(0x0001D229u, sub_0001D229); /* call 0x0001D229 */

loc_004072B6: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x004072C1u); RECOMP_ABI_CALL(0x0001846Du, sub_0001846D); /* call 0x0001846D */

loc_004072C1: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x90930C);
    PUSH32(esp, 0x004072CFu); RECOMP_ABI_CALL(0x00026E50u, sub_00026E50); /* call 0x00026E50 */

loc_004072CF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00407320
 * Original: 0x00407320 - 0x0040733F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407320: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(0x90930C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407331u); RECOMP_ABI_CALL(0x000291EBu, sub_000291EB); /* call 0x000291EB */

loc_00407331: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0040733E; /* je: equal / zero */

loc_00407338: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0040733Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040733Cu); } /* indirect call */
    }

loc_0040733E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00407350
 * Original: 0x00407350 - 0x00407357 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407350: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002D43A(); return; /* tail jmp 0x0002D43A */

}

/**
 * sub_00407360
 * Original: 0x00407360 - 0x00407367 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407360: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001B4BA(); return; /* tail jmp 0x0001B4BA */

}

/**
 * sub_00407370
 * Original: 0x00407370 - 0x0040737C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407370(void)
{

loc_00407370: ;
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0040737Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407378u); } /* indirect call */
    }

loc_0040737B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00407380
 * Original: 0x00407380 - 0x004073B0 (48 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407380: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ecx + eax + 0xD0;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004073C0
 * Original: 0x004073C0 - 0x004073D0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004073C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004073C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ecx + eax + 0xE0;
    esp += 4; return; /* ret */

}

/**
 * sub_004073E0
 * Original: 0x004073E0 - 0x004073E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004073E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004073E0: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00035B0D(); return; /* tail jmp 0x00035B0D */

}

/**
 * sub_004073F0
 * Original: 0x004073F0 - 0x00407509 (281 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004073F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004073F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = eax + ecx + 0x150;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00407413u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407410u); } /* indirect call */
    }

loc_00407413: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = 0x10;
    esi = esp + 0x20;
    edi = eax;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
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
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00407550
 * Original: 0x00407550 - 0x00407557 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407550: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00018602(); return; /* tail jmp 0x00018602 */

}

/**
 * sub_00407560
 * Original: 0x00407560 - 0x00407567 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407560: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001D229(); return; /* tail jmp 0x0001D229 */

}

/**
 * sub_00407570
 * Original: 0x00407570 - 0x00407588 (24 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407570(void)
{

loc_00407570: ;
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00407585u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407582u); } /* indirect call */
    }

loc_00407585: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407590
 * Original: 0x00407590 - 0x0040759C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407590(void)
{

loc_00407590: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x50) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004075A0
 * Original: 0x004075A0 - 0x0040760D (109 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004075A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004075A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    edx = esp + 4;
    esi = ecx;
    ecx = MEM32(0x9092A0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0xA0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004075D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004075D0u); } /* indirect call */
    }

loc_004075D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004075E9; /* je: equal / zero */

loc_004075D6: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x004075E7u); RECOMP_ABI_CALL(0x000147CDu, sub_000147CD); /* call 0x000147CD */

loc_004075E7: ;
    goto loc_004075EB;

loc_004075E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004075EB: ;
    MEM32(esi) = eax;
    ecx = MEM32(0x90930C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004075F9u); RECOMP_ABI_CALL(0x00026E50u, sub_00026E50); /* call 0x00026E50 */

loc_004075F9: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    MEM32(eax + 0x34) = edx;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00407630
 * Original: 0x00407630 - 0x0040764F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407630: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(0x90930C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407641u); RECOMP_ABI_CALL(0x000291EBu, sub_000291EB); /* call 0x000291EB */

loc_00407641: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0040764E; /* je: equal / zero */

loc_00407648: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0040764Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040764Cu); } /* indirect call */
    }

loc_0040764E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00407660
 * Original: 0x00407660 - 0x00407667 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407660: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0002D43A(); return; /* tail jmp 0x0002D43A */

}

/**
 * sub_00407670
 * Original: 0x00407670 - 0x0040767C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407670(void)
{

loc_00407670: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x50) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00407680
 * Original: 0x00407680 - 0x004076D3 (83 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407680: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004076ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004076A9u); } /* indirect call */
    }

loc_004076AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004076CB; /* je: equal / zero */

loc_004076AF: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x004076C5u); RECOMP_ABI_CALL(0x00035CC5u, sub_00035CC5); /* call 0x00035CC5 */

loc_004076C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_004076CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004076F0
 * Original: 0x004076F0 - 0x00407728 (56 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004076F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004076F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(0x90930C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407701u); RECOMP_ABI_CALL(0x000291EBu, sub_000291EB); /* call 0x000291EB */

loc_00407701: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040770D; /* je: equal / zero */

loc_00407707: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0040770Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040770Bu); } /* indirect call */
    }

loc_0040770D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00407722; /* je: equal / zero */

loc_00407714: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00407722u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040771Fu); } /* indirect call */
    }

loc_00407722: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00407740
 * Original: 0x00407740 - 0x00407793 (83 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407740: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0040776Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407769u); } /* indirect call */
    }

loc_0040776B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040778B; /* je: equal / zero */

loc_0040776F: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00407785u); RECOMP_ABI_CALL(0x00011280u, sub_00011280); /* call 0x00011280 */

loc_00407785: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0040778B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004077B0
 * Original: 0x004077B0 - 0x004077E8 (56 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004077B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004077B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(0x90930C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004077C1u); RECOMP_ABI_CALL(0x000291EBu, sub_000291EB); /* call 0x000291EB */

loc_004077C1: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004077CD; /* je: equal / zero */

loc_004077C7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004077CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004077CBu); } /* indirect call */
    }

loc_004077CD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004077E2; /* je: equal / zero */

loc_004077D4: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004077E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004077DFu); } /* indirect call */
    }

loc_004077E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00407800
 * Original: 0x00407800 - 0x00407835 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407800: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407831; /* je: equal / zero */

loc_00407809: ;
    eax = MEM32(esi);
    ecx = MEM32(0x90930C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407817u); RECOMP_ABI_CALL(0x000291EBu, sub_000291EB); /* call 0x000291EB */

loc_00407817: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407823; /* je: equal / zero */

loc_0040781D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00407823u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407821u); } /* indirect call */
    }

loc_00407823: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00407831u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040782Eu); } /* indirect call */
    }

loc_00407831: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00407850
 * Original: 0x00407850 - 0x00407885 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407881; /* je: equal / zero */

loc_00407859: ;
    eax = MEM32(esi);
    ecx = MEM32(0x90930C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407867u); RECOMP_ABI_CALL(0x000291EBu, sub_000291EB); /* call 0x000291EB */

loc_00407867: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407873; /* je: equal / zero */

loc_0040786D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00407873u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407871u); } /* indirect call */
    }

loc_00407873: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00407881u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040787Eu); } /* indirect call */
    }

loc_00407881: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004078A0
 * Original: 0x004078A0 - 0x004078C3 (35 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004078A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004078A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 1;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM32(eax + 0x10) = 0x7AB14C;
    MEM32(eax + 0x14) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_004078D0
 * Original: 0x004078D0 - 0x004078D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004078D0(void)
{

loc_004078D0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004078E0
 * Original: 0x004078E0 - 0x004078E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004078E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004078E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001A777(); return; /* tail jmp 0x0001A777 */

}

/**
 * sub_004078F0
 * Original: 0x004078F0 - 0x004079B2 (194 bytes, 66 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004078F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004078F0: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + edx + 0x10;
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + edx + 0x20;
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + edx + 0x30;
    edx = MEM32(esp + 0x14);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    esi = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + edx + 0x40) = esi;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004079F0
 * Original: 0x004079F0 - 0x00407C01 (529 bytes, 154 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004079F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_004079F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    PUSH32(esp, edi);
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    if (CMP_BE(_fa, _fb)) goto loc_00407BDA; /* jbe: below or equal (unsigned <=) */

loc_00407A32: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = eax;
    /* nop */

loc_00407A40: ;
    edi = MEM32(esp + 0x28);
    ebx = 4;
    /* nop */

loc_00407A50: ;
    edx = MEM32(esi + 0x8C);
    eax = MEM32(esi + 0x88);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x80);
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x7C);
    xmm1 = XMM_MEM(edi); /* movaps */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x6C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x5C);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    XMM_STORE(esp + 0x5C, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x50);
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x7C); /* movaps */
    PUSH32(esp, edx);
    ecx = esp + 0xB0;
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407AF7u); RECOMP_ABI_CALL(0x005A0B75u, sub_005A0B75); /* call 0x005A0B75 */

loc_00407AF7: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407B0Bu); RECOMP_ABI_CALL(0x00013F9Eu, sub_00013F9E); /* call 0x00013F9E */

loc_00407B0B: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00407B21; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00407B1C: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00407B28;

loc_00407B21: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00407B28: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00407B49; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x10)) */

loc_00407B2F: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00407B3C; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00407B34: ;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    goto loc_00407B49;

loc_00407B3C: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_00407B49: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00407B59; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00407B54: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00407B60;

loc_00407B59: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00407B60: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00407B81; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x14)) */

loc_00407B67: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00407B74; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00407B6C: ;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    goto loc_00407B81;

loc_00407B74: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_00407B81: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00407B91; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00407B8C: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00407B98;

loc_00407B91: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00407B98: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00407BB6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x18)) */

loc_00407B9F: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00407BAC; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00407BA4: ;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    goto loc_00407BB6;

loc_00407BAC: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00407BB6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00407A50; /* jne: not equal / not zero */

loc_00407BC0: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_00407A40; /* jne: not equal / not zero */

loc_00407BDA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00407C90
 * Original: 0x00407C90 - 0x00407CFA (106 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00407C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = eax;
    edx = ecx + 8;
    edi = 4;
    /* nop */

loc_00407CB0: ;
    xmm0 = XMM_SCALAR(MEMF(edx + -8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + -4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00407CB0; /* jne: not equal / not zero */

loc_00407CEC: ;
    ecx = MEM32(ecx + 0x40);
    POP32(esp, edi);
    MEM32(eax + 0x40) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00407D20
 * Original: 0x00407D20 - 0x00407DAA (138 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00407D20(void)
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

loc_00407D20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00407D3B; /* jge: greater or equal (signed >=) */

loc_00407D35: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00407D3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB82C)); /* fmul dword ptr [0x7ab82c] */
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_BE(_fa, _fb)) goto loc_00407D8F; /* jbe: below or equal (unsigned <=) */

loc_00407D63: ;
    esi = MEM32(ebp + 0xC);
    edi = eax;
    goto loc_00407D70;

    /* nop */

loc_00407D70: ;
    eax = esi;
    edx = 4;

loc_00407D77: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx, xmm1); /* movaps */
    if ((_fa != 0)) goto loc_00407D77; /* jne: not equal / not zero */

loc_00407D89: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00407D70; /* jne: not equal / not zero */

loc_00407D8F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_MEM(ecx); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    POP32(esp, edi);
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(ecx, xmm1); /* movaps */
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
 * sub_00407DD0
 * Original: 0x00407DD0 - 0x00407F32 (354 bytes, 96 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00407DD0(void)
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

loc_00407DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x14);
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00407DEC; /* jge: greater or equal (signed >=) */

loc_00407DE6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00407DEC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB82C)); /* fmul dword ptr [0x7ab82c] */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    ecx = 0xC;
    esi = 0x8CFCBC;
    edi = eax;
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
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_BE(_fa, _fb)) goto loc_00407F09; /* jbe: below or equal (unsigned <=) */

loc_00407E26: ;
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0xC);
    ebx = edx;
    edi = edi;

loc_00407E30: ;
    ecx = edi;
    edx = 4;

loc_00407E37: ;
    xmm0 = XMM_MEM(esi); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 8); /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x28); /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    if ((_fa != 0)) goto loc_00407E37; /* jne: not equal / not zero */

loc_00407EFF: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00407E30; /* jne: not equal / not zero */

loc_00407F09: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 4);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(eax + 0x24) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407F26u); RECOMP_ABI_CALL(0x00026A68u, sub_00026A68); /* call 0x00026A68 */

loc_00407F26: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
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
 * sub_00407F90
 * Original: 0x00407F90 - 0x0040802A (154 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407F90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi + edi * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esi) = 0x8372AC;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0x00407FB8u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_00407FB8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408002; /* je: equal / zero */

loc_00407FC1: ;
    ecx = edi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, ebp);
    MEM32(eax) = edi;
    ebp = eax + 0x10;
    if (CMP_L(_fas, _fbs)) goto loc_00407FFD; /* jl: less (signed <) */

loc_00407FCE: ;
    eax = ebp + 0x1C;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0x7AB14C;
    edx = 6;
    /* nop */

loc_00407FE0: ;
    MEM32(eax + -4) = ebx;
    MEM32(eax) = 1;
    MEM8(eax + 4) = LO8(ebx);
    MEM8(eax + 5) = LO8(ebx);
    MEM32(eax + -12) = edi;
    MEM32(eax + -8) = edx;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00407FE0; /* jne: not equal / not zero */

loc_00407FFD: ;
    eax = ebp;
    POP32(esp, ebp);
    goto loc_00408004;

loc_00408002: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00408004: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x10);
    edx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    PUSH32(esp, 0x00408016u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_00408016: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x14) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408050
 * Original: 0x00408050 - 0x004080C4 (116 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00408050: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_004080A7; /* je: equal / zero */

loc_0040805D: ;
    eax = MEM32(esi + -16);
    PUSH32(esp, ebp);
    ebp = esi + -16;
    ecx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00408091; /* js: sign (negative) */

loc_0040806F: ;
    PUSH32(esp, edi);
    esi = ecx + 0x10;
    edi = eax + 1;
    goto loc_00408080;

    /* nop */
    /* nop */

loc_00408080: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0040808Du); RECOMP_ABI_CALL(0x0001A777u, sub_0001A777); /* call 0x0001A777 */

loc_0040808D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00408080; /* jne: not equal / not zero */

loc_00408090: ;
    POP32(esp, edi);

loc_00408091: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0040809F; /* je: equal / zero */

loc_00408096: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0040809Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0040809C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040809F: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004080A7: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x004080AFu); RECOMP_ABI_CALL(0x0001A777u, sub_0001A777); /* call 0x0001A777 */

loc_004080AF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004080BD; /* je: equal / zero */

loc_004080B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004080BAu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004080BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004080BD: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004080F0
 * Original: 0x004080F0 - 0x0040814A (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004080F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004080F0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    edx = MEM32(ebp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp) = 0x8372AC;
    if (CMP_EQ(_fa, _fb)) goto loc_0040813C; /* je: equal / zero */

loc_00408101: ;
    eax = MEM32(edx + -16);
    PUSH32(esp, ebx);
    ebx = edx + -16;
    ecx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00408132; /* js: sign (negative) */

loc_00408113: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x10;
    edi = eax + 1;
    goto loc_00408120;

    /* nop */

loc_00408120: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0040812Du); RECOMP_ABI_CALL(0x0001A777u, sub_0001A777); /* call 0x0001A777 */

loc_0040812D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00408120; /* jne: not equal / not zero */

loc_00408130: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00408132: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00408138u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00408138: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_0040813C: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00408145u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00408145: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00408160
 * Original: 0x00408160 - 0x0040850E (942 bytes, 226 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00408160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00408160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    esi = esi + esi * 4;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040817Eu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_0040817E: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408189u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_00408189: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x14);
    MEM32(edx) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x64;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004081C2u); RECOMP_ABI_CALL(0x000184DBu, sub_000184DB); /* call 0x000184DB */

loc_004081C2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, esi);
    ecx = esp + 0xA4;
    XMM_STORE(esp + 0x64, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408209u); RECOMP_ABI_CALL(0x000184DBu, sub_000184DB); /* call 0x000184DB */

loc_00408209: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xBC)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, esi);
    ecx = esp + 0xA4;
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040825Cu); RECOMP_ABI_CALL(0x000184DBu, sub_000184DB); /* call 0x000184DB */

loc_0040825C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    esi = 1;
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    MEM32(esp + 0xC) = esi;
    edx = esp + 0x60;
    ecx = esp + 0x50;
    MEM32(esp + 0x28) = 2;
    edi = edi;

loc_004082C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00408389; /* jae: above or equal (unsigned >=) */

loc_004082C9: ;
    eax = edx + 0x18;
    /* nop */

loc_004082D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + esi * 4 + 0x50)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00408378; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_004082DF: ;
    xmm1 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    edi = edx;
    ebx = MEM32(edi);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(edi + 4);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    XMM_STORE(edx, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x18) = ebx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esp + esi * 4 + 0x50);
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    MEM32(ecx) = edi;
    XMM_STORE(eax + -8, xmm1); /* movaps */
    MEMF(esp + esi * 4 + 0x50) = xmm0.f[0]; /* movss */

loc_00408378: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004082D0; /* jb: below (unsigned <) */

loc_00408385: ;
    esi = MEM32(esp + 0xC);

loc_00408389: ;
    eax = MEM32(esp + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_004082C0; /* jne: not equal / not zero */

loc_004083A3: ;
    edi = MEM32(ebp + 0x18);
    ebx = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x68;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0xC) = eax;
    goto loc_004083C0;

    /* nop */

loc_004083C0: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebx) = 0;
    MEM32(edi) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_004084E0; /* jbe: below or equal (unsigned <=) */

loc_004083D7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    esi = MEM32(ebp + 0x1C);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    MEM32(esp + 0x28) = ecx;
    goto loc_00408400;

loc_004083F1: ;
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    goto loc_00408400;

    /* nop */
    /* nop */

loc_00408400: ;
    xmm2 = XMM_MEM(esi + 0x20); /* movaps */
    xmm3 = XMM_MEM(esi + 0x10); /* movaps */
    xmm4 = XMM_MEM(esi); /* movaps */
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    ecx = MEM32(ebp + 8);
    xmm4 = XMM_ADD(xmm4, xmm3); /* addps */
    xmm4 = XMM_ADD(xmm4, xmm2); /* addps */
    xmm4 = XMM_ADD(xmm4, xmm1); /* addps */
    xmm1 = XMM_MEM(ecx + 0x30); /* movaps */
    XMM_STORE(esp + 0x40, xmm4); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm2 = XMM_SUB(xmm2, xmm1); /* subps */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004084AD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00408495: ;
    eax = MEM32(ebx);
    edx = MEM32(ebp + 0xC);
    ecx = eax + eax * 4;
    eax = MEM32(edx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004084A9u); RECOMP_ABI_CALL(0x00034C9Eu, sub_00034C9E); /* call 0x00034C9E */

loc_004084A9: ;
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004084C3;

loc_004084AD: ;
    eax = MEM32(edi);
    ecx = eax + eax * 4;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004084C1u); RECOMP_ABI_CALL(0x00034C9Eu, sub_00034C9E); /* call 0x00034C9E */

loc_004084C1: ;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004084C3: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0xC);
    if ((_fa != 0)) goto loc_004083F1; /* jne: not equal / not zero */

loc_004084D9: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(esp + 0x2C);

loc_004084E0: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004084E8; /* je: equal / zero */

loc_004084E4: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004084FD; /* jne: not equal / not zero */

loc_004084E8: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_004083C0; /* jb: below (unsigned <) */

loc_004084FD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00408600
 * Original: 0x00408600 - 0x0040861E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408600: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00408608u); RECOMP_ABI_CALL(0x0002C35Au, sub_0002C35A); /* call 0x0002C35A */

loc_00408608: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00408618; /* je: equal / zero */

loc_0040860F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00408615u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00408615: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00408618: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408630
 * Original: 0x00408630 - 0x004087D3 (419 bytes, 137 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408630(void)
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

loc_00408630: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x0040864Eu); RECOMP_ABI_CALL(0x000262E8u, sub_000262E8); /* call 0x000262E8 */

loc_0040864E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    ecx = edi;
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x004086BFu); RECOMP_ABI_CALL(0x0002CDF5u, sub_0002CDF5); /* call 0x0002CDF5 */

loc_004086BF: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x40); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004086D2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x40)) */

loc_004086CD: ;
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */

loc_004086D2: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004086DD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x44)) */

loc_004086D8: ;
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */

loc_004086DD: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x48); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004086E8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x48)) */

loc_004086E3: ;
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */

loc_004086E8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004087B5; /* jbe: below or equal (unsigned <=) */

loc_004086F1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00408719u); RECOMP_ABI_CALL(0x00035DA1u, sub_00035DA1); /* call 0x00035DA1 */

loc_00408719: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_00408791; /* je: equal / zero */

loc_00408725: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040874D; /* je: equal / zero */

loc_0040872D: ;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(edi + 0xC) = eax;
    edx = eax + eax * 4;
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0040874Bu); RECOMP_ABI_CALL(0x0001405Cu, sub_0001405C); /* call 0x0001405C */

loc_0040874B: ;
    goto loc_00408753;

loc_0040874D: ;
    MEM32(esi) = 0xFFFFFFFFu;

loc_00408753: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408797; /* je: equal / zero */

loc_0040875B: ;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0xC) = eax;
    MEM32(esi + 4) = eax;
    edx = MEM32(edi + 4);
    eax = eax + eax * 4;
    PUSH32(esp, ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0040877Au); RECOMP_ABI_CALL(0x0001405Cu, sub_0001405C); /* call 0x0001405C */

loc_0040877A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00408780u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00408780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00408786u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00408786: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00408791: ;
    MEM32(esi) = 0xFFFFFFFFu;

loc_00408797: ;
    PUSH32(esp, ebp);
    MEM32(esi + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x004087A4u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004087A4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004087AAu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004087AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_004087B5: ;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    ecx = MEM32(ebx + 0x40);
    POP32(esp, edi);
    MEM32(esi + 0x90) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00408840
 * Original: 0x00408840 - 0x00408852 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408840(void)
{

loc_00408840: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00408851u); RECOMP_ABI_CALL(0x0001405Cu, sub_0001405C); /* call 0x0001405C */

loc_00408851: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00408860
 * Original: 0x00408860 - 0x0040888D (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408860: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 4);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax + ecx + 0x90;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004088A0
 * Original: 0x004088A0 - 0x004088C5 (37 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004088A0(void)
{

loc_004088A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx + 0x180) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x184) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004088D0
 * Original: 0x004088D0 - 0x004088DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004088D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004088D0: ;
    MEM32(ecx) = 0x8372B4;
    g_seh_ebp = ebp; sub_00020C80(); return; /* tail jmp 0x00020C80 */

}

/**
 * sub_004088E0
 * Original: 0x004088E0 - 0x004088E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004088E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004088E0: ;
    fp_push(MEMF(ecx + 0x184)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004088F0
 * Original: 0x004088F0 - 0x00408915 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004088F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004088F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040890F; /* je: equal / zero */

loc_00408900: ;
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0040890Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0040890Au); } /* indirect call */
    }

loc_0040890C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040890F: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408920
 * Original: 0x00408920 - 0x004089D3 (179 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00408920(void)
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

loc_00408920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x184)); /* movss */
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_MEM(eax + ecx + 0xA0); /* movaps */
    edx = eax + ecx + 0x90;
    eax = edx + 0x20;
    PUSH32(esp, esi);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    esi = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(ecx + 8) = esi;
    esi = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = esi;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edx + 0x40) = xmm0.f[0]; /* movss */
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
 * sub_00408A00
 * Original: 0x00408A00 - 0x00408A33 (51 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00408A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x10);
    eax = edx + edx * 4 + 0xA;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_MEM(eax + ecx); /* movaps */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(esi); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00408A2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408A29u); } /* indirect call */
    }

loc_00408A2C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00408A40
 * Original: 0x00408A40 - 0x00408AD2 (146 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408A40(void)
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

loc_00408A40: ;
    eax = MEM32(ecx + 0x10);
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    eax = eax + ecx + 0x90;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00408A63; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_00408A5E: ;
    xmm0 = xmm3; /* movaps */
    goto loc_00408A6A;

loc_00408A63: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_00408A6A: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00408A74; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00408A6F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00408A7B;

loc_00408A74: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00408A7B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AD428); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00408ACF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AD428)) */

loc_00408A84: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    if ((_fca > _fcb)) goto loc_00408A99; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00408A91: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00408A99: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */

loc_00408ACF: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00408B00
 * Original: 0x00408B00 - 0x00408BCE (206 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00408B00(void)
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

loc_00408B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = eax + ecx + 0x90;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi);
    esi = edx + 0x20;
    MEM32(esi) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esi + 4) = ebx;
    ebx = MEM32(edi + 8);
    MEM32(esi + 8) = ebx;
    edi = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edi;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x180)); /* movss */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    esi = MEM32(esp + 0x20);
    ecx = edx + 0x10;
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x24);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x28);
    MEM32(ecx + 8) = esi;
    esi = MEM32(esp + 0x2C);
    MEM32(ecx + 0xC) = esi;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(edx + 0x40) = xmm0.f[0]; /* movss */
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
 * sub_00408C10
 * Original: 0x00408C10 - 0x00408C15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00408C10: ;
    g_seh_ebp = ebp; sub_00037683(); return; /* tail jmp 0x00037683 */

}

/**
 * sub_00408C20
 * Original: 0x00408C20 - 0x00408C7B (91 bytes, 24 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00408C20(void)
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

loc_00408C20: ;
    eax = MEM32(ecx + 0x10);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    fp_push(MEMF(eax + ecx + 0xD0)); /* fld float */
    eax = eax + ecx + 0x90;
    fp_push(MEMF(0x9092D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(0x9092D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x9092DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x9092D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x180)); /* fmul dword ptr [ecx + 0x180] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00408CA0
 * Original: 0x00408CA0 - 0x00408D32 (146 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408CA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00408CB6u); RECOMP_ABI_CALL(0x000197A0u, sub_000197A0); /* call 0x000197A0 */

loc_00408CB6: ;
    edx = esi + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0x50);
    ecx = esi;
    MEM32(esi) = 0x8372B4;
    PUSH32(esp, 0x00408CCCu); RECOMP_ABI_CALL(0x00012559u, sub_00012559); /* call 0x00012559 */

loc_00408CCC: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(0x87DAB0);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax + esi + 0x90;
    MEM32(ecx) = edx;
    eax = MEM32(0x87DAB4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x87DAB8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x87DABC);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x87DAA0);
    ecx = esi;
    PUSH32(esp, 0x00408D09u); RECOMP_ABI_CALL(0x00032629u, sub_00032629); /* call 0x00032629 */

loc_00408D09: ;
    ecx = MEM32(esi + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00408D2Cu); RECOMP_ABI_CALL(0x00015F1Fu, sub_00015F1F); /* call 0x00015F1F */

loc_00408D2C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408D60
 * Original: 0x00408D60 - 0x00408D89 (41 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8372B4;
    PUSH32(esp, 0x00408D6Eu); RECOMP_ABI_CALL(0x00020C80u, sub_00020C80); /* call 0x00020C80 */

loc_00408D6E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00408D83; /* je: equal / zero */

loc_00408D75: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00408D83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408D80u); } /* indirect call */
    }

loc_00408D83: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408DA0
 * Original: 0x00408DA0 - 0x00408DAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408DA0(void)
{

loc_00408DA0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x84) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408DB0
 * Original: 0x00408DB0 - 0x00408DBD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408DB0(void)
{

loc_00408DB0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x85) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408DC0
 * Original: 0x00408DC0 - 0x00408DCE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408DC0(void)
{

loc_00408DC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408DE0
 * Original: 0x00408DE0 - 0x00408DE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408DE0(void)
{

loc_00408DE0: ;
    eax = MEM32(ecx + 8);
    MEM8(eax + ecx + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00408DF0
 * Original: 0x00408DF0 - 0x00408DF9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408DF0(void)
{

loc_00408DF0: ;
    eax = MEM32(ecx + 0xC);
    MEM8(eax + ecx + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00408E00
 * Original: 0x00408E00 - 0x00408E22 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408E00(void)
{

loc_00408E00: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 8) = edx;
    SET_LO8(eax, MEM8(eax + ecx + 0x10));
    PUSH32(esp, esi);
    esi = ecx + edx + 0x10;
    SET_LO8(edx, MEM8(esi));
    MEM8(esi) = LO8(eax);
    eax = MEM32(ecx + 0xC);
    MEM8(eax + ecx + 0x10) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00408E30
 * Original: 0x00408E30 - 0x00408EBF (143 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408E30: ;
    xmm0 = XMM_SCALAR(MEMF(0x8372F8)); /* movss */
    edx = MEM32(esp + 8);
    eax = ecx;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BB36C)); /* movss */
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(esp + 4);
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1D9C)); /* movss */
    MEM32(eax) = 0x837304;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x80) = edx;
    MEM8(eax + 0x84) = LO8(ecx);
    MEM8(eax + 0x85) = LO8(ecx);
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00408EF0
 * Original: 0x00408EF0 - 0x00408F01 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408EF0: ;
    eax = MEM32(ecx + 0x38);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x3C) = edx;
    MEM32(ecx + 0x38) = MEM32(ecx + 0x38) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408F10
 * Original: 0x00408F10 - 0x00408F39 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408F31; /* je: equal / zero */

loc_00408F1C: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00408F23u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00408F21u); } /* indirect call */
    }

loc_00408F23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408F31; /* jne: not equal / not zero */

loc_00408F2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00408F31: ;
    eax = MEM32(esi + eax * 4 + 0x3C);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408F50
 * Original: 0x00408F50 - 0x00408F53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408F50(void)
{

loc_00408F50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408F60
 * Original: 0x00408F60 - 0x00408F63 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408F60(void)
{

loc_00408F60: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408F70
 * Original: 0x00408F70 - 0x00408F73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408F70(void)
{

loc_00408F70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408F80
 * Original: 0x00408F80 - 0x00408FC5 (69 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408F80: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = edx;
    MEM32(ecx + 0x14) = 1;
    MEM32(ecx + 0x18) = 2;
    MEM32(ecx + 0x10) = 0;
    MEM32(ecx + 0x70) = eax;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + esi * 4;
    MEM32(ecx + edi * 4 + 0x70) = esi;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + edx * 4;
    edx = MEM32(ecx + 0x18);
    POP32(esp, edi);
    MEM32(ecx + edx * 4 + 0x70) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408FE0
 * Original: 0x00408FE0 - 0x00408FEC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408FE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x70) = eax;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x78) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00408FF0
 * Original: 0x00408FF0 - 0x00409040 (80 bytes, 33 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00408FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x7C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    ecx = MEM32(ebp + -4);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);

loc_0040901A: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(edi); /* movups */
    xmm2 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0040901A; /* jne: not equal / not zero */

loc_00409038: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00409060
 * Original: 0x00409060 - 0x004090ED (141 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00409060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(ebx + ecx * 4 + 0x70);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebx + eax * 4 + 0x70);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -8) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00409087u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409084u); } /* indirect call */
    }

loc_00409087: ;
    eax = MEM32(ebx + 0x7C);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    ecx = esi + eax * 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + -12) = eax;
    xmm3 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    ecx = MEM32(ebp + -12);
    esi = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + 8);

loc_004090BB: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(edi); /* movups */
    xmm2 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004090BB; /* jne: not equal / not zero */

loc_004090D9: ;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004090E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004090E1u); } /* indirect call */
    }

loc_004090E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00409110
 * Original: 0x00409110 - 0x00409210 (256 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00409110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(ebx + ecx * 4 + 0x70);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebx + eax * 4 + 0x70);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -8) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00409137u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409134u); } /* indirect call */
    }

loc_00409137: ;
    eax = MEM32(ebx + 0x7C);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    ecx = esi + eax * 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = eax;
    xmm3 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    ecx = MEM32(ebp + -16);
    esi = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + -12);

loc_00409173: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(edi); /* movups */
    xmm2 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00409173; /* jne: not equal / not zero */

loc_00409191: ;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0040919Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409199u); } /* indirect call */
    }

loc_0040919C: ;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004091A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004091A4u); } /* indirect call */
    }

loc_004091A7: ;
    eax = MEM32(ebx + 0x7C);
    ecx = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    edx = ecx + eax * 4;
    MEM32(ebp + 8) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    MEM32(ebp + -20) = eax;
    xmm3 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    ecx = MEM32(ebp + -20);
    esi = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + 8);

loc_004091DE: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(edi); /* movups */
    xmm2 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004091DE; /* jne: not equal / not zero */

loc_004091FC: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00409207u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409204u); } /* indirect call */
    }

loc_00409207: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00409250
 * Original: 0x00409250 - 0x004094C1 (625 bytes, 220 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00409250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(ebx + ecx * 4 + 0x70);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebx + eax * 4 + 0x70);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -8) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00409277u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409274u); } /* indirect call */
    }

loc_00409277: ;
    ecx = MEM32(ebx + 0x7C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0040929F; /* jle: less or equal (signed <=) */

loc_00409280: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esi + ecx * 4)); /* movss */
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00409280; /* jl: less (signed <) */

loc_0040929F: ;
    eax = MEM32(ebx + 0x7C);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    edx = esi + eax * 4;
    MEM32(ebp + -12) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    MEM32(ebp + -16) = eax;
    xmm3 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    ecx = MEM32(ebp + -16);
    esi = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + -12);

loc_004092E0: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(edi); /* movups */
    xmm2 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004092E0; /* jne: not equal / not zero */

loc_004092FE: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00409309u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409306u); } /* indirect call */
    }

loc_00409309: ;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00409314u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409311u); } /* indirect call */
    }

loc_00409314: ;
    ecx = MEM32(ebx + 0x7C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0040933F; /* jle: less or equal (signed <=) */

loc_0040931D: ;
    /* nop */

loc_00409320: ;
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(edx + ecx * 4)); /* movss */
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + eax * 4); /* addss */
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00409320; /* jl: less (signed <) */

loc_0040933F: ;
    eax = MEM32(ebx + 0x7C);
    ecx = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    edx = ecx + eax * 4;
    MEM32(ebp + -24) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    MEM32(ebp + -20) = eax;
    xmm3 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    ecx = MEM32(ebp + -20);
    esi = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + -24);

loc_00409376: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(edi); /* movups */
    xmm2 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00409376; /* jne: not equal / not zero */

loc_00409394: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0040939Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040939Cu); } /* indirect call */
    }

loc_0040939F: ;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004093AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004093A7u); } /* indirect call */
    }

loc_004093AA: ;
    ecx = MEM32(ebx + 0x7C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004093D2; /* jle: less or equal (signed <=) */

loc_004093B3: ;
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(edx + ecx * 4)); /* movss */
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + eax * 4); /* addss */
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004093B3; /* jl: less (signed <) */

loc_004093D2: ;
    eax = MEM32(ebx + 0x7C);
    ecx = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    edx = ecx + eax * 4;
    MEM32(ebp + -24) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    MEM32(ebp + -20) = eax;
    xmm3 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    ecx = MEM32(ebp + -20);
    esi = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + -24);

loc_00409409: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(edi); /* movups */
    xmm2 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movups */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00409409; /* jne: not equal / not zero */

loc_00409427: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00409432u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040942Fu); } /* indirect call */
    }

loc_00409432: ;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0040943Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040943Au); } /* indirect call */
    }

loc_0040943D: ;
    ecx = MEM32(ebx + 0x7C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0040946D; /* jle: less or equal (signed <=) */

loc_00409446: ;
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(edx + ecx * 4)); /* movss */
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + eax * 4); /* addss */
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00409446; /* jl: less (signed <) */

loc_0040946D: ;
    eax = MEM32(ebx + 0x7C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004094AD; /* jle: less or equal (signed <=) */

loc_00409476: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CEA20); /* mulss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00409490: ;
    xmm1 = XMM_SCALAR(MEMF(edx + eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    MEMF(esi + eax) = xmm1.f[0]; /* movss */
    edi = MEM32(ebx + 0x7C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00409490; /* jl: less (signed <) */

loc_004094AD: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004094B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004094B5u); } /* indirect call */
    }

loc_004094B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00409560
 * Original: 0x00409560 - 0x0040956D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409560(void)
{

loc_00409560: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x14);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00409570
 * Original: 0x00409570 - 0x0040957D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409570(void)
{

loc_00409570: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x18);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00409580
 * Original: 0x00409580 - 0x004095C2 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00409580(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00409580: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0040958Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040958Bu); } /* indirect call */
    }

loc_0040958E: ;
    ecx = MEM32(eax);
    edx = esi + 0x60;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esi + 0x3C);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004095AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004095ACu); } /* indirect call */
    }

loc_004095AF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8372FC)); /* fmul dword ptr [0x8372fc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004095E0
 * Original: 0x004095E0 - 0x00409608 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004095E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004095E0: ;
    eax = MEM32(ecx + 0x38);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00409607; /* jle: less or equal (signed <=) */

loc_004095E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x3C;
    edi = edi;

loc_004095F0: ;
    eax = MEM32(esi);
    edi = MEM32(eax + 8);
    MEM8(edi + eax + 0x10) = 0;
    eax = MEM32(ecx + 0x38);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004095F0; /* jl: less (signed <) */

loc_00409605: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00409607: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00409620
 * Original: 0x00409620 - 0x00409652 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409620: ;
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0040964F; /* jle: less or equal (signed <=) */

loc_0040962D: ;
    eax = ecx + 0x3C;
    PUSH32(esp, edi);

loc_00409631: ;
    edx = MEM32(eax);
    edi = MEM32(edx + 0xC);
    MEM8(edi + edx + 0x10) = LO8(ebx);
    edx = MEM32(eax);
    edi = MEM32(edx + 8);
    MEM8(edi + edx + 0x10) = LO8(ebx);
    edx = MEM32(ecx + 0x38);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00409631; /* jl: less (signed <) */

loc_0040964E: ;
    POP32(esp, edi);

loc_0040964F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409660
 * Original: 0x00409660 - 0x004096A4 (68 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409660: ;
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004096A2; /* jle: less or equal (signed <=) */

loc_0040966A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx + 0x3C;

loc_00409670: ;
    eax = MEM32(ebp);
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edx;
    SET_LO8(edx, MEM8(edx + eax + 0x10));
    SET_LO8(ebx, MEM8(esi + eax + 0x10));
    esi = esi + eax + 0x10;
    MEM8(esi) = LO8(edx);
    edx = MEM32(eax + 0xC);
    MEM8(eax + edx + 0x10) = LO8(ebx);
    eax = MEM32(ecx + 0x38);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00409670; /* jl: less (signed <) */

loc_0040969F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004096A2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004096C0
 * Original: 0x004096C0 - 0x004096C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004096C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004096C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004096D0
 * Original: 0x004096D0 - 0x004096D8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004096D0(void)
{

loc_004096D0: ;
    eax = 0x909264;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004096E0
 * Original: 0x004096E0 - 0x004096E9 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004096E0(void)
{

loc_004096E0: ;
    eax = ecx + 0x90;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004096F0
 * Original: 0x004096F0 - 0x004096F3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004096F0(void)
{

loc_004096F0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00409700
 * Original: 0x00409700 - 0x00409703 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409700(void)
{

loc_00409700: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00409710
 * Original: 0x00409710 - 0x00409713 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409710(void)
{

loc_00409710: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00409720
 * Original: 0x00409720 - 0x00409732 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409720: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x837304;
    MEM32(ecx + 0x70) = eax;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x78) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00409740
 * Original: 0x00409740 - 0x004097ED (173 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409740: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x6C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7BB36C)); /* movss */
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM8(eax + 0x84) = LO8(ecx);
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B1D9C)); /* movss */
    MEM32(eax + 0x80) = edx;
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEM32(eax) = 0x837344;
    MEM8(eax + 0x85) = 1;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(0x87DAB0);
    ecx = eax + 0x90;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DAB4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DAB8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x87DABC);
    MEM32(ecx + 0xC) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00409820
 * Original: 0x00409820 - 0x0040982B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409820(void)
{

loc_00409820: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}
